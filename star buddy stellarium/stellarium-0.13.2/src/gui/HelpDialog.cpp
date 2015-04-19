/*
 * Stellarium
 * Copyright (C) 2007 Matthew Gates
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Suite 500, Boston, MA  02110-1335, USA.
 */

#include <QString>
#include <QTextBrowser>
#include <QVBoxLayout>
#include <QWidget>
#include <QFrame>
#include <QResizeEvent>
#include <QSize>
#include <QMultiMap>
#include <QList>
#include <QSet>
#include <QPair>
#include <QtAlgorithms>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QFileInfo>
#include <QFile>
#include <QDir>
#include <QProcess>
#include <QSysInfo>
#include <QGLFormat>

#include "ui_helpDialogGui.h"
#include "HelpDialog.hpp"

#include "StelUtils.hpp"
#include "StelApp.hpp"
#include "StelFileMgr.hpp"
#include "StelGui.hpp"
#include "StelGuiItems.hpp"
#include "StelLocaleMgr.hpp"
#include "StelLogger.hpp"
#include "StelStyle.hpp"
#include "StelActionMgr.hpp"
#include "StelJsonParser.hpp"

HelpDialog::HelpDialog(QObject* parent)
	: StelDialog(parent)
	, updateState(CompleteNoUpdates)
	, downloadMgr(NULL)
{
	ui = new Ui_helpDialogForm;

	conf = StelApp::getInstance().getSettings();
	setUpdatesEnabled(conf->value("main/check_updates_enabled", true).toBool()); // Enable check for updates by default
	QString lang = conf->value("localization/app_locale", "en").toString();
	if (lang=="system" || lang=="C")
		lang = "en";
	updateUrl = QString("http://www.stellarium.org/%1/updates.php").arg(lang);
	currentVersion = StelUtils::getApplicationVersion();

	conf->setValue("main/check_updates_enabled", getUpdatesEnabled());
}

HelpDialog::~HelpDialog()
{
	delete ui;
	ui = NULL;
}

void HelpDialog::retranslate()
{
	if (dialog)
	{
		ui->retranslateUi(dialog);
		updateText();
	}
}

void HelpDialog::styleChanged()
{
	if (dialog)
	{
		updateText();
	}
}

void HelpDialog::createDialogContent()
{
	ui->setupUi(dialog);
	connect(&StelApp::getInstance(), SIGNAL(languageChanged()), this, SLOT(retranslate()));
	ui->stackedWidget->setCurrentIndex(0);
	ui->stackListWidget->setCurrentRow(0);
	connect(ui->closeStelWindow, SIGNAL(clicked()), this, SLOT(close()));

	setUpdatesMessage(false);
	if (getUpdatesEnabled())
	{
		StelFileMgr::makeSureDirExistsAndIsWritable(StelFileMgr::getUserDir()+"/data");
		jsonDataPath = StelFileMgr::findFile("data", (StelFileMgr::Flags)(StelFileMgr::Directory|StelFileMgr::Writable)) + "/updates.json";

		// If the json file does not already exist, create it from the resource in the Qt resource
		if(!QFileInfo(jsonDataPath).exists())
		{
			//qDebug() << "HelpDialog::createDialogContent() updates.json does not exist - copying default file to " << QDir::toNativeSeparators(jsonDataPath);
			restoreDefaultJsonFile();
		}

		//qDebug() << "HelpDialog::createDialogContent() using file: " << QDir::toNativeSeparators(jsonDataPath);

		// Set up download manager and the update schedule
		downloadMgr = new QNetworkAccessManager(this);
		connect(downloadMgr, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateDownloadComplete(QNetworkReply*)));
		updateState = CompleteNoUpdates;
		updateJSON();
	}

#ifdef Q_OS_WIN
	//Kinetic scrolling for tablet pc and pc
	QList<QWidget *> addscroll;
	addscroll << ui->helpBrowser << ui->aboutBrowser << ui->logBrowser;
	installKineticScrolling(addscroll);
#endif

	// Help page
	updateText();
	connect(ui->editShortcutsButton, SIGNAL(clicked()), this, SLOT(showShortcutsWindow()));

	// Log page
	ui->logPathLabel->setText(QString("%1/log.txt:").arg(StelFileMgr::getUserDir()));
	connect(ui->stackedWidget, SIGNAL(currentChanged(int)), this, SLOT(updateLog(int)));
	connect(ui->refreshButton, SIGNAL(clicked()), this, SLOT(refreshLog()));

	connect(ui->stackListWidget, SIGNAL(currentItemChanged(QListWidgetItem *, QListWidgetItem *)), this, SLOT(changePage(QListWidgetItem *, QListWidgetItem*)));

}

void HelpDialog::updateDownloadComplete(QNetworkReply *reply)
{
	// check the download worked, and save the data to file if this is the case.
	if (reply->error() != QNetworkReply::NoError)
	{
		qWarning() << "HelpDialog::updateDownloadComplete() FAILED to download" << reply->url() << " Error: " << reply->errorString();
	}
	else
	{
		// download completed successfully.
		QString jsonFilePath = StelFileMgr::findFile("data", StelFileMgr::Flags(StelFileMgr::Writable|StelFileMgr::Directory)) + "/updates.json";
		if (jsonFilePath.isEmpty())
		{
			qWarning() << "HelpDialog::updateDownloadComplete(): cannot write JSON data to file data/updates.json";
			return;
		}
		QFile jsonFile(jsonFilePath);
		if (jsonFile.exists())
			jsonFile.remove();

		if(jsonFile.open(QIODevice::WriteOnly | QIODevice::Text))
		{
			jsonFile.write(reply->readAll());
			jsonFile.close();
		}
	}
}

void HelpDialog::updateJSON(void)
{
	if (updateState==HelpDialog::Updating)
	{
		qWarning() << "HelpDialog: already updating...  will not start again current update is complete.";
		return;
	}

	updateState = HelpDialog::Updating;
	emit(updateStateChanged(updateState));

	// Get info about operating system
	QString OS = StelUtils::getOperatingSystemInfo();
	if (OS.contains("Linux"))
		OS = "Linux";
	// Set user agent as "Stellarium/$version$ ($platform$)"
	QString UserAgent = QString("Stellarium/%1 (%2)").arg(currentVersion).arg(OS);
	QNetworkRequest request;
	request.setUrl(QUrl(updateUrl));
	request.setRawHeader("User-Agent", UserAgent.toUtf8());
	downloadMgr->get(request);

	updateState = HelpDialog::CompleteUpdates;
	emit(updateStateChanged(updateState));
	readJsonFile();
}

QString HelpDialog::getLatestVersionFromJson()
{
	QString jsonVersion("unknown");
	QFile jsonDataFile(jsonDataPath);
	if (!jsonDataFile.open(QIODevice::ReadOnly))
	{
		qWarning() << "HelpDialog::getLatestVersionFromJson() cannot open " << QDir::toNativeSeparators(jsonDataPath);
		return jsonVersion;
	}

	QVariantMap map;
	try
	{
		map = StelJsonParser::parse(&jsonDataFile).toMap();
		if (map.contains("latestVersion"))
		{
			jsonVersion = map.value("latestVersion").toString();
		}
		jsonDataFile.close();
	}
	catch(std::runtime_error& e)
	{
		qDebug() << "HelpDialog::getLatestVersionFromJson() error:" << e.what();
	}

	//qDebug() << "HelpDialog::getLatestVersionFromJson() latest version from file:" << jsonVersion;
	return jsonVersion;
}

int HelpDialog::getRequiredOpenGLVersionFromJson()
{
	int jsonVersion = 0;
	QFile jsonDataFile(jsonDataPath);
	if (!jsonDataFile.open(QIODevice::ReadOnly))
	{
		qWarning() << "HelpDialog::getRequiredOpenGLVersionFromJson() cannot open " << QDir::toNativeSeparators(jsonDataPath);
		return jsonVersion;
	}

	QVariantMap map;
	try
	{
		map = StelJsonParser::parse(&jsonDataFile).toMap();
		if (map.contains("requiredOpenGLVersion"))
		{
			jsonVersion = map.value("requiredOpenGLVersion").toInt();
		}
		jsonDataFile.close();
	}
	catch(std::runtime_error& e)
	{
		qDebug() << "HelpDialog::getRequiredOpenGLVersionFromJson() error:" << e.what();
	}

	//qDebug() << "HelpDialog::getRequiredOpenGLVersionFromJson() required OpenGL version from file:" << jsonVersion;
	return jsonVersion;
}

/*
  Replace the JSON file with the default from the compiled-in resource
*/
void HelpDialog::restoreDefaultJsonFile(void)
{
	QFile src(StelFileMgr::findFile("data/updates.json"));
	if (!src.copy(jsonDataPath))
	{
		qWarning() << "HelpDialog::restoreDefaultJsonFile() cannot copy json resource to " + QDir::toNativeSeparators(jsonDataPath);
	}
	else
	{
		//qDebug() << "HelpDialog::restoreDefaultJsonFile() copied default updates.json to " << QDir::toNativeSeparators(jsonDataPath);
		// The resource is read only, and the new file inherits this...  make sure the new file
		// is writable by the Stellarium process so that updates can be done.
		QFile dest(jsonDataPath);
		dest.setPermissions(dest.permissions() | QFile::WriteOwner);
	}
}

void HelpDialog::readJsonFile()
{
	QString version = getLatestVersionFromJson();
	unsigned int OpenGLversion = getRequiredOpenGLVersionFromJson();
	if (version!=currentVersion)
	{
		setUpdatesMessage(true, version, OpenGLversion);
	}
}

void HelpDialog::setUpdatesMessage(bool hasUpdates, QString version, int OpenGL)
{
	if (version.contains("unknown"))
	{
		// TRANSLATORS: This message will be displayed for users if Stellarium can't get info about version from stellarium.org
		updatesMessage = q_("Oops... Stellarium can't check latest version.");
		return;
	}
	int cVMajor = 0, cVMinor = 0, cVPatch = 0, rVMajor = 0, rVMinor = 0, rVPatch = 0;
	QRegExp vRx("(\\d+)\\.(\\d+)\\.(\\d+)");
	if (vRx.exactMatch(currentVersion))
	{
		cVMajor = vRx.capturedTexts().at(1).toInt();
		cVMinor = vRx.capturedTexts().at(2).toInt();
		cVPatch = vRx.capturedTexts().at(3).toInt();
	}
	if (vRx.exactMatch(version))
	{
		rVMajor = vRx.capturedTexts().at(1).toInt();
		rVMinor = vRx.capturedTexts().at(2).toInt();
		rVPatch = vRx.capturedTexts().at(3).toInt();
	}
	if (hasUpdates)
	{
		if ((cVMajor>rVMajor) || (cVMinor>rVMinor) || (cVPatch>rVPatch))
		{
			// TRANSLATORS: This message will be displayed for users if current version of Stellarium is bigger than version from stellarium.org
			updatesMessage = q_("Looks like you are using the development version of Stellarium.");
		}
		else
		{
			// TRANSLATORS: This message will be displayed for users if current version of Stellarium is smaller than version from stellarium.org
			updatesMessage = q_("This version of Stellarium is outdated! Latest version is %1.").arg(version);
			if (!(QGLFormat::openGLVersionFlags() & OpenGL))
			{
				updatesMessage.append(q_(" Sorry, your hardware is not compatible with newest version of Stellarium!"));
			}
		}		
	}
	else
	{
		// TRANSLATORS: This message will be displayed for users if current version of Stellarium is equals with version from stellarium.org
		updatesMessage = q_("This is latest stable version of Stellarium.");
	}
}

QString HelpDialog::getUpdatesMessage()
{
	return updatesMessage;
}

void HelpDialog::showShortcutsWindow()
{
	StelAction* action = StelApp::getInstance().getStelActionManager()->findAction("actionShow_Shortcuts_Window_Global");
	if (action)
		action->setChecked(true);
}

void HelpDialog::updateLog(int)
{
	if (ui->stackedWidget->currentWidget() == ui->pageLog)
		refreshLog();
}

void HelpDialog::refreshLog()
{
	ui->logBrowser->setPlainText(StelLogger::getLog());
}

QString HelpDialog::getHelpText(void)
{
	QString htmlText = "<html><head><title>";
	htmlText += q_("Stellarium Help").toHtmlEscaped();
	htmlText += "</title></head><body>\n";
	
	// WARNING! Section titles are re-used below!
	htmlText += "<p align=\"center\"><a href=\"#keys\">" +
		    q_("Keys").toHtmlEscaped() +
	            "</a> &bull; <a href=\"#links\">" +
		    q_("Further Reading").toHtmlEscaped() +
	            "</a></p>\n";
	
	htmlText += "<h2 id='keys'>" + q_("Keys").toHtmlEscaped() + "</h2>\n";
	htmlText += "<table cellpadding=\"10%\">\n";
	// Describe keys for those keys which do not have actions.
	// navigate
	htmlText += "<tr><td>" + q_("Pan view around the sky").toHtmlEscaped() + "</td>";
	htmlText += "<td><b>" + q_("Arrow keys & left mouse drag").toHtmlEscaped() + "</b></td></tr>\n";
	// zoom in/out
	htmlText += "<tr><td rowspan='2'>" + q_("Zoom in/out").toHtmlEscaped() +
	            "</td>";
	htmlText += "<td><b>" + q_("Page Up/Down").toHtmlEscaped() +
	            "</b></td></tr>\n";
	htmlText += "<tr><td><b>" + q_("CTRL + Up/Down").toHtmlEscaped() +
	            "</b></td></tr>\n";
	// select object
	htmlText += "<tr><td>" + q_("Select object").toHtmlEscaped() + "</td>";
	htmlText += "<td><b>" + q_("Left click").toHtmlEscaped() + "</b></td></tr>\n";
	// clear selection
	htmlText += "<tr>";
#ifdef Q_OS_MAC
	htmlText += "<td rowspan='2'>";
#else
	htmlText += "<td>";
#endif
	htmlText += q_("Clear selection").toHtmlEscaped() + "</td>";
	htmlText += "<td><b>" + q_("Right click").toHtmlEscaped() + "</b></td></tr>\n";
#ifdef Q_OS_MAC
	htmlText += "<tr><td><b>" + q_("CTRL + Left click").toHtmlEscaped() + "</b></td></tr>\n";
	//htmlText += "<td>" + E("Clear selection") + "</td>";
#endif
	
	htmlText += "</table>\n<p>" +
	                q_("Below are listed only the actions with assigned keys. Further actions may be available via the \"%1\" button.")
	                .arg(ui->editShortcutsButton->text()).toHtmlEscaped() +
	            "</p><table cellpadding=\"10%\">\n";

	// Append all StelAction shortcuts.
	StelActionMgr* actionMgr = StelApp::getInstance().getStelActionManager();
	typedef QPair<QString, QString> KeyDescription;
	foreach (QString group, actionMgr->getGroupList())
	{
		QList<KeyDescription> descriptions;
		foreach (StelAction* action, actionMgr->getActionList(group))
		{
			if (action->getShortcut().isEmpty())
				continue;
			QString text = action->getText();
			QString key =  action->getShortcut().toString(QKeySequence::NativeText);
			descriptions.append(KeyDescription(text, key));
		}
		qSort(descriptions);
		htmlText += "<tr></tr><tr><td><b><u>" + q_(group) +
		            ":</u></b></td></tr>\n";
		foreach (const KeyDescription& desc, descriptions)
		{
			htmlText += "<tr><td>" + desc.first.toHtmlEscaped() + "</td>";
			htmlText += "<td><b>" + desc.second.toHtmlEscaped() +
			            "</b></td></tr>\n";
		}
	}

	// edit shortcuts
//	htmlText += "<tr><td><b>" + Qt::escape(q_("F7")) + "</b></td>";
//	htmlText += "<td>" + Qt::escape(q_("Show and edit all keyboard shortcuts")) + "</td></tr>\n";
	htmlText += "</table>";

	// Regexp to replace {text} with an HTML link.
	QRegExp a_rx = QRegExp("[{]([^{]*)[}]");

	// WARNING! Section titles are re-used above!
	htmlText += "<h2 id=\"links\">" + q_("Further Reading").toHtmlEscaped() + "</h2>\n";
	htmlText += q_("The following links are external web links, and will launch your web browser:\n").toHtmlEscaped();
	htmlText += "<p><a href=\"http://stellarium.org/wiki/index.php/Category:User%27s_Guide\">" + q_("The Stellarium User Guide").toHtmlEscaped() + "</a>";

	htmlText += "<p>";
	// TRANSLATORS: The text between braces is the text of an HTML link.
	htmlText += q_("{Frequently Asked Questions} about Stellarium.  Answers too.").toHtmlEscaped().replace(a_rx, "<a href=\"http://www.stellarium.org/wiki/index.php/FAQ\">\\1</a>");
	htmlText += "</p>\n";

	htmlText += "<p>";
	// TRANSLATORS: The text between braces is the text of an HTML link.
	htmlText += q_("{The Stellarium Wiki} - General information.  You can also find user-contributed landscapes and scripts here.").toHtmlEscaped().replace(a_rx, "<a href=\"http://stellarium.org/wiki/\">\\1</a>");
	htmlText += "</p>\n";

	htmlText += "<p>";
	// TRANSLATORS: The text between braces is the text of an HTML link.
	htmlText += q_("{Support ticket system} - if you need help using Stellarium, post a support request here and we'll try to help.").toHtmlEscaped().replace(a_rx, "<a href=\"http://answers.launchpad.net/stellarium/+addquestion\">\\1</a>");
	htmlText += "</p>\n";

	htmlText += "<p>";
	// TRANSLATORS: The text between braces is the text of an HTML link.
	htmlText += q_("{Bug reporting and feature request system} - if something doesn't work properly or is missing and is not listed in the tracker, you can open bug reports here.").toHtmlEscaped().replace(a_rx, "<a href=\"http://bugs.launchpad.net/stellarium/\">\\1</a>");
	htmlText += "</p>\n";

	htmlText += "<p>";
	// TRANSLATORS: The text between braces is the text of an HTML link.
	htmlText += q_("{Forums} - discuss Stellarium with other users.").toHtmlEscaped().replace(a_rx, "<a href=\"http://sourceforge.net/forum/forum.php?forum_id=278769\">\\1</a>");
	htmlText += "</p>\n";

	htmlText += "</body></html>\n";

	return htmlText;
#undef E
}

void HelpDialog::updateText(void)
{
	QString newHtml = getHelpText();
	ui->helpBrowser->clear();
	StelGui* gui = dynamic_cast<StelGui*>(StelApp::getInstance().getGui());
	Q_ASSERT(gui);
	ui->helpBrowser->document()->setDefaultStyleSheet(QString(gui->getStelStyle().htmlStyleSheet));
	ui->helpBrowser->insertHtml(newHtml);
	ui->helpBrowser->scrollToAnchor("top");

	// populate About tab
	newHtml = "<h1>" + StelUtils::getApplicationName() + "</h1>";
	// Note: this legal notice is not suitable for traslation
	newHtml += "<h3>Copyright &copy; 2000-2014 Stellarium Developers</h3>";
	if (getUpdatesEnabled())
		newHtml += "<p><strong>" + getUpdatesMessage() + "</strong></p>";
	newHtml += "<p>This program is free software; you can redistribute it and/or ";
	newHtml += "modify it under the terms of the GNU General Public License ";
	newHtml += "as published by the Free Software Foundation; either version 2 ";
	newHtml += "of the License, or (at your option) any later version.</p>";
	newHtml += "<p>This program is distributed in the hope that it will be useful, ";
	newHtml += "but WITHOUT ANY WARRANTY; without even the implied ";
	newHtml += "warranty of MERCHANTABILITY or FITNESS FOR A ";
	newHtml += "PARTICULAR PURPOSE.  See the GNU General Public ";
	newHtml += "License for more details.</p>";
	newHtml += "<p>You should have received a copy of the GNU General Public ";
	newHtml += "License along with this program; if not, write to:</p>";
	newHtml += "<pre>Free Software Foundation, Inc.\n";
	newHtml += "51 Franklin Street, Suite 500\n";
	newHtml += "Boston, MA  02110-1335, USA.\n</pre>";
	newHtml += "<p><a href=\"http://www.fsf.org\">www.fsf.org</a></p>";
	newHtml += "<h3>" + q_("Developers").toHtmlEscaped() + "</h3><ul>";
	newHtml += "<li>" + q_("Project coordinator & lead developer: %1").arg(QString("Fabien Ch%1reau").arg(QChar(0x00E9))).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Doc author/developer: %1").arg(QString("Matthew Gates")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Bogdan Marinov")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Timothy Reaves")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Guillaume Ch%1reau").arg(QChar(0x00E9))).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Georg Zotti")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Alexander Wolf")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Marcos Cardinot")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Ferdinand Majerech")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Jörg Müller")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Continuous Integration: %1").arg(QString("Hans Lambermont")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Tester: %1").arg(QString("Barry Gerdes")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Tester: %1").arg(QString("Khalid AlAjaji")).toHtmlEscaped() + "</li></ul>";
	newHtml += "<h3>" + q_("Past Developers").toHtmlEscaped() + "</h3>";
	newHtml += "<p>"  + q_("Several people have made significant contributions, but are no longer active. Their work has made a big difference to the project:").toHtmlEscaped() + "</p><ul>";
	newHtml += "<li>" + q_("Graphic/other designer: %1").arg(QString("Johan Meuris")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Johannes Gajdosik")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Rob Spearman")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Andr%1s Mohari").arg(QChar(0x00E1))).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("Developer: %1").arg(QString("Mike Storm")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("OSX Developer: %1").arg(QString("Nigel Kerr")).toHtmlEscaped() + "</li>";
	newHtml += "<li>" + q_("OSX Developer: %1").arg(QString("Diego Marcos")).toHtmlEscaped() + "</li></ul>";
	newHtml += "<p>";
	ui->aboutBrowser->clear();
	ui->aboutBrowser->document()->setDefaultStyleSheet(QString(gui->getStelStyle().htmlStyleSheet));
	ui->aboutBrowser->insertHtml(newHtml);
	ui->aboutBrowser->scrollToAnchor("top");
}

void HelpDialog::changePage(QListWidgetItem *current, QListWidgetItem *previous)
{
	if (!current)
		current = previous;
	ui->stackedWidget->setCurrentIndex(ui->stackListWidget->row(current));
}
