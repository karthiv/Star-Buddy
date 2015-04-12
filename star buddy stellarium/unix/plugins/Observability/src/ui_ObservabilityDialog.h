/********************************************************************************
** Form generated from reading UI file 'ObservabilityDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSERVABILITYDIALOG_H
#define UI_OBSERVABILITYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_ObservabilityDialog
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
    QVBoxLayout *verticalLayout;
    QGroupBox *fontSettingsBox;
    QGridLayout *gridLayout;
    QLabel *redLabel;
    QSlider *redSlider;
    QLabel *greenLabel;
    QSlider *greenSlider;
    QLabel *blueLabel;
    QSlider *blueSlider;
    QLabel *fontSizeLabel;
    QSlider *fontSize;
    QGroupBox *observingConditionsBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *horizonAltitudeLabel;
    QSlider *horizonAltitudeSlider;
    QHBoxLayout *horizontalLayout_55;
    QLabel *sunAltitudeLabel;
    QSlider *sunAltitudeSlider;
    QGroupBox *displayedFieldsBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *todayCheckBox;
    QCheckBox *acroCosCheckBox;
    QCheckBox *oppositionCheckBox;
    QCheckBox *goodNightsCheckBox;
    QCheckBox *fullMoonCheckBox;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *restoreDefaultsButton;
    QPushButton *saveSettingsButton;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *ObservabilityDialog)
    {
        if (ObservabilityDialog->objectName().isEmpty())
            ObservabilityDialog->setObjectName(QStringLiteral("ObservabilityDialog"));
        ObservabilityDialog->resize(530, 556);
        verticalLayout_2 = new QVBoxLayout(ObservabilityDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        TitleBar = new BarFrame(ObservabilityDialog);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy);
        TitleBar->setMinimumSize(QSize(530, 25));
        TitleBar->setMaximumSize(QSize(530, 25));
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

        tabs = new QTabWidget(ObservabilityDialog);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setDocumentMode(false);
        settingsTab = new QWidget();
        settingsTab->setObjectName(QStringLiteral("settingsTab"));
        verticalLayout = new QVBoxLayout(settingsTab);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fontSettingsBox = new QGroupBox(settingsTab);
        fontSettingsBox->setObjectName(QStringLiteral("fontSettingsBox"));
        gridLayout = new QGridLayout(fontSettingsBox);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        redLabel = new QLabel(fontSettingsBox);
        redLabel->setObjectName(QStringLiteral("redLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(redLabel->sizePolicy().hasHeightForWidth());
        redLabel->setSizePolicy(sizePolicy1);
        redLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(redLabel, 0, 0, 1, 1);

        redSlider = new QSlider(fontSettingsBox);
        redSlider->setObjectName(QStringLiteral("redSlider"));
        redSlider->setMaximumSize(QSize(508, 19));
        redSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(redSlider, 0, 1, 1, 1);

        greenLabel = new QLabel(fontSettingsBox);
        greenLabel->setObjectName(QStringLiteral("greenLabel"));
        greenLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(greenLabel, 1, 0, 1, 1);

        greenSlider = new QSlider(fontSettingsBox);
        greenSlider->setObjectName(QStringLiteral("greenSlider"));
        greenSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(greenSlider, 1, 1, 1, 1);

        blueLabel = new QLabel(fontSettingsBox);
        blueLabel->setObjectName(QStringLiteral("blueLabel"));
        blueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(blueLabel, 2, 0, 1, 1);

        blueSlider = new QSlider(fontSettingsBox);
        blueSlider->setObjectName(QStringLiteral("blueSlider"));
        blueSlider->setMaximum(99);
        blueSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(blueSlider, 2, 1, 1, 1);

        fontSizeLabel = new QLabel(fontSettingsBox);
        fontSizeLabel->setObjectName(QStringLiteral("fontSizeLabel"));
        fontSizeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(fontSizeLabel, 3, 0, 1, 1);

        fontSize = new QSlider(fontSettingsBox);
        fontSize->setObjectName(QStringLiteral("fontSize"));
        fontSize->setMinimum(5);
        fontSize->setMaximum(30);
        fontSize->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(fontSize, 3, 1, 1, 1);


        verticalLayout->addWidget(fontSettingsBox);

        observingConditionsBox = new QGroupBox(settingsTab);
        observingConditionsBox->setObjectName(QStringLiteral("observingConditionsBox"));
        verticalLayout_5 = new QVBoxLayout(observingConditionsBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizonAltitudeLabel = new QLabel(observingConditionsBox);
        horizonAltitudeLabel->setObjectName(QStringLiteral("horizonAltitudeLabel"));
        horizonAltitudeLabel->setText(QStringLiteral("Horizon altitude: 0 deg."));
        horizonAltitudeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(horizonAltitudeLabel);

        horizonAltitudeSlider = new QSlider(observingConditionsBox);
        horizonAltitudeSlider->setObjectName(QStringLiteral("horizonAltitudeSlider"));
        horizonAltitudeSlider->setMaximum(45);
        horizonAltitudeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizonAltitudeSlider, 0, Qt::AlignLeft);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_55 = new QHBoxLayout();
        horizontalLayout_55->setObjectName(QStringLiteral("horizontalLayout_55"));
        sunAltitudeLabel = new QLabel(observingConditionsBox);
        sunAltitudeLabel->setObjectName(QStringLiteral("sunAltitudeLabel"));
        sunAltitudeLabel->setText(QStringLiteral("Sun altitude at twilight: 0 deg."));
        sunAltitudeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_55->addWidget(sunAltitudeLabel);

        sunAltitudeSlider = new QSlider(observingConditionsBox);
        sunAltitudeSlider->setObjectName(QStringLiteral("sunAltitudeSlider"));
        sunAltitudeSlider->setMinimum(-20);
        sunAltitudeSlider->setMaximum(0);
        sunAltitudeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_55->addWidget(sunAltitudeSlider, 0, Qt::AlignLeft);


        verticalLayout_5->addLayout(horizontalLayout_55);


        verticalLayout->addWidget(observingConditionsBox);

        displayedFieldsBox = new QGroupBox(settingsTab);
        displayedFieldsBox->setObjectName(QStringLiteral("displayedFieldsBox"));
        verticalLayout_4 = new QVBoxLayout(displayedFieldsBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        todayCheckBox = new QCheckBox(displayedFieldsBox);
        todayCheckBox->setObjectName(QStringLiteral("todayCheckBox"));

        verticalLayout_4->addWidget(todayCheckBox);

        acroCosCheckBox = new QCheckBox(displayedFieldsBox);
        acroCosCheckBox->setObjectName(QStringLiteral("acroCosCheckBox"));

        verticalLayout_4->addWidget(acroCosCheckBox);

        oppositionCheckBox = new QCheckBox(displayedFieldsBox);
        oppositionCheckBox->setObjectName(QStringLiteral("oppositionCheckBox"));

        verticalLayout_4->addWidget(oppositionCheckBox);

        goodNightsCheckBox = new QCheckBox(displayedFieldsBox);
        goodNightsCheckBox->setObjectName(QStringLiteral("goodNightsCheckBox"));

        verticalLayout_4->addWidget(goodNightsCheckBox);

        fullMoonCheckBox = new QCheckBox(displayedFieldsBox);
        fullMoonCheckBox->setObjectName(QStringLiteral("fullMoonCheckBox"));

        verticalLayout_4->addWidget(fullMoonCheckBox);


        verticalLayout->addWidget(displayedFieldsBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        restoreDefaultsButton = new QPushButton(settingsTab);
        restoreDefaultsButton->setObjectName(QStringLiteral("restoreDefaultsButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(restoreDefaultsButton->sizePolicy().hasHeightForWidth());
        restoreDefaultsButton->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(restoreDefaultsButton);

        saveSettingsButton = new QPushButton(settingsTab);
        saveSettingsButton->setObjectName(QStringLiteral("saveSettingsButton"));
        sizePolicy2.setHeightForWidth(saveSettingsButton->sizePolicy().hasHeightForWidth());
        saveSettingsButton->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(saveSettingsButton);


        verticalLayout->addLayout(horizontalLayout_7);

        tabs->addTab(settingsTab, QString());
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

        QWidget::setTabOrder(tabs, redSlider);
        QWidget::setTabOrder(redSlider, greenSlider);
        QWidget::setTabOrder(greenSlider, blueSlider);
        QWidget::setTabOrder(blueSlider, fontSize);
        QWidget::setTabOrder(fontSize, horizonAltitudeSlider);
        QWidget::setTabOrder(horizonAltitudeSlider, sunAltitudeSlider);
        QWidget::setTabOrder(sunAltitudeSlider, todayCheckBox);
        QWidget::setTabOrder(todayCheckBox, acroCosCheckBox);
        QWidget::setTabOrder(acroCosCheckBox, oppositionCheckBox);
        QWidget::setTabOrder(oppositionCheckBox, goodNightsCheckBox);
        QWidget::setTabOrder(goodNightsCheckBox, fullMoonCheckBox);
        QWidget::setTabOrder(fullMoonCheckBox, saveSettingsButton);
        QWidget::setTabOrder(saveSettingsButton, restoreDefaultsButton);
        QWidget::setTabOrder(restoreDefaultsButton, aboutTextBrowser);

        retranslateUi(ObservabilityDialog);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ObservabilityDialog);
    } // setupUi

    void retranslateUi(QWidget *ObservabilityDialog)
    {
        ObservabilityDialog->setWindowTitle(QApplication::translate("ObservabilityDialog", "Observability Configuration", 0));
        stelWindowTitle->setText(QApplication::translate("ObservabilityDialog", "Observability Plug-in Configuration", 0));
        closeStelWindow->setText(QString());
        fontSettingsBox->setTitle(QApplication::translate("ObservabilityDialog", "Font color and size", 0));
        redLabel->setText(QApplication::translate("ObservabilityDialog", "Red", 0));
        greenLabel->setText(QApplication::translate("ObservabilityDialog", "Green", 0));
        blueLabel->setText(QApplication::translate("ObservabilityDialog", "Blue", 0));
        fontSizeLabel->setText(QApplication::translate("ObservabilityDialog", "Font Size", 0));
        observingConditionsBox->setTitle(QApplication::translate("ObservabilityDialog", "Observing conditions", 0));
        displayedFieldsBox->setTitle(QApplication::translate("ObservabilityDialog", "Showing options", 0));
        todayCheckBox->setText(QApplication::translate("ObservabilityDialog", "Today's ephemeris (rise, set, and transit times)", 0));
        acroCosCheckBox->setText(QApplication::translate("ObservabilityDialog", "Dates of Acronychal/Cosmical/Heliacal rise/set", 0));
        oppositionCheckBox->setText(QApplication::translate("ObservabilityDialog", "Date of largest separation to the Sun", 0));
        goodNightsCheckBox->setText(QApplication::translate("ObservabilityDialog", "Nights with the source above horizon", 0));
        fullMoonCheckBox->setText(QApplication::translate("ObservabilityDialog", "Dates of previous and next Full Moon", 0));
        restoreDefaultsButton->setText(QApplication::translate("ObservabilityDialog", "Restore default settings", 0));
        saveSettingsButton->setText(QApplication::translate("ObservabilityDialog", "Save settings as default", 0));
        tabs->setTabText(tabs->indexOf(settingsTab), QApplication::translate("ObservabilityDialog", "Settings", 0));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("ObservabilityDialog", "About", "tab in plugin windows"));
    } // retranslateUi

};

namespace Ui {
    class ObservabilityDialog: public Ui_ObservabilityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSERVABILITYDIALOG_H
