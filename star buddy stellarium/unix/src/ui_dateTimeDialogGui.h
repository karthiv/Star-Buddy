/********************************************************************************
** Form generated from reading UI file 'dateTimeDialogGui.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIMEDIALOGGUI_H
#define UI_DATETIMEDIALOGGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_dateTimeDialogForm
{
public:
    QGridLayout *gridLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeStelWindow;
    QTabWidget *dateTimeTabWidget;
    QWidget *dateTimeTab;
    QGridLayout *gridLayout_2;
    QFrame *dateFrame;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinner_year;
    QLabel *label;
    QSpinBox *spinner_month;
    QLabel *label_2;
    QSpinBox *spinner_day;
    QFrame *timeFrame;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinner_hour;
    QLabel *label_3;
    QSpinBox *spinner_minute;
    QLabel *label_4;
    QSpinBox *spinner_second;
    QWidget *julianDateTab;
    QGridLayout *gridLayout_3;
    QFrame *jdFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QDoubleSpinBox *spinner_jd;
    QFrame *mjdFrame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QDoubleSpinBox *spinner_mjd;

    void setupUi(QWidget *dateTimeDialogForm)
    {
        if (dateTimeDialogForm->objectName().isEmpty())
            dateTimeDialogForm->setObjectName(QStringLiteral("dateTimeDialogForm"));
        dateTimeDialogForm->resize(449, 111);
        dateTimeDialogForm->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(dateTimeDialogForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(dateTimeDialogForm);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy);
        TitleBar->setMinimumSize(QSize(16, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));
        QPalette palette;
        QBrush brush(QColor(194, 194, 195, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        stelWindowTitle->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        stelWindowTitle->setFont(font);

        hboxLayout->addWidget(stelWindowTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(closeStelWindow->sizePolicy().hasHeightForWidth());
        closeStelWindow->setSizePolicy(sizePolicy1);
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        gridLayout->addWidget(TitleBar, 0, 0, 1, 1);

        dateTimeTabWidget = new QTabWidget(dateTimeDialogForm);
        dateTimeTabWidget->setObjectName(QStringLiteral("dateTimeTabWidget"));
        dateTimeTab = new QWidget();
        dateTimeTab->setObjectName(QStringLiteral("dateTimeTab"));
        gridLayout_2 = new QGridLayout(dateTimeTab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        dateFrame = new QFrame(dateTimeTab);
        dateFrame->setObjectName(QStringLiteral("dateFrame"));
        dateFrame->setFrameShape(QFrame::StyledPanel);
        horizontalLayout = new QHBoxLayout(dateFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spinner_year = new QSpinBox(dateFrame);
        spinner_year->setObjectName(QStringLiteral("spinner_year"));
        sizePolicy1.setHeightForWidth(spinner_year->sizePolicy().hasHeightForWidth());
        spinner_year->setSizePolicy(sizePolicy1);
        spinner_year->setFocusPolicy(Qt::StrongFocus);
        spinner_year->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_year->setWrapping(false);
        spinner_year->setFrame(true);
        spinner_year->setAlignment(Qt::AlignCenter);
        spinner_year->setMinimum(-1000000);
        spinner_year->setMaximum(1000000);

        horizontalLayout->addWidget(spinner_year);

        label = new QLabel(dateFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMaximumSize(QSize(10, 16777215));
        label->setText(QStringLiteral("/"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        spinner_month = new QSpinBox(dateFrame);
        spinner_month->setObjectName(QStringLiteral("spinner_month"));
        sizePolicy1.setHeightForWidth(spinner_month->sizePolicy().hasHeightForWidth());
        spinner_month->setSizePolicy(sizePolicy1);
        spinner_month->setFocusPolicy(Qt::StrongFocus);
        spinner_month->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_month->setFrame(true);
        spinner_month->setAlignment(Qt::AlignCenter);
        spinner_month->setMinimum(0);
        spinner_month->setMaximum(13);

        horizontalLayout->addWidget(spinner_month);

        label_2 = new QLabel(dateFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(10, 16777215));
        label_2->setText(QStringLiteral("/"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        spinner_day = new QSpinBox(dateFrame);
        spinner_day->setObjectName(QStringLiteral("spinner_day"));
        sizePolicy1.setHeightForWidth(spinner_day->sizePolicy().hasHeightForWidth());
        spinner_day->setSizePolicy(sizePolicy1);
        spinner_day->setFocusPolicy(Qt::StrongFocus);
        spinner_day->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_day->setFrame(true);
        spinner_day->setAlignment(Qt::AlignCenter);
        spinner_day->setMinimum(0);
        spinner_day->setMaximum(32);

        horizontalLayout->addWidget(spinner_day);


        gridLayout_2->addWidget(dateFrame, 0, 0, 1, 1);

        timeFrame = new QFrame(dateTimeTab);
        timeFrame->setObjectName(QStringLiteral("timeFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(timeFrame->sizePolicy().hasHeightForWidth());
        timeFrame->setSizePolicy(sizePolicy3);
        QFont font1;
        timeFrame->setFont(font1);
        timeFrame->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_2 = new QHBoxLayout(timeFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        spinner_hour = new QSpinBox(timeFrame);
        spinner_hour->setObjectName(QStringLiteral("spinner_hour"));
        sizePolicy1.setHeightForWidth(spinner_hour->sizePolicy().hasHeightForWidth());
        spinner_hour->setSizePolicy(sizePolicy1);
        spinner_hour->setFocusPolicy(Qt::StrongFocus);
        spinner_hour->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_hour->setAlignment(Qt::AlignCenter);
        spinner_hour->setMinimum(-1);
        spinner_hour->setMaximum(24);

        horizontalLayout_2->addWidget(spinner_hour);

        label_3 = new QLabel(timeFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(10, 16777215));
        label_3->setText(QStringLiteral(":"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        spinner_minute = new QSpinBox(timeFrame);
        spinner_minute->setObjectName(QStringLiteral("spinner_minute"));
        sizePolicy1.setHeightForWidth(spinner_minute->sizePolicy().hasHeightForWidth());
        spinner_minute->setSizePolicy(sizePolicy1);
        spinner_minute->setFocusPolicy(Qt::StrongFocus);
        spinner_minute->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_minute->setAlignment(Qt::AlignCenter);
        spinner_minute->setMinimum(-1);
        spinner_minute->setMaximum(60);

        horizontalLayout_2->addWidget(spinner_minute);

        label_4 = new QLabel(timeFrame);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMaximumSize(QSize(10, 16777215));
        label_4->setAutoFillBackground(false);
        label_4->setText(QStringLiteral(":"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        spinner_second = new QSpinBox(timeFrame);
        spinner_second->setObjectName(QStringLiteral("spinner_second"));
        sizePolicy1.setHeightForWidth(spinner_second->sizePolicy().hasHeightForWidth());
        spinner_second->setSizePolicy(sizePolicy1);
        spinner_second->setFocusPolicy(Qt::StrongFocus);
        spinner_second->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_second->setFrame(true);
        spinner_second->setAlignment(Qt::AlignCenter);
        spinner_second->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinner_second->setAccelerated(true);
        spinner_second->setMinimum(-1);
        spinner_second->setMaximum(60);

        horizontalLayout_2->addWidget(spinner_second);


        gridLayout_2->addWidget(timeFrame, 0, 1, 1, 1);

        dateTimeTabWidget->addTab(dateTimeTab, QString());
        julianDateTab = new QWidget();
        julianDateTab->setObjectName(QStringLiteral("julianDateTab"));
        gridLayout_3 = new QGridLayout(julianDateTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        jdFrame = new QFrame(julianDateTab);
        jdFrame->setObjectName(QStringLiteral("jdFrame"));
        jdFrame->setFrameShape(QFrame::StyledPanel);
        jdFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(jdFrame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 0, 0, 0);
        label_5 = new QLabel(jdFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setText(QStringLiteral("JD:"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        spinner_jd = new QDoubleSpinBox(jdFrame);
        spinner_jd->setObjectName(QStringLiteral("spinner_jd"));
        spinner_jd->setFocusPolicy(Qt::StrongFocus);
        spinner_jd->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_jd->setAlignment(Qt::AlignCenter);
        spinner_jd->setDecimals(5);
        spinner_jd->setMinimum(-1e+08);
        spinner_jd->setMaximum(1e+08);

        horizontalLayout_3->addWidget(spinner_jd);


        gridLayout_3->addWidget(jdFrame, 0, 1, 1, 1);

        mjdFrame = new QFrame(julianDateTab);
        mjdFrame->setObjectName(QStringLiteral("mjdFrame"));
        mjdFrame->setFrameShape(QFrame::StyledPanel);
        mjdFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(mjdFrame);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, 0, 0, 0);
        label_6 = new QLabel(mjdFrame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setText(QStringLiteral("MJD:"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_6);

        spinner_mjd = new QDoubleSpinBox(mjdFrame);
        spinner_mjd->setObjectName(QStringLiteral("spinner_mjd"));
        spinner_mjd->setFocusPolicy(Qt::StrongFocus);
        spinner_mjd->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_mjd->setAlignment(Qt::AlignCenter);
        spinner_mjd->setDecimals(5);
        spinner_mjd->setMinimum(-1e+08);
        spinner_mjd->setMaximum(1e+08);

        horizontalLayout_5->addWidget(spinner_mjd);


        gridLayout_3->addWidget(mjdFrame, 0, 2, 1, 1);

        dateTimeTabWidget->addTab(julianDateTab, QString());

        gridLayout->addWidget(dateTimeTabWidget, 1, 0, 1, 1);


        retranslateUi(dateTimeDialogForm);

        dateTimeTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dateTimeDialogForm);
    } // setupUi

    void retranslateUi(QWidget *dateTimeDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("dateTimeDialogForm", "Date and Time", 0));
        closeStelWindow->setText(QString());
        spinner_second->setPrefix(QString());
        dateTimeTabWidget->setTabText(dateTimeTabWidget->indexOf(dateTimeTab), QApplication::translate("dateTimeDialogForm", "Date and Time", 0));
        dateTimeTabWidget->setTabToolTip(dateTimeTabWidget->indexOf(dateTimeTab), QApplication::translate("dateTimeDialogForm", "Date and Time in Gregorian calendar", 0));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("dateTimeDialogForm", "Julian Date", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("dateTimeDialogForm", "Modified Julian Date", 0));
#endif // QT_NO_TOOLTIP
        dateTimeTabWidget->setTabText(dateTimeTabWidget->indexOf(julianDateTab), QApplication::translate("dateTimeDialogForm", "Julian Date", 0));
        Q_UNUSED(dateTimeDialogForm);
    } // retranslateUi

};

namespace Ui {
    class dateTimeDialogForm: public Ui_dateTimeDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIMEDIALOGGUI_H
