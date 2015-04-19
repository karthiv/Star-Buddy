/********************************************************************************
** Form generated from reading UI file 'mpcImportWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPCIMPORTWINDOW_H
#define UI_MPCIMPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_mpcImportWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *_2;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QStackedWidget *stackedWidget;
    QWidget *pageSource;
    QVBoxLayout *verticalLayout_7;
    QTabWidget *tabWidget;
    QWidget *tabLists;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxType;
    QVBoxLayout *verticalLayoutType_3;
    QRadioButton *radioButtonAsteroids;
    QRadioButton *radioButtonComets;
    QGroupBox *groupBoxSource;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *radioButtonURL;
    QFrame *frameURL;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelSelect;
    QComboBox *comboBoxBookmarks;
    QLabel *labelEnter;
    QFrame *frameBookmarkURL;
    QHBoxLayout *horizontalLayoutBookmarkURL;
    QLineEdit *lineEditURL;
    QCheckBox *checkBoxAddBookmark;
    QFrame *frameBookmarkTitle;
    QHBoxLayout *horizontalLayoutBookmarkName;
    QLabel *labelBookmarkTitle;
    QLineEdit *lineEditBookmarkTitle;
    QRadioButton *radioButtonFile;
    QFrame *frameFile;
    QHBoxLayout *horizontalLayoutFile_2;
    QLineEdit *lineEditFilePath;
    QPushButton *pushButtonBrowse;
    QPushButton *pushButtonAcquire;
    QPushButton *pushButtonAbortDownload;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabSearch;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBoxSearch;
    QVBoxLayout *verticalLayout_10;
    QLabel *labelQueryLink;
    QFrame *frameSearch;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditQuery;
    QPushButton *pushButtonSendQuery;
    QPushButton *pushButtonAbortQuery;
    QLabel *labelQueryMessage;
    QLabel *labelQueryInstructions;
    QSpacerItem *verticalSpacerSearch;
    QWidget *pageResult;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxObjects;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelInstructions;
    QRadioButton *radioButtonOverwrite;
    QRadioButton *radioButtonUpdate;
    QCheckBox *checkBoxOnlyOrbitalElements;
    QLineEdit *lineEditSearch;
    QListView *listViewObjects;
    QFrame *frameMarkButtons;
    QHBoxLayout *horizontalLayoutMarkButtons;
    QPushButton *pushButtonMarkAll;
    QPushButton *pushButtonMarkNone;
    QPushButton *pushButtonDiscard;
    QPushButton *pushButtonAdd;

    void setupUi(QWidget *mpcImportWindow)
    {
        if (mpcImportWindow->objectName().isEmpty())
            mpcImportWindow->setObjectName(QStringLiteral("mpcImportWindow"));
        mpcImportWindow->resize(476, 488);
        verticalLayout_2 = new QVBoxLayout(mpcImportWindow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        TitleBar = new BarFrame(mpcImportWindow);
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
        _2 = new QHBoxLayout(TitleBar);
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 4, 0);
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(leftSpacer);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));

        _2->addWidget(stelWindowTitle);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(rightSpacer);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        _2->addWidget(closeStelWindow);


        verticalLayout_2->addWidget(TitleBar);

        stackedWidget = new QStackedWidget(mpcImportWindow);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageSource = new QWidget();
        pageSource->setObjectName(QStringLiteral("pageSource"));
        verticalLayout_7 = new QVBoxLayout(pageSource);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        tabWidget = new QTabWidget(pageSource);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabLists = new QWidget();
        tabLists->setObjectName(QStringLiteral("tabLists"));
        verticalLayout = new QVBoxLayout(tabLists);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBoxType = new QGroupBox(tabLists);
        groupBoxType->setObjectName(QStringLiteral("groupBoxType"));
        verticalLayoutType_3 = new QVBoxLayout(groupBoxType);
        verticalLayoutType_3->setContentsMargins(0, 0, 0, 0);
        verticalLayoutType_3->setObjectName(QStringLiteral("verticalLayoutType_3"));
        radioButtonAsteroids = new QRadioButton(groupBoxType);
        radioButtonAsteroids->setObjectName(QStringLiteral("radioButtonAsteroids"));

        verticalLayoutType_3->addWidget(radioButtonAsteroids);

        radioButtonComets = new QRadioButton(groupBoxType);
        radioButtonComets->setObjectName(QStringLiteral("radioButtonComets"));

        verticalLayoutType_3->addWidget(radioButtonComets);


        verticalLayout->addWidget(groupBoxType);

        groupBoxSource = new QGroupBox(tabLists);
        groupBoxSource->setObjectName(QStringLiteral("groupBoxSource"));
        verticalLayout_8 = new QVBoxLayout(groupBoxSource);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        radioButtonURL = new QRadioButton(groupBoxSource);
        radioButtonURL->setObjectName(QStringLiteral("radioButtonURL"));

        verticalLayout_8->addWidget(radioButtonURL);

        frameURL = new QFrame(groupBoxSource);
        frameURL->setObjectName(QStringLiteral("frameURL"));
        frameURL->setFrameShape(QFrame::StyledPanel);
        frameURL->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frameURL);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 0, -1, 0);
        labelSelect = new QLabel(frameURL);
        labelSelect->setObjectName(QStringLiteral("labelSelect"));

        verticalLayout_9->addWidget(labelSelect);

        comboBoxBookmarks = new QComboBox(frameURL);
        comboBoxBookmarks->setObjectName(QStringLiteral("comboBoxBookmarks"));

        verticalLayout_9->addWidget(comboBoxBookmarks);

        labelEnter = new QLabel(frameURL);
        labelEnter->setObjectName(QStringLiteral("labelEnter"));

        verticalLayout_9->addWidget(labelEnter);

        frameBookmarkURL = new QFrame(frameURL);
        frameBookmarkURL->setObjectName(QStringLiteral("frameBookmarkURL"));
        horizontalLayoutBookmarkURL = new QHBoxLayout(frameBookmarkURL);
        horizontalLayoutBookmarkURL->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutBookmarkURL->setObjectName(QStringLiteral("horizontalLayoutBookmarkURL"));
        lineEditURL = new QLineEdit(frameBookmarkURL);
        lineEditURL->setObjectName(QStringLiteral("lineEditURL"));
        lineEditURL->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        lineEditURL->setText(QStringLiteral("http://"));

        horizontalLayoutBookmarkURL->addWidget(lineEditURL);


        verticalLayout_9->addWidget(frameBookmarkURL);

        checkBoxAddBookmark = new QCheckBox(frameURL);
        checkBoxAddBookmark->setObjectName(QStringLiteral("checkBoxAddBookmark"));

        verticalLayout_9->addWidget(checkBoxAddBookmark);

        frameBookmarkTitle = new QFrame(frameURL);
        frameBookmarkTitle->setObjectName(QStringLiteral("frameBookmarkTitle"));
        horizontalLayoutBookmarkName = new QHBoxLayout(frameBookmarkTitle);
        horizontalLayoutBookmarkName->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutBookmarkName->setObjectName(QStringLiteral("horizontalLayoutBookmarkName"));
        labelBookmarkTitle = new QLabel(frameBookmarkTitle);
        labelBookmarkTitle->setObjectName(QStringLiteral("labelBookmarkTitle"));

        horizontalLayoutBookmarkName->addWidget(labelBookmarkTitle);

        lineEditBookmarkTitle = new QLineEdit(frameBookmarkTitle);
        lineEditBookmarkTitle->setObjectName(QStringLiteral("lineEditBookmarkTitle"));

        horizontalLayoutBookmarkName->addWidget(lineEditBookmarkTitle);


        verticalLayout_9->addWidget(frameBookmarkTitle);


        verticalLayout_8->addWidget(frameURL);

        radioButtonFile = new QRadioButton(groupBoxSource);
        radioButtonFile->setObjectName(QStringLiteral("radioButtonFile"));

        verticalLayout_8->addWidget(radioButtonFile);

        frameFile = new QFrame(groupBoxSource);
        frameFile->setObjectName(QStringLiteral("frameFile"));
        horizontalLayoutFile_2 = new QHBoxLayout(frameFile);
        horizontalLayoutFile_2->setObjectName(QStringLiteral("horizontalLayoutFile_2"));
        horizontalLayoutFile_2->setContentsMargins(-1, 0, -1, 0);
        lineEditFilePath = new QLineEdit(frameFile);
        lineEditFilePath->setObjectName(QStringLiteral("lineEditFilePath"));
        lineEditFilePath->setInputMethodHints(Qt::ImhNone);

        horizontalLayoutFile_2->addWidget(lineEditFilePath);

        pushButtonBrowse = new QPushButton(frameFile);
        pushButtonBrowse->setObjectName(QStringLiteral("pushButtonBrowse"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/graphicGui/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBrowse->setIcon(icon);

        horizontalLayoutFile_2->addWidget(pushButtonBrowse);


        verticalLayout_8->addWidget(frameFile);

        pushButtonAcquire = new QPushButton(groupBoxSource);
        pushButtonAcquire->setObjectName(QStringLiteral("pushButtonAcquire"));

        verticalLayout_8->addWidget(pushButtonAcquire);

        pushButtonAbortDownload = new QPushButton(groupBoxSource);
        pushButtonAbortDownload->setObjectName(QStringLiteral("pushButtonAbortDownload"));

        verticalLayout_8->addWidget(pushButtonAbortDownload);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);


        verticalLayout->addWidget(groupBoxSource);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabWidget->addTab(tabLists, QString());
        tabSearch = new QWidget();
        tabSearch->setObjectName(QStringLiteral("tabSearch"));
        verticalLayout_11 = new QVBoxLayout(tabSearch);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        groupBoxSearch = new QGroupBox(tabSearch);
        groupBoxSearch->setObjectName(QStringLiteral("groupBoxSearch"));
        verticalLayout_10 = new QVBoxLayout(groupBoxSearch);
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        labelQueryLink = new QLabel(groupBoxSearch);
        labelQueryLink->setObjectName(QStringLiteral("labelQueryLink"));
        labelQueryLink->setText(QStringLiteral("Query the MPC's <a href=\"http://www.minorplanetcenter.net/iau/MPEph/MPEph.html\">Minor Planet &amp; Comet Ephemeris Service</a>:"));
        labelQueryLink->setWordWrap(true);
        labelQueryLink->setOpenExternalLinks(true);

        verticalLayout_10->addWidget(labelQueryLink);

        frameSearch = new QFrame(groupBoxSearch);
        frameSearch->setObjectName(QStringLiteral("frameSearch"));
        frameSearch->setFrameShape(QFrame::StyledPanel);
        frameSearch->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameSearch);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEditQuery = new QLineEdit(frameSearch);
        lineEditQuery->setObjectName(QStringLiteral("lineEditQuery"));

        horizontalLayout->addWidget(lineEditQuery);

        pushButtonSendQuery = new QPushButton(frameSearch);
        pushButtonSendQuery->setObjectName(QStringLiteral("pushButtonSendQuery"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/graphicGui/searchButtonImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSendQuery->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonSendQuery);

        pushButtonAbortQuery = new QPushButton(frameSearch);
        pushButtonAbortQuery->setObjectName(QStringLiteral("pushButtonAbortQuery"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/graphicGui/closeButton-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAbortQuery->setIcon(icon2);

        horizontalLayout->addWidget(pushButtonAbortQuery);


        verticalLayout_10->addWidget(frameSearch);

        labelQueryMessage = new QLabel(groupBoxSearch);
        labelQueryMessage->setObjectName(QStringLiteral("labelQueryMessage"));
        labelQueryMessage->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(labelQueryMessage);

        labelQueryInstructions = new QLabel(groupBoxSearch);
        labelQueryInstructions->setObjectName(QStringLiteral("labelQueryInstructions"));
        labelQueryInstructions->setText(QStringLiteral("Only one result will be returned if the query is successful.<br>Both comets and asteroids can be identified with their number, name or provisional designation.<br>Comet <i>names</i> need to be prefixed with <b>C/</b> or <b>P/</b>. If more than one comet matches a name, only the first result will be returned. For example, \"C/Halley\" will return 1P/Halley, Halley's Comet, but \"Halley\" will return the asteroid (2688) Halley."));
        labelQueryInstructions->setWordWrap(true);

        verticalLayout_10->addWidget(labelQueryInstructions);


        verticalLayout_11->addWidget(groupBoxSearch);

        verticalSpacerSearch = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacerSearch);

        tabWidget->addTab(tabSearch, QString());

        verticalLayout_7->addWidget(tabWidget);

        stackedWidget->addWidget(pageSource);
        pageResult = new QWidget();
        pageResult->setObjectName(QStringLiteral("pageResult"));
        verticalLayout_3 = new QVBoxLayout(pageResult);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBoxObjects = new QGroupBox(pageResult);
        groupBoxObjects->setObjectName(QStringLiteral("groupBoxObjects"));
        verticalLayout_4 = new QVBoxLayout(groupBoxObjects);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        labelInstructions = new QLabel(groupBoxObjects);
        labelInstructions->setObjectName(QStringLiteral("labelInstructions"));
        labelInstructions->setWordWrap(true);

        verticalLayout_4->addWidget(labelInstructions);

        radioButtonOverwrite = new QRadioButton(groupBoxObjects);
        radioButtonOverwrite->setObjectName(QStringLiteral("radioButtonOverwrite"));

        verticalLayout_4->addWidget(radioButtonOverwrite);

        radioButtonUpdate = new QRadioButton(groupBoxObjects);
        radioButtonUpdate->setObjectName(QStringLiteral("radioButtonUpdate"));

        verticalLayout_4->addWidget(radioButtonUpdate);

        checkBoxOnlyOrbitalElements = new QCheckBox(groupBoxObjects);
        checkBoxOnlyOrbitalElements->setObjectName(QStringLiteral("checkBoxOnlyOrbitalElements"));
        checkBoxOnlyOrbitalElements->setChecked(true);

        verticalLayout_4->addWidget(checkBoxOnlyOrbitalElements);

        lineEditSearch = new QLineEdit(groupBoxObjects);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));

        verticalLayout_4->addWidget(lineEditSearch);

        listViewObjects = new QListView(groupBoxObjects);
        listViewObjects->setObjectName(QStringLiteral("listViewObjects"));
        listViewObjects->setSelectionMode(QAbstractItemView::NoSelection);
        listViewObjects->setUniformItemSizes(true);

        verticalLayout_4->addWidget(listViewObjects);

        frameMarkButtons = new QFrame(groupBoxObjects);
        frameMarkButtons->setObjectName(QStringLiteral("frameMarkButtons"));
        frameMarkButtons->setFrameShape(QFrame::StyledPanel);
        frameMarkButtons->setFrameShadow(QFrame::Raised);
        horizontalLayoutMarkButtons = new QHBoxLayout(frameMarkButtons);
        horizontalLayoutMarkButtons->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutMarkButtons->setObjectName(QStringLiteral("horizontalLayoutMarkButtons"));
        pushButtonMarkAll = new QPushButton(frameMarkButtons);
        pushButtonMarkAll->setObjectName(QStringLiteral("pushButtonMarkAll"));

        horizontalLayoutMarkButtons->addWidget(pushButtonMarkAll);

        pushButtonMarkNone = new QPushButton(frameMarkButtons);
        pushButtonMarkNone->setObjectName(QStringLiteral("pushButtonMarkNone"));

        horizontalLayoutMarkButtons->addWidget(pushButtonMarkNone);

        pushButtonDiscard = new QPushButton(frameMarkButtons);
        pushButtonDiscard->setObjectName(QStringLiteral("pushButtonDiscard"));

        horizontalLayoutMarkButtons->addWidget(pushButtonDiscard);


        verticalLayout_4->addWidget(frameMarkButtons);

        pushButtonAdd = new QPushButton(groupBoxObjects);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));

        verticalLayout_4->addWidget(pushButtonAdd);


        verticalLayout_3->addWidget(groupBoxObjects);

        stackedWidget->addWidget(pageResult);

        verticalLayout_2->addWidget(stackedWidget);

        QWidget::setTabOrder(tabWidget, radioButtonAsteroids);
        QWidget::setTabOrder(radioButtonAsteroids, radioButtonComets);
        QWidget::setTabOrder(radioButtonComets, radioButtonURL);
        QWidget::setTabOrder(radioButtonURL, comboBoxBookmarks);
        QWidget::setTabOrder(comboBoxBookmarks, lineEditURL);
        QWidget::setTabOrder(lineEditURL, checkBoxAddBookmark);
        QWidget::setTabOrder(checkBoxAddBookmark, lineEditBookmarkTitle);
        QWidget::setTabOrder(lineEditBookmarkTitle, radioButtonFile);
        QWidget::setTabOrder(radioButtonFile, lineEditFilePath);
        QWidget::setTabOrder(lineEditFilePath, pushButtonBrowse);
        QWidget::setTabOrder(pushButtonBrowse, pushButtonAcquire);
        QWidget::setTabOrder(pushButtonAcquire, pushButtonAbortDownload);
        QWidget::setTabOrder(pushButtonAbortDownload, radioButtonOverwrite);
        QWidget::setTabOrder(radioButtonOverwrite, radioButtonUpdate);
        QWidget::setTabOrder(radioButtonUpdate, checkBoxOnlyOrbitalElements);
        QWidget::setTabOrder(checkBoxOnlyOrbitalElements, lineEditSearch);
        QWidget::setTabOrder(lineEditSearch, listViewObjects);
        QWidget::setTabOrder(listViewObjects, pushButtonMarkAll);
        QWidget::setTabOrder(pushButtonMarkAll, pushButtonMarkNone);
        QWidget::setTabOrder(pushButtonMarkNone, pushButtonDiscard);
        QWidget::setTabOrder(pushButtonDiscard, pushButtonAdd);
        QWidget::setTabOrder(pushButtonAdd, pushButtonSendQuery);
        QWidget::setTabOrder(pushButtonSendQuery, lineEditQuery);
        QWidget::setTabOrder(lineEditQuery, pushButtonAbortQuery);

        retranslateUi(mpcImportWindow);
        QObject::connect(radioButtonFile, SIGNAL(clicked()), pushButtonBrowse, SLOT(setFocus()));
        QObject::connect(radioButtonURL, SIGNAL(clicked()), lineEditURL, SLOT(setFocus()));
        QObject::connect(radioButtonUpdate, SIGNAL(toggled(bool)), checkBoxOnlyOrbitalElements, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxAddBookmark, SIGNAL(toggled(bool)), frameBookmarkTitle, SLOT(setVisible(bool)));

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mpcImportWindow);
    } // setupUi

    void retranslateUi(QWidget *mpcImportWindow)
    {
        stelWindowTitle->setText(QApplication::translate("mpcImportWindow", "Import data", 0));
        closeStelWindow->setText(QString());
        groupBoxType->setTitle(QApplication::translate("mpcImportWindow", "Select the type", 0));
        radioButtonAsteroids->setText(QApplication::translate("mpcImportWindow", "Asteroids", 0));
        radioButtonComets->setText(QApplication::translate("mpcImportWindow", "Comets", 0));
        groupBoxSource->setTitle(QApplication::translate("mpcImportWindow", "Select the source", 0));
        radioButtonURL->setText(QApplication::translate("mpcImportWindow", "Download a list of objects from the Internet", 0));
        labelSelect->setText(QApplication::translate("mpcImportWindow", "Select a source from the list:", 0));
        labelEnter->setText(QApplication::translate("mpcImportWindow", "Or enter a URL:", 0));
        checkBoxAddBookmark->setText(QApplication::translate("mpcImportWindow", "Add this URL to the bookmarks list", 0));
        labelBookmarkTitle->setText(QApplication::translate("mpcImportWindow", "Bookmark title:", 0));
        radioButtonFile->setText(QApplication::translate("mpcImportWindow", "A file containing a list of objects", 0));
        pushButtonAcquire->setText(QApplication::translate("mpcImportWindow", "Get orbital elements", 0));
        pushButtonAbortDownload->setText(QApplication::translate("mpcImportWindow", "Abort download", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabLists), QApplication::translate("mpcImportWindow", "Lists", 0));
        groupBoxSearch->setTitle(QApplication::translate("mpcImportWindow", "Online search", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSearch), QApplication::translate("mpcImportWindow", "Online search", 0));
        groupBoxObjects->setTitle(QApplication::translate("mpcImportWindow", "Objects found", 0));
        labelInstructions->setText(QApplication::translate("mpcImportWindow", "Mark the objects you wish to be imported. In <i>italic</i> are listed names that match the names of already loaded objects. In <b>bold</b> are listed names that match the names of objects inherited from Stellarium's default Solar System configuration.<br/>Note that adding a large number of objects may cause Stellarium to run slowly.", 0));
        radioButtonOverwrite->setText(QApplication::translate("mpcImportWindow", "Overwrite existing objects", 0));
        radioButtonUpdate->setText(QApplication::translate("mpcImportWindow", "Update existing objects", 0));
        checkBoxOnlyOrbitalElements->setText(QApplication::translate("mpcImportWindow", "Update only the orbital elements", 0));
        pushButtonMarkAll->setText(QApplication::translate("mpcImportWindow", "Mark all", 0));
        pushButtonMarkNone->setText(QApplication::translate("mpcImportWindow", "Mark none", 0));
        pushButtonDiscard->setText(QApplication::translate("mpcImportWindow", "Discard", 0));
        pushButtonAdd->setText(QApplication::translate("mpcImportWindow", "Add objects", 0));
        Q_UNUSED(mpcImportWindow);
    } // retranslateUi

};

namespace Ui {
    class mpcImportWindow: public Ui_mpcImportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPCIMPORTWINDOW_H
