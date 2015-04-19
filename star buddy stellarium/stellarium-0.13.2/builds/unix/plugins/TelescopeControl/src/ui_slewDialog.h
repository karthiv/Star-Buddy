/********************************************************************************
** Form generated from reading UI file 'slewDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLEWDIALOG_H
#define UI_SLEWDIALOG_H

#include <AngleSpinBox.hpp>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_slewDialog
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QLabel *labelNoTelescopes;
    QGroupBox *groupBoxSlew;
    QVBoxLayout *verticalLayout_2;
    QFrame *frameCoordinates;
    QGridLayout *gridLayout;
    QLabel *labelRA;
    QLabel *labelDec;
    AngleSpinBox *spinBoxDec;
    AngleSpinBox *spinBoxRA;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonCurrent;
    QPushButton *pushButtonCenter;
    QFrame *frameFormat;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonHMS;
    QRadioButton *radioButtonDMS;
    QRadioButton *radioButtonDecimal;
    QFrame *frameTelescope;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBoxTelescope;
    QPushButton *pushButtonSlew;
    QPushButton *pushButtonConfigure;

    void setupUi(QWidget *slewDialog)
    {
        if (slewDialog->objectName().isEmpty())
            slewDialog->setObjectName(QStringLiteral("slewDialog"));
        slewDialog->resize(440, 352);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(slewDialog->sizePolicy().hasHeightForWidth());
        slewDialog->setSizePolicy(sizePolicy);
        slewDialog->setMinimumSize(QSize(400, 0));
        verticalLayout = new QVBoxLayout(slewDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(slewDialog);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy1);
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

        labelNoTelescopes = new QLabel(slewDialog);
        labelNoTelescopes->setObjectName(QStringLiteral("labelNoTelescopes"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelNoTelescopes->sizePolicy().hasHeightForWidth());
        labelNoTelescopes->setSizePolicy(sizePolicy2);
        labelNoTelescopes->setAlignment(Qt::AlignCenter);
        labelNoTelescopes->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(labelNoTelescopes);

        groupBoxSlew = new QGroupBox(slewDialog);
        groupBoxSlew->setObjectName(QStringLiteral("groupBoxSlew"));
        sizePolicy1.setHeightForWidth(groupBoxSlew->sizePolicy().hasHeightForWidth());
        groupBoxSlew->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBoxSlew);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frameCoordinates = new QFrame(groupBoxSlew);
        frameCoordinates->setObjectName(QStringLiteral("frameCoordinates"));
        sizePolicy1.setHeightForWidth(frameCoordinates->sizePolicy().hasHeightForWidth());
        frameCoordinates->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(frameCoordinates);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelRA = new QLabel(frameCoordinates);
        labelRA->setObjectName(QStringLiteral("labelRA"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelRA->sizePolicy().hasHeightForWidth());
        labelRA->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(labelRA, 0, 0, 1, 1);

        labelDec = new QLabel(frameCoordinates);
        labelDec->setObjectName(QStringLiteral("labelDec"));
        sizePolicy3.setHeightForWidth(labelDec->sizePolicy().hasHeightForWidth());
        labelDec->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(labelDec, 1, 0, 1, 1);

        spinBoxDec = new AngleSpinBox(frameCoordinates);
        spinBoxDec->setObjectName(QStringLiteral("spinBoxDec"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinBoxDec->sizePolicy().hasHeightForWidth());
        spinBoxDec->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(spinBoxDec, 1, 2, 1, 1);

        spinBoxRA = new AngleSpinBox(frameCoordinates);
        spinBoxRA->setObjectName(QStringLiteral("spinBoxRA"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(spinBoxRA->sizePolicy().hasHeightForWidth());
        spinBoxRA->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(spinBoxRA, 0, 2, 1, 1);


        verticalLayout_2->addWidget(frameCoordinates);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonCurrent = new QPushButton(groupBoxSlew);
        pushButtonCurrent->setObjectName(QStringLiteral("pushButtonCurrent"));

        horizontalLayout_3->addWidget(pushButtonCurrent);

        pushButtonCenter = new QPushButton(groupBoxSlew);
        pushButtonCenter->setObjectName(QStringLiteral("pushButtonCenter"));

        horizontalLayout_3->addWidget(pushButtonCenter);


        verticalLayout_2->addLayout(horizontalLayout_3);

        frameFormat = new QFrame(groupBoxSlew);
        frameFormat->setObjectName(QStringLiteral("frameFormat"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frameFormat->sizePolicy().hasHeightForWidth());
        frameFormat->setSizePolicy(sizePolicy6);
        frameFormat->setFrameShape(QFrame::NoFrame);
        frameFormat->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frameFormat);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonHMS = new QRadioButton(frameFormat);
        radioButtonHMS->setObjectName(QStringLiteral("radioButtonHMS"));

        horizontalLayout->addWidget(radioButtonHMS);

        radioButtonDMS = new QRadioButton(frameFormat);
        radioButtonDMS->setObjectName(QStringLiteral("radioButtonDMS"));

        horizontalLayout->addWidget(radioButtonDMS);

        radioButtonDecimal = new QRadioButton(frameFormat);
        radioButtonDecimal->setObjectName(QStringLiteral("radioButtonDecimal"));

        horizontalLayout->addWidget(radioButtonDecimal);


        verticalLayout_2->addWidget(frameFormat);

        frameTelescope = new QFrame(groupBoxSlew);
        frameTelescope->setObjectName(QStringLiteral("frameTelescope"));
        sizePolicy6.setHeightForWidth(frameTelescope->sizePolicy().hasHeightForWidth());
        frameTelescope->setSizePolicy(sizePolicy6);
        verticalLayout_3 = new QVBoxLayout(frameTelescope);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBoxTelescope = new QComboBox(frameTelescope);
        comboBoxTelescope->setObjectName(QStringLiteral("comboBoxTelescope"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(comboBoxTelescope->sizePolicy().hasHeightForWidth());
        comboBoxTelescope->setSizePolicy(sizePolicy7);
        comboBoxTelescope->setInsertPolicy(QComboBox::InsertAlphabetically);

        verticalLayout_3->addWidget(comboBoxTelescope);

        pushButtonSlew = new QPushButton(frameTelescope);
        pushButtonSlew->setObjectName(QStringLiteral("pushButtonSlew"));
        pushButtonSlew->setMinimumSize(QSize(50, 48));
        pushButtonSlew->setDefault(true);

        verticalLayout_3->addWidget(pushButtonSlew);


        verticalLayout_2->addWidget(frameTelescope);


        verticalLayout->addWidget(groupBoxSlew);

        pushButtonConfigure = new QPushButton(slewDialog);
        pushButtonConfigure->setObjectName(QStringLiteral("pushButtonConfigure"));
        sizePolicy5.setHeightForWidth(pushButtonConfigure->sizePolicy().hasHeightForWidth());
        pushButtonConfigure->setSizePolicy(sizePolicy5);
        pushButtonConfigure->setMinimumSize(QSize(0, 34));
        pushButtonConfigure->setStyleSheet(QLatin1String("margin-left:10px;\n"
"margin-right:10px;\n"
"margin-bottom:10px;"));

        verticalLayout->addWidget(pushButtonConfigure);

#ifndef QT_NO_SHORTCUT
        labelRA->setBuddy(spinBoxRA);
        labelDec->setBuddy(spinBoxDec);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(spinBoxRA, spinBoxDec);
        QWidget::setTabOrder(spinBoxDec, radioButtonHMS);
        QWidget::setTabOrder(radioButtonHMS, radioButtonDMS);
        QWidget::setTabOrder(radioButtonDMS, radioButtonDecimal);
        QWidget::setTabOrder(radioButtonDecimal, comboBoxTelescope);
        QWidget::setTabOrder(comboBoxTelescope, pushButtonSlew);
        QWidget::setTabOrder(pushButtonSlew, pushButtonConfigure);

        retranslateUi(slewDialog);

        QMetaObject::connectSlotsByName(slewDialog);
    } // setupUi

    void retranslateUi(QWidget *slewDialog)
    {
        stelWindowTitle->setText(QApplication::translate("slewDialog", "Slew telescope to", 0));
        closeStelWindow->setText(QString());
        labelNoTelescopes->setText(QApplication::translate("slewDialog", "There are no active devices.", 0));
        groupBoxSlew->setTitle(QApplication::translate("slewDialog", "Slew telescope to coordinates", 0));
        labelRA->setText(QApplication::translate("slewDialog", "&Right Ascension (J2000):", 0));
        labelDec->setText(QApplication::translate("slewDialog", "De&clination (J2000):", 0));
        pushButtonCurrent->setText(QApplication::translate("slewDialog", "&Current object", 0));
        pushButtonCenter->setText(QApplication::translate("slewDialog", "Center of the screen", 0));
#ifndef QT_NO_TOOLTIP
        radioButtonHMS->setToolTip(QApplication::translate("slewDialog", "Hours-minutes-seconds format", 0));
#endif // QT_NO_TOOLTIP
        radioButtonHMS->setText(QApplication::translate("slewDialog", "&HMS", 0));
#ifndef QT_NO_TOOLTIP
        radioButtonDMS->setToolTip(QApplication::translate("slewDialog", "Degrees-minutes-seconds format", 0));
#endif // QT_NO_TOOLTIP
        radioButtonDMS->setText(QApplication::translate("slewDialog", "&DMS", 0));
#ifndef QT_NO_TOOLTIP
        radioButtonDecimal->setToolTip(QApplication::translate("slewDialog", "Decimal degrees", 0));
#endif // QT_NO_TOOLTIP
        radioButtonDecimal->setText(QApplication::translate("slewDialog", "D&ecimal", 0));
        pushButtonSlew->setText(QApplication::translate("slewDialog", "&Slew", 0));
        pushButtonConfigure->setText(QApplication::translate("slewDialog", "Configure &telescopes...", 0));
        Q_UNUSED(slewDialog);
    } // retranslateUi

};

namespace Ui {
    class slewDialog: public Ui_slewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLEWDIALOG_H
