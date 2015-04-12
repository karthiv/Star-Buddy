/********************************************************************************
** Form generated from reading UI file 'ocularDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCULARDIALOG_H
#define UI_OCULARDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_ocularDialogForm
{
public:
    QVBoxLayout *verticalLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QFrame *Contents;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *Tabs;
    QWidget *generalTab;
    QVBoxLayout *verticalLayoutTabGeneral;
    QGroupBox *groupBoxOcularOptions;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *requireSelectionCheckBox;
    QCheckBox *scaleImageCircleCheckBox;
    QCheckBox *limitStellarMagnitudeCheckBox;
    QGroupBox *groupBox;
    QFormLayout *formLayout_3;
    QLabel *label_11;
    QLineEdit *togglePluginLineEdit;
    QLabel *labelPopupMenuShortcut;
    QLineEdit *togglePopupNavigatorWindowLineEdit;
    QGroupBox *groupBoxInterface;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *checkBoxControlPanel;
    QCheckBox *checkBoxInitialFOV;
    QGroupBox *groupBoxSensorOptions;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *checkBoxDecimalDegrees;
    QCheckBox *checkBoxUseFlipForCCD;
    QSpacerItem *verticalSpacer_3;
    QWidget *ocularsTab;
    QHBoxLayout *horizontalLayout_5;
    QFrame *ocularListFrame;
    QVBoxLayout *verticalLayout;
    QLabel *ocularListLabel;
    QListView *ocularListView;
    QFrame *ocularButtonsFrame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addOcular;
    QPushButton *pushButtonMoveOcularUp;
    QPushButton *pushButtonMoveOcularDown;
    QPushButton *deleteOcular;
    QFrame *OcularInfoFrame;
    QVBoxLayout *verticalLayout_5;
    QFrame *OcularData;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *ocularName;
    QLabel *label_4;
    QDoubleSpinBox *ocularAFov;
    QLabel *label_5;
    QLabel *label_10;
    QDoubleSpinBox *ocularFL;
    QDoubleSpinBox *ocularFieldStop;
    QCheckBox *binocularsCheckBox;
    QCheckBox *permanentCrosshairCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *lensesTab;
    QHBoxLayout *horizontalLayout_4;
    QFrame *lensListFrame;
    QVBoxLayout *verticalLayout_10;
    QLabel *lensListLabel;
    QListView *lensListView;
    QFrame *lensButtonsFrame;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addLens;
    QPushButton *pushButtonMoveLensUp;
    QPushButton *pushButtonMoveLensDown;
    QPushButton *deleteLens;
    QFrame *LensData;
    QVBoxLayout *verticalLayout_9;
    QFrame *frame_2;
    QFormLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *lensName;
    QLabel *label_13;
    QDoubleSpinBox *lensMultipler;
    QLabel *lensNote;
    QSpacerItem *verticalSpacer_4;
    QWidget *sensorsTab;
    QHBoxLayout *CCD_horizontalLayout_1;
    QFrame *sensorListFrame;
    QVBoxLayout *CCD_verticalLayout_1;
    QLabel *sensorListLabel;
    QListView *ccdListView;
    QFrame *sensorsButtonFrame;
    QHBoxLayout *CCD_horizontalLayout_2;
    QPushButton *addCCD;
    QPushButton *pushButtonMoveSensorUp;
    QPushButton *pushButtonMoveSensorDown;
    QPushButton *deleteCCD;
    QFrame *CCDInfoFrame;
    QVBoxLayout *CCD_verticalLayout_2;
    QFrame *CCDData;
    QGridLayout *gridLayout_4;
    QLabel *CCDName_lbl;
    QLineEdit *ccdName;
    QLabel *CCDResX_lbl;
    QSpinBox *ccdResX;
    QLabel *CCDResY_lbl;
    QSpinBox *ccdResY;
    QLabel *CCDChipX_lbl;
    QDoubleSpinBox *ccdChipX;
    QLabel *CCDChipY_lbl;
    QDoubleSpinBox *ccdChipY;
    QLabel *CCDPixelX_lbl;
    QDoubleSpinBox *ccdPixelX;
    QLabel *CCDPixelY_lbl;
    QDoubleSpinBox *ccdPixelY;
    QSpacerItem *CCDverticalSpacer;
    QWidget *telescopesTab;
    QHBoxLayout *horizontalLayout_6;
    QFrame *telescopeListFrame;
    QVBoxLayout *verticalLayout_3;
    QLabel *telescopeListLabel;
    QListView *telescopeListView;
    QFrame *telescopeButtonsFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *addTelescope;
    QPushButton *pushButtonMoveTelescopeUp;
    QPushButton *pushButtonMoveTelescopeDown;
    QPushButton *deleteTelescope;
    QFrame *ScopeDataFrame;
    QVBoxLayout *verticalLayout_6;
    QFrame *ScopeInfo;
    QFormLayout *gridLayout_5;
    QLabel *label_8;
    QLineEdit *telescopeName;
    QLabel *label_9;
    QDoubleSpinBox *telescopeFL;
    QLabel *label_12;
    QDoubleSpinBox *telescopeDiameter;
    QCheckBox *telescopeHFlip;
    QCheckBox *telescopeVFlip;
    QSpacerItem *verticalSpacer_2;
    QWidget *aboutTab;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *ocularDialogForm)
    {
        if (ocularDialogForm->objectName().isEmpty())
            ocularDialogForm->setObjectName(QStringLiteral("ocularDialogForm"));
        ocularDialogForm->resize(668, 478);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ocularDialogForm->sizePolicy().hasHeightForWidth());
        ocularDialogForm->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(ocularDialogForm);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(ocularDialogForm);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy1);
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFrameShape(QFrame::StyledPanel);
        TitleBar->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(TitleBar);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 4, 0);
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(leftSpacer);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));

        horizontalLayout_7->addWidget(stelWindowTitle);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(rightSpacer);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(closeStelWindow);


        verticalLayout_2->addWidget(TitleBar);

        Contents = new QFrame(ocularDialogForm);
        Contents->setObjectName(QStringLiteral("Contents"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Contents->sizePolicy().hasHeightForWidth());
        Contents->setSizePolicy(sizePolicy2);
        verticalLayout_4 = new QVBoxLayout(Contents);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Tabs = new QTabWidget(Contents);
        Tabs->setObjectName(QStringLiteral("Tabs"));
        Tabs->setUsesScrollButtons(false);
        generalTab = new QWidget();
        generalTab->setObjectName(QStringLiteral("generalTab"));
        verticalLayoutTabGeneral = new QVBoxLayout(generalTab);
        verticalLayoutTabGeneral->setSpacing(0);
        verticalLayoutTabGeneral->setObjectName(QStringLiteral("verticalLayoutTabGeneral"));
        verticalLayoutTabGeneral->setContentsMargins(0, 0, 0, 0);
        groupBoxOcularOptions = new QGroupBox(generalTab);
        groupBoxOcularOptions->setObjectName(QStringLiteral("groupBoxOcularOptions"));
        verticalLayout_7 = new QVBoxLayout(groupBoxOcularOptions);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        requireSelectionCheckBox = new QCheckBox(groupBoxOcularOptions);
        requireSelectionCheckBox->setObjectName(QStringLiteral("requireSelectionCheckBox"));

        verticalLayout_7->addWidget(requireSelectionCheckBox);

        scaleImageCircleCheckBox = new QCheckBox(groupBoxOcularOptions);
        scaleImageCircleCheckBox->setObjectName(QStringLiteral("scaleImageCircleCheckBox"));

        verticalLayout_7->addWidget(scaleImageCircleCheckBox);

        limitStellarMagnitudeCheckBox = new QCheckBox(groupBoxOcularOptions);
        limitStellarMagnitudeCheckBox->setObjectName(QStringLiteral("limitStellarMagnitudeCheckBox"));

        verticalLayout_7->addWidget(limitStellarMagnitudeCheckBox);


        verticalLayoutTabGeneral->addWidget(groupBoxOcularOptions);

        groupBox = new QGroupBox(generalTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout_3 = new QFormLayout(groupBox);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        togglePluginLineEdit = new QLineEdit(groupBox);
        togglePluginLineEdit->setObjectName(QStringLiteral("togglePluginLineEdit"));
        togglePluginLineEdit->setMaximumSize(QSize(100, 16777215));
        togglePluginLineEdit->setBaseSize(QSize(100, 22));
        togglePluginLineEdit->setMaxLength(50);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, togglePluginLineEdit);

        labelPopupMenuShortcut = new QLabel(groupBox);
        labelPopupMenuShortcut->setObjectName(QStringLiteral("labelPopupMenuShortcut"));
        labelPopupMenuShortcut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, labelPopupMenuShortcut);

        togglePopupNavigatorWindowLineEdit = new QLineEdit(groupBox);
        togglePopupNavigatorWindowLineEdit->setObjectName(QStringLiteral("togglePopupNavigatorWindowLineEdit"));
        togglePopupNavigatorWindowLineEdit->setMaximumSize(QSize(100, 16777215));
        togglePopupNavigatorWindowLineEdit->setBaseSize(QSize(100, 22));
        togglePopupNavigatorWindowLineEdit->setMaxLength(50);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, togglePopupNavigatorWindowLineEdit);


        verticalLayoutTabGeneral->addWidget(groupBox);

        groupBoxInterface = new QGroupBox(generalTab);
        groupBoxInterface->setObjectName(QStringLiteral("groupBoxInterface"));
        verticalLayout_8 = new QVBoxLayout(groupBoxInterface);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        checkBoxControlPanel = new QCheckBox(groupBoxInterface);
        checkBoxControlPanel->setObjectName(QStringLiteral("checkBoxControlPanel"));

        verticalLayout_8->addWidget(checkBoxControlPanel);

        checkBoxInitialFOV = new QCheckBox(groupBoxInterface);
        checkBoxInitialFOV->setObjectName(QStringLiteral("checkBoxInitialFOV"));

        verticalLayout_8->addWidget(checkBoxInitialFOV);


        verticalLayoutTabGeneral->addWidget(groupBoxInterface);

        groupBoxSensorOptions = new QGroupBox(generalTab);
        groupBoxSensorOptions->setObjectName(QStringLiteral("groupBoxSensorOptions"));
        verticalLayout_11 = new QVBoxLayout(groupBoxSensorOptions);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        checkBoxDecimalDegrees = new QCheckBox(groupBoxSensorOptions);
        checkBoxDecimalDegrees->setObjectName(QStringLiteral("checkBoxDecimalDegrees"));

        verticalLayout_11->addWidget(checkBoxDecimalDegrees);

        checkBoxUseFlipForCCD = new QCheckBox(groupBoxSensorOptions);
        checkBoxUseFlipForCCD->setObjectName(QStringLiteral("checkBoxUseFlipForCCD"));

        verticalLayout_11->addWidget(checkBoxUseFlipForCCD);


        verticalLayoutTabGeneral->addWidget(groupBoxSensorOptions);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutTabGeneral->addItem(verticalSpacer_3);

        Tabs->addTab(generalTab, QString());
        ocularsTab = new QWidget();
        ocularsTab->setObjectName(QStringLiteral("ocularsTab"));
        horizontalLayout_5 = new QHBoxLayout(ocularsTab);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(12, 0, 12, 12);
        ocularListFrame = new QFrame(ocularsTab);
        ocularListFrame->setObjectName(QStringLiteral("ocularListFrame"));
        sizePolicy2.setHeightForWidth(ocularListFrame->sizePolicy().hasHeightForWidth());
        ocularListFrame->setSizePolicy(sizePolicy2);
        ocularListFrame->setFrameShape(QFrame::StyledPanel);
        ocularListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(ocularListFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ocularListLabel = new QLabel(ocularListFrame);
        ocularListLabel->setObjectName(QStringLiteral("ocularListLabel"));

        verticalLayout->addWidget(ocularListLabel);

        ocularListView = new QListView(ocularListFrame);
        ocularListView->setObjectName(QStringLiteral("ocularListView"));
        ocularListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ocularListView->setProperty("isWrapping", QVariant(false));
        ocularListView->setResizeMode(QListView::Fixed);
        ocularListView->setViewMode(QListView::ListMode);
        ocularListView->setModelColumn(0);

        verticalLayout->addWidget(ocularListView);

        ocularButtonsFrame = new QFrame(ocularListFrame);
        ocularButtonsFrame->setObjectName(QStringLiteral("ocularButtonsFrame"));
        ocularButtonsFrame->setFrameShape(QFrame::StyledPanel);
        ocularButtonsFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(ocularButtonsFrame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 5, 0, 0);
        addOcular = new QPushButton(ocularButtonsFrame);
        addOcular->setObjectName(QStringLiteral("addOcular"));
        addOcular->setMinimumSize(QSize(0, 24));

        horizontalLayout_2->addWidget(addOcular);

        pushButtonMoveOcularUp = new QPushButton(ocularButtonsFrame);
        pushButtonMoveOcularUp->setObjectName(QStringLiteral("pushButtonMoveOcularUp"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonMoveOcularUp->sizePolicy().hasHeightForWidth());
        pushButtonMoveOcularUp->setSizePolicy(sizePolicy3);
        pushButtonMoveOcularUp->setMinimumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/graphicGui/spinup.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMoveOcularUp->setIcon(icon);

        horizontalLayout_2->addWidget(pushButtonMoveOcularUp);

        pushButtonMoveOcularDown = new QPushButton(ocularButtonsFrame);
        pushButtonMoveOcularDown->setObjectName(QStringLiteral("pushButtonMoveOcularDown"));
        sizePolicy3.setHeightForWidth(pushButtonMoveOcularDown->sizePolicy().hasHeightForWidth());
        pushButtonMoveOcularDown->setSizePolicy(sizePolicy3);
        pushButtonMoveOcularDown->setMinimumSize(QSize(24, 24));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/graphicGui/spindown.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMoveOcularDown->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButtonMoveOcularDown);

        deleteOcular = new QPushButton(ocularButtonsFrame);
        deleteOcular->setObjectName(QStringLiteral("deleteOcular"));
        deleteOcular->setMinimumSize(QSize(0, 24));

        horizontalLayout_2->addWidget(deleteOcular);


        verticalLayout->addWidget(ocularButtonsFrame);


        horizontalLayout_5->addWidget(ocularListFrame);

        OcularInfoFrame = new QFrame(ocularsTab);
        OcularInfoFrame->setObjectName(QStringLiteral("OcularInfoFrame"));
        OcularInfoFrame->setFrameShape(QFrame::StyledPanel);
        OcularInfoFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(OcularInfoFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        OcularData = new QFrame(OcularInfoFrame);
        OcularData->setObjectName(QStringLiteral("OcularData"));
        OcularData->setFrameShape(QFrame::StyledPanel);
        OcularData->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(OcularData);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(OcularData);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        ocularName = new QLineEdit(OcularData);
        ocularName->setObjectName(QStringLiteral("ocularName"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ocularName->sizePolicy().hasHeightForWidth());
        ocularName->setSizePolicy(sizePolicy4);
        ocularName->setBaseSize(QSize(100, 22));
        ocularName->setMaxLength(50);

        gridLayout_2->addWidget(ocularName, 0, 1, 1, 1);

        label_4 = new QLabel(OcularData);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        ocularAFov = new QDoubleSpinBox(OcularData);
        ocularAFov->setObjectName(QStringLiteral("ocularAFov"));
        ocularAFov->setDecimals(1);
        ocularAFov->setMaximum(120);
        ocularAFov->setSingleStep(0.1);

        gridLayout_2->addWidget(ocularAFov, 1, 1, 1, 1);

        label_5 = new QLabel(OcularData);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label_10 = new QLabel(OcularData);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 3, 0, 1, 1);

        ocularFL = new QDoubleSpinBox(OcularData);
        ocularFL->setObjectName(QStringLiteral("ocularFL"));
        ocularFL->setDecimals(1);
        ocularFL->setMinimum(1);
        ocularFL->setMaximum(99);
        ocularFL->setSingleStep(0.1);

        gridLayout_2->addWidget(ocularFL, 2, 1, 1, 1);

        ocularFieldStop = new QDoubleSpinBox(OcularData);
        ocularFieldStop->setObjectName(QStringLiteral("ocularFieldStop"));
        ocularFieldStop->setDecimals(2);
        ocularFieldStop->setMinimum(0);
        ocularFieldStop->setMaximum(99);
        ocularFieldStop->setSingleStep(0.1);
        ocularFieldStop->setValue(0);

        gridLayout_2->addWidget(ocularFieldStop, 3, 1, 1, 1);

        binocularsCheckBox = new QCheckBox(OcularData);
        binocularsCheckBox->setObjectName(QStringLiteral("binocularsCheckBox"));

        gridLayout_2->addWidget(binocularsCheckBox, 4, 0, 1, 1);

        permanentCrosshairCheckBox = new QCheckBox(OcularData);
        permanentCrosshairCheckBox->setObjectName(QStringLiteral("permanentCrosshairCheckBox"));

        gridLayout_2->addWidget(permanentCrosshairCheckBox, 4, 1, 1, 1);


        verticalLayout_5->addWidget(OcularData);

        verticalSpacer = new QSpacerItem(20, 86, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout_5->addWidget(OcularInfoFrame);

        Tabs->addTab(ocularsTab, QString());
        lensesTab = new QWidget();
        lensesTab->setObjectName(QStringLiteral("lensesTab"));
        horizontalLayout_4 = new QHBoxLayout(lensesTab);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(12, 0, 12, 12);
        lensListFrame = new QFrame(lensesTab);
        lensListFrame->setObjectName(QStringLiteral("lensListFrame"));
        lensListFrame->setFrameShape(QFrame::StyledPanel);
        lensListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(lensListFrame);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        lensListLabel = new QLabel(lensListFrame);
        lensListLabel->setObjectName(QStringLiteral("lensListLabel"));
        lensListLabel->setEnabled(true);

        verticalLayout_10->addWidget(lensListLabel);

        lensListView = new QListView(lensListFrame);
        lensListView->setObjectName(QStringLiteral("lensListView"));
        lensListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lensListView->setProperty("isWrapping", QVariant(false));
        lensListView->setResizeMode(QListView::Fixed);
        lensListView->setViewMode(QListView::ListMode);

        verticalLayout_10->addWidget(lensListView);

        lensButtonsFrame = new QFrame(lensListFrame);
        lensButtonsFrame->setObjectName(QStringLiteral("lensButtonsFrame"));
        lensButtonsFrame->setFrameShape(QFrame::StyledPanel);
        lensButtonsFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(lensButtonsFrame);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 5, 0, 0);
        addLens = new QPushButton(lensButtonsFrame);
        addLens->setObjectName(QStringLiteral("addLens"));
        addLens->setMinimumSize(QSize(0, 24));

        horizontalLayout_3->addWidget(addLens);

        pushButtonMoveLensUp = new QPushButton(lensButtonsFrame);
        pushButtonMoveLensUp->setObjectName(QStringLiteral("pushButtonMoveLensUp"));
        sizePolicy3.setHeightForWidth(pushButtonMoveLensUp->sizePolicy().hasHeightForWidth());
        pushButtonMoveLensUp->setSizePolicy(sizePolicy3);
        pushButtonMoveLensUp->setMinimumSize(QSize(24, 24));
        pushButtonMoveLensUp->setIcon(icon);

        horizontalLayout_3->addWidget(pushButtonMoveLensUp);

        pushButtonMoveLensDown = new QPushButton(lensButtonsFrame);
        pushButtonMoveLensDown->setObjectName(QStringLiteral("pushButtonMoveLensDown"));
        sizePolicy3.setHeightForWidth(pushButtonMoveLensDown->sizePolicy().hasHeightForWidth());
        pushButtonMoveLensDown->setSizePolicy(sizePolicy3);
        pushButtonMoveLensDown->setMinimumSize(QSize(24, 24));
        pushButtonMoveLensDown->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButtonMoveLensDown);

        deleteLens = new QPushButton(lensButtonsFrame);
        deleteLens->setObjectName(QStringLiteral("deleteLens"));
        deleteLens->setMinimumSize(QSize(0, 24));

        horizontalLayout_3->addWidget(deleteLens);


        verticalLayout_10->addWidget(lensButtonsFrame);


        horizontalLayout_4->addWidget(lensListFrame);

        LensData = new QFrame(lensesTab);
        LensData->setObjectName(QStringLiteral("LensData"));
        LensData->setFrameShape(QFrame::StyledPanel);
        LensData->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(LensData);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(LensData);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        gridLayout_3 = new QFormLayout(frame_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->setWidget(0, QFormLayout::LabelRole, label_7);

        lensName = new QLineEdit(frame_2);
        lensName->setObjectName(QStringLiteral("lensName"));
        lensName->setBaseSize(QSize(100, 22));
        lensName->setMaxLength(50);

        gridLayout_3->setWidget(0, QFormLayout::FieldRole, lensName);

        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->setWidget(1, QFormLayout::LabelRole, label_13);

        lensMultipler = new QDoubleSpinBox(frame_2);
        lensMultipler->setObjectName(QStringLiteral("lensMultipler"));
        lensMultipler->setDecimals(2);
        lensMultipler->setMaximum(9);
        lensMultipler->setSingleStep(0.01);

        gridLayout_3->setWidget(1, QFormLayout::FieldRole, lensMultipler);


        verticalLayout_9->addWidget(frame_2);

        lensNote = new QLabel(LensData);
        lensNote->setObjectName(QStringLiteral("lensNote"));
#ifndef QT_NO_TOOLTIP
        lensNote->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lensNote->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_ACCESSIBILITY
        lensNote->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lensNote->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        lensNote->setTextFormat(Qt::AutoText);
        lensNote->setScaledContents(false);
        lensNote->setWordWrap(true);
        lensNote->setIndent(9);

        verticalLayout_9->addWidget(lensNote);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);


        horizontalLayout_4->addWidget(LensData);

        Tabs->addTab(lensesTab, QString());
        sensorsTab = new QWidget();
        sensorsTab->setObjectName(QStringLiteral("sensorsTab"));
        CCD_horizontalLayout_1 = new QHBoxLayout(sensorsTab);
        CCD_horizontalLayout_1->setSpacing(0);
        CCD_horizontalLayout_1->setObjectName(QStringLiteral("CCD_horizontalLayout_1"));
        CCD_horizontalLayout_1->setContentsMargins(12, 0, 12, 12);
        sensorListFrame = new QFrame(sensorsTab);
        sensorListFrame->setObjectName(QStringLiteral("sensorListFrame"));
        sizePolicy2.setHeightForWidth(sensorListFrame->sizePolicy().hasHeightForWidth());
        sensorListFrame->setSizePolicy(sizePolicy2);
        sensorListFrame->setFrameShape(QFrame::StyledPanel);
        sensorListFrame->setFrameShadow(QFrame::Raised);
        CCD_verticalLayout_1 = new QVBoxLayout(sensorListFrame);
        CCD_verticalLayout_1->setSpacing(0);
        CCD_verticalLayout_1->setObjectName(QStringLiteral("CCD_verticalLayout_1"));
        CCD_verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        sensorListLabel = new QLabel(sensorListFrame);
        sensorListLabel->setObjectName(QStringLiteral("sensorListLabel"));

        CCD_verticalLayout_1->addWidget(sensorListLabel);

        ccdListView = new QListView(sensorListFrame);
        ccdListView->setObjectName(QStringLiteral("ccdListView"));
        ccdListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ccdListView->setProperty("isWrapping", QVariant(false));
        ccdListView->setViewMode(QListView::ListMode);
        ccdListView->setModelColumn(0);

        CCD_verticalLayout_1->addWidget(ccdListView);

        sensorsButtonFrame = new QFrame(sensorListFrame);
        sensorsButtonFrame->setObjectName(QStringLiteral("sensorsButtonFrame"));
        sensorsButtonFrame->setFrameShape(QFrame::StyledPanel);
        sensorsButtonFrame->setFrameShadow(QFrame::Raised);
        CCD_horizontalLayout_2 = new QHBoxLayout(sensorsButtonFrame);
        CCD_horizontalLayout_2->setObjectName(QStringLiteral("CCD_horizontalLayout_2"));
        CCD_horizontalLayout_2->setContentsMargins(0, 5, 0, 0);
        addCCD = new QPushButton(sensorsButtonFrame);
        addCCD->setObjectName(QStringLiteral("addCCD"));
        addCCD->setMinimumSize(QSize(0, 24));

        CCD_horizontalLayout_2->addWidget(addCCD);

        pushButtonMoveSensorUp = new QPushButton(sensorsButtonFrame);
        pushButtonMoveSensorUp->setObjectName(QStringLiteral("pushButtonMoveSensorUp"));
        sizePolicy3.setHeightForWidth(pushButtonMoveSensorUp->sizePolicy().hasHeightForWidth());
        pushButtonMoveSensorUp->setSizePolicy(sizePolicy3);
        pushButtonMoveSensorUp->setMinimumSize(QSize(24, 24));
        pushButtonMoveSensorUp->setIcon(icon);

        CCD_horizontalLayout_2->addWidget(pushButtonMoveSensorUp);

        pushButtonMoveSensorDown = new QPushButton(sensorsButtonFrame);
        pushButtonMoveSensorDown->setObjectName(QStringLiteral("pushButtonMoveSensorDown"));
        sizePolicy3.setHeightForWidth(pushButtonMoveSensorDown->sizePolicy().hasHeightForWidth());
        pushButtonMoveSensorDown->setSizePolicy(sizePolicy3);
        pushButtonMoveSensorDown->setMinimumSize(QSize(24, 24));
        pushButtonMoveSensorDown->setIcon(icon1);

        CCD_horizontalLayout_2->addWidget(pushButtonMoveSensorDown);

        deleteCCD = new QPushButton(sensorsButtonFrame);
        deleteCCD->setObjectName(QStringLiteral("deleteCCD"));
        deleteCCD->setMinimumSize(QSize(0, 24));

        CCD_horizontalLayout_2->addWidget(deleteCCD);


        CCD_verticalLayout_1->addWidget(sensorsButtonFrame);


        CCD_horizontalLayout_1->addWidget(sensorListFrame);

        CCDInfoFrame = new QFrame(sensorsTab);
        CCDInfoFrame->setObjectName(QStringLiteral("CCDInfoFrame"));
        CCDInfoFrame->setFrameShape(QFrame::StyledPanel);
        CCDInfoFrame->setFrameShadow(QFrame::Raised);
        CCD_verticalLayout_2 = new QVBoxLayout(CCDInfoFrame);
        CCD_verticalLayout_2->setSpacing(0);
        CCD_verticalLayout_2->setObjectName(QStringLiteral("CCD_verticalLayout_2"));
        CCD_verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        CCDData = new QFrame(CCDInfoFrame);
        CCDData->setObjectName(QStringLiteral("CCDData"));
        CCDData->setFrameShape(QFrame::StyledPanel);
        CCDData->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(CCDData);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        CCDName_lbl = new QLabel(CCDData);
        CCDName_lbl->setObjectName(QStringLiteral("CCDName_lbl"));

        gridLayout_4->addWidget(CCDName_lbl, 0, 0, 1, 1);

        ccdName = new QLineEdit(CCDData);
        ccdName->setObjectName(QStringLiteral("ccdName"));
        sizePolicy4.setHeightForWidth(ccdName->sizePolicy().hasHeightForWidth());
        ccdName->setSizePolicy(sizePolicy4);
        ccdName->setBaseSize(QSize(100, 22));
        ccdName->setMaxLength(50);

        gridLayout_4->addWidget(ccdName, 0, 1, 1, 1);

        CCDResX_lbl = new QLabel(CCDData);
        CCDResX_lbl->setObjectName(QStringLiteral("CCDResX_lbl"));

        gridLayout_4->addWidget(CCDResX_lbl, 1, 0, 1, 1);

        ccdResX = new QSpinBox(CCDData);
        ccdResX->setObjectName(QStringLiteral("ccdResX"));
        ccdResX->setMinimum(1);
        ccdResX->setMaximum(9999);

        gridLayout_4->addWidget(ccdResX, 1, 1, 1, 1);

        CCDResY_lbl = new QLabel(CCDData);
        CCDResY_lbl->setObjectName(QStringLiteral("CCDResY_lbl"));

        gridLayout_4->addWidget(CCDResY_lbl, 2, 0, 1, 1);

        ccdResY = new QSpinBox(CCDData);
        ccdResY->setObjectName(QStringLiteral("ccdResY"));
        ccdResY->setMinimum(1);
        ccdResY->setMaximum(9999);

        gridLayout_4->addWidget(ccdResY, 2, 1, 1, 1);

        CCDChipX_lbl = new QLabel(CCDData);
        CCDChipX_lbl->setObjectName(QStringLiteral("CCDChipX_lbl"));

        gridLayout_4->addWidget(CCDChipX_lbl, 3, 0, 1, 1);

        ccdChipX = new QDoubleSpinBox(CCDData);
        ccdChipX->setObjectName(QStringLiteral("ccdChipX"));
        ccdChipX->setDecimals(1);
        ccdChipX->setMinimum(0.1);
        ccdChipX->setMaximum(9999);
        ccdChipX->setSingleStep(0.1);

        gridLayout_4->addWidget(ccdChipX, 3, 1, 1, 1);

        CCDChipY_lbl = new QLabel(CCDData);
        CCDChipY_lbl->setObjectName(QStringLiteral("CCDChipY_lbl"));

        gridLayout_4->addWidget(CCDChipY_lbl, 4, 0, 1, 1);

        ccdChipY = new QDoubleSpinBox(CCDData);
        ccdChipY->setObjectName(QStringLiteral("ccdChipY"));
        ccdChipY->setDecimals(1);
        ccdChipY->setMinimum(0.1);
        ccdChipY->setMaximum(9999);
        ccdChipY->setSingleStep(0.1);

        gridLayout_4->addWidget(ccdChipY, 4, 1, 1, 1);

        CCDPixelX_lbl = new QLabel(CCDData);
        CCDPixelX_lbl->setObjectName(QStringLiteral("CCDPixelX_lbl"));

        gridLayout_4->addWidget(CCDPixelX_lbl, 5, 0, 1, 1);

        ccdPixelX = new QDoubleSpinBox(CCDData);
        ccdPixelX->setObjectName(QStringLiteral("ccdPixelX"));
        ccdPixelX->setDecimals(1);
        ccdPixelX->setMinimum(0.1);
        ccdPixelX->setMaximum(99);
        ccdPixelX->setSingleStep(0.1);

        gridLayout_4->addWidget(ccdPixelX, 5, 1, 1, 1);

        CCDPixelY_lbl = new QLabel(CCDData);
        CCDPixelY_lbl->setObjectName(QStringLiteral("CCDPixelY_lbl"));

        gridLayout_4->addWidget(CCDPixelY_lbl, 6, 0, 1, 1);

        ccdPixelY = new QDoubleSpinBox(CCDData);
        ccdPixelY->setObjectName(QStringLiteral("ccdPixelY"));
        ccdPixelY->setDecimals(1);
        ccdPixelY->setMinimum(0.1);
        ccdPixelY->setMaximum(99);
        ccdPixelY->setSingleStep(0.1);

        gridLayout_4->addWidget(ccdPixelY, 6, 1, 1, 1);


        CCD_verticalLayout_2->addWidget(CCDData);

        CCDverticalSpacer = new QSpacerItem(20, 86, QSizePolicy::Minimum, QSizePolicy::Expanding);

        CCD_verticalLayout_2->addItem(CCDverticalSpacer);


        CCD_horizontalLayout_1->addWidget(CCDInfoFrame);

        Tabs->addTab(sensorsTab, QString());
        telescopesTab = new QWidget();
        telescopesTab->setObjectName(QStringLiteral("telescopesTab"));
        horizontalLayout_6 = new QHBoxLayout(telescopesTab);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(12, 0, 12, 12);
        telescopeListFrame = new QFrame(telescopesTab);
        telescopeListFrame->setObjectName(QStringLiteral("telescopeListFrame"));
        sizePolicy2.setHeightForWidth(telescopeListFrame->sizePolicy().hasHeightForWidth());
        telescopeListFrame->setSizePolicy(sizePolicy2);
        telescopeListFrame->setFrameShape(QFrame::StyledPanel);
        telescopeListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(telescopeListFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        telescopeListLabel = new QLabel(telescopeListFrame);
        telescopeListLabel->setObjectName(QStringLiteral("telescopeListLabel"));

        verticalLayout_3->addWidget(telescopeListLabel);

        telescopeListView = new QListView(telescopeListFrame);
        telescopeListView->setObjectName(QStringLiteral("telescopeListView"));
        telescopeListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        telescopeListView->setModelColumn(0);

        verticalLayout_3->addWidget(telescopeListView);

        telescopeButtonsFrame = new QFrame(telescopeListFrame);
        telescopeButtonsFrame->setObjectName(QStringLiteral("telescopeButtonsFrame"));
        horizontalLayout = new QHBoxLayout(telescopeButtonsFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 5, 0, 0);
        addTelescope = new QPushButton(telescopeButtonsFrame);
        addTelescope->setObjectName(QStringLiteral("addTelescope"));
        addTelescope->setMinimumSize(QSize(0, 24));

        horizontalLayout->addWidget(addTelescope);

        pushButtonMoveTelescopeUp = new QPushButton(telescopeButtonsFrame);
        pushButtonMoveTelescopeUp->setObjectName(QStringLiteral("pushButtonMoveTelescopeUp"));
        sizePolicy3.setHeightForWidth(pushButtonMoveTelescopeUp->sizePolicy().hasHeightForWidth());
        pushButtonMoveTelescopeUp->setSizePolicy(sizePolicy3);
        pushButtonMoveTelescopeUp->setMinimumSize(QSize(24, 24));
        pushButtonMoveTelescopeUp->setIcon(icon);

        horizontalLayout->addWidget(pushButtonMoveTelescopeUp);

        pushButtonMoveTelescopeDown = new QPushButton(telescopeButtonsFrame);
        pushButtonMoveTelescopeDown->setObjectName(QStringLiteral("pushButtonMoveTelescopeDown"));
        sizePolicy3.setHeightForWidth(pushButtonMoveTelescopeDown->sizePolicy().hasHeightForWidth());
        pushButtonMoveTelescopeDown->setSizePolicy(sizePolicy3);
        pushButtonMoveTelescopeDown->setMinimumSize(QSize(24, 24));
        pushButtonMoveTelescopeDown->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonMoveTelescopeDown);

        deleteTelescope = new QPushButton(telescopeButtonsFrame);
        deleteTelescope->setObjectName(QStringLiteral("deleteTelescope"));
        deleteTelescope->setMinimumSize(QSize(0, 24));

        horizontalLayout->addWidget(deleteTelescope);


        verticalLayout_3->addWidget(telescopeButtonsFrame);


        horizontalLayout_6->addWidget(telescopeListFrame);

        ScopeDataFrame = new QFrame(telescopesTab);
        ScopeDataFrame->setObjectName(QStringLiteral("ScopeDataFrame"));
        ScopeDataFrame->setFrameShape(QFrame::StyledPanel);
        ScopeDataFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(ScopeDataFrame);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        ScopeInfo = new QFrame(ScopeDataFrame);
        ScopeInfo->setObjectName(QStringLiteral("ScopeInfo"));
        gridLayout_5 = new QFormLayout(ScopeInfo);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_8 = new QLabel(ScopeInfo);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->setWidget(0, QFormLayout::LabelRole, label_8);

        telescopeName = new QLineEdit(ScopeInfo);
        telescopeName->setObjectName(QStringLiteral("telescopeName"));
        telescopeName->setMaxLength(50);

        gridLayout_5->setWidget(0, QFormLayout::FieldRole, telescopeName);

        label_9 = new QLabel(ScopeInfo);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->setWidget(1, QFormLayout::LabelRole, label_9);

        telescopeFL = new QDoubleSpinBox(ScopeInfo);
        telescopeFL->setObjectName(QStringLiteral("telescopeFL"));
        telescopeFL->setDecimals(1);
        telescopeFL->setMinimum(1);
        telescopeFL->setMaximum(99999);
        telescopeFL->setSingleStep(0.1);

        gridLayout_5->setWidget(1, QFormLayout::FieldRole, telescopeFL);

        label_12 = new QLabel(ScopeInfo);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->setWidget(2, QFormLayout::LabelRole, label_12);

        telescopeDiameter = new QDoubleSpinBox(ScopeInfo);
        telescopeDiameter->setObjectName(QStringLiteral("telescopeDiameter"));
        telescopeDiameter->setDecimals(1);
        telescopeDiameter->setMinimum(1);
        telescopeDiameter->setMaximum(9999);
        telescopeDiameter->setSingleStep(0.1);

        gridLayout_5->setWidget(2, QFormLayout::FieldRole, telescopeDiameter);

        telescopeHFlip = new QCheckBox(ScopeInfo);
        telescopeHFlip->setObjectName(QStringLiteral("telescopeHFlip"));

        gridLayout_5->setWidget(3, QFormLayout::SpanningRole, telescopeHFlip);

        telescopeVFlip = new QCheckBox(ScopeInfo);
        telescopeVFlip->setObjectName(QStringLiteral("telescopeVFlip"));

        gridLayout_5->setWidget(4, QFormLayout::SpanningRole, telescopeVFlip);


        verticalLayout_6->addWidget(ScopeInfo);

        verticalSpacer_2 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout_6->addWidget(ScopeDataFrame);

        Tabs->addTab(telescopesTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        gridLayout = new QGridLayout(aboutTab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(aboutTab);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setOpenExternalLinks(true);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        Tabs->addTab(aboutTab, QString());

        verticalLayout_4->addWidget(Tabs);


        verticalLayout_2->addWidget(Contents);

        QWidget::setTabOrder(Tabs, requireSelectionCheckBox);
        QWidget::setTabOrder(requireSelectionCheckBox, scaleImageCircleCheckBox);
        QWidget::setTabOrder(scaleImageCircleCheckBox, togglePluginLineEdit);
        QWidget::setTabOrder(togglePluginLineEdit, togglePopupNavigatorWindowLineEdit);
        QWidget::setTabOrder(togglePopupNavigatorWindowLineEdit, ocularListView);
        QWidget::setTabOrder(ocularListView, addOcular);
        QWidget::setTabOrder(addOcular, pushButtonMoveOcularUp);
        QWidget::setTabOrder(pushButtonMoveOcularUp, pushButtonMoveOcularDown);
        QWidget::setTabOrder(pushButtonMoveOcularDown, deleteOcular);
        QWidget::setTabOrder(deleteOcular, ocularName);
        QWidget::setTabOrder(ocularName, ocularAFov);
        QWidget::setTabOrder(ocularAFov, ocularFL);
        QWidget::setTabOrder(ocularFL, ocularFieldStop);
        QWidget::setTabOrder(ocularFieldStop, ccdListView);
        QWidget::setTabOrder(ccdListView, addCCD);
        QWidget::setTabOrder(addCCD, pushButtonMoveSensorUp);
        QWidget::setTabOrder(pushButtonMoveSensorUp, pushButtonMoveSensorDown);
        QWidget::setTabOrder(pushButtonMoveSensorDown, deleteCCD);
        QWidget::setTabOrder(deleteCCD, ccdName);
        QWidget::setTabOrder(ccdName, ccdResX);
        QWidget::setTabOrder(ccdResX, ccdResY);
        QWidget::setTabOrder(ccdResY, ccdChipX);
        QWidget::setTabOrder(ccdChipX, ccdChipY);
        QWidget::setTabOrder(ccdChipY, ccdPixelX);
        QWidget::setTabOrder(ccdPixelX, ccdPixelY);
        QWidget::setTabOrder(ccdPixelY, telescopeListView);
        QWidget::setTabOrder(telescopeListView, addTelescope);
        QWidget::setTabOrder(addTelescope, pushButtonMoveTelescopeUp);
        QWidget::setTabOrder(pushButtonMoveTelescopeUp, pushButtonMoveTelescopeDown);
        QWidget::setTabOrder(pushButtonMoveTelescopeDown, deleteTelescope);
        QWidget::setTabOrder(deleteTelescope, telescopeName);
        QWidget::setTabOrder(telescopeName, telescopeFL);
        QWidget::setTabOrder(telescopeFL, telescopeDiameter);
        QWidget::setTabOrder(telescopeDiameter, telescopeHFlip);
        QWidget::setTabOrder(telescopeHFlip, telescopeVFlip);
        QWidget::setTabOrder(telescopeVFlip, textBrowser);

        retranslateUi(ocularDialogForm);

        Tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ocularDialogForm);
    } // setupUi

    void retranslateUi(QWidget *ocularDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("ocularDialogForm", "Oculars", 0));
        closeStelWindow->setText(QString());
        groupBoxOcularOptions->setTitle(QApplication::translate("ocularDialogForm", "Ocular view", 0));
        requireSelectionCheckBox->setText(QApplication::translate("ocularDialogForm", "Enable only if an object is selected", 0));
        scaleImageCircleCheckBox->setText(QApplication::translate("ocularDialogForm", "Scale image circle", 0));
#ifndef QT_NO_TOOLTIP
        limitStellarMagnitudeCheckBox->setToolTip(QApplication::translate("ocularDialogForm", "Apply limits stellar magnitude for different apertures of telescopes", 0));
#endif // QT_NO_TOOLTIP
        limitStellarMagnitudeCheckBox->setText(QApplication::translate("ocularDialogForm", "Limit stellar magnitude", 0));
        groupBox->setTitle(QApplication::translate("ocularDialogForm", "Key mappings", 0));
        label_11->setText(QApplication::translate("ocularDialogForm", "Toggle ocular view:", 0));
        togglePluginLineEdit->setText(QString());
        labelPopupMenuShortcut->setText(QApplication::translate("ocularDialogForm", "Open pop-up navigation menu:", 0));
        groupBoxInterface->setTitle(QApplication::translate("ocularDialogForm", "Interface", 0));
        checkBoxControlPanel->setText(QApplication::translate("ocularDialogForm", "On-screen control panel", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxInitialFOV->setToolTip(QApplication::translate("ocularDialogForm", "Mark it if you want the FOV value the same like at the startup of Stellarium.", 0));
#endif // QT_NO_TOOLTIP
        checkBoxInitialFOV->setText(QApplication::translate("ocularDialogForm", "Restore FOV to initial values", 0));
        groupBoxSensorOptions->setTitle(QApplication::translate("ocularDialogForm", "Sensor view", 0));
        checkBoxDecimalDegrees->setText(QApplication::translate("ocularDialogForm", "Use degrees and minutes for FOV of CCD", 0));
        checkBoxUseFlipForCCD->setText(QApplication::translate("ocularDialogForm", "Use flip for CCD", 0));
        Tabs->setTabText(Tabs->indexOf(generalTab), QApplication::translate("ocularDialogForm", "General", 0));
        ocularListLabel->setText(QApplication::translate("ocularDialogForm", "Eyepieces", 0));
        addOcular->setText(QApplication::translate("ocularDialogForm", "Add", 0));
        deleteOcular->setText(QApplication::translate("ocularDialogForm", "Delete", 0));
        label_3->setText(QApplication::translate("ocularDialogForm", "Name:", 0));
        label_4->setText(QApplication::translate("ocularDialogForm", "aFOV:", 0));
        label_5->setText(QApplication::translate("ocularDialogForm", "Focal length:", 0));
        label_10->setText(QApplication::translate("ocularDialogForm", "Field stop:", 0));
        binocularsCheckBox->setText(QApplication::translate("ocularDialogForm", "Binoculars", 0));
        permanentCrosshairCheckBox->setText(QApplication::translate("ocularDialogForm", "Has permanent cross-hairs", 0));
        Tabs->setTabText(Tabs->indexOf(ocularsTab), QApplication::translate("ocularDialogForm", "Eyepieces", 0));
        lensListLabel->setText(QApplication::translate("ocularDialogForm", "Lenses", 0));
        addLens->setText(QApplication::translate("ocularDialogForm", "Add", 0));
        deleteLens->setText(QApplication::translate("ocularDialogForm", "Delete", 0));
        label_7->setText(QApplication::translate("ocularDialogForm", "Name:", 0));
        label_13->setText(QApplication::translate("ocularDialogForm", "Multiplier:", 0));
        lensNote->setText(QApplication::translate("ocularDialogForm", "Values of multiplicity >1 expand the focal length (Barlow lens). Values of multiplicity <1 reduce the focal length (Shapley lens).", 0));
        Tabs->setTabText(Tabs->indexOf(lensesTab), QApplication::translate("ocularDialogForm", "Lenses", 0));
        sensorListLabel->setText(QApplication::translate("ocularDialogForm", "Sensors", 0));
        addCCD->setText(QApplication::translate("ocularDialogForm", "Add", 0));
        deleteCCD->setText(QApplication::translate("ocularDialogForm", "Delete", 0));
        CCDName_lbl->setText(QApplication::translate("ocularDialogForm", "Name:", 0));
        CCDResX_lbl->setText(QApplication::translate("ocularDialogForm", "Resolution x (pixels):", 0));
        CCDResY_lbl->setText(QApplication::translate("ocularDialogForm", "Resolution y (pixels):", 0));
        CCDChipX_lbl->setText(QApplication::translate("ocularDialogForm", "Chip width (mm):", 0));
        CCDChipY_lbl->setText(QApplication::translate("ocularDialogForm", "Chip height (mm):", 0));
        CCDPixelX_lbl->setText(QApplication::translate("ocularDialogForm", "Pixel width (micron):", 0));
        CCDPixelY_lbl->setText(QApplication::translate("ocularDialogForm", "Pixel height (micron):", 0));
        Tabs->setTabText(Tabs->indexOf(sensorsTab), QApplication::translate("ocularDialogForm", "Sensors", 0));
        telescopeListLabel->setText(QApplication::translate("ocularDialogForm", "Telescopes", 0));
        addTelescope->setText(QApplication::translate("ocularDialogForm", "Add", 0));
        deleteTelescope->setText(QApplication::translate("ocularDialogForm", "Delete", 0));
        label_8->setText(QApplication::translate("ocularDialogForm", "Name:", 0));
        label_9->setText(QApplication::translate("ocularDialogForm", "Focal length:", 0));
        label_12->setText(QApplication::translate("ocularDialogForm", "Diameter:", 0));
        telescopeHFlip->setText(QApplication::translate("ocularDialogForm", "Horizontal flip", 0));
        telescopeVFlip->setText(QApplication::translate("ocularDialogForm", "Vertical flip", 0));
        Tabs->setTabText(Tabs->indexOf(telescopesTab), QApplication::translate("ocularDialogForm", "Telescopes", 0));
        Tabs->setTabText(Tabs->indexOf(aboutTab), QApplication::translate("ocularDialogForm", "About", "tab in plugin windows"));
        Q_UNUSED(ocularDialogForm);
    } // retranslateUi

};

namespace Ui {
    class ocularDialogForm: public Ui_ocularDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULARDIALOG_H
