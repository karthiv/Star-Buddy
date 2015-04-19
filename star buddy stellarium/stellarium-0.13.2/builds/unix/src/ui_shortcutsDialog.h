/********************************************************************************
** Form generated from reading UI file 'shortcutsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTSDIALOG_H
#define UI_SHORTCUTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"
#include "ShortcutsDialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_shortcutsDialogForm
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *stelWindowTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeStelWindow;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QTreeView *shortcutsTreeView;
    QLineEdit *lineEditSearch;
    QFrame *editFrame;
    QGridLayout *gridLayout;
    QLabel *primaryLabel;
    ShortcutLineEdit *primaryShortcutEdit;
    QLabel *altLabel;
    ShortcutLineEdit *altShortcutEdit;
    QPushButton *altBackspaceButton;
    QPushButton *primaryBackspaceButton;
    QPushButton *restoreDefaultsButton;
    QPushButton *applyButton;

    void setupUi(QWidget *shortcutsDialogForm)
    {
        if (shortcutsDialogForm->objectName().isEmpty())
            shortcutsDialogForm->setObjectName(QStringLiteral("shortcutsDialogForm"));
        shortcutsDialogForm->resize(654, 436);
        shortcutsDialogForm->setWindowTitle(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(shortcutsDialogForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        TitleBar = new BarFrame(shortcutsDialogForm);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        TitleBar->setMinimumSize(QSize(16, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFrameShape(QFrame::StyledPanel);
        TitleBar->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(TitleBar);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 4, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));

        horizontalLayout->addWidget(stelWindowTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));

        horizontalLayout->addWidget(closeStelWindow);


        verticalLayout->addWidget(TitleBar);

        mainFrame = new QFrame(shortcutsDialogForm);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        shortcutsTreeView = new QTreeView(mainFrame);
        shortcutsTreeView->setObjectName(QStringLiteral("shortcutsTreeView"));
        shortcutsTreeView->setUniformRowHeights(true);
        shortcutsTreeView->setSortingEnabled(true);
        shortcutsTreeView->setAllColumnsShowFocus(true);
        shortcutsTreeView->header()->setDefaultSectionSize(200);
        shortcutsTreeView->header()->setMinimumSectionSize(100);
        shortcutsTreeView->header()->setProperty("showSortIndicator", QVariant(true));
        shortcutsTreeView->header()->setStretchLastSection(true);

        verticalLayout_2->addWidget(shortcutsTreeView);

        lineEditSearch = new QLineEdit(mainFrame);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));

        verticalLayout_2->addWidget(lineEditSearch);

        editFrame = new QFrame(mainFrame);
        editFrame->setObjectName(QStringLiteral("editFrame"));
        editFrame->setFrameShape(QFrame::StyledPanel);
        gridLayout = new QGridLayout(editFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(9, -1, 9, 9);
        primaryLabel = new QLabel(editFrame);
        primaryLabel->setObjectName(QStringLiteral("primaryLabel"));

        gridLayout->addWidget(primaryLabel, 1, 0, 1, 1);

        primaryShortcutEdit = new ShortcutLineEdit(editFrame);
        primaryShortcutEdit->setObjectName(QStringLiteral("primaryShortcutEdit"));
        primaryShortcutEdit->setEnabled(false);

        gridLayout->addWidget(primaryShortcutEdit, 1, 1, 1, 1);

        altLabel = new QLabel(editFrame);
        altLabel->setObjectName(QStringLiteral("altLabel"));

        gridLayout->addWidget(altLabel, 2, 0, 1, 1);

        altShortcutEdit = new ShortcutLineEdit(editFrame);
        altShortcutEdit->setObjectName(QStringLiteral("altShortcutEdit"));
        altShortcutEdit->setEnabled(false);

        gridLayout->addWidget(altShortcutEdit, 2, 1, 1, 1);

        altBackspaceButton = new QPushButton(editFrame);
        altBackspaceButton->setObjectName(QStringLiteral("altBackspaceButton"));
        altBackspaceButton->setEnabled(false);

        gridLayout->addWidget(altBackspaceButton, 2, 2, 1, 1);

        primaryBackspaceButton = new QPushButton(editFrame);
        primaryBackspaceButton->setObjectName(QStringLiteral("primaryBackspaceButton"));
        primaryBackspaceButton->setEnabled(false);

        gridLayout->addWidget(primaryBackspaceButton, 1, 2, 1, 1);

        restoreDefaultsButton = new QPushButton(editFrame);
        restoreDefaultsButton->setObjectName(QStringLiteral("restoreDefaultsButton"));

        gridLayout->addWidget(restoreDefaultsButton, 2, 3, 1, 1);

        applyButton = new QPushButton(editFrame);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setEnabled(false);

        gridLayout->addWidget(applyButton, 1, 3, 1, 1);


        verticalLayout_2->addWidget(editFrame);


        verticalLayout->addWidget(mainFrame);


        retranslateUi(shortcutsDialogForm);
        QObject::connect(closeStelWindow, SIGNAL(clicked()), shortcutsDialogForm, SLOT(close()));
        QObject::connect(primaryBackspaceButton, SIGNAL(clicked()), primaryShortcutEdit, SLOT(backspace()));
        QObject::connect(altBackspaceButton, SIGNAL(clicked()), altShortcutEdit, SLOT(backspace()));
        QObject::connect(primaryBackspaceButton, SIGNAL(clicked()), primaryShortcutEdit, SLOT(setFocus()));
        QObject::connect(altBackspaceButton, SIGNAL(clicked()), altShortcutEdit, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(shortcutsDialogForm);
    } // setupUi

    void retranslateUi(QWidget *shortcutsDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("shortcutsDialogForm", "Keyboard Shortcuts", 0));
        closeStelWindow->setText(QString());
        primaryLabel->setText(QApplication::translate("shortcutsDialogForm", "Primary shortcut", 0));
        altLabel->setText(QApplication::translate("shortcutsDialogForm", "Alternative shortcut", 0));
        restoreDefaultsButton->setText(QApplication::translate("shortcutsDialogForm", "Restore Defaults", 0));
        applyButton->setText(QApplication::translate("shortcutsDialogForm", "Apply", 0));
        Q_UNUSED(shortcutsDialogForm);
    } // retranslateUi

};

namespace Ui {
    class shortcutsDialogForm: public Ui_shortcutsDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTSDIALOG_H
