/********************************************************************************
** Form generated from reading UI file 'fovWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOVWINDOW_H
#define UI_FOVWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_fovWindowForm
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
    QWidget *tabFOV;
    QVBoxLayout *verticalLayoutTimeZone;
    QGroupBox *groupBoxFOV;
    QGridLayout *gridLayoutCurrent;
    QLabel *labelFOV6;
    QDoubleSpinBox *doubleSpinBoxFOV7;
    QLabel *labelFOV8;
    QDoubleSpinBox *doubleSpinBoxFOV6;
    QDoubleSpinBox *doubleSpinBoxFOV4;
    QLabel *labelFOV9;
    QDoubleSpinBox *doubleSpinBoxFOV8;
    QDoubleSpinBox *doubleSpinBoxFOV5;
    QSpacerItem *verticalSpacerTimeZone;
    QDoubleSpinBox *doubleSpinBoxFOV0;
    QPushButton *pushButtonSave;
    QLabel *labelFOV3;
    QDoubleSpinBox *doubleSpinBoxFOV2;
    QLabel *labelFOV0;
    QLabel *labelFOVInfo;
    QLabel *labelFOV5;
    QDoubleSpinBox *doubleSpinBoxFOV9;
    QLabel *labelFOV2;
    QLabel *labelFOV7;
    QLabel *labelFOV4;
    QDoubleSpinBox *doubleSpinBoxFOV1;
    QLabel *labelFOV1;
    QPushButton *pushButtonReset;
    QDoubleSpinBox *doubleSpinBoxFOV3;
    QWidget *tabAbout;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelTitle;
    QLabel *labelVersion;
    QLabel *labelCopyright;
    QLabel *labelLicense;

    void setupUi(QWidget *fovWindowForm)
    {
        if (fovWindowForm->objectName().isEmpty())
            fovWindowForm->setObjectName(QStringLiteral("fovWindowForm"));
        fovWindowForm->resize(483, 458);
        verticalLayout = new QVBoxLayout(fovWindowForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(fovWindowForm);
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

        tabWidget = new QTabWidget(fovWindowForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabFOV = new QWidget();
        tabFOV->setObjectName(QStringLiteral("tabFOV"));
        verticalLayoutTimeZone = new QVBoxLayout(tabFOV);
        verticalLayoutTimeZone->setSpacing(0);
        verticalLayoutTimeZone->setObjectName(QStringLiteral("verticalLayoutTimeZone"));
        verticalLayoutTimeZone->setContentsMargins(0, 0, 0, 0);
        groupBoxFOV = new QGroupBox(tabFOV);
        groupBoxFOV->setObjectName(QStringLiteral("groupBoxFOV"));
        groupBoxFOV->setMinimumSize(QSize(0, 400));
        groupBoxFOV->setAlignment(Qt::AlignCenter);
        gridLayoutCurrent = new QGridLayout(groupBoxFOV);
        gridLayoutCurrent->setObjectName(QStringLiteral("gridLayoutCurrent"));
        gridLayoutCurrent->setVerticalSpacing(8);
        gridLayoutCurrent->setContentsMargins(0, 0, 0, 0);
        labelFOV6 = new QLabel(groupBoxFOV);
        labelFOV6->setObjectName(QStringLiteral("labelFOV6"));
        labelFOV6->setText(QStringLiteral("Ctrl+Alt+6"));

        gridLayoutCurrent->addWidget(labelFOV6, 1, 2, 1, 1, Qt::AlignRight);

        doubleSpinBoxFOV7 = new QDoubleSpinBox(groupBoxFOV);
        doubleSpinBoxFOV7->setObjectName(QStringLiteral("doubleSpinBoxFOV7"));
        doubleSpinBoxFOV7->setDecimals(1);
        doubleSpinBoxFOV7->setMaximum(360);
        doubleSpinBoxFOV7->setSingleStep(0.1);
        doubleSpinBoxFOV7->setValue(5);

        gridLayoutCurrent->addWidget(doubleSpinBoxFOV7, 2, 3, 1, 1);

        labelFOV8 = new QLabel(groupBoxFOV);
        labelFOV8->setObjectName(QStringLiteral("labelFOV8"));
        labelFOV8->setText(QStringLiteral("Ctrl+Alt+8"));

        gridLayoutCurrent->addWidget(labelFOV8, 3, 2, 1, 1, Qt::AlignRight);

        doubleSpinBoxFOV6 = new QDoubleSpinBox(groupBoxFOV);
        doubleSpinBoxFOV6->setObjectName(QStringLiteral("doubleSpinBoxFOV6"));
        doubleSpinBoxFOV6->setDecimals(1);
        doubleSpinBoxFOV6->setMaximum(360);
        doubleSpinBoxFOV6->setSingleStep(0.1);
        doubleSpinBoxFOV6->setValue(10);

        gridLayoutCurrent->addWidget(doubleSpinBoxFOV6, 1, 3, 1, 1);

        doubleSpinBoxFOV4 = new QDoubleSpinBox(groupBoxFOV);
        doubleSpinBoxFOV4->setObjectName(QStringLiteral("doubleSpinBoxFOV4"));
        doubleSpinBoxFOV4->setDecimals(1);
        doubleSpinBoxFOV4->setMaximum(360);
        doubleSpinBoxFOV4->setSingleStep(0.1);
        doubleSpinBoxFOV4->setValue(45);

        gridLayoutCurrent->addWidget(doubleSpinBoxFOV4, 4, 1, 1, 1);

        labelFOV9 = new QLabel(groupBoxFOV);
        labelFOV9->setObjectName(QStringLiteral("labelFOV9"));
        labelFOV9->setText(QStringLiteral("Ctrl+Alt+9"));

        gridLayoutCurrent->addWidget(labelFOV9, 4, 2, 1, 1, Qt::AlignRight);

        doubleSpinBoxFOV8 = new QDoubleSpinBox(groupBoxFOV);
        doubleSpinBoxFOV8->setObjectName(QStringLiteral("doubleSpinBoxFOV8"));
        doubleSpinBoxFOV8->setDecimals(1);
        doubleSpinBoxFOV8->setMaximum(360);
        doubleSpinBoxFOV8->setSingleStep(0.1);
        doubleSpinBoxFOV8->setValue(2);

        gridLayoutCurrent->addWidget(doubleSpinBoxFOV8, 3, 3, 1, 1);

        doubleSpinBoxFOV5 = new QDoubleSpinBox(groupBoxFOV);
        doubleSpinBoxFOV5->setObjectName(QStringLiteral("doubleSpinBoxFOV5"));
        doubleSpinBoxFOV5->setDecimals(1);
        doubleSpinBoxFOV5->setMaximum(360);
        doubleSpinBoxFOV5->setSingleStep(0.1);
        doubleSpinBoxFOV5->setValue(20);

        gridLayoutCurrent->addWidget(doubleSpinBoxFOV5, 5, 1, 1, 1);

        verticalSpacerTimeZone = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutCurrent->addItem(verticalSpacerTimeZone, 11, 0, 1, 4);

        doubleSpinBoxFOV0 = new QDoubleSpinBox(groupBoxFOV);
        doubleSpinBoxFOV0->setObjectName(QStringLiteral("doubleSpinBoxFOV0"));
        doubleSpinBoxFOV0->setDecimals(1);
        doubleSpinBoxFOV0->setMaximum(360);
        doubleSpinBoxFOV0->setSingleStep(0.1);
        doubleSpinBoxFOV0->setValue(0.5);

        gridLayoutCurrent->addWidget(doubleSpinBoxFOV0, 5, 3, 1, 1);

        pushButtonSave = new QPushButton(groupBoxFOV);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        gridLayoutCurrent->addWidget(pushButtonSave, 10, 0, 1, 2);

        labelFOV3 = new QLabel(groupBoxFOV);
        labelFOV3->setObjectName(QStringLiteral("labelFOV3"));
        labelFOV3->setText(QStringLiteral("Ctrl+Alt+3"));

        gridLayoutCurrent->addWidget(labelFOV3, 3, 0, 1, 1, Qt::AlignRight);

        doubleSpinBoxFOV2 = new QDoubleSpinBox(groupBoxFOV);
        doubleSpinBoxFOV2->setObjectName(QStringLiteral("doubleSpinBoxFOV2"));
        doubleSpinBoxFOV2->setDecimals(1);
        doubleSpinBoxFOV2->setMaximum(360);
        doubleSpinBoxFOV2->setSingleStep(0.1);
        doubleSpinBoxFOV2->setValue(180);

        gridLayoutCurrent->addWidget(doubleSpinBoxFOV2, 2, 1, 1, 1);

        labelFOV0 = new QLabel(groupBoxFOV);
        labelFOV0->setObjectName(QStringLiteral("labelFOV0"));
        labelFOV0->setText(QStringLiteral("Ctrl+Alt+0"));

        gridLayoutCurrent->addWidget(labelFOV0, 5, 2, 1, 1, Qt::AlignRight);

        labelFOVInfo = new QLabel(groupBoxFOV);
        labelFOVInfo->setObjectName(QStringLiteral("labelFOVInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelFOVInfo->sizePolicy().hasHeightForWidth());
        labelFOVInfo->setSizePolicy(sizePolicy1);
        labelFOVInfo->setTextFormat(Qt::RichText);
        labelFOVInfo->setWordWrap(true);
        labelFOVInfo->setMargin(0);
        labelFOVInfo->setIndent(1);
        labelFOVInfo->setOpenExternalLinks(true);

        gridLayoutCurrent->addWidget(labelFOVInfo, 0, 0, 1, 4);

        labelFOV5 = new QLabel(groupBoxFOV);
        labelFOV5->setObjectName(QStringLiteral("labelFOV5"));
        labelFOV5->setText(QStringLiteral("Ctrl+Alt+5"));

        gridLayoutCurrent->addWidget(labelFOV5, 5, 0, 1, 1, Qt::AlignRight);

        doubleSpinBoxFOV9 = new QDoubleSpinBox(groupBoxFOV);
        doubleSpinBoxFOV9->setObjectName(QStringLiteral("doubleSpinBoxFOV9"));
        doubleSpinBoxFOV9->setDecimals(1);
        doubleSpinBoxFOV9->setMaximum(360);
        doubleSpinBoxFOV9->setSingleStep(0.1);
        doubleSpinBoxFOV9->setValue(1);

        gridLayoutCurrent->addWidget(doubleSpinBoxFOV9, 4, 3, 1, 1);

        labelFOV2 = new QLabel(groupBoxFOV);
        labelFOV2->setObjectName(QStringLiteral("labelFOV2"));
        labelFOV2->setText(QStringLiteral("Ctrl+Alt+2"));

        gridLayoutCurrent->addWidget(labelFOV2, 2, 0, 1, 1, Qt::AlignRight);

        labelFOV7 = new QLabel(groupBoxFOV);
        labelFOV7->setObjectName(QStringLiteral("labelFOV7"));
        labelFOV7->setText(QStringLiteral("Ctrl+Alt+7"));

        gridLayoutCurrent->addWidget(labelFOV7, 2, 2, 1, 1, Qt::AlignRight);

        labelFOV4 = new QLabel(groupBoxFOV);
        labelFOV4->setObjectName(QStringLiteral("labelFOV4"));
        labelFOV4->setText(QStringLiteral("Ctrl+Alt+4"));

        gridLayoutCurrent->addWidget(labelFOV4, 4, 0, 1, 1, Qt::AlignRight);

        doubleSpinBoxFOV1 = new QDoubleSpinBox(groupBoxFOV);
        doubleSpinBoxFOV1->setObjectName(QStringLiteral("doubleSpinBoxFOV1"));
        doubleSpinBoxFOV1->setWrapping(true);
        doubleSpinBoxFOV1->setDecimals(1);
        doubleSpinBoxFOV1->setMinimum(0);
        doubleSpinBoxFOV1->setMaximum(360);
        doubleSpinBoxFOV1->setSingleStep(0.1);
        doubleSpinBoxFOV1->setValue(310);

        gridLayoutCurrent->addWidget(doubleSpinBoxFOV1, 1, 1, 1, 1);

        labelFOV1 = new QLabel(groupBoxFOV);
        labelFOV1->setObjectName(QStringLiteral("labelFOV1"));
        labelFOV1->setText(QStringLiteral("Ctrl+Alt+1"));

        gridLayoutCurrent->addWidget(labelFOV1, 1, 0, 1, 1, Qt::AlignRight);

        pushButtonReset = new QPushButton(groupBoxFOV);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));

        gridLayoutCurrent->addWidget(pushButtonReset, 10, 2, 1, 2);

        doubleSpinBoxFOV3 = new QDoubleSpinBox(groupBoxFOV);
        doubleSpinBoxFOV3->setObjectName(QStringLiteral("doubleSpinBoxFOV3"));
        doubleSpinBoxFOV3->setDecimals(1);
        doubleSpinBoxFOV3->setMaximum(360);
        doubleSpinBoxFOV3->setSingleStep(0.1);
        doubleSpinBoxFOV3->setValue(90);

        gridLayoutCurrent->addWidget(doubleSpinBoxFOV3, 3, 1, 1, 1);


        verticalLayoutTimeZone->addWidget(groupBoxFOV);

        tabWidget->addTab(tabFOV, QString());
        tabAbout = new QWidget();
        tabAbout->setObjectName(QStringLiteral("tabAbout"));
        verticalLayout_3 = new QVBoxLayout(tabAbout);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelTitle = new QLabel(tabAbout);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("QLabel {\n"
"	font: bold 18pt ;\n"
"}"));
        labelTitle->setText(QStringLiteral("Field of View plug-in"));

        verticalLayout_3->addWidget(labelTitle);

        labelVersion = new QLabel(tabAbout);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));
        labelVersion->setText(QStringLiteral("Version %1"));

        verticalLayout_3->addWidget(labelVersion);

        labelCopyright = new QLabel(tabAbout);
        labelCopyright->setObjectName(QStringLiteral("labelCopyright"));
        labelCopyright->setText(QStringLiteral("Copyright &copy; 2014 Alexander Wolf"));
        labelCopyright->setTextFormat(Qt::RichText);

        verticalLayout_3->addWidget(labelCopyright);

        labelLicense = new QLabel(tabAbout);
        labelLicense->setObjectName(QStringLiteral("labelLicense"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelLicense->sizePolicy().hasHeightForWidth());
        labelLicense->setSizePolicy(sizePolicy2);
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

        QWidget::setTabOrder(tabWidget, doubleSpinBoxFOV1);
        QWidget::setTabOrder(doubleSpinBoxFOV1, pushButtonSave);

        retranslateUi(fovWindowForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(fovWindowForm);
    } // setupUi

    void retranslateUi(QWidget *fovWindowForm)
    {
        stelWindowTitle->setText(QApplication::translate("fovWindowForm", "Field of View", 0));
        closeStelWindow->setText(QString());
        groupBoxFOV->setTitle(QApplication::translate("fovWindowForm", "Field of View", 0));
        pushButtonSave->setText(QApplication::translate("fovWindowForm", "Save settings", 0));
        labelFOVInfo->setText(QApplication::translate("fovWindowForm", "By default Stellarium uses smooth zooming via mouse wheel or keyboard shortcuts. Some users want stepwise zooming to fixed values for field of view like in Cartes du Ciel planetarium, and this plugin provides this feature. You can edit values and use the keyboard for quick-setting of FOV. All values in degrees.", 0));
#ifndef QT_NO_TOOLTIP
        labelFOV1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelFOV1->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelFOV1->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelFOV1->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelFOV1->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        pushButtonReset->setText(QApplication::translate("fovWindowForm", "Restore defaults", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabFOV), QApplication::translate("fovWindowForm", "Field of View", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QApplication::translate("fovWindowForm", "About", "tab in plugin windows"));
        Q_UNUSED(fovWindowForm);
    } // retranslateUi

};

namespace Ui {
    class fovWindowForm: public Ui_fovWindowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOVWINDOW_H
