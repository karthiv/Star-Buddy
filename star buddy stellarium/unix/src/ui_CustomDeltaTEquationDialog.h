/********************************************************************************
** Form generated from reading UI file 'CustomDeltaTEquationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMDELTATEQUATIONDIALOG_H
#define UI_CUSTOMDELTATEQUATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_CustomDeltaTEquationDialogForm
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QGroupBox *customDeltaTEquationGroupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelDescription;
    QLabel *labelEquation;
    QLabel *labelSubEquation;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCoefficientA;
    QLineEdit *lineEditCoefficientA;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelCoefficientB;
    QLineEdit *lineEditCoefficientB;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelCoefficientC;
    QLineEdit *lineEditCoefficientC;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelYear;
    QLineEdit *lineEditYear;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelNDot;
    QLineEdit *lineEditNDot;

    void setupUi(QWidget *CustomDeltaTEquationDialogForm)
    {
        if (CustomDeltaTEquationDialogForm->objectName().isEmpty())
            CustomDeltaTEquationDialogForm->setObjectName(QStringLiteral("CustomDeltaTEquationDialogForm"));
        CustomDeltaTEquationDialogForm->resize(168, 261);
        verticalLayout = new QVBoxLayout(CustomDeltaTEquationDialogForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        TitleBar = new BarFrame(CustomDeltaTEquationDialogForm);
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


        verticalLayout->addWidget(TitleBar);

        customDeltaTEquationGroupBox = new QGroupBox(CustomDeltaTEquationDialogForm);
        customDeltaTEquationGroupBox->setObjectName(QStringLiteral("customDeltaTEquationGroupBox"));
        customDeltaTEquationGroupBox->setAlignment(Qt::AlignCenter);
        verticalLayout_3 = new QVBoxLayout(customDeltaTEquationGroupBox);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelDescription = new QLabel(customDeltaTEquationGroupBox);
        labelDescription->setObjectName(QStringLiteral("labelDescription"));
        labelDescription->setText(QStringLiteral("description"));

        verticalLayout_3->addWidget(labelDescription);

        labelEquation = new QLabel(customDeltaTEquationGroupBox);
        labelEquation->setObjectName(QStringLiteral("labelEquation"));
        labelEquation->setText(QStringLiteral("equation"));
        labelEquation->setTextFormat(Qt::RichText);
        labelEquation->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelEquation);

        labelSubEquation = new QLabel(customDeltaTEquationGroupBox);
        labelSubEquation->setObjectName(QStringLiteral("labelSubEquation"));
        labelSubEquation->setText(QStringLiteral("subequation"));

        verticalLayout_3->addWidget(labelSubEquation);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelCoefficientA = new QLabel(customDeltaTEquationGroupBox);
        labelCoefficientA->setObjectName(QStringLiteral("labelCoefficientA"));
        labelCoefficientA->setText(QStringLiteral("a:"));

        horizontalLayout->addWidget(labelCoefficientA);

        lineEditCoefficientA = new QLineEdit(customDeltaTEquationGroupBox);
        lineEditCoefficientA->setObjectName(QStringLiteral("lineEditCoefficientA"));
        lineEditCoefficientA->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lineEditCoefficientA);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelCoefficientB = new QLabel(customDeltaTEquationGroupBox);
        labelCoefficientB->setObjectName(QStringLiteral("labelCoefficientB"));
        labelCoefficientB->setText(QStringLiteral("b:"));

        horizontalLayout_2->addWidget(labelCoefficientB);

        lineEditCoefficientB = new QLineEdit(customDeltaTEquationGroupBox);
        lineEditCoefficientB->setObjectName(QStringLiteral("lineEditCoefficientB"));
        lineEditCoefficientB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lineEditCoefficientB);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelCoefficientC = new QLabel(customDeltaTEquationGroupBox);
        labelCoefficientC->setObjectName(QStringLiteral("labelCoefficientC"));
        labelCoefficientC->setText(QStringLiteral("c:"));

        horizontalLayout_4->addWidget(labelCoefficientC);

        lineEditCoefficientC = new QLineEdit(customDeltaTEquationGroupBox);
        lineEditCoefficientC->setObjectName(QStringLiteral("lineEditCoefficientC"));
        lineEditCoefficientC->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lineEditCoefficientC);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelYear = new QLabel(customDeltaTEquationGroupBox);
        labelYear->setObjectName(QStringLiteral("labelYear"));
        labelYear->setText(QStringLiteral("y:"));

        horizontalLayout_5->addWidget(labelYear);

        lineEditYear = new QLineEdit(customDeltaTEquationGroupBox);
        lineEditYear->setObjectName(QStringLiteral("lineEditYear"));
        lineEditYear->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lineEditYear);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelNDot = new QLabel(customDeltaTEquationGroupBox);
        labelNDot->setObjectName(QStringLiteral("labelNDot"));
        labelNDot->setText(QStringLiteral("ndot:"));

        horizontalLayout_6->addWidget(labelNDot);

        lineEditNDot = new QLineEdit(customDeltaTEquationGroupBox);
        lineEditNDot->setObjectName(QStringLiteral("lineEditNDot"));
        lineEditNDot->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(lineEditNDot);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(customDeltaTEquationGroupBox);


        retranslateUi(CustomDeltaTEquationDialogForm);

        QMetaObject::connectSlotsByName(CustomDeltaTEquationDialogForm);
    } // setupUi

    void retranslateUi(QWidget *CustomDeltaTEquationDialogForm)
    {
        stelWindowTitle->setText(QString());
        closeStelWindow->setText(QString());
        customDeltaTEquationGroupBox->setTitle(QString());
        Q_UNUSED(CustomDeltaTEquationDialogForm);
    } // retranslateUi

};

namespace Ui {
    class CustomDeltaTEquationDialogForm: public Ui_CustomDeltaTEquationDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMDELTATEQUATIONDIALOG_H
