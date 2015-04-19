/********************************************************************************
** Form generated from reading UI file 'satellitesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATELLITESDIALOG_H
#define UI_SATELLITESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_satellitesDialog
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
    QVBoxLayout *verticalLayoutSettungsTab;
    QGroupBox *updatesGroup;
    QGridLayout *updatesGridLayout;
    QLabel *nextUpdateLabel;
    QSpinBox *updateFrequencySpinBox;
    QCheckBox *internetUpdatesCheckbox;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QDateTimeEdit *lastUpdateDateTimeEdit;
    QHBoxLayout *horizontalLayoutAutoAdd;
    QCheckBox *checkBoxAutoAdd;
    QPushButton *jumpToSourcesButton;
    QPushButton *updateButton;
    QCheckBox *checkBoxAutoRemove;
    QLabel *updateFrequencyLabel;
    QGroupBox *labelsGroup;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QSpinBox *fontSizeSpinBox;
    QGroupBox *orbitLinesGroup;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QSpinBox *orbitSegmentsSpin;
    QLabel *label_8;
    QSpinBox *orbitDurationSpin;
    QSpinBox *orbitFadeSpin;
    QLabel *label_6;
    QGroupBox *realisticGroup;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *restoreDefaultsButton;
    QPushButton *saveSettingsButton;
    QWidget *satellitesTab;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QComboBox *groupFilterCombo;
    QLineEdit *lineEditSearch;
    QListView *satellitesList;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addSatellitesButton;
    QPushButton *removeSatellitesButton;
    QPushButton *commsButton;
    QPushButton *saveSatellitesButton;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayoutCatalogNumber;
    QLabel *labelCatalogNumber;
    QLineEdit *noradNumberEdit;
    QGridLayout *flagsCheckBoxesLayout;
    QCheckBox *displayedCheckbox;
    QCheckBox *orbitCheckbox;
    QCheckBox *userCheckBox;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QTextEdit *descriptionTextEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QListWidget *groupsListWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelTle;
    QLineEdit *tleFirstLineEdit;
    QLineEdit *tleSecondLineEdit;
    QWidget *sourcesTab;
    QVBoxLayout *verticalLayout_10;
    QListWidget *sourceList;
    QLabel *labelAutoAdd;
    QHBoxLayout *horizontalLayout;
    QLineEdit *sourceEdit;
    QPushButton *addSourceButton;
    QPushButton *deleteSourceButton;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *satellitesDialog)
    {
        if (satellitesDialog->objectName().isEmpty())
            satellitesDialog->setObjectName(QStringLiteral("satellitesDialog"));
        satellitesDialog->resize(582, 505);
        verticalLayout_2 = new QVBoxLayout(satellitesDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(satellitesDialog);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
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

        tabs = new QTabWidget(satellitesDialog);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setDocumentMode(false);
        settingsTab = new QWidget();
        settingsTab->setObjectName(QStringLiteral("settingsTab"));
        verticalLayoutSettungsTab = new QVBoxLayout(settingsTab);
        verticalLayoutSettungsTab->setSpacing(0);
        verticalLayoutSettungsTab->setObjectName(QStringLiteral("verticalLayoutSettungsTab"));
        verticalLayoutSettungsTab->setContentsMargins(0, 0, 0, 0);
        updatesGroup = new QGroupBox(settingsTab);
        updatesGroup->setObjectName(QStringLiteral("updatesGroup"));
        updatesGridLayout = new QGridLayout(updatesGroup);
        updatesGridLayout->setObjectName(QStringLiteral("updatesGridLayout"));
        updatesGridLayout->setContentsMargins(0, 0, 0, 0);
        nextUpdateLabel = new QLabel(updatesGroup);
        nextUpdateLabel->setObjectName(QStringLiteral("nextUpdateLabel"));
        nextUpdateLabel->setText(QStringLiteral("[next update info]"));
        nextUpdateLabel->setAlignment(Qt::AlignCenter);

        updatesGridLayout->addWidget(nextUpdateLabel, 5, 0, 1, 5);

        updateFrequencySpinBox = new QSpinBox(updatesGroup);
        updateFrequencySpinBox->setObjectName(QStringLiteral("updateFrequencySpinBox"));
        updateFrequencySpinBox->setMinimum(1);
        updateFrequencySpinBox->setMaximum(9999);
        updateFrequencySpinBox->setValue(1);

        updatesGridLayout->addWidget(updateFrequencySpinBox, 4, 2, 1, 1);

        internetUpdatesCheckbox = new QCheckBox(updatesGroup);
        internetUpdatesCheckbox->setObjectName(QStringLiteral("internetUpdatesCheckbox"));

        updatesGridLayout->addWidget(internetUpdatesCheckbox, 0, 0, 1, 4);

        label_7 = new QLabel(updatesGroup);
        label_7->setObjectName(QStringLiteral("label_7"));

        updatesGridLayout->addWidget(label_7, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        updatesGridLayout->addItem(horizontalSpacer, 3, 1, 2, 1);

        lastUpdateDateTimeEdit = new QDateTimeEdit(updatesGroup);
        lastUpdateDateTimeEdit->setObjectName(QStringLiteral("lastUpdateDateTimeEdit"));
        lastUpdateDateTimeEdit->setEnabled(false);
        lastUpdateDateTimeEdit->setFrame(false);
        lastUpdateDateTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        updatesGridLayout->addWidget(lastUpdateDateTimeEdit, 3, 2, 1, 1);

        horizontalLayoutAutoAdd = new QHBoxLayout();
        horizontalLayoutAutoAdd->setObjectName(QStringLiteral("horizontalLayoutAutoAdd"));
        checkBoxAutoAdd = new QCheckBox(updatesGroup);
        checkBoxAutoAdd->setObjectName(QStringLiteral("checkBoxAutoAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBoxAutoAdd->sizePolicy().hasHeightForWidth());
        checkBoxAutoAdd->setSizePolicy(sizePolicy);

        horizontalLayoutAutoAdd->addWidget(checkBoxAutoAdd);

        jumpToSourcesButton = new QPushButton(updatesGroup);
        jumpToSourcesButton->setObjectName(QStringLiteral("jumpToSourcesButton"));
        jumpToSourcesButton->setEnabled(false);
        jumpToSourcesButton->setText(QStringLiteral("..."));

        horizontalLayoutAutoAdd->addWidget(jumpToSourcesButton);


        updatesGridLayout->addLayout(horizontalLayoutAutoAdd, 1, 0, 1, 4);

        updateButton = new QPushButton(updatesGroup);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy1);

        updatesGridLayout->addWidget(updateButton, 3, 3, 2, 1);

        checkBoxAutoRemove = new QCheckBox(updatesGroup);
        checkBoxAutoRemove->setObjectName(QStringLiteral("checkBoxAutoRemove"));

        updatesGridLayout->addWidget(checkBoxAutoRemove, 2, 0, 1, 4);

        updateFrequencyLabel = new QLabel(updatesGroup);
        updateFrequencyLabel->setObjectName(QStringLiteral("updateFrequencyLabel"));

        updatesGridLayout->addWidget(updateFrequencyLabel, 4, 0, 1, 1);


        verticalLayoutSettungsTab->addWidget(updatesGroup);

        labelsGroup = new QGroupBox(settingsTab);
        labelsGroup->setObjectName(QStringLiteral("labelsGroup"));
        labelsGroup->setFlat(true);
        labelsGroup->setCheckable(true);
        gridLayout_2 = new QGridLayout(labelsGroup);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(labelsGroup);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        fontSizeSpinBox = new QSpinBox(labelsGroup);
        fontSizeSpinBox->setObjectName(QStringLiteral("fontSizeSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fontSizeSpinBox->sizePolicy().hasHeightForWidth());
        fontSizeSpinBox->setSizePolicy(sizePolicy2);
        fontSizeSpinBox->setMinimum(-100);
        fontSizeSpinBox->setMaximum(200);
        fontSizeSpinBox->setValue(10);

        gridLayout_2->addWidget(fontSizeSpinBox, 1, 1, 1, 1);


        verticalLayoutSettungsTab->addWidget(labelsGroup);

        orbitLinesGroup = new QGroupBox(settingsTab);
        orbitLinesGroup->setObjectName(QStringLiteral("orbitLinesGroup"));
        orbitLinesGroup->setFlat(true);
        orbitLinesGroup->setCheckable(true);
        gridLayout_3 = new QGridLayout(orbitLinesGroup);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(orbitLinesGroup);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        orbitSegmentsSpin = new QSpinBox(orbitLinesGroup);
        orbitSegmentsSpin->setObjectName(QStringLiteral("orbitSegmentsSpin"));
        orbitSegmentsSpin->setMinimum(3);
        orbitSegmentsSpin->setMaximum(200);
        orbitSegmentsSpin->setValue(60);

        gridLayout_3->addWidget(orbitSegmentsSpin, 0, 1, 1, 1);

        label_8 = new QLabel(orbitLinesGroup);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 2, 1, 1);

        orbitDurationSpin = new QSpinBox(orbitLinesGroup);
        orbitDurationSpin->setObjectName(QStringLiteral("orbitDurationSpin"));
        orbitDurationSpin->setMinimum(5);
        orbitDurationSpin->setMaximum(120);
        orbitDurationSpin->setValue(15);

        gridLayout_3->addWidget(orbitDurationSpin, 0, 3, 1, 1);

        orbitFadeSpin = new QSpinBox(orbitLinesGroup);
        orbitFadeSpin->setObjectName(QStringLiteral("orbitFadeSpin"));
        orbitFadeSpin->setMaximum(50);
        orbitFadeSpin->setValue(5);

        gridLayout_3->addWidget(orbitFadeSpin, 1, 1, 1, 1);

        label_6 = new QLabel(orbitLinesGroup);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);


        verticalLayoutSettungsTab->addWidget(orbitLinesGroup);

        realisticGroup = new QGroupBox(settingsTab);
        realisticGroup->setObjectName(QStringLiteral("realisticGroup"));
        realisticGroup->setMinimumSize(QSize(0, 43));
        realisticGroup->setCheckable(true);
        realisticGroup->setChecked(false);

        verticalLayoutSettungsTab->addWidget(realisticGroup);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutSettungsTab->addItem(verticalSpacer_3);

        frame = new QFrame(settingsTab);
        frame->setObjectName(QStringLiteral("frame"));
        horizontalLayout_7 = new QHBoxLayout(frame);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(9, 0, 9, 9);
        restoreDefaultsButton = new QPushButton(frame);
        restoreDefaultsButton->setObjectName(QStringLiteral("restoreDefaultsButton"));
        sizePolicy.setHeightForWidth(restoreDefaultsButton->sizePolicy().hasHeightForWidth());
        restoreDefaultsButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(restoreDefaultsButton);

        saveSettingsButton = new QPushButton(frame);
        saveSettingsButton->setObjectName(QStringLiteral("saveSettingsButton"));
        sizePolicy.setHeightForWidth(saveSettingsButton->sizePolicy().hasHeightForWidth());
        saveSettingsButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(saveSettingsButton);


        verticalLayoutSettungsTab->addWidget(frame);

        tabs->addTab(settingsTab, QString());
        satellitesTab = new QWidget();
        satellitesTab->setObjectName(QStringLiteral("satellitesTab"));
        horizontalLayout_5 = new QHBoxLayout(satellitesTab);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupFilterCombo = new QComboBox(satellitesTab);
        groupFilterCombo->setObjectName(QStringLiteral("groupFilterCombo"));

        verticalLayout->addWidget(groupFilterCombo);

        lineEditSearch = new QLineEdit(satellitesTab);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));

        verticalLayout->addWidget(lineEditSearch);

        satellitesList = new QListView(satellitesTab);
        satellitesList->setObjectName(QStringLiteral("satellitesList"));
        satellitesList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(satellitesList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addSatellitesButton = new QPushButton(satellitesTab);
        addSatellitesButton->setObjectName(QStringLiteral("addSatellitesButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(addSatellitesButton->sizePolicy().hasHeightForWidth());
        addSatellitesButton->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(addSatellitesButton);

        removeSatellitesButton = new QPushButton(satellitesTab);
        removeSatellitesButton->setObjectName(QStringLiteral("removeSatellitesButton"));
        sizePolicy3.setHeightForWidth(removeSatellitesButton->sizePolicy().hasHeightForWidth());
        removeSatellitesButton->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(removeSatellitesButton);

        commsButton = new QPushButton(satellitesTab);
        commsButton->setObjectName(QStringLiteral("commsButton"));
        commsButton->setEnabled(false);
        sizePolicy3.setHeightForWidth(commsButton->sizePolicy().hasHeightForWidth());
        commsButton->setSizePolicy(sizePolicy3);
        commsButton->setCheckable(true);

        horizontalLayout_2->addWidget(commsButton);

        saveSatellitesButton = new QPushButton(satellitesTab);
        saveSatellitesButton->setObjectName(QStringLiteral("saveSatellitesButton"));
        saveSatellitesButton->setEnabled(true);
        sizePolicy3.setHeightForWidth(saveSatellitesButton->sizePolicy().hasHeightForWidth());
        saveSatellitesButton->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(saveSatellitesButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(satellitesTab);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        nameEdit = new QLineEdit(satellitesTab);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nameEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(nameEdit);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayoutCatalogNumber = new QHBoxLayout();
        horizontalLayoutCatalogNumber->setObjectName(QStringLiteral("horizontalLayoutCatalogNumber"));
        labelCatalogNumber = new QLabel(satellitesTab);
        labelCatalogNumber->setObjectName(QStringLiteral("labelCatalogNumber"));

        horizontalLayoutCatalogNumber->addWidget(labelCatalogNumber);

        noradNumberEdit = new QLineEdit(satellitesTab);
        noradNumberEdit->setObjectName(QStringLiteral("noradNumberEdit"));
        noradNumberEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        noradNumberEdit->setReadOnly(true);

        horizontalLayoutCatalogNumber->addWidget(noradNumberEdit);


        verticalLayout_7->addLayout(horizontalLayoutCatalogNumber);

        flagsCheckBoxesLayout = new QGridLayout();
        flagsCheckBoxesLayout->setObjectName(QStringLiteral("flagsCheckBoxesLayout"));
        displayedCheckbox = new QCheckBox(satellitesTab);
        displayedCheckbox->setObjectName(QStringLiteral("displayedCheckbox"));
        displayedCheckbox->setTristate(false);

        flagsCheckBoxesLayout->addWidget(displayedCheckbox, 0, 0, 1, 1);

        orbitCheckbox = new QCheckBox(satellitesTab);
        orbitCheckbox->setObjectName(QStringLiteral("orbitCheckbox"));
        orbitCheckbox->setTristate(false);

        flagsCheckBoxesLayout->addWidget(orbitCheckbox, 0, 1, 1, 1);

        userCheckBox = new QCheckBox(satellitesTab);
        userCheckBox->setObjectName(QStringLiteral("userCheckBox"));

        flagsCheckBoxesLayout->addWidget(userCheckBox, 1, 0, 1, 2);


        verticalLayout_7->addLayout(flagsCheckBoxesLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_4 = new QLabel(satellitesTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_6->addWidget(label_4);

        descriptionTextEdit = new QTextEdit(satellitesTab);
        descriptionTextEdit->setObjectName(QStringLiteral("descriptionTextEdit"));
        descriptionTextEdit->setReadOnly(true);

        verticalLayout_6->addWidget(descriptionTextEdit);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(satellitesTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        groupsListWidget = new QListWidget(satellitesTab);
        groupsListWidget->setObjectName(QStringLiteral("groupsListWidget"));
        groupsListWidget->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::SelectedClicked);
        groupsListWidget->setProperty("isWrapping", QVariant(true));

        verticalLayout_4->addWidget(groupsListWidget);


        verticalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        labelTle = new QLabel(satellitesTab);
        labelTle->setObjectName(QStringLiteral("labelTle"));

        verticalLayout_5->addWidget(labelTle);

        tleFirstLineEdit = new QLineEdit(satellitesTab);
        tleFirstLineEdit->setObjectName(QStringLiteral("tleFirstLineEdit"));
        tleFirstLineEdit->setFrame(false);
        tleFirstLineEdit->setReadOnly(true);

        verticalLayout_5->addWidget(tleFirstLineEdit);

        tleSecondLineEdit = new QLineEdit(satellitesTab);
        tleSecondLineEdit->setObjectName(QStringLiteral("tleSecondLineEdit"));
        tleSecondLineEdit->setFrame(false);
        tleSecondLineEdit->setReadOnly(true);

        verticalLayout_5->addWidget(tleSecondLineEdit);


        verticalLayout_7->addLayout(verticalLayout_5);


        horizontalLayout_5->addLayout(verticalLayout_7);

        tabs->addTab(satellitesTab, QString());
        sourcesTab = new QWidget();
        sourcesTab->setObjectName(QStringLiteral("sourcesTab"));
        verticalLayout_10 = new QVBoxLayout(sourcesTab);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        sourceList = new QListWidget(sourcesTab);
        sourceList->setObjectName(QStringLiteral("sourceList"));
        sourceList->setEditTriggers(QAbstractItemView::DoubleClicked);
        sourceList->setSortingEnabled(false);

        verticalLayout_10->addWidget(sourceList);

        labelAutoAdd = new QLabel(sourcesTab);
        labelAutoAdd->setObjectName(QStringLiteral("labelAutoAdd"));
        labelAutoAdd->setWordWrap(true);

        verticalLayout_10->addWidget(labelAutoAdd);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sourceEdit = new QLineEdit(sourcesTab);
        sourceEdit->setObjectName(QStringLiteral("sourceEdit"));

        horizontalLayout->addWidget(sourceEdit);

        addSourceButton = new QPushButton(sourcesTab);
        addSourceButton->setObjectName(QStringLiteral("addSourceButton"));

        horizontalLayout->addWidget(addSourceButton);

        deleteSourceButton = new QPushButton(sourcesTab);
        deleteSourceButton->setObjectName(QStringLiteral("deleteSourceButton"));

        horizontalLayout->addWidget(deleteSourceButton);


        verticalLayout_10->addLayout(horizontalLayout);

        tabs->addTab(sourcesTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        verticalLayout_11 = new QVBoxLayout(aboutTab);
        verticalLayout_11->setSpacing(9);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(9, 9, 9, 9);
        aboutTextBrowser = new QTextBrowser(aboutTab);
        aboutTextBrowser->setObjectName(QStringLiteral("aboutTextBrowser"));
        aboutTextBrowser->setOpenExternalLinks(true);
        aboutTextBrowser->setOpenLinks(true);

        verticalLayout_11->addWidget(aboutTextBrowser);

        tabs->addTab(aboutTab, QString());

        verticalLayout_2->addWidget(tabs);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(nameEdit);
        labelCatalogNumber->setBuddy(noradNumberEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabs, internetUpdatesCheckbox);
        QWidget::setTabOrder(internetUpdatesCheckbox, checkBoxAutoAdd);
        QWidget::setTabOrder(checkBoxAutoAdd, jumpToSourcesButton);
        QWidget::setTabOrder(jumpToSourcesButton, checkBoxAutoRemove);
        QWidget::setTabOrder(checkBoxAutoRemove, updateButton);
        QWidget::setTabOrder(updateButton, lastUpdateDateTimeEdit);
        QWidget::setTabOrder(lastUpdateDateTimeEdit, updateFrequencySpinBox);
        QWidget::setTabOrder(updateFrequencySpinBox, labelsGroup);
        QWidget::setTabOrder(labelsGroup, fontSizeSpinBox);
        QWidget::setTabOrder(fontSizeSpinBox, orbitLinesGroup);
        QWidget::setTabOrder(orbitLinesGroup, orbitSegmentsSpin);
        QWidget::setTabOrder(orbitSegmentsSpin, orbitDurationSpin);
        QWidget::setTabOrder(orbitDurationSpin, orbitFadeSpin);
        QWidget::setTabOrder(orbitFadeSpin, restoreDefaultsButton);
        QWidget::setTabOrder(restoreDefaultsButton, saveSettingsButton);
        QWidget::setTabOrder(saveSettingsButton, groupFilterCombo);
        QWidget::setTabOrder(groupFilterCombo, lineEditSearch);
        QWidget::setTabOrder(lineEditSearch, satellitesList);
        QWidget::setTabOrder(satellitesList, nameEdit);
        QWidget::setTabOrder(nameEdit, noradNumberEdit);
        QWidget::setTabOrder(noradNumberEdit, displayedCheckbox);
        QWidget::setTabOrder(displayedCheckbox, orbitCheckbox);
        QWidget::setTabOrder(orbitCheckbox, userCheckBox);
        QWidget::setTabOrder(userCheckBox, descriptionTextEdit);
        QWidget::setTabOrder(descriptionTextEdit, groupsListWidget);
        QWidget::setTabOrder(groupsListWidget, tleFirstLineEdit);
        QWidget::setTabOrder(tleFirstLineEdit, tleSecondLineEdit);
        QWidget::setTabOrder(tleSecondLineEdit, addSatellitesButton);
        QWidget::setTabOrder(addSatellitesButton, removeSatellitesButton);
        QWidget::setTabOrder(removeSatellitesButton, commsButton);
        QWidget::setTabOrder(commsButton, saveSatellitesButton);
        QWidget::setTabOrder(saveSatellitesButton, sourceList);
        QWidget::setTabOrder(sourceList, sourceEdit);
        QWidget::setTabOrder(sourceEdit, addSourceButton);
        QWidget::setTabOrder(addSourceButton, deleteSourceButton);
        QWidget::setTabOrder(deleteSourceButton, aboutTextBrowser);

        retranslateUi(satellitesDialog);
        QObject::connect(checkBoxAutoAdd, SIGNAL(toggled(bool)), jumpToSourcesButton, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxAutoAdd, SIGNAL(toggled(bool)), labelAutoAdd, SLOT(setVisible(bool)));

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(satellitesDialog);
    } // setupUi

    void retranslateUi(QWidget *satellitesDialog)
    {
        satellitesDialog->setWindowTitle(QApplication::translate("satellitesDialog", "Satellites Configuration", 0));
        stelWindowTitle->setText(QApplication::translate("satellitesDialog", "Satellites Configuration", 0));
        closeStelWindow->setText(QString());
        updatesGroup->setTitle(QApplication::translate("satellitesDialog", "Updates", 0));
        internetUpdatesCheckbox->setText(QApplication::translate("satellitesDialog", "Update satellite data from Internet sources", 0));
        label_7->setText(QApplication::translate("satellitesDialog", "Last update:", 0));
        checkBoxAutoAdd->setText(QApplication::translate("satellitesDialog", "On update, add all new satellites from the selected source(s)", 0));
        updateButton->setText(QApplication::translate("satellitesDialog", "Update now", 0));
        checkBoxAutoRemove->setText(QApplication::translate("satellitesDialog", "On update, remove the satellites that are no longer listed in the update sources", 0));
        updateFrequencyLabel->setText(QApplication::translate("satellitesDialog", "Update frequency (hours):", 0));
        labelsGroup->setTitle(QApplication::translate("satellitesDialog", "Labels", 0));
        label_10->setText(QApplication::translate("satellitesDialog", "Label font size (pixels):", 0));
        orbitLinesGroup->setTitle(QApplication::translate("satellitesDialog", "Orbit lines", 0));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("satellitesDialog", "Number of segments used to draw the line", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("satellitesDialog", "Number of  segments:", 0));
#ifndef QT_NO_TOOLTIP
        orbitSegmentsSpin->setToolTip(QApplication::translate("satellitesDialog", "Number of segments used to draw the line", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("satellitesDialog", "Duration of a single segment in seconds", 0));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("satellitesDialog", "Segment length (s):", 0));
#ifndef QT_NO_TOOLTIP
        orbitDurationSpin->setToolTip(QApplication::translate("satellitesDialog", "Duration of a single segment in seconds", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        orbitFadeSpin->setToolTip(QApplication::translate("satellitesDialog", "Number of segments used to draw each end of the line", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("satellitesDialog", "Number of segments used to draw each end of the line", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("satellitesDialog", "Fade length:", 0));
        realisticGroup->setTitle(QApplication::translate("satellitesDialog", "Realistic mode for the artificial satellites", 0));
        restoreDefaultsButton->setText(QApplication::translate("satellitesDialog", "Restore default settings", 0));
        saveSettingsButton->setText(QApplication::translate("satellitesDialog", "Save settings as default", 0));
        tabs->setTabText(tabs->indexOf(settingsTab), QApplication::translate("satellitesDialog", "Settings", 0));
#ifndef QT_NO_TOOLTIP
        satellitesList->setToolTip(QApplication::translate("satellitesDialog", "Double-click a satellite to start tracking it.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addSatellitesButton->setToolTip(QApplication::translate("satellitesDialog", "Add more satellites", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        removeSatellitesButton->setToolTip(QApplication::translate("satellitesDialog", "Remove the selected satellites", 0));
#endif // QT_NO_TOOLTIP
        commsButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveSatellitesButton->setToolTip(QApplication::translate("satellitesDialog", "Save changes", 0));
#endif // QT_NO_TOOLTIP
        saveSatellitesButton->setText(QString());
        label->setText(QApplication::translate("satellitesDialog", "Name:", 0));
        labelCatalogNumber->setText(QApplication::translate("satellitesDialog", "Catalog number:", 0));
#ifndef QT_NO_TOOLTIP
        displayedCheckbox->setToolTip(QApplication::translate("satellitesDialog", "Display the selected satellite(s)", 0));
#endif // QT_NO_TOOLTIP
        displayedCheckbox->setText(QApplication::translate("satellitesDialog", "Displayed", 0));
#ifndef QT_NO_TOOLTIP
        orbitCheckbox->setToolTip(QApplication::translate("satellitesDialog", "Display orbit line(s) for the selected satellite(s)", 0));
#endif // QT_NO_TOOLTIP
        orbitCheckbox->setText(QApplication::translate("satellitesDialog", "Orbit", 0));
#ifndef QT_NO_TOOLTIP
        userCheckBox->setToolTip(QApplication::translate("satellitesDialog", "Do not update (or remove on update) the selected satellite(s)", 0));
#endif // QT_NO_TOOLTIP
        userCheckBox->setText(QApplication::translate("satellitesDialog", "Do not update", 0));
        label_4->setText(QApplication::translate("satellitesDialog", "Description:", 0));
        label_3->setText(QApplication::translate("satellitesDialog", "Groups:", 0));
        labelTle->setText(QApplication::translate("satellitesDialog", "TLE set:", 0));
        tabs->setTabText(tabs->indexOf(satellitesTab), QApplication::translate("satellitesDialog", "Satellites", 0));
        labelAutoAdd->setText(QApplication::translate("satellitesDialog", "Satellites in the marked source lists will be automatically added on the next update if they are not already in the collection.", 0));
#ifndef QT_NO_TOOLTIP
        sourceEdit->setToolTip(QApplication::translate("satellitesDialog", "Enter or edit the URL of the selected source. Changes are saved by pressing Enter.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addSourceButton->setToolTip(QApplication::translate("satellitesDialog", "Add new source", 0));
#endif // QT_NO_TOOLTIP
        addSourceButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        deleteSourceButton->setToolTip(QApplication::translate("satellitesDialog", "Remove selected source", 0));
#endif // QT_NO_TOOLTIP
        deleteSourceButton->setText(QString());
        tabs->setTabText(tabs->indexOf(sourcesTab), QApplication::translate("satellitesDialog", "Sources", 0));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("satellitesDialog", "About", "tab in plugin windows"));
    } // retranslateUi

};

namespace Ui {
    class satellitesDialog: public Ui_satellitesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATELLITESDIALOG_H
