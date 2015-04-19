/********************************************************************************
** Form generated from reading UI file 'angleMeasureDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANGLEMEASUREDIALOG_H
#define UI_ANGLEMEASUREDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_angleMeasureDialog
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
    QGroupBox *showEquatorial_GroupBox;
    QGridLayout *gridLayout;
    QCheckBox *showPositionAngleCheckBox;
    QGroupBox *showHorizontal_GroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *showPositionAngleHorizontalCheckBox;
    QCheckBox *azAltStartOnSkyCheckBox;
    QCheckBox *azAltEndOnSkyCheckBox;
    QGroupBox *displayBox;
    QGridLayout *gridLayout_3;
    QCheckBox *useDmsFormatCheckBox;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *restoreDefaultsButton;
    QPushButton *saveSettingsButton;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *angleMeasureDialog)
    {
        if (angleMeasureDialog->objectName().isEmpty())
            angleMeasureDialog->setObjectName(QStringLiteral("angleMeasureDialog"));
        angleMeasureDialog->resize(530, 409);
        verticalLayout_2 = new QVBoxLayout(angleMeasureDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(angleMeasureDialog);
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

        tabs = new QTabWidget(angleMeasureDialog);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setDocumentMode(false);
        settingsTab = new QWidget();
        settingsTab->setObjectName(QStringLiteral("settingsTab"));
        verticalLayout_3 = new QVBoxLayout(settingsTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        showEquatorial_GroupBox = new QGroupBox(settingsTab);
        showEquatorial_GroupBox->setObjectName(QStringLiteral("showEquatorial_GroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(showEquatorial_GroupBox->sizePolicy().hasHeightForWidth());
        showEquatorial_GroupBox->setSizePolicy(sizePolicy1);
        showEquatorial_GroupBox->setFlat(true);
        showEquatorial_GroupBox->setCheckable(true);
        gridLayout = new QGridLayout(showEquatorial_GroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        showPositionAngleCheckBox = new QCheckBox(showEquatorial_GroupBox);
        showPositionAngleCheckBox->setObjectName(QStringLiteral("showPositionAngleCheckBox"));
        showPositionAngleCheckBox->setEnabled(true);

        gridLayout->addWidget(showPositionAngleCheckBox, 0, 0, 1, 1);


        verticalLayout_3->addWidget(showEquatorial_GroupBox);

        showHorizontal_GroupBox = new QGroupBox(settingsTab);
        showHorizontal_GroupBox->setObjectName(QStringLiteral("showHorizontal_GroupBox"));
        showHorizontal_GroupBox->setFlat(true);
        showHorizontal_GroupBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(showHorizontal_GroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        showPositionAngleHorizontalCheckBox = new QCheckBox(showHorizontal_GroupBox);
        showPositionAngleHorizontalCheckBox->setObjectName(QStringLiteral("showPositionAngleHorizontalCheckBox"));

        gridLayout_2->addWidget(showPositionAngleHorizontalCheckBox, 0, 0, 1, 1);

        azAltStartOnSkyCheckBox = new QCheckBox(showHorizontal_GroupBox);
        azAltStartOnSkyCheckBox->setObjectName(QStringLiteral("azAltStartOnSkyCheckBox"));

        gridLayout_2->addWidget(azAltStartOnSkyCheckBox, 1, 0, 1, 1);

        azAltEndOnSkyCheckBox = new QCheckBox(showHorizontal_GroupBox);
        azAltEndOnSkyCheckBox->setObjectName(QStringLiteral("azAltEndOnSkyCheckBox"));

        gridLayout_2->addWidget(azAltEndOnSkyCheckBox, 2, 0, 1, 1);


        verticalLayout_3->addWidget(showHorizontal_GroupBox);

        displayBox = new QGroupBox(settingsTab);
        displayBox->setObjectName(QStringLiteral("displayBox"));
        displayBox->setFlat(true);
        gridLayout_3 = new QGridLayout(displayBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        useDmsFormatCheckBox = new QCheckBox(displayBox);
        useDmsFormatCheckBox->setObjectName(QStringLiteral("useDmsFormatCheckBox"));

        gridLayout_3->addWidget(useDmsFormatCheckBox, 0, 0, 1, 1);


        verticalLayout_3->addWidget(displayBox);

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


        retranslateUi(angleMeasureDialog);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(angleMeasureDialog);
    } // setupUi

    void retranslateUi(QWidget *angleMeasureDialog)
    {
        angleMeasureDialog->setWindowTitle(QApplication::translate("angleMeasureDialog", "Pulsars Configuration", 0));
        stelWindowTitle->setText(QApplication::translate("angleMeasureDialog", "Angle Measure Plug-in Configuration", 0));
        closeStelWindow->setText(QString());
        showEquatorial_GroupBox->setTitle(QApplication::translate("angleMeasureDialog", "Show in Equatorial Coordinates", 0));
        showPositionAngleCheckBox->setText(QApplication::translate("angleMeasureDialog", "Display with position angle", 0));
        showHorizontal_GroupBox->setTitle(QApplication::translate("angleMeasureDialog", "Show in Horizontal Coordinates", 0));
#ifndef QT_NO_TOOLTIP
        showPositionAngleHorizontalCheckBox->setToolTip(QApplication::translate("angleMeasureDialog", "(e.g. for Dobson starhopping)", 0));
#endif // QT_NO_TOOLTIP
        showPositionAngleHorizontalCheckBox->setText(QApplication::translate("angleMeasureDialog", "Display with position angle ", 0));
        azAltStartOnSkyCheckBox->setText(QApplication::translate("angleMeasureDialog", "Attach start point to rotating sky", 0));
        azAltEndOnSkyCheckBox->setText(QApplication::translate("angleMeasureDialog", "Attach end point to rotating sky", 0));
        displayBox->setTitle(QApplication::translate("angleMeasureDialog", "Format", 0));
        useDmsFormatCheckBox->setText(QApplication::translate("angleMeasureDialog", "Use dms format for angles", 0));
        restoreDefaultsButton->setText(QApplication::translate("angleMeasureDialog", "Restore default settings", 0));
        saveSettingsButton->setText(QApplication::translate("angleMeasureDialog", "Save settings as default", 0));
        tabs->setTabText(tabs->indexOf(settingsTab), QApplication::translate("angleMeasureDialog", "Angle Measure", 0));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("angleMeasureDialog", "About", "tab in plugin windows"));
    } // retranslateUi

};

namespace Ui {
    class angleMeasureDialog: public Ui_angleMeasureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANGLEMEASUREDIALOG_H
