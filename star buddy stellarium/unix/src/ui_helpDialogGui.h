/********************************************************************************
** Form generated from reading UI file 'helpDialogGui.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOGGUI_H
#define UI_HELPDIALOGGUI_H

#include <Dialog.hpp>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helpDialogForm
{
public:
    QVBoxLayout *verticalLayout_3;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QFrame *viewContent;
    QVBoxLayout *verticalLayout_4;
    QListWidget *stackListWidget;
    QStackedWidget *stackedWidget;
    QWidget *pageHelp;
    QVBoxLayout *verticalLayout_5;
    QFrame *helpFrame;
    QHBoxLayout *horizontalLayoutShortcuts;
    QSpacerItem *helpFrameSpacer;
    QPushButton *editShortcutsButton;
    QTextBrowser *helpBrowser;
    QWidget *pageAbout;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *aboutBrowser;
    QWidget *pageLog;
    QVBoxLayout *verticalLayout;
    QFrame *logFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *logPathLabel;
    QSpacerItem *logFrameSpacer;
    QPushButton *refreshButton;
    QTextBrowser *logBrowser;

    void setupUi(QWidget *helpDialogForm)
    {
        if (helpDialogForm->objectName().isEmpty())
            helpDialogForm->setObjectName(QStringLiteral("helpDialogForm"));
        helpDialogForm->resize(383, 458);
        helpDialogForm->setMinimumSize(QSize(250, 250));
        helpDialogForm->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(helpDialogForm);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        TitleBar = new BarFrame(helpDialogForm);
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

        hboxLayout->addWidget(stelWindowTitle);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout_3->addWidget(TitleBar);

        viewContent = new QFrame(helpDialogForm);
        viewContent->setObjectName(QStringLiteral("viewContent"));
        viewContent->setFrameShape(QFrame::StyledPanel);
        viewContent->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(viewContent);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        stackListWidget = new QListWidget(viewContent);
        QIcon icon;
        icon.addFile(QStringLiteral(":/graphicGui/tabicon-help.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/graphicGui/tabicon-info.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/graphicGui/tabicon-logs.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem2->setIcon(icon2);
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

        verticalLayout_4->addWidget(stackListWidget);

        stackedWidget = new QStackedWidget(viewContent);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageHelp = new QWidget();
        pageHelp->setObjectName(QStringLiteral("pageHelp"));
        verticalLayout_5 = new QVBoxLayout(pageHelp);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        helpFrame = new QFrame(pageHelp);
        helpFrame->setObjectName(QStringLiteral("helpFrame"));
        horizontalLayoutShortcuts = new QHBoxLayout(helpFrame);
        horizontalLayoutShortcuts->setSpacing(0);
        horizontalLayoutShortcuts->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutShortcuts->setObjectName(QStringLiteral("horizontalLayoutShortcuts"));
        helpFrameSpacer = new QSpacerItem(190, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutShortcuts->addItem(helpFrameSpacer);

        editShortcutsButton = new QPushButton(helpFrame);
        editShortcutsButton->setObjectName(QStringLiteral("editShortcutsButton"));

        horizontalLayoutShortcuts->addWidget(editShortcutsButton);


        verticalLayout_5->addWidget(helpFrame);

        helpBrowser = new QTextBrowser(pageHelp);
        helpBrowser->setObjectName(QStringLiteral("helpBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpBrowser->sizePolicy().hasHeightForWidth());
        helpBrowser->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(3, 3, 3, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        helpBrowser->setPalette(palette);
        helpBrowser->setMouseTracking(true);
        helpBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        helpBrowser->setAcceptDrops(false);
        helpBrowser->setStyleSheet(QStringLiteral(""));
        helpBrowser->setOpenExternalLinks(true);

        verticalLayout_5->addWidget(helpBrowser);

        stackedWidget->addWidget(pageHelp);
        pageAbout = new QWidget();
        pageAbout->setObjectName(QStringLiteral("pageAbout"));
        verticalLayout_2 = new QVBoxLayout(pageAbout);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        aboutBrowser = new QTextBrowser(pageAbout);
        aboutBrowser->setObjectName(QStringLiteral("aboutBrowser"));
        aboutBrowser->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(aboutBrowser);

        stackedWidget->addWidget(pageAbout);
        pageLog = new QWidget();
        pageLog->setObjectName(QStringLiteral("pageLog"));
        verticalLayout = new QVBoxLayout(pageLog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        logFrame = new QFrame(pageLog);
        logFrame->setObjectName(QStringLiteral("logFrame"));
        logFrame->setFrameShape(QFrame::StyledPanel);
        logFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(logFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        logPathLabel = new QLabel(logFrame);
        logPathLabel->setObjectName(QStringLiteral("logPathLabel"));
        logPathLabel->setText(QStringLiteral("xxx"));
        logPathLabel->setScaledContents(false);
        logPathLabel->setWordWrap(true);

        horizontalLayout->addWidget(logPathLabel);

        logFrameSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(logFrameSpacer);

        refreshButton = new QPushButton(logFrame);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));

        horizontalLayout->addWidget(refreshButton);


        verticalLayout->addWidget(logFrame);

        logBrowser = new QTextBrowser(pageLog);
        logBrowser->setObjectName(QStringLiteral("logBrowser"));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Console"));
        font.setKerning(false);
        logBrowser->setFont(font);
        logBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        logBrowser->setLineWrapMode(QTextEdit::WidgetWidth);
        logBrowser->setAcceptRichText(false);
        logBrowser->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        logBrowser->setOpenLinks(false);

        verticalLayout->addWidget(logBrowser);

        stackedWidget->addWidget(pageLog);

        verticalLayout_4->addWidget(stackedWidget);


        verticalLayout_3->addWidget(viewContent);


        retranslateUi(helpDialogForm);

        QMetaObject::connectSlotsByName(helpDialogForm);
    } // setupUi

    void retranslateUi(QWidget *helpDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("helpDialogForm", "Help", 0));
        closeStelWindow->setText(QString());

        const bool __sortingEnabled = stackListWidget->isSortingEnabled();
        stackListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = stackListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("helpDialogForm", "Help", 0));
        QListWidgetItem *___qlistwidgetitem1 = stackListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("helpDialogForm", "About", 0));
        QListWidgetItem *___qlistwidgetitem2 = stackListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("helpDialogForm", "Log", 0));
        stackListWidget->setSortingEnabled(__sortingEnabled);

        editShortcutsButton->setText(QApplication::translate("helpDialogForm", "Edit keyboard shortcuts...", 0));
        refreshButton->setText(QApplication::translate("helpDialogForm", "Refresh", 0));
        Q_UNUSED(helpDialogForm);
    } // retranslateUi

};

namespace Ui {
    class helpDialogForm: public Ui_helpDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOGGUI_H
