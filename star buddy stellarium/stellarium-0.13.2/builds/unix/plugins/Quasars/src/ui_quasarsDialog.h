/********************************************************************************
** Form generated from reading UI file 'quasarsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUASARSDIALOG_H
#define UI_QUASARSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_quasarsDialog
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
    QGroupBox *updatesGroup;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *internetUpdatesCheckbox;
    QGridLayout *gridLayout;
    QLabel *lastUpdateLabel;
    QDateTimeEdit *lastUpdateDateTimeEdit;
    QLabel *updateFrequencyLabel;
    QSpinBox *updateFrequencySpinBox;
    QLabel *nextUpdateLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *updateButton;
    QGroupBox *displayBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *displayModeCheckBox;
    QCheckBox *displayAtStartupCheckBox;
    QCheckBox *displayShowQuasarsButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *restoreDefaultsButton;
    QPushButton *saveSettingsButton;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *quasarsDialog)
    {
        if (quasarsDialog->objectName().isEmpty())
            quasarsDialog->setObjectName(QStringLiteral("quasarsDialog"));
        quasarsDialog->resize(529, 457);
        verticalLayout_2 = new QVBoxLayout(quasarsDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        TitleBar = new BarFrame(quasarsDialog);
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

        tabs = new QTabWidget(quasarsDialog);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setDocumentMode(false);
        settingsTab = new QWidget();
        settingsTab->setObjectName(QStringLiteral("settingsTab"));
        verticalLayout_3 = new QVBoxLayout(settingsTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        updatesGroup = new QGroupBox(settingsTab);
        updatesGroup->setObjectName(QStringLiteral("updatesGroup"));
        updatesGroup->setFlat(true);
        updatesGroup->setCheckable(false);
        verticalLayout_12 = new QVBoxLayout(updatesGroup);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        internetUpdatesCheckbox = new QCheckBox(updatesGroup);
        internetUpdatesCheckbox->setObjectName(QStringLiteral("internetUpdatesCheckbox"));

        verticalLayout_12->addWidget(internetUpdatesCheckbox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lastUpdateLabel = new QLabel(updatesGroup);
        lastUpdateLabel->setObjectName(QStringLiteral("lastUpdateLabel"));

        gridLayout->addWidget(lastUpdateLabel, 0, 0, 1, 1);

        lastUpdateDateTimeEdit = new QDateTimeEdit(updatesGroup);
        lastUpdateDateTimeEdit->setObjectName(QStringLiteral("lastUpdateDateTimeEdit"));
        lastUpdateDateTimeEdit->setEnabled(false);
        lastUpdateDateTimeEdit->setFrame(false);
        lastUpdateDateTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(lastUpdateDateTimeEdit, 0, 2, 1, 1);

        updateFrequencyLabel = new QLabel(updatesGroup);
        updateFrequencyLabel->setObjectName(QStringLiteral("updateFrequencyLabel"));

        gridLayout->addWidget(updateFrequencyLabel, 1, 0, 1, 1);

        updateFrequencySpinBox = new QSpinBox(updatesGroup);
        updateFrequencySpinBox->setObjectName(QStringLiteral("updateFrequencySpinBox"));
        updateFrequencySpinBox->setMinimum(1);
        updateFrequencySpinBox->setMaximum(9999);
        updateFrequencySpinBox->setValue(1);

        gridLayout->addWidget(updateFrequencySpinBox, 1, 2, 1, 1);

        nextUpdateLabel = new QLabel(updatesGroup);
        nextUpdateLabel->setObjectName(QStringLiteral("nextUpdateLabel"));

        gridLayout->addWidget(nextUpdateLabel, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        updateButton = new QPushButton(updatesGroup);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        gridLayout->addWidget(updateButton, 2, 2, 1, 1);


        verticalLayout_12->addLayout(gridLayout);


        verticalLayout_3->addWidget(updatesGroup);

        displayBox = new QGroupBox(settingsTab);
        displayBox->setObjectName(QStringLiteral("displayBox"));
        displayBox->setFlat(true);
        verticalLayout = new QVBoxLayout(displayBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        displayModeCheckBox = new QCheckBox(displayBox);
        displayModeCheckBox->setObjectName(QStringLiteral("displayModeCheckBox"));

        verticalLayout->addWidget(displayModeCheckBox);

        displayAtStartupCheckBox = new QCheckBox(displayBox);
        displayAtStartupCheckBox->setObjectName(QStringLiteral("displayAtStartupCheckBox"));

        verticalLayout->addWidget(displayAtStartupCheckBox);

        displayShowQuasarsButton = new QCheckBox(displayBox);
        displayShowQuasarsButton->setObjectName(QStringLiteral("displayShowQuasarsButton"));

        verticalLayout->addWidget(displayShowQuasarsButton);


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


        retranslateUi(quasarsDialog);

        QMetaObject::connectSlotsByName(quasarsDialog);
    } // setupUi

    void retranslateUi(QWidget *quasarsDialog)
    {
        quasarsDialog->setWindowTitle(QApplication::translate("quasarsDialog", "Quasars Configuration", 0));
        stelWindowTitle->setText(QApplication::translate("quasarsDialog", "Quasars Plug-in Configuration", 0));
        closeStelWindow->setText(QString());
        updatesGroup->setTitle(QApplication::translate("quasarsDialog", "Update catalog from Internet", 0));
        internetUpdatesCheckbox->setText(QApplication::translate("quasarsDialog", "Update from Internet sources", 0));
        lastUpdateLabel->setText(QApplication::translate("quasarsDialog", "Last update:", 0));
        updateFrequencyLabel->setText(QApplication::translate("quasarsDialog", "Update frequency (days):", 0));
        nextUpdateLabel->setText(QApplication::translate("quasarsDialog", "[next update info]", 0));
        updateButton->setText(QApplication::translate("quasarsDialog", "Update now", 0));
        displayBox->setTitle(QApplication::translate("quasarsDialog", "Settings for quasars", 0));
#ifndef QT_NO_TOOLTIP
        displayModeCheckBox->setToolTip(QApplication::translate("quasarsDialog", "Plot all quasars without labels", 0));
#endif // QT_NO_TOOLTIP
        displayModeCheckBox->setText(QApplication::translate("quasarsDialog", "Enable display of distribution for quasars", 0));
        displayAtStartupCheckBox->setText(QApplication::translate("quasarsDialog", "Enable display at startup", 0));
        displayShowQuasarsButton->setText(QApplication::translate("quasarsDialog", "Show quasars button on toolbar", 0));
        restoreDefaultsButton->setText(QApplication::translate("quasarsDialog", "Restore default settings", 0));
        saveSettingsButton->setText(QApplication::translate("quasarsDialog", "Save settings as default", 0));
        tabs->setTabText(tabs->indexOf(settingsTab), QApplication::translate("quasarsDialog", "Settings", 0));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("quasarsDialog", "About", "tab in plugin windows"));
    } // retranslateUi

};

namespace Ui {
    class quasarsDialog: public Ui_quasarsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUASARSDIALOG_H
