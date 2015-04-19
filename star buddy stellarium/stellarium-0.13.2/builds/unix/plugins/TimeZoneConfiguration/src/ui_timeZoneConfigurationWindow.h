/********************************************************************************
** Form generated from reading UI file 'timeZoneConfigurationWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEZONECONFIGURATIONWINDOW_H
#define UI_TIMEZONECONFIGURATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_timeZoneConfigurationWindowForm
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QTabWidget *tabWidget;
    QWidget *tabTimeZone;
    QVBoxLayout *verticalLayoutTimeZone;
    QGroupBox *groupBoxTimeZone;
    QGridLayout *gridLayoutCurrent;
    QLabel *labelTimeZoneInfo;
    QRadioButton *radioButtonLocalSettings;
    QRadioButton *radioButtonUtc;
    QRadioButton *radioButtonOffset;
    QDoubleSpinBox *doubleSpinBoxOffset;
    QLabel *labelOffset;
    QRadioButton *radioButtonUserDefined;
    QFrame *frameUserDefined;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditUserDefined;
    QPushButton *pushButtonEditTimeZone;
    QPushButton *pushButtonSave;
    QLabel *labelRestart;
    QSpacerItem *verticalSpacerTimeZone;
    QWidget *tabDisplayFormats;
    QVBoxLayout *verticalLayoutTabTimeFormat;
    QGroupBox *groupBoxDisplayFormats;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelDisplayFormats;
    QGroupBox *groupBoxTimeFormat;
    QVBoxLayout *verticalLayoutTimeFormat;
    QRadioButton *radioButtonTimeDefault;
    QRadioButton *radioButtonTime12Hour;
    QRadioButton *radioButtonTime24Hour;
    QGroupBox *groupBoxDateFormat;
    QVBoxLayout *verticalLayoutDateFormat;
    QRadioButton *radioButtonDateDefault;
    QRadioButton *radioButtonDateYMD;
    QRadioButton *radioButtonDateDMY;
    QRadioButton *radioButtonDateMDY;
    QSpacerItem *verticalSpacerDisplayFormats;
    QWidget *tabAbout;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelTitle;
    QLabel *labelVersion;
    QLabel *labelCopyright;
    QLabel *labelLicense;

    void setupUi(QWidget *timeZoneConfigurationWindowForm)
    {
        if (timeZoneConfigurationWindowForm->objectName().isEmpty())
            timeZoneConfigurationWindowForm->setObjectName(QStringLiteral("timeZoneConfigurationWindowForm"));
        timeZoneConfigurationWindowForm->resize(448, 480);
        verticalLayout = new QVBoxLayout(timeZoneConfigurationWindowForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(timeZoneConfigurationWindowForm);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy);
        TitleBar->setMinimumSize(QSize(0, 25));
        TitleBar->setMaximumSize(QSize(16777215, 30));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(leftSpacer);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));

        hboxLayout->addWidget(stelWindowTitle);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(rightSpacer);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout->addWidget(TitleBar);

        tabWidget = new QTabWidget(timeZoneConfigurationWindowForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabTimeZone = new QWidget();
        tabTimeZone->setObjectName(QStringLiteral("tabTimeZone"));
        verticalLayoutTimeZone = new QVBoxLayout(tabTimeZone);
        verticalLayoutTimeZone->setSpacing(0);
        verticalLayoutTimeZone->setObjectName(QStringLiteral("verticalLayoutTimeZone"));
        verticalLayoutTimeZone->setContentsMargins(0, 0, 0, 0);
        groupBoxTimeZone = new QGroupBox(tabTimeZone);
        groupBoxTimeZone->setObjectName(QStringLiteral("groupBoxTimeZone"));
        groupBoxTimeZone->setMinimumSize(QSize(0, 400));
        gridLayoutCurrent = new QGridLayout(groupBoxTimeZone);
        gridLayoutCurrent->setObjectName(QStringLiteral("gridLayoutCurrent"));
        gridLayoutCurrent->setVerticalSpacing(8);
        gridLayoutCurrent->setContentsMargins(0, 0, 0, 0);
        labelTimeZoneInfo = new QLabel(groupBoxTimeZone);
        labelTimeZoneInfo->setObjectName(QStringLiteral("labelTimeZoneInfo"));
        labelTimeZoneInfo->setWordWrap(true);

        gridLayoutCurrent->addWidget(labelTimeZoneInfo, 0, 0, 1, 2);

        radioButtonLocalSettings = new QRadioButton(groupBoxTimeZone);
        radioButtonLocalSettings->setObjectName(QStringLiteral("radioButtonLocalSettings"));

        gridLayoutCurrent->addWidget(radioButtonLocalSettings, 1, 0, 1, 2);

        radioButtonUtc = new QRadioButton(groupBoxTimeZone);
        radioButtonUtc->setObjectName(QStringLiteral("radioButtonUtc"));

        gridLayoutCurrent->addWidget(radioButtonUtc, 2, 0, 1, 2);

        radioButtonOffset = new QRadioButton(groupBoxTimeZone);
        radioButtonOffset->setObjectName(QStringLiteral("radioButtonOffset"));

        gridLayoutCurrent->addWidget(radioButtonOffset, 3, 0, 1, 1);

        doubleSpinBoxOffset = new QDoubleSpinBox(groupBoxTimeZone);
        doubleSpinBoxOffset->setObjectName(QStringLiteral("doubleSpinBoxOffset"));
        doubleSpinBoxOffset->setWrapping(true);
        doubleSpinBoxOffset->setDecimals(2);
        doubleSpinBoxOffset->setMinimum(-24);
        doubleSpinBoxOffset->setMaximum(24);
        doubleSpinBoxOffset->setSingleStep(0.25);

        gridLayoutCurrent->addWidget(doubleSpinBoxOffset, 3, 1, 1, 1);

        labelOffset = new QLabel(groupBoxTimeZone);
        labelOffset->setObjectName(QStringLiteral("labelOffset"));
        labelOffset->setAlignment(Qt::AlignCenter);

        gridLayoutCurrent->addWidget(labelOffset, 4, 0, 1, 2);

        radioButtonUserDefined = new QRadioButton(groupBoxTimeZone);
        radioButtonUserDefined->setObjectName(QStringLiteral("radioButtonUserDefined"));

        gridLayoutCurrent->addWidget(radioButtonUserDefined, 5, 0, 1, 1);

        frameUserDefined = new QFrame(groupBoxTimeZone);
        frameUserDefined->setObjectName(QStringLiteral("frameUserDefined"));
        horizontalLayout = new QHBoxLayout(frameUserDefined);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditUserDefined = new QLineEdit(frameUserDefined);
        lineEditUserDefined->setObjectName(QStringLiteral("lineEditUserDefined"));

        horizontalLayout->addWidget(lineEditUserDefined);

        pushButtonEditTimeZone = new QPushButton(frameUserDefined);
        pushButtonEditTimeZone->setObjectName(QStringLiteral("pushButtonEditTimeZone"));
        pushButtonEditTimeZone->setText(QStringLiteral("..."));

        horizontalLayout->addWidget(pushButtonEditTimeZone);


        gridLayoutCurrent->addWidget(frameUserDefined, 5, 1, 1, 1);

        pushButtonSave = new QPushButton(groupBoxTimeZone);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        gridLayoutCurrent->addWidget(pushButtonSave, 7, 0, 1, 2);

        labelRestart = new QLabel(groupBoxTimeZone);
        labelRestart->setObjectName(QStringLiteral("labelRestart"));
        labelRestart->setAlignment(Qt::AlignCenter);
        labelRestart->setWordWrap(true);

        gridLayoutCurrent->addWidget(labelRestart, 8, 0, 1, 2);

        verticalSpacerTimeZone = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutCurrent->addItem(verticalSpacerTimeZone, 9, 0, 1, 2);


        verticalLayoutTimeZone->addWidget(groupBoxTimeZone);

        tabWidget->addTab(tabTimeZone, QString());
        tabDisplayFormats = new QWidget();
        tabDisplayFormats->setObjectName(QStringLiteral("tabDisplayFormats"));
        verticalLayoutTabTimeFormat = new QVBoxLayout(tabDisplayFormats);
        verticalLayoutTabTimeFormat->setSpacing(0);
        verticalLayoutTabTimeFormat->setObjectName(QStringLiteral("verticalLayoutTabTimeFormat"));
        verticalLayoutTabTimeFormat->setContentsMargins(0, 0, 0, 0);
        groupBoxDisplayFormats = new QGroupBox(tabDisplayFormats);
        groupBoxDisplayFormats->setObjectName(QStringLiteral("groupBoxDisplayFormats"));
        groupBoxDisplayFormats->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_4 = new QVBoxLayout(groupBoxDisplayFormats);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelDisplayFormats = new QLabel(groupBoxDisplayFormats);
        labelDisplayFormats->setObjectName(QStringLiteral("labelDisplayFormats"));
        labelDisplayFormats->setWordWrap(true);

        verticalLayout_4->addWidget(labelDisplayFormats);

        groupBoxTimeFormat = new QGroupBox(groupBoxDisplayFormats);
        groupBoxTimeFormat->setObjectName(QStringLiteral("groupBoxTimeFormat"));
        verticalLayoutTimeFormat = new QVBoxLayout(groupBoxTimeFormat);
        verticalLayoutTimeFormat->setObjectName(QStringLiteral("verticalLayoutTimeFormat"));
        verticalLayoutTimeFormat->setContentsMargins(0, 0, 0, 0);
        radioButtonTimeDefault = new QRadioButton(groupBoxTimeFormat);
        radioButtonTimeDefault->setObjectName(QStringLiteral("radioButtonTimeDefault"));

        verticalLayoutTimeFormat->addWidget(radioButtonTimeDefault);

        radioButtonTime12Hour = new QRadioButton(groupBoxTimeFormat);
        radioButtonTime12Hour->setObjectName(QStringLiteral("radioButtonTime12Hour"));

        verticalLayoutTimeFormat->addWidget(radioButtonTime12Hour);

        radioButtonTime24Hour = new QRadioButton(groupBoxTimeFormat);
        radioButtonTime24Hour->setObjectName(QStringLiteral("radioButtonTime24Hour"));

        verticalLayoutTimeFormat->addWidget(radioButtonTime24Hour);


        verticalLayout_4->addWidget(groupBoxTimeFormat);

        groupBoxDateFormat = new QGroupBox(groupBoxDisplayFormats);
        groupBoxDateFormat->setObjectName(QStringLiteral("groupBoxDateFormat"));
        verticalLayoutDateFormat = new QVBoxLayout(groupBoxDateFormat);
        verticalLayoutDateFormat->setObjectName(QStringLiteral("verticalLayoutDateFormat"));
        verticalLayoutDateFormat->setContentsMargins(0, 0, 0, 0);
        radioButtonDateDefault = new QRadioButton(groupBoxDateFormat);
        radioButtonDateDefault->setObjectName(QStringLiteral("radioButtonDateDefault"));

        verticalLayoutDateFormat->addWidget(radioButtonDateDefault);

        radioButtonDateYMD = new QRadioButton(groupBoxDateFormat);
        radioButtonDateYMD->setObjectName(QStringLiteral("radioButtonDateYMD"));

        verticalLayoutDateFormat->addWidget(radioButtonDateYMD);

        radioButtonDateDMY = new QRadioButton(groupBoxDateFormat);
        radioButtonDateDMY->setObjectName(QStringLiteral("radioButtonDateDMY"));

        verticalLayoutDateFormat->addWidget(radioButtonDateDMY);

        radioButtonDateMDY = new QRadioButton(groupBoxDateFormat);
        radioButtonDateMDY->setObjectName(QStringLiteral("radioButtonDateMDY"));

        verticalLayoutDateFormat->addWidget(radioButtonDateMDY);


        verticalLayout_4->addWidget(groupBoxDateFormat);


        verticalLayoutTabTimeFormat->addWidget(groupBoxDisplayFormats);

        verticalSpacerDisplayFormats = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutTabTimeFormat->addItem(verticalSpacerDisplayFormats);

        tabWidget->addTab(tabDisplayFormats, QString());
        tabAbout = new QWidget();
        tabAbout->setObjectName(QStringLiteral("tabAbout"));
        verticalLayout_3 = new QVBoxLayout(tabAbout);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelTitle = new QLabel(tabAbout);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("QLabel {\n"
"	font: bold 18pt ;\n"
"}"));
        labelTitle->setText(QStringLiteral("Time Zone plug-in"));

        verticalLayout_3->addWidget(labelTitle);

        labelVersion = new QLabel(tabAbout);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));
        labelVersion->setText(QStringLiteral("Version %1"));

        verticalLayout_3->addWidget(labelVersion);

        labelCopyright = new QLabel(tabAbout);
        labelCopyright->setObjectName(QStringLiteral("labelCopyright"));
        labelCopyright->setText(QStringLiteral("Copyright &copy; 2010 Bogdan Marinov"));
        labelCopyright->setTextFormat(Qt::RichText);

        verticalLayout_3->addWidget(labelCopyright);

        labelLicense = new QLabel(tabAbout);
        labelLicense->setObjectName(QStringLiteral("labelLicense"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelLicense->sizePolicy().hasHeightForWidth());
        labelLicense->setSizePolicy(sizePolicy1);
        labelLicense->setText(QLatin1String("This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.\n"
"\n"
"This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.\n"
"\n"
"You should have received a copy of the GNU General Public License along with this program. If not, see http://www.gnu.org/licenses/."));
        labelLicense->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelLicense->setWordWrap(true);
        labelLicense->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(labelLicense);

        tabWidget->addTab(tabAbout, QString());

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, radioButtonLocalSettings);
        QWidget::setTabOrder(radioButtonLocalSettings, radioButtonUtc);
        QWidget::setTabOrder(radioButtonUtc, radioButtonOffset);
        QWidget::setTabOrder(radioButtonOffset, doubleSpinBoxOffset);
        QWidget::setTabOrder(doubleSpinBoxOffset, radioButtonUserDefined);
        QWidget::setTabOrder(radioButtonUserDefined, lineEditUserDefined);
        QWidget::setTabOrder(lineEditUserDefined, pushButtonEditTimeZone);
        QWidget::setTabOrder(pushButtonEditTimeZone, pushButtonSave);
        QWidget::setTabOrder(pushButtonSave, radioButtonTimeDefault);
        QWidget::setTabOrder(radioButtonTimeDefault, radioButtonTime12Hour);
        QWidget::setTabOrder(radioButtonTime12Hour, radioButtonTime24Hour);
        QWidget::setTabOrder(radioButtonTime24Hour, radioButtonDateDefault);
        QWidget::setTabOrder(radioButtonDateDefault, radioButtonDateYMD);
        QWidget::setTabOrder(radioButtonDateYMD, radioButtonDateDMY);
        QWidget::setTabOrder(radioButtonDateDMY, radioButtonDateMDY);

        retranslateUi(timeZoneConfigurationWindowForm);
        QObject::connect(radioButtonUserDefined, SIGNAL(toggled(bool)), frameUserDefined, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(timeZoneConfigurationWindowForm);
    } // setupUi

    void retranslateUi(QWidget *timeZoneConfigurationWindowForm)
    {
        stelWindowTitle->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Time zone", 0));
        closeStelWindow->setText(QString());
        groupBoxTimeZone->setTitle(QApplication::translate("timeZoneConfigurationWindowForm", "Time zone", 0));
        labelTimeZoneInfo->setText(QApplication::translate("timeZoneConfigurationWindowForm", "By default, the time displayed in Stellarium is interpreted as the local time in the system's time zone, not in the displayed location's time zone. This behaviour can be changed by changing Stellarium's global time zone settings.", 0));
        radioButtonLocalSettings->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Use system settings (default)", 0));
        radioButtonUtc->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Universal Coordinated Time (UTC)", 0));
        radioButtonOffset->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Offset from UTC (hours):", 0));
        labelOffset->setText(QApplication::translate("timeZoneConfigurationWindowForm", "(offset = local time - UTC time)", 0));
        radioButtonUserDefined->setText(QApplication::translate("timeZoneConfigurationWindowForm", "User-defined:", 0));
        pushButtonSave->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Save settings", 0));
        labelRestart->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Any changes will take effect the next time Stellarium is started.", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabTimeZone), QApplication::translate("timeZoneConfigurationWindowForm", "Time zone", 0));
        groupBoxDisplayFormats->setTitle(QApplication::translate("timeZoneConfigurationWindowForm", "Display formats", 0));
        labelDisplayFormats->setText(QApplication::translate("timeZoneConfigurationWindowForm", "These settings control the way time and date are displayed in the bottom bar.", 0));
        groupBoxTimeFormat->setTitle(QApplication::translate("timeZoneConfigurationWindowForm", "Time display format", 0));
        radioButtonTimeDefault->setText(QApplication::translate("timeZoneConfigurationWindowForm", "System default", 0));
        radioButtonTime12Hour->setText(QApplication::translate("timeZoneConfigurationWindowForm", "12-hour format", 0));
        radioButtonTime24Hour->setText(QApplication::translate("timeZoneConfigurationWindowForm", "24-hour format", 0));
        groupBoxDateFormat->setTitle(QApplication::translate("timeZoneConfigurationWindowForm", "Date display format", 0));
        radioButtonDateDefault->setText(QApplication::translate("timeZoneConfigurationWindowForm", "System default", 0));
        radioButtonDateYMD->setText(QApplication::translate("timeZoneConfigurationWindowForm", "yyyy-mm-dd (ISO 8601)", 0));
        radioButtonDateDMY->setText(QApplication::translate("timeZoneConfigurationWindowForm", "dd-mm-yyyy", 0));
        radioButtonDateMDY->setText(QApplication::translate("timeZoneConfigurationWindowForm", "mm-dd-yyyy", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabDisplayFormats), QApplication::translate("timeZoneConfigurationWindowForm", "Display formats", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QApplication::translate("timeZoneConfigurationWindowForm", "About", "tab in plugin windows"));
        Q_UNUSED(timeZoneConfigurationWindowForm);
    } // retranslateUi

};

namespace Ui {
    class timeZoneConfigurationWindowForm: public Ui_timeZoneConfigurationWindowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEZONECONFIGURATIONWINDOW_H
