/********************************************************************************
** Form generated from reading UI file 'equationOfTimeWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUATIONOFTIMEWINDOW_H
#define UI_EQUATIONOFTIMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_equationOfTimeWindowForm
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
    QWidget *tabEquationOfTime;
    QVBoxLayout *verticalLayoutTimeZone;
    QGroupBox *groupBoxEOT;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelEOTDescription;
    QFrame *line;
    QCheckBox *checkBoxEnableAtStartup;
    QCheckBox *checkBoxShowButton;
    QCheckBox *checkBoxMsFormat;
    QCheckBox *checkBoxInvertedValue;
    QHBoxLayout *horizontalLayout;
    QLabel *labelFontSize;
    QSpinBox *spinBoxFontSize;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonReset;
    QSpacerItem *verticalSpacerTimeZone;
    QWidget *tabAbout;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelTitle;
    QLabel *labelVersion;
    QLabel *labelCopyright;
    QLabel *labelLicense;

    void setupUi(QWidget *equationOfTimeWindowForm)
    {
        if (equationOfTimeWindowForm->objectName().isEmpty())
            equationOfTimeWindowForm->setObjectName(QStringLiteral("equationOfTimeWindowForm"));
        equationOfTimeWindowForm->resize(486, 461);
        verticalLayout = new QVBoxLayout(equationOfTimeWindowForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(equationOfTimeWindowForm);
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

        tabWidget = new QTabWidget(equationOfTimeWindowForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabEquationOfTime = new QWidget();
        tabEquationOfTime->setObjectName(QStringLiteral("tabEquationOfTime"));
        verticalLayoutTimeZone = new QVBoxLayout(tabEquationOfTime);
        verticalLayoutTimeZone->setSpacing(0);
        verticalLayoutTimeZone->setObjectName(QStringLiteral("verticalLayoutTimeZone"));
        verticalLayoutTimeZone->setContentsMargins(0, 0, 0, 0);
        groupBoxEOT = new QGroupBox(tabEquationOfTime);
        groupBoxEOT->setObjectName(QStringLiteral("groupBoxEOT"));
        groupBoxEOT->setMinimumSize(QSize(0, 400));
        groupBoxEOT->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBoxEOT);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelEOTDescription = new QLabel(groupBoxEOT);
        labelEOTDescription->setObjectName(QStringLiteral("labelEOTDescription"));
        labelEOTDescription->setWordWrap(true);

        verticalLayout_2->addWidget(labelEOTDescription);

        line = new QFrame(groupBoxEOT);
        line->setObjectName(QStringLiteral("line"));
        line->setBaseSize(QSize(0, 1));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(1);
        line->setMidLineWidth(1);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line);

        checkBoxEnableAtStartup = new QCheckBox(groupBoxEOT);
        checkBoxEnableAtStartup->setObjectName(QStringLiteral("checkBoxEnableAtStartup"));

        verticalLayout_2->addWidget(checkBoxEnableAtStartup);

        checkBoxShowButton = new QCheckBox(groupBoxEOT);
        checkBoxShowButton->setObjectName(QStringLiteral("checkBoxShowButton"));

        verticalLayout_2->addWidget(checkBoxShowButton);

        checkBoxMsFormat = new QCheckBox(groupBoxEOT);
        checkBoxMsFormat->setObjectName(QStringLiteral("checkBoxMsFormat"));

        verticalLayout_2->addWidget(checkBoxMsFormat);

        checkBoxInvertedValue = new QCheckBox(groupBoxEOT);
        checkBoxInvertedValue->setObjectName(QStringLiteral("checkBoxInvertedValue"));

        verticalLayout_2->addWidget(checkBoxInvertedValue);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelFontSize = new QLabel(groupBoxEOT);
        labelFontSize->setObjectName(QStringLiteral("labelFontSize"));

        horizontalLayout->addWidget(labelFontSize);

        spinBoxFontSize = new QSpinBox(groupBoxEOT);
        spinBoxFontSize->setObjectName(QStringLiteral("spinBoxFontSize"));
        spinBoxFontSize->setMinimum(10);
        spinBoxFontSize->setMaximum(50);
        spinBoxFontSize->setValue(20);

        horizontalLayout->addWidget(spinBoxFontSize);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonSave = new QPushButton(groupBoxEOT);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        horizontalLayout_2->addWidget(pushButtonSave);

        pushButtonReset = new QPushButton(groupBoxEOT);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));

        horizontalLayout_2->addWidget(pushButtonReset);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacerTimeZone = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacerTimeZone);


        verticalLayoutTimeZone->addWidget(groupBoxEOT);

        tabWidget->addTab(tabEquationOfTime, QString());
        tabAbout = new QWidget();
        tabAbout->setObjectName(QStringLiteral("tabAbout"));
        verticalLayout_3 = new QVBoxLayout(tabAbout);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelTitle = new QLabel(tabAbout);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("QLabel {\n"
"	font: bold 18pt ;\n"
"}"));
        labelTitle->setText(QStringLiteral("Equation of Time plug-in"));

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


        retranslateUi(equationOfTimeWindowForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(equationOfTimeWindowForm);
    } // setupUi

    void retranslateUi(QWidget *equationOfTimeWindowForm)
    {
        stelWindowTitle->setText(QApplication::translate("equationOfTimeWindowForm", "Equation of Time", 0));
        closeStelWindow->setText(QString());
        groupBoxEOT->setTitle(QApplication::translate("equationOfTimeWindowForm", "Equation of Time", 0));
        labelEOTDescription->setText(QApplication::translate("equationOfTimeWindowForm", "The equation of time describes the discrepancy between two kinds of solar time. These are apparent solar time, which directly tracks the motion of the sun, and mean solar time, which tracks a fictitious \"mean\" sun with noons 24 hours apart. There is no universally accepted definition of the sign of the equation of time. Some publications show it as positive when a sundial is ahead of a clock; others when the clock is ahead of the sundial. In the English-speaking world, the former usage is the more common, but is not always followed. Anyone who makes use of a published table or graph should first check its sign usage.", 0));
        checkBoxEnableAtStartup->setText(QApplication::translate("equationOfTimeWindowForm", "Enable display at startup", 0));
        checkBoxShowButton->setText(QApplication::translate("equationOfTimeWindowForm", "Show plug-ins button on toolbar", 0));
        checkBoxMsFormat->setText(QApplication::translate("equationOfTimeWindowForm", "Use minutes and seconds", 0));
        checkBoxInvertedValue->setText(QApplication::translate("equationOfTimeWindowForm", "Change sign of equation", 0));
        labelFontSize->setText(QApplication::translate("equationOfTimeWindowForm", "Font size:", 0));
        pushButtonSave->setText(QApplication::translate("equationOfTimeWindowForm", "Save settings", 0));
        pushButtonReset->setText(QApplication::translate("equationOfTimeWindowForm", "Restore defaults", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabEquationOfTime), QApplication::translate("equationOfTimeWindowForm", "Equation of Time", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QApplication::translate("equationOfTimeWindowForm", "About", "tab in plugin windows"));
        Q_UNUSED(equationOfTimeWindowForm);
    } // retranslateUi

};

namespace Ui {
    class equationOfTimeWindowForm: public Ui_equationOfTimeWindowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUATIONOFTIMEWINDOW_H
