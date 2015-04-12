/********************************************************************************
** Form generated from reading UI file 'configurationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATIONDIALOG_H
#define UI_CONFIGURATIONDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_configurationDialogForm
{
public:
    QVBoxLayout *vboxLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QFrame *viewContent;
    QGridLayout *gridLayout;
    QStackedWidget *configurationStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *languageGridLayout;
    QLabel *programLanguageLabel;
    QComboBox *programLanguageComboBox;
    QLabel *skycultureLanguageLabel;
    QComboBox *skycultureLanguageComboBox;
    QGroupBox *groupBoxUpdates;
    QHBoxLayout *horizontalLayoutForUpdatesBox;
    QLabel *labelUpdates;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_4x;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *setViewingOptionAsDefaultPushButton;
    QPushButton *restoreDefaultsButton;
    QLabel *saveDefaultOptionsLabel;
    QSpacerItem *verticalSpacer_3;
    QLabel *startupFOVLabel;
    QLabel *startupDirectionOfViewlabel;
    QWidget *pageSelectedObjectInfo;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QRadioButton *allSelectedInfoRadio;
    QRadioButton *noSelectedInfoRadio;
    QRadioButton *briefSelectedInfoRadio;
    QRadioButton *customSelectedInfoRadio;
    QGroupBox *groupBoxDisplayedFields;
    QGridLayout *gridLayoutDisplayedFields;
    QCheckBox *checkBoxName;
    QCheckBox *checkBoxRaDecOfDate;
    QCheckBox *checkBoxCatalogNumbers;
    QCheckBox *checkBoxRaDecJ2000;
    QCheckBox *checkBoxAbsoluteMag;
    QCheckBox *checkBoxGalacticCoordinates;
    QCheckBox *checkBoxVisualMag;
    QCheckBox *checkBoxSize;
    QCheckBox *checkBoxType;
    QCheckBox *checkBoxExtra;
    QCheckBox *checkBoxHourAngle;
    QCheckBox *checkBoxAltAz;
    QCheckBox *checkBoxDistance;
    QCheckBox *checkBoxEclipticCoords;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayoutStartup;
    QCheckBox *enableKeysNavigationCheckBox;
    QCheckBox *enableMouseNavigationCheckBox;
    QPushButton *editShortcutsPushButton;
    QHBoxLayout *_8;
    QCheckBox *mouseTimeoutCheckbox;
    QDoubleSpinBox *mouseTimeoutSpinBox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *_4;
    QRadioButton *fixedTimeRadio;
    QDateTimeEdit *fixedDateTimeEdit;
    QPushButton *fixedDateTimeCurrentButton;
    QRadioButton *systemTimeRadio;
    QHBoxLayout *_3;
    QRadioButton *todayRadio;
    QTimeEdit *todayTimeSpinBox;
    QGroupBox *deltaTGroupBox;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_12;
    QLabel *deltaTLabel;
    QComboBox *deltaTAlgorithmComboBox;
    QPushButton *pushButtonCustomDeltaTEquationDialog;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *deltaTAlgorithmDescription;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayoutOptions;
    QCheckBox *sphericMirrorCheckbox;
    QCheckBox *diskViewportCheckbox;
    QCheckBox *selectSingleConstellationButton;
    QCheckBox *gravityLabelCheckbox;
    QCheckBox *showNebulaBgButtonCheckbox;
    QCheckBox *showFlipButtonsCheckbox;
    QCheckBox *autoZoomResetsDirectionCheckbox;
    QCheckBox *autoEnableAtmosphereCheckBox;
    QCheckBox *decimalDegreeCheckBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *screenshotDirEdit;
    QPushButton *screenshotBrowseButton;
    QCheckBox *invertScreenShotColorsCheckBox;
    QGroupBox *contentBox;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *getStarsButton;
    QLabel *downloadLabel;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *downloadRetryButton;
    QPushButton *downloadCancelButton;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_7;
    QListWidget *scriptListWidget;
    QVBoxLayout *verticalLayout_8;
    QTextBrowser *scriptInfoBrowser;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *scriptStatusLabel;
    QCheckBox *closeWindowAtScriptRunCheckbox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *runScriptButton;
    QPushButton *stopScriptButton;
    QWidget *page_5;
    QHBoxLayout *horizontalLayout_6;
    QListWidget *pluginsListWidget;
    QVBoxLayout *pluginsVerticalLayout;
    QTextBrowser *pluginsInfoBrowser;
    QGroupBox *pluginsGroupBox;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *pluginLoadAtStartupCheckBox;
    QPushButton *pluginConfigureButton;
    QListWidget *stackListWidget;
    QButtonGroup *buttonGroupDisplayedFields;

    void setupUi(QWidget *configurationDialogForm)
    {
        if (configurationDialogForm->objectName().isEmpty())
            configurationDialogForm->setObjectName(QStringLiteral("configurationDialogForm"));
        configurationDialogForm->resize(497, 495);
        vboxLayout = new QVBoxLayout(configurationDialogForm);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(configurationDialogForm);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        TitleBar->setMinimumSize(QSize(16, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));
        QPalette palette;
        stelWindowTitle->setPalette(palette);
        QFont font;
        stelWindowTitle->setFont(font);

        hboxLayout->addWidget(stelWindowTitle);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        vboxLayout->addWidget(TitleBar);

        viewContent = new QFrame(configurationDialogForm);
        viewContent->setObjectName(QStringLiteral("viewContent"));
        viewContent->setFrameShape(QFrame::StyledPanel);
        gridLayout = new QGridLayout(viewContent);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        configurationStackedWidget = new QStackedWidget(viewContent);
        configurationStackedWidget->setObjectName(QStringLiteral("configurationStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_10 = new QVBoxLayout(page);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        languageGridLayout = new QGridLayout();
        languageGridLayout->setObjectName(QStringLiteral("languageGridLayout"));
        programLanguageLabel = new QLabel(groupBox_2);
        programLanguageLabel->setObjectName(QStringLiteral("programLanguageLabel"));

        languageGridLayout->addWidget(programLanguageLabel, 0, 0, 1, 1);

        programLanguageComboBox = new QComboBox(groupBox_2);
        programLanguageComboBox->setObjectName(QStringLiteral("programLanguageComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(programLanguageComboBox->sizePolicy().hasHeightForWidth());
        programLanguageComboBox->setSizePolicy(sizePolicy);
        programLanguageComboBox->setMinimumSize(QSize(220, 24));
        programLanguageComboBox->setMaximumSize(QSize(220, 24));
        programLanguageComboBox->setEditable(true);
        programLanguageComboBox->setInsertPolicy(QComboBox::NoInsert);
        programLanguageComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        programLanguageComboBox->setFrame(true);

        languageGridLayout->addWidget(programLanguageComboBox, 0, 1, 1, 1);

        skycultureLanguageLabel = new QLabel(groupBox_2);
        skycultureLanguageLabel->setObjectName(QStringLiteral("skycultureLanguageLabel"));

        languageGridLayout->addWidget(skycultureLanguageLabel, 1, 0, 1, 1);

        skycultureLanguageComboBox = new QComboBox(groupBox_2);
        skycultureLanguageComboBox->setObjectName(QStringLiteral("skycultureLanguageComboBox"));
        sizePolicy.setHeightForWidth(skycultureLanguageComboBox->sizePolicy().hasHeightForWidth());
        skycultureLanguageComboBox->setSizePolicy(sizePolicy);
        skycultureLanguageComboBox->setMinimumSize(QSize(220, 24));
        skycultureLanguageComboBox->setMaximumSize(QSize(220, 24));
        skycultureLanguageComboBox->setEditable(true);
        skycultureLanguageComboBox->setInsertPolicy(QComboBox::NoInsert);

        languageGridLayout->addWidget(skycultureLanguageComboBox, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(languageGridLayout);


        verticalLayout_10->addWidget(groupBox_2);

        groupBoxUpdates = new QGroupBox(page);
        groupBoxUpdates->setObjectName(QStringLiteral("groupBoxUpdates"));
        groupBoxUpdates->setFlat(true);
        groupBoxUpdates->setCheckable(true);
        horizontalLayoutForUpdatesBox = new QHBoxLayout(groupBoxUpdates);
        horizontalLayoutForUpdatesBox->setObjectName(QStringLiteral("horizontalLayoutForUpdatesBox"));
        horizontalLayoutForUpdatesBox->setContentsMargins(0, 0, 0, 0);
        labelUpdates = new QLabel(groupBoxUpdates);
        labelUpdates->setObjectName(QStringLiteral("labelUpdates"));
        labelUpdates->setWordWrap(true);

        horizontalLayoutForUpdatesBox->addWidget(labelUpdates);


        verticalLayout_10->addWidget(groupBoxUpdates);

        groupBox_6 = new QGroupBox(page);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_4x = new QVBoxLayout(groupBox_6);
        verticalLayout_4x->setObjectName(QStringLiteral("verticalLayout_4x"));
        verticalLayout_4x->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        setViewingOptionAsDefaultPushButton = new QPushButton(groupBox_6);
        setViewingOptionAsDefaultPushButton->setObjectName(QStringLiteral("setViewingOptionAsDefaultPushButton"));
        setViewingOptionAsDefaultPushButton->setMinimumSize(QSize(0, 24));

        horizontalLayout_3->addWidget(setViewingOptionAsDefaultPushButton);

        restoreDefaultsButton = new QPushButton(groupBox_6);
        restoreDefaultsButton->setObjectName(QStringLiteral("restoreDefaultsButton"));
        restoreDefaultsButton->setMinimumSize(QSize(0, 24));

        horizontalLayout_3->addWidget(restoreDefaultsButton);


        verticalLayout_4x->addLayout(horizontalLayout_3);

        saveDefaultOptionsLabel = new QLabel(groupBox_6);
        saveDefaultOptionsLabel->setObjectName(QStringLiteral("saveDefaultOptionsLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(saveDefaultOptionsLabel->sizePolicy().hasHeightForWidth());
        saveDefaultOptionsLabel->setSizePolicy(sizePolicy1);
        saveDefaultOptionsLabel->setScaledContents(false);
        saveDefaultOptionsLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        saveDefaultOptionsLabel->setWordWrap(true);
        saveDefaultOptionsLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_4x->addWidget(saveDefaultOptionsLabel);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4x->addItem(verticalSpacer_3);

        startupFOVLabel = new QLabel(groupBox_6);
        startupFOVLabel->setObjectName(QStringLiteral("startupFOVLabel"));
        startupFOVLabel->setText(QStringLiteral("Startup FOV: XX"));
        startupFOVLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_4x->addWidget(startupFOVLabel);

        startupDirectionOfViewlabel = new QLabel(groupBox_6);
        startupDirectionOfViewlabel->setObjectName(QStringLiteral("startupDirectionOfViewlabel"));
        startupDirectionOfViewlabel->setText(QStringLiteral("Startup direction of view: xxxx"));
        startupDirectionOfViewlabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_4x->addWidget(startupDirectionOfViewlabel);


        verticalLayout_10->addWidget(groupBox_6);

        configurationStackedWidget->addWidget(page);
        pageSelectedObjectInfo = new QWidget();
        pageSelectedObjectInfo->setObjectName(QStringLiteral("pageSelectedObjectInfo"));
        verticalLayout_2 = new QVBoxLayout(pageSelectedObjectInfo);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(pageSelectedObjectInfo);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        allSelectedInfoRadio = new QRadioButton(groupBox_4);
        allSelectedInfoRadio->setObjectName(QStringLiteral("allSelectedInfoRadio"));

        gridLayout_2->addWidget(allSelectedInfoRadio, 0, 0, 1, 1);

        noSelectedInfoRadio = new QRadioButton(groupBox_4);
        noSelectedInfoRadio->setObjectName(QStringLiteral("noSelectedInfoRadio"));

        gridLayout_2->addWidget(noSelectedInfoRadio, 0, 1, 1, 1);

        briefSelectedInfoRadio = new QRadioButton(groupBox_4);
        briefSelectedInfoRadio->setObjectName(QStringLiteral("briefSelectedInfoRadio"));

        gridLayout_2->addWidget(briefSelectedInfoRadio, 1, 0, 1, 1);

        customSelectedInfoRadio = new QRadioButton(groupBox_4);
        customSelectedInfoRadio->setObjectName(QStringLiteral("customSelectedInfoRadio"));

        gridLayout_2->addWidget(customSelectedInfoRadio, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        groupBoxDisplayedFields = new QGroupBox(pageSelectedObjectInfo);
        groupBoxDisplayedFields->setObjectName(QStringLiteral("groupBoxDisplayedFields"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBoxDisplayedFields->sizePolicy().hasHeightForWidth());
        groupBoxDisplayedFields->setSizePolicy(sizePolicy3);
        gridLayoutDisplayedFields = new QGridLayout(groupBoxDisplayedFields);
        gridLayoutDisplayedFields->setObjectName(QStringLiteral("gridLayoutDisplayedFields"));
        gridLayoutDisplayedFields->setContentsMargins(0, 0, 0, 0);
        checkBoxName = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields = new QButtonGroup(configurationDialogForm);
        buttonGroupDisplayedFields->setObjectName(QStringLiteral("buttonGroupDisplayedFields"));
        buttonGroupDisplayedFields->setExclusive(false);
        buttonGroupDisplayedFields->addButton(checkBoxName);
        checkBoxName->setObjectName(QStringLiteral("checkBoxName"));

        gridLayoutDisplayedFields->addWidget(checkBoxName, 0, 0, 1, 1);

        checkBoxRaDecOfDate = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxRaDecOfDate);
        checkBoxRaDecOfDate->setObjectName(QStringLiteral("checkBoxRaDecOfDate"));

        gridLayoutDisplayedFields->addWidget(checkBoxRaDecOfDate, 3, 0, 1, 1);

        checkBoxCatalogNumbers = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxCatalogNumbers);
        checkBoxCatalogNumbers->setObjectName(QStringLiteral("checkBoxCatalogNumbers"));

        gridLayoutDisplayedFields->addWidget(checkBoxCatalogNumbers, 1, 0, 1, 1);

        checkBoxRaDecJ2000 = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxRaDecJ2000);
        checkBoxRaDecJ2000->setObjectName(QStringLiteral("checkBoxRaDecJ2000"));

        gridLayoutDisplayedFields->addWidget(checkBoxRaDecJ2000, 2, 0, 1, 1);

        checkBoxAbsoluteMag = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxAbsoluteMag);
        checkBoxAbsoluteMag->setObjectName(QStringLiteral("checkBoxAbsoluteMag"));

        gridLayoutDisplayedFields->addWidget(checkBoxAbsoluteMag, 1, 1, 1, 1);

        checkBoxGalacticCoordinates = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxGalacticCoordinates);
        checkBoxGalacticCoordinates->setObjectName(QStringLiteral("checkBoxGalacticCoordinates"));

        gridLayoutDisplayedFields->addWidget(checkBoxGalacticCoordinates, 2, 1, 1, 1);

        checkBoxVisualMag = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxVisualMag);
        checkBoxVisualMag->setObjectName(QStringLiteral("checkBoxVisualMag"));

        gridLayoutDisplayedFields->addWidget(checkBoxVisualMag, 0, 1, 1, 1);

        checkBoxSize = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxSize);
        checkBoxSize->setObjectName(QStringLiteral("checkBoxSize"));

        gridLayoutDisplayedFields->addWidget(checkBoxSize, 5, 0, 1, 1);

        checkBoxType = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxType);
        checkBoxType->setObjectName(QStringLiteral("checkBoxType"));

        gridLayoutDisplayedFields->addWidget(checkBoxType, 6, 0, 1, 1);

        checkBoxExtra = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxExtra);
        checkBoxExtra->setObjectName(QStringLiteral("checkBoxExtra"));

        gridLayoutDisplayedFields->addWidget(checkBoxExtra, 6, 1, 1, 1);

        checkBoxHourAngle = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxHourAngle);
        checkBoxHourAngle->setObjectName(QStringLiteral("checkBoxHourAngle"));

        gridLayoutDisplayedFields->addWidget(checkBoxHourAngle, 3, 1, 1, 1);

        checkBoxAltAz = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxAltAz);
        checkBoxAltAz->setObjectName(QStringLiteral("checkBoxAltAz"));

        gridLayoutDisplayedFields->addWidget(checkBoxAltAz, 4, 1, 1, 1);

        checkBoxDistance = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxDistance);
        checkBoxDistance->setObjectName(QStringLiteral("checkBoxDistance"));

        gridLayoutDisplayedFields->addWidget(checkBoxDistance, 5, 1, 1, 1);

        checkBoxEclipticCoords = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxEclipticCoords);
        checkBoxEclipticCoords->setObjectName(QStringLiteral("checkBoxEclipticCoords"));

        gridLayoutDisplayedFields->addWidget(checkBoxEclipticCoords, 4, 0, 1, 1);


        verticalLayout_2->addWidget(groupBoxDisplayedFields);

        configurationStackedWidget->addWidget(pageSelectedObjectInfo);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_11 = new QVBoxLayout(page_2);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayoutStartup = new QGridLayout(groupBox_5);
        gridLayoutStartup->setObjectName(QStringLiteral("gridLayoutStartup"));
        gridLayoutStartup->setContentsMargins(0, 0, 0, 0);
        enableKeysNavigationCheckBox = new QCheckBox(groupBox_5);
        enableKeysNavigationCheckBox->setObjectName(QStringLiteral("enableKeysNavigationCheckBox"));

        gridLayoutStartup->addWidget(enableKeysNavigationCheckBox, 0, 0, 1, 1);

        enableMouseNavigationCheckBox = new QCheckBox(groupBox_5);
        enableMouseNavigationCheckBox->setObjectName(QStringLiteral("enableMouseNavigationCheckBox"));

        gridLayoutStartup->addWidget(enableMouseNavigationCheckBox, 1, 0, 1, 1);

        editShortcutsPushButton = new QPushButton(groupBox_5);
        editShortcutsPushButton->setObjectName(QStringLiteral("editShortcutsPushButton"));

        gridLayoutStartup->addWidget(editShortcutsPushButton, 0, 1, 1, 1);

        _8 = new QHBoxLayout();
        _8->setObjectName(QStringLiteral("_8"));
        mouseTimeoutCheckbox = new QCheckBox(groupBox_5);
        mouseTimeoutCheckbox->setObjectName(QStringLiteral("mouseTimeoutCheckbox"));

        _8->addWidget(mouseTimeoutCheckbox);

        mouseTimeoutSpinBox = new QDoubleSpinBox(groupBox_5);
        mouseTimeoutSpinBox->setObjectName(QStringLiteral("mouseTimeoutSpinBox"));
        mouseTimeoutSpinBox->setMaximumSize(QSize(16777215, 24));
        mouseTimeoutSpinBox->setDecimals(1);
        mouseTimeoutSpinBox->setMinimum(0);
        mouseTimeoutSpinBox->setMaximum(3600);
        mouseTimeoutSpinBox->setValue(10);

        _8->addWidget(mouseTimeoutSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _8->addItem(horizontalSpacer);


        gridLayoutStartup->addLayout(_8, 1, 1, 1, 1);


        verticalLayout_11->addWidget(groupBox_5);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        _4 = new QHBoxLayout();
        _4->setObjectName(QStringLiteral("_4"));
        fixedTimeRadio = new QRadioButton(groupBox);
        fixedTimeRadio->setObjectName(QStringLiteral("fixedTimeRadio"));

        _4->addWidget(fixedTimeRadio);

        fixedDateTimeEdit = new QDateTimeEdit(groupBox);
        fixedDateTimeEdit->setObjectName(QStringLiteral("fixedDateTimeEdit"));
        fixedDateTimeEdit->setMinimumSize(QSize(0, 24));
        fixedDateTimeEdit->setMaximumSize(QSize(16777215, 24));
        fixedDateTimeEdit->setDate(QDate(1952, 5, 11));
        fixedDateTimeEdit->setTime(QTime(0, 42, 0));
        fixedDateTimeEdit->setCalendarPopup(true);

        _4->addWidget(fixedDateTimeEdit);


        gridLayout_3->addLayout(_4, 2, 0, 1, 1);

        fixedDateTimeCurrentButton = new QPushButton(groupBox);
        fixedDateTimeCurrentButton->setObjectName(QStringLiteral("fixedDateTimeCurrentButton"));

        gridLayout_3->addWidget(fixedDateTimeCurrentButton, 2, 1, 1, 1);

        systemTimeRadio = new QRadioButton(groupBox);
        systemTimeRadio->setObjectName(QStringLiteral("systemTimeRadio"));

        gridLayout_3->addWidget(systemTimeRadio, 0, 0, 1, 1);

        _3 = new QHBoxLayout();
        _3->setSpacing(6);
        _3->setObjectName(QStringLiteral("_3"));
        todayRadio = new QRadioButton(groupBox);
        todayRadio->setObjectName(QStringLiteral("todayRadio"));

        _3->addWidget(todayRadio);

        todayTimeSpinBox = new QTimeEdit(groupBox);
        todayTimeSpinBox->setObjectName(QStringLiteral("todayTimeSpinBox"));
        sizePolicy.setHeightForWidth(todayTimeSpinBox->sizePolicy().hasHeightForWidth());
        todayTimeSpinBox->setSizePolicy(sizePolicy);
        todayTimeSpinBox->setMinimumSize(QSize(0, 24));
        todayTimeSpinBox->setMaximumSize(QSize(16777215, 24));
        todayTimeSpinBox->setFont(font);
        todayTimeSpinBox->setFrame(true);
        todayTimeSpinBox->setAlignment(Qt::AlignCenter);
        todayTimeSpinBox->setCurrentSectionIndex(0);
        todayTimeSpinBox->setTime(QTime(21, 0, 0));

        _3->addWidget(todayTimeSpinBox);


        gridLayout_3->addLayout(_3, 0, 1, 1, 1);


        verticalLayout_11->addWidget(groupBox);

        deltaTGroupBox = new QGroupBox(page_2);
        deltaTGroupBox->setObjectName(QStringLiteral("deltaTGroupBox"));
        horizontalLayout_9 = new QHBoxLayout(deltaTGroupBox);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(deltaTGroupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(6, -1, -1, -1);
        deltaTLabel = new QLabel(frame);
        deltaTLabel->setObjectName(QStringLiteral("deltaTLabel"));

        horizontalLayout_12->addWidget(deltaTLabel);

        deltaTAlgorithmComboBox = new QComboBox(frame);
        deltaTAlgorithmComboBox->setObjectName(QStringLiteral("deltaTAlgorithmComboBox"));
        deltaTAlgorithmComboBox->setEditable(true);
        deltaTAlgorithmComboBox->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_12->addWidget(deltaTAlgorithmComboBox);

        pushButtonCustomDeltaTEquationDialog = new QPushButton(frame);
        pushButtonCustomDeltaTEquationDialog->setObjectName(QStringLiteral("pushButtonCustomDeltaTEquationDialog"));
        pushButtonCustomDeltaTEquationDialog->setEnabled(false);
        pushButtonCustomDeltaTEquationDialog->setText(QStringLiteral("..."));

        horizontalLayout_12->addWidget(pushButtonCustomDeltaTEquationDialog);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_12);

        deltaTAlgorithmDescription = new QTextBrowser(frame);
        deltaTAlgorithmDescription->setObjectName(QStringLiteral("deltaTAlgorithmDescription"));
        deltaTAlgorithmDescription->setAutoFillBackground(true);
        deltaTAlgorithmDescription->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        deltaTAlgorithmDescription->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        deltaTAlgorithmDescription->setOpenExternalLinks(true);
        deltaTAlgorithmDescription->setOpenLinks(true);

        verticalLayout->addWidget(deltaTAlgorithmDescription);


        horizontalLayout_9->addWidget(frame);


        verticalLayout_11->addWidget(deltaTGroupBox);

        configurationStackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_12 = new QVBoxLayout(page_3);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QGroupBox(page_3);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy3.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy3);
        gridLayoutOptions = new QGridLayout(groupBox_7);
        gridLayoutOptions->setObjectName(QStringLiteral("gridLayoutOptions"));
        sphericMirrorCheckbox = new QCheckBox(groupBox_7);
        sphericMirrorCheckbox->setObjectName(QStringLiteral("sphericMirrorCheckbox"));
        sphericMirrorCheckbox->setCheckable(true);

        gridLayoutOptions->addWidget(sphericMirrorCheckbox, 0, 0, 1, 1);

        diskViewportCheckbox = new QCheckBox(groupBox_7);
        diskViewportCheckbox->setObjectName(QStringLiteral("diskViewportCheckbox"));

        gridLayoutOptions->addWidget(diskViewportCheckbox, 0, 1, 1, 1);

        selectSingleConstellationButton = new QCheckBox(groupBox_7);
        selectSingleConstellationButton->setObjectName(QStringLiteral("selectSingleConstellationButton"));

        gridLayoutOptions->addWidget(selectSingleConstellationButton, 1, 0, 1, 1);

        gravityLabelCheckbox = new QCheckBox(groupBox_7);
        gravityLabelCheckbox->setObjectName(QStringLiteral("gravityLabelCheckbox"));

        gridLayoutOptions->addWidget(gravityLabelCheckbox, 1, 1, 1, 1);

        showNebulaBgButtonCheckbox = new QCheckBox(groupBox_7);
        showNebulaBgButtonCheckbox->setObjectName(QStringLiteral("showNebulaBgButtonCheckbox"));

        gridLayoutOptions->addWidget(showNebulaBgButtonCheckbox, 2, 0, 1, 1);

        showFlipButtonsCheckbox = new QCheckBox(groupBox_7);
        showFlipButtonsCheckbox->setObjectName(QStringLiteral("showFlipButtonsCheckbox"));

        gridLayoutOptions->addWidget(showFlipButtonsCheckbox, 2, 1, 1, 1);

        autoZoomResetsDirectionCheckbox = new QCheckBox(groupBox_7);
        autoZoomResetsDirectionCheckbox->setObjectName(QStringLiteral("autoZoomResetsDirectionCheckbox"));

        gridLayoutOptions->addWidget(autoZoomResetsDirectionCheckbox, 4, 0, 1, 2);

        autoEnableAtmosphereCheckBox = new QCheckBox(groupBox_7);
        autoEnableAtmosphereCheckBox->setObjectName(QStringLiteral("autoEnableAtmosphereCheckBox"));

        gridLayoutOptions->addWidget(autoEnableAtmosphereCheckBox, 3, 0, 1, 1);

        decimalDegreeCheckBox = new QCheckBox(groupBox_7);
        decimalDegreeCheckBox->setObjectName(QStringLiteral("decimalDegreeCheckBox"));

        gridLayoutOptions->addWidget(decimalDegreeCheckBox, 3, 1, 1, 1);


        verticalLayout_12->addWidget(groupBox_7);

        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        screenshotDirEdit = new QLineEdit(groupBox_3);
        screenshotDirEdit->setObjectName(QStringLiteral("screenshotDirEdit"));

        horizontalLayout_5->addWidget(screenshotDirEdit);

        screenshotBrowseButton = new QPushButton(groupBox_3);
        screenshotBrowseButton->setObjectName(QStringLiteral("screenshotBrowseButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(screenshotBrowseButton->sizePolicy().hasHeightForWidth());
        screenshotBrowseButton->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(screenshotBrowseButton);


        verticalLayout_3->addLayout(horizontalLayout_5);

        invertScreenShotColorsCheckBox = new QCheckBox(groupBox_3);
        invertScreenShotColorsCheckBox->setObjectName(QStringLiteral("invertScreenShotColorsCheckBox"));

        verticalLayout_3->addWidget(invertScreenShotColorsCheckBox);


        verticalLayout_12->addWidget(groupBox_3);

        contentBox = new QGroupBox(page_3);
        contentBox->setObjectName(QStringLiteral("contentBox"));
        horizontalLayout = new QHBoxLayout(contentBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        getStarsButton = new QCommandLinkButton(contentBox);
        getStarsButton->setObjectName(QStringLiteral("getStarsButton"));
        sizePolicy1.setHeightForWidth(getStarsButton->sizePolicy().hasHeightForWidth());
        getStarsButton->setSizePolicy(sizePolicy1);
        getStarsButton->setText(QStringLiteral("Get catalog x of y"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/graphicGui/btTimeRealtime-off.png"), QSize(), QIcon::Normal, QIcon::Off);
        getStarsButton->setIcon(icon);

        horizontalLayout->addWidget(getStarsButton);

        downloadLabel = new QLabel(contentBox);
        downloadLabel->setObjectName(QStringLiteral("downloadLabel"));
        downloadLabel->setText(QStringLiteral("xxx"));

        horizontalLayout->addWidget(downloadLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        downloadRetryButton = new QPushButton(contentBox);
        downloadRetryButton->setObjectName(QStringLiteral("downloadRetryButton"));

        horizontalLayout->addWidget(downloadRetryButton);

        downloadCancelButton = new QPushButton(contentBox);
        downloadCancelButton->setObjectName(QStringLiteral("downloadCancelButton"));

        horizontalLayout->addWidget(downloadCancelButton);


        verticalLayout_12->addWidget(contentBox);

        configurationStackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        horizontalLayout_7 = new QHBoxLayout(page_4);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        scriptListWidget = new QListWidget(page_4);
        scriptListWidget->setObjectName(QStringLiteral("scriptListWidget"));
        scriptListWidget->setMinimumSize(QSize(190, 0));
        scriptListWidget->setFocusPolicy(Qt::NoFocus);
        scriptListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_7->addWidget(scriptListWidget);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        scriptInfoBrowser = new QTextBrowser(page_4);
        scriptInfoBrowser->setObjectName(QStringLiteral("scriptInfoBrowser"));

        verticalLayout_8->addWidget(scriptInfoBrowser);

        groupBox_8 = new QGroupBox(page_4);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        verticalLayout_9 = new QVBoxLayout(groupBox_8);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        scriptStatusLabel = new QLabel(groupBox_8);
        scriptStatusLabel->setObjectName(QStringLiteral("scriptStatusLabel"));

        verticalLayout_9->addWidget(scriptStatusLabel);

        closeWindowAtScriptRunCheckbox = new QCheckBox(groupBox_8);
        closeWindowAtScriptRunCheckbox->setObjectName(QStringLiteral("closeWindowAtScriptRunCheckbox"));
        closeWindowAtScriptRunCheckbox->setChecked(true);

        verticalLayout_9->addWidget(closeWindowAtScriptRunCheckbox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        runScriptButton = new QPushButton(groupBox_8);
        runScriptButton->setObjectName(QStringLiteral("runScriptButton"));
        runScriptButton->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/graphicGui/btScriptRun-on.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/graphicGui/btScriptRun-off.png"), QSize(), QIcon::Disabled, QIcon::Off);
        runScriptButton->setIcon(icon1);

        horizontalLayout_4->addWidget(runScriptButton);

        stopScriptButton = new QPushButton(groupBox_8);
        stopScriptButton->setObjectName(QStringLiteral("stopScriptButton"));
        stopScriptButton->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/graphicGui/btScriptStop-on.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/graphicGui/btScriptStop-off.png"), QSize(), QIcon::Disabled, QIcon::Off);
        stopScriptButton->setIcon(icon2);

        horizontalLayout_4->addWidget(stopScriptButton);


        verticalLayout_9->addLayout(horizontalLayout_4);


        verticalLayout_8->addWidget(groupBox_8);


        horizontalLayout_7->addLayout(verticalLayout_8);

        configurationStackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        horizontalLayout_6 = new QHBoxLayout(page_5);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pluginsListWidget = new QListWidget(page_5);
        pluginsListWidget->setObjectName(QStringLiteral("pluginsListWidget"));
        pluginsListWidget->setMinimumSize(QSize(180, 0));
        pluginsListWidget->setMaximumSize(QSize(180, 16777215));
        pluginsListWidget->setFocusPolicy(Qt::NoFocus);
        pluginsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_6->addWidget(pluginsListWidget);

        pluginsVerticalLayout = new QVBoxLayout();
        pluginsVerticalLayout->setObjectName(QStringLiteral("pluginsVerticalLayout"));
        pluginsInfoBrowser = new QTextBrowser(page_5);
        pluginsInfoBrowser->setObjectName(QStringLiteral("pluginsInfoBrowser"));

        pluginsVerticalLayout->addWidget(pluginsInfoBrowser);

        pluginsGroupBox = new QGroupBox(page_5);
        pluginsGroupBox->setObjectName(QStringLiteral("pluginsGroupBox"));
        horizontalLayout_8 = new QHBoxLayout(pluginsGroupBox);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pluginLoadAtStartupCheckBox = new QCheckBox(pluginsGroupBox);
        pluginLoadAtStartupCheckBox->setObjectName(QStringLiteral("pluginLoadAtStartupCheckBox"));

        horizontalLayout_8->addWidget(pluginLoadAtStartupCheckBox);

        pluginConfigureButton = new QPushButton(pluginsGroupBox);
        pluginConfigureButton->setObjectName(QStringLiteral("pluginConfigureButton"));
        pluginConfigureButton->setEnabled(false);

        horizontalLayout_8->addWidget(pluginConfigureButton);


        pluginsVerticalLayout->addWidget(pluginsGroupBox);


        horizontalLayout_6->addLayout(pluginsVerticalLayout);

        configurationStackedWidget->addWidget(page_5);

        gridLayout->addWidget(configurationStackedWidget, 1, 0, 1, 1);

        stackListWidget = new QListWidget(viewContent);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/graphicGui/tabicon-main.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/graphicGui/tabicon-info.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem1->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/graphicGui/tabicon-navigation.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem2->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/graphicGui/tabicon-tools.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem3->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/graphicGui/tabicon-scripts.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem4->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/graphicGui/tabicon-plugins.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem5->setIcon(icon8);
        stackListWidget->setObjectName(QStringLiteral("stackListWidget"));
        stackListWidget->setMinimumSize(QSize(0, 74));
        stackListWidget->setMaximumSize(QSize(16777215, 74));
        stackListWidget->setFocusPolicy(Qt::NoFocus);
        stackListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stackListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stackListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        stackListWidget->setIconSize(QSize(50, 50));
        stackListWidget->setMovement(QListView::Static);
        stackListWidget->setFlow(QListView::LeftToRight);
        stackListWidget->setProperty("isWrapping", QVariant(false));
        stackListWidget->setResizeMode(QListView::Adjust);
        stackListWidget->setLayoutMode(QListView::SinglePass);
        stackListWidget->setSpacing(0);
        stackListWidget->setViewMode(QListView::IconMode);
        stackListWidget->setUniformItemSizes(false);
        stackListWidget->setWordWrap(false);
        stackListWidget->setSelectionRectVisible(false);

        gridLayout->addWidget(stackListWidget, 0, 0, 1, 1);


        vboxLayout->addWidget(viewContent);

        QWidget::setTabOrder(setViewingOptionAsDefaultPushButton, restoreDefaultsButton);
        QWidget::setTabOrder(restoreDefaultsButton, checkBoxName);
        QWidget::setTabOrder(checkBoxName, checkBoxVisualMag);
        QWidget::setTabOrder(checkBoxVisualMag, checkBoxCatalogNumbers);
        QWidget::setTabOrder(checkBoxCatalogNumbers, checkBoxAbsoluteMag);
        QWidget::setTabOrder(checkBoxAbsoluteMag, checkBoxRaDecJ2000);
        QWidget::setTabOrder(checkBoxRaDecJ2000, checkBoxGalacticCoordinates);
        QWidget::setTabOrder(checkBoxGalacticCoordinates, checkBoxRaDecOfDate);
        QWidget::setTabOrder(checkBoxRaDecOfDate, checkBoxSize);
        QWidget::setTabOrder(checkBoxSize, checkBoxDistance);
        QWidget::setTabOrder(checkBoxDistance, checkBoxType);
        QWidget::setTabOrder(checkBoxType, checkBoxEclipticCoords);
        QWidget::setTabOrder(checkBoxEclipticCoords, enableKeysNavigationCheckBox);
        QWidget::setTabOrder(enableKeysNavigationCheckBox, editShortcutsPushButton);
        QWidget::setTabOrder(editShortcutsPushButton, systemTimeRadio);
        QWidget::setTabOrder(systemTimeRadio, todayRadio);
        QWidget::setTabOrder(todayRadio, todayTimeSpinBox);
        QWidget::setTabOrder(todayTimeSpinBox, fixedTimeRadio);
        QWidget::setTabOrder(fixedTimeRadio, fixedDateTimeEdit);
        QWidget::setTabOrder(fixedDateTimeEdit, fixedDateTimeCurrentButton);
        QWidget::setTabOrder(fixedDateTimeCurrentButton, mouseTimeoutCheckbox);
        QWidget::setTabOrder(mouseTimeoutCheckbox, mouseTimeoutSpinBox);
        QWidget::setTabOrder(mouseTimeoutSpinBox, sphericMirrorCheckbox);
        QWidget::setTabOrder(sphericMirrorCheckbox, diskViewportCheckbox);
        QWidget::setTabOrder(diskViewportCheckbox, gravityLabelCheckbox);
        QWidget::setTabOrder(gravityLabelCheckbox, selectSingleConstellationButton);
        QWidget::setTabOrder(selectSingleConstellationButton, autoZoomResetsDirectionCheckbox);
        QWidget::setTabOrder(autoZoomResetsDirectionCheckbox, screenshotBrowseButton);
        QWidget::setTabOrder(screenshotBrowseButton, screenshotDirEdit);
        QWidget::setTabOrder(screenshotDirEdit, invertScreenShotColorsCheckBox);
        QWidget::setTabOrder(invertScreenShotColorsCheckBox, getStarsButton);
        QWidget::setTabOrder(getStarsButton, downloadRetryButton);
        QWidget::setTabOrder(downloadRetryButton, downloadCancelButton);
        QWidget::setTabOrder(downloadCancelButton, scriptInfoBrowser);
        QWidget::setTabOrder(scriptInfoBrowser, closeWindowAtScriptRunCheckbox);
        QWidget::setTabOrder(closeWindowAtScriptRunCheckbox, runScriptButton);
        QWidget::setTabOrder(runScriptButton, stopScriptButton);
        QWidget::setTabOrder(stopScriptButton, pluginsInfoBrowser);
        QWidget::setTabOrder(pluginsInfoBrowser, pluginLoadAtStartupCheckBox);
        QWidget::setTabOrder(pluginLoadAtStartupCheckBox, pluginConfigureButton);

        retranslateUi(configurationDialogForm);
        QObject::connect(stackListWidget, SIGNAL(currentRowChanged(int)), configurationStackedWidget, SLOT(setCurrentIndex(int)));

        configurationStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(configurationDialogForm);
    } // setupUi

    void retranslateUi(QWidget *configurationDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("configurationDialogForm", "Configuration", 0));
        closeStelWindow->setText(QString());
        groupBox_2->setTitle(QApplication::translate("configurationDialogForm", "Language settings", 0));
        programLanguageLabel->setText(QApplication::translate("configurationDialogForm", "Program Language", 0));
        skycultureLanguageLabel->setText(QApplication::translate("configurationDialogForm", "Sky Culture Language", 0));
        groupBoxUpdates->setTitle(QApplication::translate("configurationDialogForm", "Check updates", 0));
        labelUpdates->setText(QApplication::translate("configurationDialogForm", "Enable checking updates of Stellarium via Internet. Info for updates of stable versions you can look on the tab \"About\" of \"Help\" window.", 0));
        groupBox_6->setTitle(QApplication::translate("configurationDialogForm", "Default options", 0));
#ifndef QT_NO_WHATSTHIS
        setViewingOptionAsDefaultPushButton->setWhatsThis(QApplication::translate("configurationDialogForm", "Save the settings you've changed this session to be the same the next time you start Stellarium", 0));
#endif // QT_NO_WHATSTHIS
        setViewingOptionAsDefaultPushButton->setText(QApplication::translate("configurationDialogForm", "Save settings", 0));
#ifndef QT_NO_WHATSTHIS
        restoreDefaultsButton->setWhatsThis(QApplication::translate("configurationDialogForm", "Restore the default settings that came with Stellarium", 0));
#endif // QT_NO_WHATSTHIS
        restoreDefaultsButton->setText(QApplication::translate("configurationDialogForm", "Restore defaults", 0));
        saveDefaultOptionsLabel->setText(QApplication::translate("configurationDialogForm", "Restoring default settings requires a restart of Stellarium. Saving all the current options includes the current FOV and direction of view for use at next startup.", 0));
#ifndef QT_NO_STATUSTIP
        startupFOVLabel->setStatusTip(QApplication::translate("configurationDialogForm", "The width of your view when Stellarium starts", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        startupDirectionOfViewlabel->setStatusTip(QApplication::translate("configurationDialogForm", "The direction you're looking when Stellarium starts", 0));
#endif // QT_NO_STATUSTIP
        groupBox_4->setTitle(QApplication::translate("configurationDialogForm", "Selected object information", 0));
#ifndef QT_NO_TOOLTIP
        allSelectedInfoRadio->setToolTip(QApplication::translate("configurationDialogForm", "Display all information available", 0));
#endif // QT_NO_TOOLTIP
        allSelectedInfoRadio->setText(QApplication::translate("configurationDialogForm", "All available", 0));
#ifndef QT_NO_TOOLTIP
        noSelectedInfoRadio->setToolTip(QApplication::translate("configurationDialogForm", "Display no information", 0));
#endif // QT_NO_TOOLTIP
        noSelectedInfoRadio->setText(QApplication::translate("configurationDialogForm", "None", 0));
#ifndef QT_NO_TOOLTIP
        briefSelectedInfoRadio->setToolTip(QApplication::translate("configurationDialogForm", "Display less information", 0));
#endif // QT_NO_TOOLTIP
        briefSelectedInfoRadio->setText(QApplication::translate("configurationDialogForm", "Short", 0));
#ifndef QT_NO_TOOLTIP
        customSelectedInfoRadio->setToolTip(QApplication::translate("configurationDialogForm", "Display user settings information", 0));
#endif // QT_NO_TOOLTIP
        customSelectedInfoRadio->setText(QApplication::translate("configurationDialogForm", "Customized", 0));
        groupBoxDisplayedFields->setTitle(QApplication::translate("configurationDialogForm", "Displayed fields", 0));
        checkBoxName->setText(QApplication::translate("configurationDialogForm", "Name", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxRaDecOfDate->setToolTip(QApplication::translate("configurationDialogForm", "Geocentric equatorial coordinates, equinox of date", 0));
#endif // QT_NO_TOOLTIP
        checkBoxRaDecOfDate->setText(QApplication::translate("configurationDialogForm", "Right ascension/Declination (of date)", 0));
        checkBoxCatalogNumbers->setText(QApplication::translate("configurationDialogForm", "Catalog number(s)", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxRaDecJ2000->setToolTip(QApplication::translate("configurationDialogForm", "Geocentric equatorial coordinates, equinox of J2000.0", 0));
#endif // QT_NO_TOOLTIP
        checkBoxRaDecJ2000->setText(QApplication::translate("configurationDialogForm", "Right ascension/Declination (J2000)", 0));
        checkBoxAbsoluteMag->setText(QApplication::translate("configurationDialogForm", "Absolute magnitude", 0));
        checkBoxGalacticCoordinates->setText(QApplication::translate("configurationDialogForm", "Galactic coordinates", 0));
        checkBoxVisualMag->setText(QApplication::translate("configurationDialogForm", "Visual magnitude", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxSize->setToolTip(QApplication::translate("configurationDialogForm", "Angular or physical size", 0));
#endif // QT_NO_TOOLTIP
        checkBoxSize->setText(QApplication::translate("configurationDialogForm", "Size", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxType->setToolTip(QApplication::translate("configurationDialogForm", "The type of the object (star, planet, etc.)", 0));
#endif // QT_NO_TOOLTIP
        checkBoxType->setText(QApplication::translate("configurationDialogForm", "Type", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxExtra->setToolTip(QApplication::translate("configurationDialogForm", "Spectral class, nebula type, etc.", 0));
#endif // QT_NO_TOOLTIP
        checkBoxExtra->setText(QApplication::translate("configurationDialogForm", "Additional information", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxHourAngle->setToolTip(QApplication::translate("configurationDialogForm", "Topocentric equatorial coordinates", 0));
#endif // QT_NO_TOOLTIP
        checkBoxHourAngle->setText(QApplication::translate("configurationDialogForm", "Hour angle/Declination", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxAltAz->setToolTip(QApplication::translate("configurationDialogForm", "Horizontal coordinates", 0));
#endif // QT_NO_TOOLTIP
        checkBoxAltAz->setText(QApplication::translate("configurationDialogForm", "Altitude/Azimuth", 0));
        checkBoxDistance->setText(QApplication::translate("configurationDialogForm", "Distance", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxEclipticCoords->setToolTip(QApplication::translate("configurationDialogForm", "Ecliptic coordinates, equinox of date and J2000 (only for Earth)", 0));
#endif // QT_NO_TOOLTIP
        checkBoxEclipticCoords->setText(QApplication::translate("configurationDialogForm", "Ecliptic coordinates", 0));
        groupBox_5->setTitle(QApplication::translate("configurationDialogForm", "Control", 0));
#ifndef QT_NO_TOOLTIP
        enableKeysNavigationCheckBox->setToolTip(QApplication::translate("configurationDialogForm", "Allow keyboard to pan and zoom", 0));
#endif // QT_NO_TOOLTIP
        enableKeysNavigationCheckBox->setText(QApplication::translate("configurationDialogForm", "Enable keyboard navigation", 0));
#ifndef QT_NO_TOOLTIP
        enableMouseNavigationCheckBox->setToolTip(QApplication::translate("configurationDialogForm", "Allow mouse to pan (drag) and zoom (mousewheel)", 0));
#endif // QT_NO_TOOLTIP
        enableMouseNavigationCheckBox->setText(QApplication::translate("configurationDialogForm", "Enable mouse navigation", 0));
        editShortcutsPushButton->setText(QApplication::translate("configurationDialogForm", "Edit keyboard shortcuts...", 0));
#ifndef QT_NO_TOOLTIP
        mouseTimeoutCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Hides the mouse cursor when inactive", 0));
#endif // QT_NO_TOOLTIP
        mouseTimeoutCheckbox->setText(QApplication::translate("configurationDialogForm", "Mouse cursor timeout:", 0));
#ifndef QT_NO_TOOLTIP
        mouseTimeoutSpinBox->setToolTip(QApplication::translate("configurationDialogForm", "seconds", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("configurationDialogForm", "Startup date and time", 0));
#ifndef QT_NO_TOOLTIP
        fixedTimeRadio->setToolTip(QApplication::translate("configurationDialogForm", "Use a specific date and time when Stellarium starts up", 0));
#endif // QT_NO_TOOLTIP
        fixedTimeRadio->setText(QApplication::translate("configurationDialogForm", "Other:", 0));
#ifndef QT_NO_TOOLTIP
        fixedDateTimeCurrentButton->setToolTip(QApplication::translate("configurationDialogForm", "Use current local date and time", 0));
#endif // QT_NO_TOOLTIP
        fixedDateTimeCurrentButton->setText(QApplication::translate("configurationDialogForm", "use current", 0));
#ifndef QT_NO_TOOLTIP
        systemTimeRadio->setToolTip(QApplication::translate("configurationDialogForm", "Starts Stellarium at system clock date and time", 0));
#endif // QT_NO_TOOLTIP
        systemTimeRadio->setText(QApplication::translate("configurationDialogForm", "System date and time", 0));
#ifndef QT_NO_TOOLTIP
        todayRadio->setToolTip(QApplication::translate("configurationDialogForm", "Sets the simulation time to the next instance of this time of day when Stellarium starts", 0));
#endif // QT_NO_TOOLTIP
        todayRadio->setText(QApplication::translate("configurationDialogForm", "System date at:", 0));
        deltaTGroupBox->setTitle(QApplication::translate("configurationDialogForm", "Time correction", 0));
        deltaTLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonCustomDeltaTEquationDialog->setToolTip(QApplication::translate("configurationDialogForm", "Edit equation", 0));
#endif // QT_NO_TOOLTIP
        groupBox_7->setTitle(QApplication::translate("configurationDialogForm", "Planetarium options", 0));
#ifndef QT_NO_TOOLTIP
        sphericMirrorCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Spheric mirror distortion is used when projecting Stellarium onto a spheric mirror for low-cost planetarium systems.", 0));
#endif // QT_NO_TOOLTIP
        sphericMirrorCheckbox->setText(QApplication::translate("configurationDialogForm", "Spheric mirror distortion", 0));
#ifndef QT_NO_TOOLTIP
        diskViewportCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Mask out everything outside a central circle in the main view", 0));
#endif // QT_NO_TOOLTIP
        diskViewportCheckbox->setText(QApplication::translate("configurationDialogForm", "Disc viewport", 0));
#ifndef QT_NO_STATUSTIP
        selectSingleConstellationButton->setStatusTip(QApplication::translate("configurationDialogForm", "Hide other constellations when you click one", 0));
#endif // QT_NO_STATUSTIP
        selectSingleConstellationButton->setText(QApplication::translate("configurationDialogForm", "Select single constellation", 0));
#ifndef QT_NO_TOOLTIP
        gravityLabelCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Align labels with the horizon", 0));
#endif // QT_NO_TOOLTIP
        gravityLabelCheckbox->setText(QApplication::translate("configurationDialogForm", "Gravity labels", 0));
#ifndef QT_NO_TOOLTIP
        showNebulaBgButtonCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Toggle display backgrounds of the nebulae.", 0));
#endif // QT_NO_TOOLTIP
        showNebulaBgButtonCheckbox->setText(QApplication::translate("configurationDialogForm", "Show nebula background button", 0));
#ifndef QT_NO_TOOLTIP
        showFlipButtonsCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Toggle vertical and horizontal image flip buttons.", 0));
#endif // QT_NO_TOOLTIP
        showFlipButtonsCheckbox->setText(QApplication::translate("configurationDialogForm", "Show flip buttons", 0));
#ifndef QT_NO_TOOLTIP
        autoZoomResetsDirectionCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "When enabled, the \"auto zoom out\" key will also set the initial viewing direction", 0));
#endif // QT_NO_TOOLTIP
        autoZoomResetsDirectionCheckbox->setText(QApplication::translate("configurationDialogForm", "Auto zoom out returns to initial direction of view", 0));
#ifndef QT_NO_TOOLTIP
        autoEnableAtmosphereCheckBox->setToolTip(QApplication::translate("configurationDialogForm", "Auto-enabling of the atmosphere for bodies with atmosphere in location window", 0));
#endif // QT_NO_TOOLTIP
        autoEnableAtmosphereCheckBox->setText(QApplication::translate("configurationDialogForm", "Auto-enabling for the atmosphere", 0));
#ifndef QT_NO_TOOLTIP
        decimalDegreeCheckBox->setToolTip(QApplication::translate("configurationDialogForm", "Use decimal degrees for coordinates", 0));
#endif // QT_NO_TOOLTIP
        decimalDegreeCheckBox->setText(QApplication::translate("configurationDialogForm", "Use decimal degrees", 0));
        groupBox_3->setTitle(QApplication::translate("configurationDialogForm", "Screenshots", 0));
        label->setText(QApplication::translate("configurationDialogForm", "Screenshot Directory", 0));
        screenshotBrowseButton->setText(QString());
        invertScreenShotColorsCheckBox->setText(QApplication::translate("configurationDialogForm", "Invert colors", 0));
        contentBox->setTitle(QApplication::translate("configurationDialogForm", "Star catalog updates", 0));
#ifndef QT_NO_TOOLTIP
        getStarsButton->setToolTip(QApplication::translate("configurationDialogForm", "Click here to start downloading", 0));
#endif // QT_NO_TOOLTIP
        getStarsButton->setDescription(QApplication::translate("configurationDialogForm", "Download this file to view even more stars", 0));
#ifndef QT_NO_TOOLTIP
        downloadRetryButton->setToolTip(QApplication::translate("configurationDialogForm", "Restart the download", 0));
#endif // QT_NO_TOOLTIP
        downloadRetryButton->setText(QApplication::translate("configurationDialogForm", "Retry", 0));
#ifndef QT_NO_TOOLTIP
        downloadCancelButton->setToolTip(QApplication::translate("configurationDialogForm", "Stop the download. You can always restart it later", 0));
#endif // QT_NO_TOOLTIP
        downloadCancelButton->setText(QApplication::translate("configurationDialogForm", "Cancel", 0));
        groupBox_8->setTitle(QApplication::translate("configurationDialogForm", "Options", 0));
        scriptStatusLabel->setText(QString());
        closeWindowAtScriptRunCheckbox->setText(QApplication::translate("configurationDialogForm", "Close window when script runs", 0));
#ifndef QT_NO_TOOLTIP
        runScriptButton->setToolTip(QApplication::translate("configurationDialogForm", "Run the selected script", 0));
#endif // QT_NO_TOOLTIP
        runScriptButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopScriptButton->setToolTip(QApplication::translate("configurationDialogForm", "Stop a running script", 0));
#endif // QT_NO_TOOLTIP
        stopScriptButton->setText(QString());
        pluginsGroupBox->setTitle(QApplication::translate("configurationDialogForm", "Options", 0));
        pluginLoadAtStartupCheckBox->setText(QApplication::translate("configurationDialogForm", "Load at startup", 0));
        pluginConfigureButton->setText(QApplication::translate("configurationDialogForm", "configure", 0));

        const bool __sortingEnabled = stackListWidget->isSortingEnabled();
        stackListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = stackListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("configurationDialogForm", "Main", 0));
        QListWidgetItem *___qlistwidgetitem1 = stackListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("configurationDialogForm", "Information", 0));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("configurationDialogForm", "Selected object information", 0));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = stackListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("configurationDialogForm", "Navigation", 0));
        QListWidgetItem *___qlistwidgetitem3 = stackListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("configurationDialogForm", "Tools", 0));
        QListWidgetItem *___qlistwidgetitem4 = stackListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("configurationDialogForm", "Scripts", 0));
        QListWidgetItem *___qlistwidgetitem5 = stackListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("configurationDialogForm", "Plugins", 0));
        stackListWidget->setSortingEnabled(__sortingEnabled);

        Q_UNUSED(configurationDialogForm);
    } // retranslateUi

};

namespace Ui {
    class configurationDialogForm: public Ui_configurationDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONDIALOG_H
