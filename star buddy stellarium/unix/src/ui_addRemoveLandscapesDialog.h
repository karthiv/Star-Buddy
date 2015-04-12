/********************************************************************************
** Form generated from reading UI file 'addRemoveLandscapesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDREMOVELANDSCAPESDIALOG_H
#define UI_ADDREMOVELANDSCAPESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_addRemoveLandscapesDialogForm
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *titleSpacerLeft;
    QLabel *stelWindowTitle;
    QSpacerItem *titleSpacerRight;
    QPushButton *closeStelWindow;
    QGroupBox *groupBoxAdd;
    QGridLayout *gridLayout;
    QPushButton *pushButtonBrowseForArchive;
    QCheckBox *checkBoxUseLandscape;
    QGroupBox *groupBoxMessage;
    QGridLayout *gridLayout_4;
    QLabel *labelMessage;
    QPushButton *pushButtonMessageOK;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBoxRemove;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidgetUserLandscapes;
    QFrame *frameSidePane;
    QVBoxLayout *verticalLayoutSidePane;
    QLabel *labelLandscapeName;
    QLabel *labelLandscapeSize;
    QPushButton *pushButtonRemove;
    QLabel *labelWarning;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *addRemoveLandscapesDialogForm)
    {
        if (addRemoveLandscapesDialogForm->objectName().isEmpty())
            addRemoveLandscapesDialogForm->setObjectName(QStringLiteral("addRemoveLandscapesDialogForm"));
        addRemoveLandscapesDialogForm->resize(450, 400);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addRemoveLandscapesDialogForm->sizePolicy().hasHeightForWidth());
        addRemoveLandscapesDialogForm->setSizePolicy(sizePolicy);
        addRemoveLandscapesDialogForm->setMinimumSize(QSize(400, 400));
        verticalLayout = new QVBoxLayout(addRemoveLandscapesDialogForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        TitleBar = new BarFrame(addRemoveLandscapesDialogForm);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy1);
        TitleBar->setMinimumSize(QSize(400, 25));
        TitleBar->setMaximumSize(QSize(16777215, 30));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        titleSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(titleSpacerLeft);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));

        hboxLayout->addWidget(stelWindowTitle);

        titleSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(titleSpacerRight);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout->addWidget(TitleBar);

        groupBoxAdd = new QGroupBox(addRemoveLandscapesDialogForm);
        groupBoxAdd->setObjectName(QStringLiteral("groupBoxAdd"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBoxAdd->sizePolicy().hasHeightForWidth());
        groupBoxAdd->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(groupBoxAdd);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonBrowseForArchive = new QPushButton(groupBoxAdd);
        pushButtonBrowseForArchive->setObjectName(QStringLiteral("pushButtonBrowseForArchive"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonBrowseForArchive->sizePolicy().hasHeightForWidth());
        pushButtonBrowseForArchive->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButtonBrowseForArchive, 0, 0, 1, 2);

        checkBoxUseLandscape = new QCheckBox(groupBoxAdd);
        checkBoxUseLandscape->setObjectName(QStringLiteral("checkBoxUseLandscape"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(checkBoxUseLandscape->sizePolicy().hasHeightForWidth());
        checkBoxUseLandscape->setSizePolicy(sizePolicy4);
        checkBoxUseLandscape->setChecked(true);

        gridLayout->addWidget(checkBoxUseLandscape, 1, 0, 1, 2);


        verticalLayout->addWidget(groupBoxAdd);

        groupBoxMessage = new QGroupBox(addRemoveLandscapesDialogForm);
        groupBoxMessage->setObjectName(QStringLiteral("groupBoxMessage"));
        groupBoxMessage->setTitle(QStringLiteral("Message"));
        gridLayout_4 = new QGridLayout(groupBoxMessage);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelMessage = new QLabel(groupBoxMessage);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        sizePolicy1.setHeightForWidth(labelMessage->sizePolicy().hasHeightForWidth());
        labelMessage->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(12);
        labelMessage->setFont(font);
        labelMessage->setWordWrap(true);
        labelMessage->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(labelMessage, 0, 0, 1, 2);

        pushButtonMessageOK = new QPushButton(groupBoxMessage);
        pushButtonMessageOK->setObjectName(QStringLiteral("pushButtonMessageOK"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButtonMessageOK->sizePolicy().hasHeightForWidth());
        pushButtonMessageOK->setSizePolicy(sizePolicy5);
        QIcon icon;
        icon.addFile(QStringLiteral(":/graphicGui/closeButton-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMessageOK->setIcon(icon);

        gridLayout_4->addWidget(pushButtonMessageOK, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBoxMessage);

        groupBoxRemove = new QGroupBox(addRemoveLandscapesDialogForm);
        groupBoxRemove->setObjectName(QStringLiteral("groupBoxRemove"));
        sizePolicy2.setHeightForWidth(groupBoxRemove->sizePolicy().hasHeightForWidth());
        groupBoxRemove->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(groupBoxRemove);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidgetUserLandscapes = new QListWidget(groupBoxRemove);
        listWidgetUserLandscapes->setObjectName(QStringLiteral("listWidgetUserLandscapes"));
        sizePolicy1.setHeightForWidth(listWidgetUserLandscapes->sizePolicy().hasHeightForWidth());
        listWidgetUserLandscapes->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(listWidgetUserLandscapes);

        frameSidePane = new QFrame(groupBoxRemove);
        frameSidePane->setObjectName(QStringLiteral("frameSidePane"));
        sizePolicy3.setHeightForWidth(frameSidePane->sizePolicy().hasHeightForWidth());
        frameSidePane->setSizePolicy(sizePolicy3);
        verticalLayoutSidePane = new QVBoxLayout(frameSidePane);
        verticalLayoutSidePane->setContentsMargins(0, 0, 0, 0);
        verticalLayoutSidePane->setObjectName(QStringLiteral("verticalLayoutSidePane"));
        labelLandscapeName = new QLabel(frameSidePane);
        labelLandscapeName->setObjectName(QStringLiteral("labelLandscapeName"));
        labelLandscapeName->setText(QStringLiteral(""));

        verticalLayoutSidePane->addWidget(labelLandscapeName);

        labelLandscapeSize = new QLabel(frameSidePane);
        labelLandscapeSize->setObjectName(QStringLiteral("labelLandscapeSize"));
        sizePolicy2.setHeightForWidth(labelLandscapeSize->sizePolicy().hasHeightForWidth());
        labelLandscapeSize->setSizePolicy(sizePolicy2);

        verticalLayoutSidePane->addWidget(labelLandscapeSize);

        pushButtonRemove = new QPushButton(frameSidePane);
        pushButtonRemove->setObjectName(QStringLiteral("pushButtonRemove"));
        sizePolicy4.setHeightForWidth(pushButtonRemove->sizePolicy().hasHeightForWidth());
        pushButtonRemove->setSizePolicy(sizePolicy4);

        verticalLayoutSidePane->addWidget(pushButtonRemove);

        labelWarning = new QLabel(frameSidePane);
        labelWarning->setObjectName(QStringLiteral("labelWarning"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelWarning->sizePolicy().hasHeightForWidth());
        labelWarning->setSizePolicy(sizePolicy6);
        labelWarning->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelWarning->setWordWrap(true);

        verticalLayoutSidePane->addWidget(labelWarning);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutSidePane->addItem(verticalSpacer);


        horizontalLayout->addWidget(frameSidePane);


        verticalLayout->addWidget(groupBoxRemove);

        QWidget::setTabOrder(checkBoxUseLandscape, pushButtonBrowseForArchive);
        QWidget::setTabOrder(pushButtonBrowseForArchive, pushButtonMessageOK);
        QWidget::setTabOrder(pushButtonMessageOK, listWidgetUserLandscapes);
        QWidget::setTabOrder(listWidgetUserLandscapes, pushButtonRemove);

        retranslateUi(addRemoveLandscapesDialogForm);

        QMetaObject::connectSlotsByName(addRemoveLandscapesDialogForm);
    } // setupUi

    void retranslateUi(QWidget *addRemoveLandscapesDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("addRemoveLandscapesDialogForm", "Add/Remove Landscapes", 0));
        closeStelWindow->setText(QString());
        groupBoxAdd->setTitle(QApplication::translate("addRemoveLandscapesDialogForm", "Add a new landscape", 0));
        pushButtonBrowseForArchive->setText(QApplication::translate("addRemoveLandscapesDialogForm", "Install a new landscape from a ZIP archive...", 0));
        checkBoxUseLandscape->setText(QApplication::translate("addRemoveLandscapesDialogForm", "Switch to the new landscape after installation", 0));
        labelMessage->setText(QString());
        pushButtonMessageOK->setText(QString());
        groupBoxRemove->setTitle(QApplication::translate("addRemoveLandscapesDialogForm", "Remove an installed landscape", 0));
        labelLandscapeSize->setText(QString());
        pushButtonRemove->setText(QApplication::translate("addRemoveLandscapesDialogForm", "Remove", 0));
        labelWarning->setText(QApplication::translate("addRemoveLandscapesDialogForm", "WARNING: Removing the selected landscape means deleting its files. This operation is irreversible.", 0));
        Q_UNUSED(addRemoveLandscapesDialogForm);
    } // retranslateUi

};

namespace Ui {
    class addRemoveLandscapesDialogForm: public Ui_addRemoveLandscapesDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDREMOVELANDSCAPESDIALOG_H
