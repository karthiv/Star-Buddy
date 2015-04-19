/********************************************************************************
** Form generated from reading UI file 'scriptConsole.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRIPTCONSOLE_H
#define UI_SCRIPTCONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_scriptConsoleForm
{
public:
    QVBoxLayout *verticalLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadButton;
    QPushButton *saveButton;
    QPushButton *clearButton;
    QPushButton *preprocessSSCButton;
    QPushButton *preprocessSTSButton;
    QSpacerItem *horizontalSpacer;
    QComboBox *quickrunCombo;
    QPushButton *runButton;
    QPushButton *stopButton;
    QTabWidget *tabs;
    QWidget *scriptTab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *scriptEdit;
    QWidget *logTab;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *logBrowser;
    QWidget *outputTab;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *outputBrowser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *rowColumnLabel;
    QLabel *label;
    QLineEdit *includeEdit;
    QPushButton *includeBrowseButton;
    ResizeFrame *frame_4;

    void setupUi(QWidget *scriptConsoleForm)
    {
        if (scriptConsoleForm->objectName().isEmpty())
            scriptConsoleForm->setObjectName(QStringLiteral("scriptConsoleForm"));
        scriptConsoleForm->resize(680, 394);
        scriptConsoleForm->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(scriptConsoleForm);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(scriptConsoleForm);
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
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(16);
        sizePolicy.setVerticalStretch(16);
        sizePolicy.setHeightForWidth(closeStelWindow->sizePolicy().hasHeightForWidth());
        closeStelWindow->setSizePolicy(sizePolicy);
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout_2->addWidget(TitleBar);

        frame = new QFrame(scriptConsoleForm);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        loadButton = new QPushButton(frame);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loadButton->sizePolicy().hasHeightForWidth());
        loadButton->setSizePolicy(sizePolicy2);
        loadButton->setMaximumSize(QSize(28, 28));
        QIcon icon;
        icon.addFile(QStringLiteral(":/graphicGui/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadButton->setIcon(icon);
        loadButton->setShortcut(QStringLiteral("Ctrl+O"));

        horizontalLayout->addWidget(loadButton);

        saveButton = new QPushButton(frame);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        sizePolicy2.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy2);
        saveButton->setMaximumSize(QSize(28, 28));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/graphicGui/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon1);
        saveButton->setShortcut(QStringLiteral("Ctrl+S"));

        horizontalLayout->addWidget(saveButton);

        clearButton = new QPushButton(frame);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);
        clearButton->setMaximumSize(QSize(28, 28));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/graphicGui/closeButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon2);

        horizontalLayout->addWidget(clearButton);

        preprocessSSCButton = new QPushButton(frame);
        preprocessSSCButton->setObjectName(QStringLiteral("preprocessSSCButton"));
        preprocessSSCButton->setMaximumSize(QSize(16777215, 28));
        preprocessSSCButton->setText(QStringLiteral("SSC"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/graphicGui/btFlipVertical-off.png"), QSize(), QIcon::Normal, QIcon::Off);
        preprocessSSCButton->setIcon(icon3);

        horizontalLayout->addWidget(preprocessSSCButton);

        preprocessSTSButton = new QPushButton(frame);
        preprocessSTSButton->setObjectName(QStringLiteral("preprocessSTSButton"));
        preprocessSTSButton->setMaximumSize(QSize(16777215, 28));
        preprocessSTSButton->setText(QStringLiteral("STS"));
        preprocessSTSButton->setIcon(icon3);

        horizontalLayout->addWidget(preprocessSTSButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        quickrunCombo = new QComboBox(frame);
        quickrunCombo->setObjectName(QStringLiteral("quickrunCombo"));

        horizontalLayout->addWidget(quickrunCombo);

        runButton = new QPushButton(frame);
        runButton->setObjectName(QStringLiteral("runButton"));
        sizePolicy2.setHeightForWidth(runButton->sizePolicy().hasHeightForWidth());
        runButton->setSizePolicy(sizePolicy2);
        runButton->setMaximumSize(QSize(28, 28));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/graphicGui/btScriptRun-off.png"), QSize(), QIcon::Normal, QIcon::Off);
        runButton->setIcon(icon4);
        runButton->setShortcut(QStringLiteral("Ctrl+Return"));

        horizontalLayout->addWidget(runButton);

        stopButton = new QPushButton(frame);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy2);
        stopButton->setMaximumSize(QSize(28, 28));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/graphicGui/btScriptStop-off.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon5);
        stopButton->setShortcut(QStringLiteral("Ctrl+C"));

        horizontalLayout->addWidget(stopButton);


        verticalLayout->addLayout(horizontalLayout);

        tabs = new QTabWidget(frame);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setStyleSheet(QLatin1String("QTabBar::tab {\n"
"	min-height: 28px;\n"
"}"));
        tabs->setTabPosition(QTabWidget::North);
        scriptTab = new QWidget();
        scriptTab->setObjectName(QStringLiteral("scriptTab"));
        verticalLayout_3 = new QVBoxLayout(scriptTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scriptEdit = new QTextEdit(scriptTab);
        scriptEdit->setObjectName(QStringLiteral("scriptEdit"));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font1.setPointSize(8);
        scriptEdit->setFont(font1);
        scriptEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scriptEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scriptEdit->setLineWrapMode(QTextEdit::NoWrap);

        verticalLayout_3->addWidget(scriptEdit);

        tabs->addTab(scriptTab, QString());
        logTab = new QWidget();
        logTab->setObjectName(QStringLiteral("logTab"));
        verticalLayout_5 = new QVBoxLayout(logTab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        logBrowser = new QTextBrowser(logTab);
        logBrowser->setObjectName(QStringLiteral("logBrowser"));
        logBrowser->setFont(font1);

        verticalLayout_5->addWidget(logBrowser);

        tabs->addTab(logTab, QString());
        outputTab = new QWidget();
        outputTab->setObjectName(QStringLiteral("outputTab"));
        verticalLayout_4 = new QVBoxLayout(outputTab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        outputBrowser = new QTextBrowser(outputTab);
        outputBrowser->setObjectName(QStringLiteral("outputBrowser"));
        outputBrowser->setFont(font1);

        verticalLayout_4->addWidget(outputBrowser);

        tabs->addTab(outputTab, QString());

        verticalLayout->addWidget(tabs);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, -1, -1, -1);
        rowColumnLabel = new QLabel(frame);
        rowColumnLabel->setObjectName(QStringLiteral("rowColumnLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(rowColumnLabel->sizePolicy().hasHeightForWidth());
        rowColumnLabel->setSizePolicy(sizePolicy3);
        rowColumnLabel->setMinimumSize(QSize(100, 0));
        rowColumnLabel->setMaximumSize(QSize(100, 16777215));
        rowColumnLabel->setText(QStringLiteral("R:0 C:0"));

        horizontalLayout_2->addWidget(rowColumnLabel);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        includeEdit = new QLineEdit(frame);
        includeEdit->setObjectName(QStringLiteral("includeEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(includeEdit->sizePolicy().hasHeightForWidth());
        includeEdit->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(includeEdit);

        includeBrowseButton = new QPushButton(frame);
        includeBrowseButton->setObjectName(QStringLiteral("includeBrowseButton"));
        sizePolicy2.setHeightForWidth(includeBrowseButton->sizePolicy().hasHeightForWidth());
        includeBrowseButton->setSizePolicy(sizePolicy2);
        includeBrowseButton->setMaximumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(includeBrowseButton);

        frame_4 = new ResizeFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        sizePolicy2.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy2);
        frame_4->setMinimumSize(QSize(20, 20));
        frame_4->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setFamily(QStringLiteral("Sans Serif"));
        frame_4->setFont(font2);
        frame_4->setCursor(QCursor(Qt::SizeFDiagCursor));
        frame_4->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_2->addWidget(frame_4);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(frame);

        frame->raise();
        TitleBar->raise();

        retranslateUi(scriptConsoleForm);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(scriptConsoleForm);
    } // setupUi

    void retranslateUi(QWidget *scriptConsoleForm)
    {
        stelWindowTitle->setText(QApplication::translate("scriptConsoleForm", "Script console", 0));
        closeStelWindow->setText(QString());
#ifndef QT_NO_TOOLTIP
        loadButton->setToolTip(QApplication::translate("scriptConsoleForm", "load script from file", 0));
#endif // QT_NO_TOOLTIP
        loadButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("scriptConsoleForm", "save script to file", 0));
#endif // QT_NO_TOOLTIP
        saveButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("scriptConsoleForm", "clear", 0));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        preprocessSSCButton->setToolTip(QApplication::translate("scriptConsoleForm", "pre-process script using SSC preprocessor", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        preprocessSTSButton->setToolTip(QApplication::translate("scriptConsoleForm", "pre-process script using STS preprocessor", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        quickrunCombo->setToolTip(QApplication::translate("scriptConsoleForm", "quickly load and run a utility script", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        runButton->setToolTip(QApplication::translate("scriptConsoleForm", "run script", 0));
#endif // QT_NO_TOOLTIP
        runButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopButton->setToolTip(QApplication::translate("scriptConsoleForm", "stop script", 0));
#endif // QT_NO_TOOLTIP
        stopButton->setText(QString());
        tabs->setTabText(tabs->indexOf(scriptTab), QApplication::translate("scriptConsoleForm", "Script", 0));
        tabs->setTabText(tabs->indexOf(logTab), QApplication::translate("scriptConsoleForm", "Log", 0));
        tabs->setTabText(tabs->indexOf(outputTab), QApplication::translate("scriptConsoleForm", "Output", 0));
#ifndef QT_NO_TOOLTIP
        rowColumnLabel->setToolTip(QApplication::translate("scriptConsoleForm", "Cursor position", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("scriptConsoleForm", "Include dir:", 0));
        includeBrowseButton->setText(QApplication::translate("scriptConsoleForm", "...", 0));
        Q_UNUSED(scriptConsoleForm);
    } // retranslateUi

};

namespace Ui {
    class scriptConsoleForm: public Ui_scriptConsoleForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRIPTCONSOLE_H
