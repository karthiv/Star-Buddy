/********************************************************************************
** Form generated from reading UI file 'meteorShowerDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METEORSHOWERDIALOG_H
#define UI_METEORSHOWERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_meteorShowerDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QTabWidget *tabs;
    QWidget *settingsTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *internetUpdates;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout;
    QLabel *lastUpdateLabel;
    QDateTimeEdit *lastUpdateDateTimeEdit;
    QLabel *updateFrequencyLabel;
    QSpinBox *updateFrequencySpinBox;
    QLabel *nextUpdateLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *updateButton;
    QGroupBox *displayMeteorShowerBox;
    QGridLayout *gridLayout_8;
    QCheckBox *displayShowMeteorShowerButton;
    QCheckBox *displayMeteorShower;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *restoreDefaultsButton;
    QPushButton *saveSettingsButton;
    QWidget *radiantTab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QGroupBox *activeGenericData;
    QGridLayout *gridLayout_3;
    QPushButton *changeColorARG;
    QFrame *frame_4;
    QLabel *textureARG;
    QGroupBox *inactive;
    QGridLayout *gridLayout_4;
    QPushButton *changeColorIR;
    QFrame *frame_5;
    QLabel *textureIR;
    QGroupBox *activeRealData;
    QGridLayout *gridLayout_2;
    QPushButton *changeColorARR;
    QFrame *frame_6;
    QLabel *textureARR;
    QGroupBox *displayRadiant;
    QGridLayout *gridLayout_9;
    QCheckBox *radiantLabels;
    QCheckBox *activeRadiantsOnly;
    QSpinBox *fontSizeSpinBox;
    QSpacerItem *verticalSpacer;
    QWidget *eventsTab;
    QVBoxLayout *verticalLayout;
    QGroupBox *search;
    QHBoxLayout *horizontalLayout;
    QLabel *labelFrom;
    QDateEdit *dateFrom;
    QLabel *labelTo;
    QDateEdit *dateTo;
    QPushButton *searchButton;
    QGroupBox *results;
    QVBoxLayout *verticalLayout_5;
    QTreeWidget *listEvents;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *meteorShowerDialog)
    {
        if (meteorShowerDialog->objectName().isEmpty())
            meteorShowerDialog->setObjectName(QStringLiteral("meteorShowerDialog"));
        meteorShowerDialog->resize(530, 404);
        verticalLayout_2 = new QVBoxLayout(meteorShowerDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(meteorShowerDialog);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy);
        TitleBar->setMinimumSize(QSize(530, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));

        hboxLayout->addWidget(stelWindowTitle);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout_2->addWidget(TitleBar);

        tabs = new QTabWidget(meteorShowerDialog);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setDocumentMode(false);
        settingsTab = new QWidget();
        settingsTab->setObjectName(QStringLiteral("settingsTab"));
        verticalLayout_3 = new QVBoxLayout(settingsTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        internetUpdates = new QGroupBox(settingsTab);
        internetUpdates->setObjectName(QStringLiteral("internetUpdates"));
        internetUpdates->setFlat(true);
        internetUpdates->setCheckable(true);
        internetUpdates->setChecked(true);
        verticalLayout_12 = new QVBoxLayout(internetUpdates);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lastUpdateLabel = new QLabel(internetUpdates);
        lastUpdateLabel->setObjectName(QStringLiteral("lastUpdateLabel"));

        gridLayout->addWidget(lastUpdateLabel, 0, 0, 1, 1);

        lastUpdateDateTimeEdit = new QDateTimeEdit(internetUpdates);
        lastUpdateDateTimeEdit->setObjectName(QStringLiteral("lastUpdateDateTimeEdit"));
        lastUpdateDateTimeEdit->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lastUpdateDateTimeEdit->sizePolicy().hasHeightForWidth());
        lastUpdateDateTimeEdit->setSizePolicy(sizePolicy1);
        lastUpdateDateTimeEdit->setFrame(false);
        lastUpdateDateTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(lastUpdateDateTimeEdit, 0, 2, 1, 1);

        updateFrequencyLabel = new QLabel(internetUpdates);
        updateFrequencyLabel->setObjectName(QStringLiteral("updateFrequencyLabel"));

        gridLayout->addWidget(updateFrequencyLabel, 1, 0, 1, 1);

        updateFrequencySpinBox = new QSpinBox(internetUpdates);
        updateFrequencySpinBox->setObjectName(QStringLiteral("updateFrequencySpinBox"));
        sizePolicy1.setHeightForWidth(updateFrequencySpinBox->sizePolicy().hasHeightForWidth());
        updateFrequencySpinBox->setSizePolicy(sizePolicy1);
        updateFrequencySpinBox->setMinimum(1);
        updateFrequencySpinBox->setMaximum(9999);
        updateFrequencySpinBox->setValue(1);

        gridLayout->addWidget(updateFrequencySpinBox, 1, 2, 1, 1);

        nextUpdateLabel = new QLabel(internetUpdates);
        nextUpdateLabel->setObjectName(QStringLiteral("nextUpdateLabel"));

        gridLayout->addWidget(nextUpdateLabel, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        updateButton = new QPushButton(internetUpdates);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        sizePolicy1.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(updateButton, 2, 2, 1, 1);


        verticalLayout_12->addLayout(gridLayout);


        verticalLayout_3->addWidget(internetUpdates);

        displayMeteorShowerBox = new QGroupBox(settingsTab);
        displayMeteorShowerBox->setObjectName(QStringLiteral("displayMeteorShowerBox"));
        displayMeteorShowerBox->setFlat(true);
        displayMeteorShowerBox->setCheckable(false);
        gridLayout_8 = new QGridLayout(displayMeteorShowerBox);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        displayShowMeteorShowerButton = new QCheckBox(displayMeteorShowerBox);
        displayShowMeteorShowerButton->setObjectName(QStringLiteral("displayShowMeteorShowerButton"));

        gridLayout_8->addWidget(displayShowMeteorShowerButton, 1, 0, 1, 1);

        displayMeteorShower = new QCheckBox(displayMeteorShowerBox);
        displayMeteorShower->setObjectName(QStringLiteral("displayMeteorShower"));

        gridLayout_8->addWidget(displayMeteorShower, 0, 0, 1, 1);


        verticalLayout_3->addWidget(displayMeteorShowerBox);

        verticalSpacer_3 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        restoreDefaultsButton = new QPushButton(settingsTab);
        restoreDefaultsButton->setObjectName(QStringLiteral("restoreDefaultsButton"));
        sizePolicy.setHeightForWidth(restoreDefaultsButton->sizePolicy().hasHeightForWidth());
        restoreDefaultsButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(restoreDefaultsButton);

        saveSettingsButton = new QPushButton(settingsTab);
        saveSettingsButton->setObjectName(QStringLiteral("saveSettingsButton"));
        sizePolicy.setHeightForWidth(saveSettingsButton->sizePolicy().hasHeightForWidth());
        saveSettingsButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(saveSettingsButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        tabs->addTab(settingsTab, QString());
        radiantTab = new QWidget();
        radiantTab->setObjectName(QStringLiteral("radiantTab"));
        radiantTab->setEnabled(true);
        verticalLayout_4 = new QVBoxLayout(radiantTab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox = new QGroupBox(radiantTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        activeGenericData = new QGroupBox(groupBox);
        activeGenericData->setObjectName(QStringLiteral("activeGenericData"));
        activeGenericData->setMinimumSize(QSize(86, 0));
        activeGenericData->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(activeGenericData);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        changeColorARG = new QPushButton(activeGenericData);
        changeColorARG->setObjectName(QStringLiteral("changeColorARG"));
        changeColorARG->setText(QStringLiteral("..."));

        gridLayout_3->addWidget(changeColorARG, 1, 0, 1, 1);

        frame_4 = new QFrame(activeGenericData);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setMinimumSize(QSize(64, 64));
        frame_4->setMaximumSize(QSize(64, 64));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        textureARG = new QLabel(frame_4);
        textureARG->setObjectName(QStringLiteral("textureARG"));
        textureARG->setGeometry(QRect(0, 0, 64, 64));
        textureARG->setMinimumSize(QSize(64, 64));
        textureARG->setMaximumSize(QSize(64, 64));
        textureARG->setStyleSheet(QStringLiteral("background-image: url(:/MeteorShowers/radiantSetting.png);"));

        gridLayout_3->addWidget(frame_4, 0, 0, 1, 1);


        gridLayout_5->addWidget(activeGenericData, 0, 1, 1, 1, Qt::AlignHCenter);

        inactive = new QGroupBox(groupBox);
        inactive->setObjectName(QStringLiteral("inactive"));
        inactive->setMinimumSize(QSize(86, 0));
        inactive->setAlignment(Qt::AlignCenter);
        gridLayout_4 = new QGridLayout(inactive);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        changeColorIR = new QPushButton(inactive);
        changeColorIR->setObjectName(QStringLiteral("changeColorIR"));
        changeColorIR->setText(QStringLiteral("..."));

        gridLayout_4->addWidget(changeColorIR, 1, 0, 1, 1);

        frame_5 = new QFrame(inactive);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setMinimumSize(QSize(64, 64));
        frame_5->setMaximumSize(QSize(64, 64));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        textureIR = new QLabel(frame_5);
        textureIR->setObjectName(QStringLiteral("textureIR"));
        textureIR->setGeometry(QRect(0, 0, 64, 64));
        textureIR->setMinimumSize(QSize(64, 64));
        textureIR->setMaximumSize(QSize(64, 64));
        textureIR->setStyleSheet(QStringLiteral("background-image: url(:/MeteorShowers/radiantSetting.png);"));

        gridLayout_4->addWidget(frame_5, 0, 0, 1, 1);


        gridLayout_5->addWidget(inactive, 0, 2, 1, 1, Qt::AlignHCenter);

        activeRealData = new QGroupBox(groupBox);
        activeRealData->setObjectName(QStringLiteral("activeRealData"));
        activeRealData->setMinimumSize(QSize(0, 121));
        activeRealData->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(activeRealData);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        changeColorARR = new QPushButton(activeRealData);
        changeColorARR->setObjectName(QStringLiteral("changeColorARR"));
        changeColorARR->setText(QStringLiteral("..."));

        gridLayout_2->addWidget(changeColorARR, 1, 0, 1, 1);

        frame_6 = new QFrame(activeRealData);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setMinimumSize(QSize(64, 64));
        frame_6->setMaximumSize(QSize(64, 64));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        textureARR = new QLabel(frame_6);
        textureARR->setObjectName(QStringLiteral("textureARR"));
        textureARR->setGeometry(QRect(0, 0, 64, 64));
        textureARR->setMinimumSize(QSize(64, 64));
        textureARR->setMaximumSize(QSize(64, 64));
        textureARR->setStyleSheet(QStringLiteral("background-image: url(:/MeteorShowers/radiantSetting.png);"));

        gridLayout_2->addWidget(frame_6, 0, 0, 1, 1);


        gridLayout_5->addWidget(activeRealData, 0, 0, 1, 1, Qt::AlignHCenter);


        verticalLayout_4->addWidget(groupBox);

        displayRadiant = new QGroupBox(radiantTab);
        displayRadiant->setObjectName(QStringLiteral("displayRadiant"));
        displayRadiant->setFlat(true);
        displayRadiant->setCheckable(true);
        gridLayout_9 = new QGridLayout(displayRadiant);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        radiantLabels = new QCheckBox(displayRadiant);
        radiantLabels->setObjectName(QStringLiteral("radiantLabels"));

        gridLayout_9->addWidget(radiantLabels, 1, 0, 1, 1);

        activeRadiantsOnly = new QCheckBox(displayRadiant);
        activeRadiantsOnly->setObjectName(QStringLiteral("activeRadiantsOnly"));

        gridLayout_9->addWidget(activeRadiantsOnly, 0, 0, 1, 1);

        fontSizeSpinBox = new QSpinBox(displayRadiant);
        fontSizeSpinBox->setObjectName(QStringLiteral("fontSizeSpinBox"));

        gridLayout_9->addWidget(fontSizeSpinBox, 1, 1, 1, 1);


        verticalLayout_4->addWidget(displayRadiant);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabs->addTab(radiantTab, QString());
        eventsTab = new QWidget();
        eventsTab->setObjectName(QStringLiteral("eventsTab"));
        verticalLayout = new QVBoxLayout(eventsTab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        search = new QGroupBox(eventsTab);
        search->setObjectName(QStringLiteral("search"));
        search->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(search);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelFrom = new QLabel(search);
        labelFrom->setObjectName(QStringLiteral("labelFrom"));

        horizontalLayout->addWidget(labelFrom);

        dateFrom = new QDateEdit(search);
        dateFrom->setObjectName(QStringLiteral("dateFrom"));
        sizePolicy1.setHeightForWidth(dateFrom->sizePolicy().hasHeightForWidth());
        dateFrom->setSizePolicy(sizePolicy1);
        dateFrom->setCalendarPopup(true);

        horizontalLayout->addWidget(dateFrom);

        labelTo = new QLabel(search);
        labelTo->setObjectName(QStringLiteral("labelTo"));

        horizontalLayout->addWidget(labelTo);

        dateTo = new QDateEdit(search);
        dateTo->setObjectName(QStringLiteral("dateTo"));
        sizePolicy1.setHeightForWidth(dateTo->sizePolicy().hasHeightForWidth());
        dateTo->setSizePolicy(sizePolicy1);
        dateTo->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTo);

        searchButton = new QPushButton(search);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setCheckable(false);
        searchButton->setDefault(false);

        horizontalLayout->addWidget(searchButton);


        verticalLayout->addWidget(search);

        results = new QGroupBox(eventsTab);
        results->setObjectName(QStringLiteral("results"));
        verticalLayout_5 = new QVBoxLayout(results);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 4, -1, 4);
        listEvents = new QTreeWidget(results);
        listEvents->setObjectName(QStringLiteral("listEvents"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listEvents->sizePolicy().hasHeightForWidth());
        listEvents->setSizePolicy(sizePolicy2);
        listEvents->setMinimumSize(QSize(0, 100));
        listEvents->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listEvents->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listEvents->setRootIsDecorated(false);
        listEvents->setUniformRowHeights(true);
        listEvents->setItemsExpandable(false);
        listEvents->setSortingEnabled(true);
        listEvents->setExpandsOnDoubleClick(false);
        listEvents->setColumnCount(0);
        listEvents->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_5->addWidget(listEvents);


        verticalLayout->addWidget(results);

        tabs->addTab(eventsTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        verticalLayout_11 = new QVBoxLayout(aboutTab);
        verticalLayout_11->setSpacing(9);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        aboutTextBrowser = new QTextBrowser(aboutTab);
        aboutTextBrowser->setObjectName(QStringLiteral("aboutTextBrowser"));
        aboutTextBrowser->setOpenExternalLinks(true);
        aboutTextBrowser->setOpenLinks(true);

        verticalLayout_11->addWidget(aboutTextBrowser);

        tabs->addTab(aboutTab, QString());

        verticalLayout_2->addWidget(tabs);


        retranslateUi(meteorShowerDialog);

        tabs->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(meteorShowerDialog);
    } // setupUi

    void retranslateUi(QWidget *meteorShowerDialog)
    {
        meteorShowerDialog->setWindowTitle(QApplication::translate("meteorShowerDialog", "Meteor Showers Configuration", 0));
        stelWindowTitle->setText(QApplication::translate("meteorShowerDialog", "Meteor Showers Plug-in Configuration", 0));
        closeStelWindow->setText(QString());
        internetUpdates->setTitle(QApplication::translate("meteorShowerDialog", "Update data from Internet", 0));
        lastUpdateLabel->setText(QApplication::translate("meteorShowerDialog", "Last update:", 0));
        updateFrequencyLabel->setText(QApplication::translate("meteorShowerDialog", "Update frequency (hours):", 0));
        nextUpdateLabel->setText(QApplication::translate("meteorShowerDialog", "[next update info]", 0));
        updateButton->setText(QApplication::translate("meteorShowerDialog", "Update now", 0));
#ifndef QT_NO_TOOLTIP
        displayMeteorShowerBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        displayMeteorShowerBox->setTitle(QApplication::translate("meteorShowerDialog", "Meteor showers", 0));
        displayShowMeteorShowerButton->setText(QApplication::translate("meteorShowerDialog", "Show meteor showers button on toolbar", 0));
        displayMeteorShower->setText(QApplication::translate("meteorShowerDialog", "Enable display of meteor showers at startup", 0));
        restoreDefaultsButton->setText(QApplication::translate("meteorShowerDialog", "Restore default settings", 0));
        saveSettingsButton->setText(QApplication::translate("meteorShowerDialog", "Save settings as default", 0));
        tabs->setTabText(tabs->indexOf(settingsTab), QApplication::translate("meteorShowerDialog", "Settings", 0));
        groupBox->setTitle(QApplication::translate("meteorShowerDialog", "Color of radiants markers", 0));
#ifndef QT_NO_TOOLTIP
        activeGenericData->setToolTip(QApplication::translate("meteorShowerDialog", "Active Radiant - Generic Data", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        changeColorARG->setToolTip(QApplication::translate("meteorShowerDialog", "Change Color", 0));
#endif // QT_NO_TOOLTIP
        textureARG->setText(QString());
#ifndef QT_NO_TOOLTIP
        inactive->setToolTip(QApplication::translate("meteorShowerDialog", "Inactive Radiant", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        changeColorIR->setToolTip(QApplication::translate("meteorShowerDialog", "Change Color", 0));
#endif // QT_NO_TOOLTIP
        textureIR->setText(QString());
#ifndef QT_NO_TOOLTIP
        activeRealData->setToolTip(QApplication::translate("meteorShowerDialog", "Active Radiant - Real Data", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        changeColorARR->setToolTip(QApplication::translate("meteorShowerDialog", "Change Color", 0));
#endif // QT_NO_TOOLTIP
        textureARR->setText(QString());
        displayRadiant->setTitle(QApplication::translate("meteorShowerDialog", "Radiants for meteor showers", 0));
        radiantLabels->setText(QApplication::translate("meteorShowerDialog", "Show labels of radiants", 0));
        activeRadiantsOnly->setText(QApplication::translate("meteorShowerDialog", "Show active radiants only", 0));
#ifndef QT_NO_TOOLTIP
        fontSizeSpinBox->setToolTip(QApplication::translate("meteorShowerDialog", "Label font size (pixels)", 0));
#endif // QT_NO_TOOLTIP
        tabs->setTabText(tabs->indexOf(radiantTab), QApplication::translate("meteorShowerDialog", "Radiants", 0));
        search->setTitle(QApplication::translate("meteorShowerDialog", "Search", 0));
        labelFrom->setText(QApplication::translate("meteorShowerDialog", "From:", 0));
        dateFrom->setDisplayFormat(QApplication::translate("meteorShowerDialog", "dd/MMM/yyyy", 0));
        labelTo->setText(QApplication::translate("meteorShowerDialog", "To:", 0));
        dateTo->setDisplayFormat(QApplication::translate("meteorShowerDialog", "dd/MMM/yyyy", 0));
        searchButton->setText(QApplication::translate("meteorShowerDialog", "Search", 0));
        results->setTitle(QApplication::translate("meteorShowerDialog", "Results", 0));
        tabs->setTabText(tabs->indexOf(eventsTab), QApplication::translate("meteorShowerDialog", "Search Events", 0));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("meteorShowerDialog", "About", "tab in plugin windows"));
    } // retranslateUi

};

namespace Ui {
    class meteorShowerDialog: public Ui_meteorShowerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METEORSHOWERDIALOG_H
