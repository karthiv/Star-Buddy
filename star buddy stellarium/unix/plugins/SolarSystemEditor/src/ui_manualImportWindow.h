/********************************************************************************
** Form generated from reading UI file 'manualImportWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUALIMPORTWINDOW_H
#define UI_MANUALIMPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_manualImportWindow
{
public:
    QGridLayout *gridLayoutWindow;
    BarFrame *LocationBar;
    QHBoxLayout *_2;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QGroupBox *groupBoxObjectType;
    QVBoxLayout *verticalLayoutObjectType;
    QRadioButton *radioButtonSolarSystemObject;
    QRadioButton *radioButtonMinorPlanet;
    QRadioButton *radioButtonComet;
    QRadioButton *radioButtonSatellite;
    QGroupBox *groupBoxName;
    QGridLayout *gridLayoutName;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QLabel *labelIdentifier;
    QLineEdit *lineEditIdentifier;
    QCheckBox *checkBoxMinorPlanetNumber;
    QLineEdit *lineEditMinorPlanetNumber;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayoutScroll;
    QGroupBox *groupBoxProperties;
    QGridLayout *gridLayout_4;
    QLabel *labelParent;
    QComboBox *comboBoxParent;
    QLabel *labelRadius;
    QLineEdit *lineEditRadius;
    QLabel *labelOblateness;
    QLineEdit *lineEditOblateness;
    QLabel *labelAlbedo;
    QLineEdit *lineEditAlbedo;
    QLabel *labelColor;
    QPushButton *pushButtonSelectColor;
    QCheckBox *checkBoxLighting;
    QCheckBox *checkBoxAtmosphere;
    QCheckBox *checkBoxHidden;
    QLabel *labelTexture;
    QLineEdit *lineEditTexture;
    QPushButton *pushButtonSelectTexture;
    QFrame *frameMagnitude;
    QGridLayout *gridLayoutMagnitude;
    QLabel *labelAbsoluteMagnitude;
    QLineEdit *lineEditAbsoluteMagnitude;
    QLabel *labelSlopeParameter;
    QLineEdit *lineEditSlopeParameter;
    QPushButton *pushButtonCalculateRadius;
    QLabel *labelMagnitudeSystem;
    QLineEdit *lineEditColor;
    QGroupBox *groupBoxOrbitalElements;
    QGridLayout *gridLayoutOrbitalElements;
    QLabel *labelOrbitType;
    QRadioButton *radioButtonCometaryOrbit;
    QRadioButton *radioButtonEllipticOrbit;
    QLabel *labelEccentricity;
    QLineEdit *lineEditEccentricity;
    QLabel *labelInclination;
    QLineEdit *lineEditInclination;
    QLabel *labelLongitudeOfTheAscendingNode;
    QLineEdit *lineEditLongitudeOfTheAscendingNode;
    QFrame *framePeriapsis;
    QGridLayout *gridLayoutPeriapsis;
    QRadioButton *radioButtonArgumentOfPeriapsis;
    QLineEdit *lineEditArgumentOfPeriapsis;
    QRadioButton *radioButtonLongitudeOfPeriapsis;
    QLineEdit *lineEditLongitudeOfPeriapsis;
    QFrame *frameSemiMajorAxis;
    QGridLayout *gridLayoutSemiMajorAxis;
    QLineEdit *lineEditSemiMajorAxis;
    QLineEdit *lineEditPeriapsisDistance;
    QRadioButton *radioButtonSemiMajorAxis;
    QRadioButton *radioButtonPeriapsisDistance;
    QFrame *framePeriod;
    QGridLayout *gridLayoutPeriod;
    QCheckBox *checkBoxPeriod;
    QLineEdit *lineEditPeriod;
    QCheckBox *checkBoxMeanMotion;
    QLineEdit *lineEditMeanMotion;
    QFrame *frameEpoch;
    QGridLayout *gridLayoutEpoch;
    QLineEdit *lineEditEpoch;
    QLineEdit *lineEditTimeOfPeriapsis;
    QRadioButton *radioButtonEpoch;
    QRadioButton *radioButtonTimeOfPeriapsis;
    QPushButton *pushButtonEpochJ2000;
    QFrame *frameMeanAnomaly;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditMeanAnomaly;
    QLineEdit *lineEditMeanLongitude;
    QRadioButton *radioButtonMeanAnomaly;
    QRadioButton *radioButtonMeanLongitude;
    QRadioButton *radioButtonOrbitFunction;
    QComboBox *comboBoxOrbitFunction;
    QCheckBox *checkBoxOrbitVisualizationPeriod;
    QLineEdit *lineEditOrbitVisualizationPeriod;
    QGroupBox *groupBoxRotationalElements;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxObliquity;
    QLineEdit *lineEditObliquity;
    QCheckBox *checkBoxNorthPoleRA;
    QLineEdit *lineEditNorthPoleRA;
    QCheckBox *checkBoxNorthPoleDec;
    QLineEdit *lineEditNorthPoleDec;
    QCheckBox *checkBoxRotationalPeriod;
    QLineEdit *lineEditRotationalPeriod;
    QCheckBox *checkBoxPrecessionRate;
    QLineEdit *lineEditPrecessionRate;
    QCheckBox *checkBoxRotationalEpoch;
    QLineEdit *lineEditRotationalEpoch;
    QCheckBox *checkBoxOffset;
    QLineEdit *lineEditOffset;
    QCheckBox *checkBoxEquatorAscendingNode;
    QPushButton *pushButtonRotationalEpochJ2000;
    QLineEdit *lineEditEquatorAscendingNode;
    QGroupBox *groupBoxRings;
    QGridLayout *gridLayout_3;
    QLabel *labelInnerSize;
    QLabel *labelOuterSize;
    QLabel *labelRingTexture;
    QLineEdit *lineEditRingTexture;
    QPushButton *pushButtonSelectRingTexture;
    QLineEdit *lineEditRingInnerSize;
    QLineEdit *lineEditRingOuterSize;
    QFrame *frameButton;
    QHBoxLayout *horizontalLayoutButton;
    QLabel *labelErrorMessage;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *manualImportWindow)
    {
        if (manualImportWindow->objectName().isEmpty())
            manualImportWindow->setObjectName(QStringLiteral("manualImportWindow"));
        manualImportWindow->resize(600, 500);
        gridLayoutWindow = new QGridLayout(manualImportWindow);
        gridLayoutWindow->setSpacing(0);
        gridLayoutWindow->setContentsMargins(0, 0, 0, 0);
        gridLayoutWindow->setObjectName(QStringLiteral("gridLayoutWindow"));
        LocationBar = new BarFrame(manualImportWindow);
        LocationBar->setObjectName(QStringLiteral("LocationBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LocationBar->sizePolicy().hasHeightForWidth());
        LocationBar->setSizePolicy(sizePolicy);
        LocationBar->setMinimumSize(QSize(0, 25));
        LocationBar->setMaximumSize(QSize(16777215, 30));
        LocationBar->setFocusPolicy(Qt::NoFocus);
        LocationBar->setAutoFillBackground(false);
        LocationBar->setFrameShape(QFrame::StyledPanel);
        _2 = new QHBoxLayout(LocationBar);
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 4, 0);
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(leftSpacer);

        stelWindowTitle = new QLabel(LocationBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));
        stelWindowTitle->setText(QStringLiteral("Define an object"));

        _2->addWidget(stelWindowTitle);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(rightSpacer);

        closeStelWindow = new QPushButton(LocationBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        _2->addWidget(closeStelWindow);


        gridLayoutWindow->addWidget(LocationBar, 0, 0, 1, 2);

        groupBoxObjectType = new QGroupBox(manualImportWindow);
        groupBoxObjectType->setObjectName(QStringLiteral("groupBoxObjectType"));
        groupBoxObjectType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayoutObjectType = new QVBoxLayout(groupBoxObjectType);
        verticalLayoutObjectType->setContentsMargins(0, 0, 0, 0);
        verticalLayoutObjectType->setObjectName(QStringLiteral("verticalLayoutObjectType"));
        radioButtonSolarSystemObject = new QRadioButton(groupBoxObjectType);
        radioButtonSolarSystemObject->setObjectName(QStringLiteral("radioButtonSolarSystemObject"));

        verticalLayoutObjectType->addWidget(radioButtonSolarSystemObject);

        radioButtonMinorPlanet = new QRadioButton(groupBoxObjectType);
        radioButtonMinorPlanet->setObjectName(QStringLiteral("radioButtonMinorPlanet"));

        verticalLayoutObjectType->addWidget(radioButtonMinorPlanet);

        radioButtonComet = new QRadioButton(groupBoxObjectType);
        radioButtonComet->setObjectName(QStringLiteral("radioButtonComet"));

        verticalLayoutObjectType->addWidget(radioButtonComet);

        radioButtonSatellite = new QRadioButton(groupBoxObjectType);
        radioButtonSatellite->setObjectName(QStringLiteral("radioButtonSatellite"));

        verticalLayoutObjectType->addWidget(radioButtonSatellite);


        gridLayoutWindow->addWidget(groupBoxObjectType, 1, 1, 1, 1);

        groupBoxName = new QGroupBox(manualImportWindow);
        groupBoxName->setObjectName(QStringLiteral("groupBoxName"));
        groupBoxName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayoutName = new QGridLayout(groupBoxName);
        gridLayoutName->setContentsMargins(0, 0, 0, 0);
        gridLayoutName->setObjectName(QStringLiteral("gridLayoutName"));
        labelName = new QLabel(groupBoxName);
        labelName->setObjectName(QStringLiteral("labelName"));

        gridLayoutName->addWidget(labelName, 0, 0, 1, 1);

        lineEditName = new QLineEdit(groupBoxName);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        gridLayoutName->addWidget(lineEditName, 0, 1, 1, 1);

        labelIdentifier = new QLabel(groupBoxName);
        labelIdentifier->setObjectName(QStringLiteral("labelIdentifier"));

        gridLayoutName->addWidget(labelIdentifier, 1, 0, 1, 1);

        lineEditIdentifier = new QLineEdit(groupBoxName);
        lineEditIdentifier->setObjectName(QStringLiteral("lineEditIdentifier"));

        gridLayoutName->addWidget(lineEditIdentifier, 1, 1, 1, 1);

        checkBoxMinorPlanetNumber = new QCheckBox(groupBoxName);
        checkBoxMinorPlanetNumber->setObjectName(QStringLiteral("checkBoxMinorPlanetNumber"));

        gridLayoutName->addWidget(checkBoxMinorPlanetNumber, 2, 0, 1, 1);

        lineEditMinorPlanetNumber = new QLineEdit(groupBoxName);
        lineEditMinorPlanetNumber->setObjectName(QStringLiteral("lineEditMinorPlanetNumber"));

        gridLayoutName->addWidget(lineEditMinorPlanetNumber, 2, 1, 1, 1);


        gridLayoutWindow->addWidget(groupBoxName, 1, 0, 1, 1);

        scrollArea = new QScrollArea(manualImportWindow);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 582, 1436));
        verticalLayoutScroll = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayoutScroll->setContentsMargins(0, 0, 0, 0);
        verticalLayoutScroll->setObjectName(QStringLiteral("verticalLayoutScroll"));
        groupBoxProperties = new QGroupBox(scrollAreaWidgetContents);
        groupBoxProperties->setObjectName(QStringLiteral("groupBoxProperties"));
        gridLayout_4 = new QGridLayout(groupBoxProperties);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelParent = new QLabel(groupBoxProperties);
        labelParent->setObjectName(QStringLiteral("labelParent"));

        gridLayout_4->addWidget(labelParent, 0, 0, 1, 1);

        comboBoxParent = new QComboBox(groupBoxProperties);
        comboBoxParent->setObjectName(QStringLiteral("comboBoxParent"));

        gridLayout_4->addWidget(comboBoxParent, 0, 2, 1, 2);

        labelRadius = new QLabel(groupBoxProperties);
        labelRadius->setObjectName(QStringLiteral("labelRadius"));

        gridLayout_4->addWidget(labelRadius, 1, 0, 1, 1);

        lineEditRadius = new QLineEdit(groupBoxProperties);
        lineEditRadius->setObjectName(QStringLiteral("lineEditRadius"));

        gridLayout_4->addWidget(lineEditRadius, 1, 2, 1, 2);

        labelOblateness = new QLabel(groupBoxProperties);
        labelOblateness->setObjectName(QStringLiteral("labelOblateness"));

        gridLayout_4->addWidget(labelOblateness, 2, 0, 1, 1);

        lineEditOblateness = new QLineEdit(groupBoxProperties);
        lineEditOblateness->setObjectName(QStringLiteral("lineEditOblateness"));

        gridLayout_4->addWidget(lineEditOblateness, 2, 2, 1, 2);

        labelAlbedo = new QLabel(groupBoxProperties);
        labelAlbedo->setObjectName(QStringLiteral("labelAlbedo"));

        gridLayout_4->addWidget(labelAlbedo, 3, 0, 1, 1);

        lineEditAlbedo = new QLineEdit(groupBoxProperties);
        lineEditAlbedo->setObjectName(QStringLiteral("lineEditAlbedo"));

        gridLayout_4->addWidget(lineEditAlbedo, 3, 2, 1, 2);

        labelColor = new QLabel(groupBoxProperties);
        labelColor->setObjectName(QStringLiteral("labelColor"));

        gridLayout_4->addWidget(labelColor, 4, 0, 1, 1);

        pushButtonSelectColor = new QPushButton(groupBoxProperties);
        pushButtonSelectColor->setObjectName(QStringLiteral("pushButtonSelectColor"));

        gridLayout_4->addWidget(pushButtonSelectColor, 4, 3, 1, 1);

        checkBoxLighting = new QCheckBox(groupBoxProperties);
        checkBoxLighting->setObjectName(QStringLiteral("checkBoxLighting"));

        gridLayout_4->addWidget(checkBoxLighting, 5, 0, 1, 4);

        checkBoxAtmosphere = new QCheckBox(groupBoxProperties);
        checkBoxAtmosphere->setObjectName(QStringLiteral("checkBoxAtmosphere"));

        gridLayout_4->addWidget(checkBoxAtmosphere, 6, 0, 1, 4);

        checkBoxHidden = new QCheckBox(groupBoxProperties);
        checkBoxHidden->setObjectName(QStringLiteral("checkBoxHidden"));

        gridLayout_4->addWidget(checkBoxHidden, 7, 0, 1, 4);

        labelTexture = new QLabel(groupBoxProperties);
        labelTexture->setObjectName(QStringLiteral("labelTexture"));

        gridLayout_4->addWidget(labelTexture, 8, 0, 1, 1);

        lineEditTexture = new QLineEdit(groupBoxProperties);
        lineEditTexture->setObjectName(QStringLiteral("lineEditTexture"));
        lineEditTexture->setReadOnly(true);

        gridLayout_4->addWidget(lineEditTexture, 8, 2, 1, 1);

        pushButtonSelectTexture = new QPushButton(groupBoxProperties);
        pushButtonSelectTexture->setObjectName(QStringLiteral("pushButtonSelectTexture"));

        gridLayout_4->addWidget(pushButtonSelectTexture, 8, 3, 1, 1);

        frameMagnitude = new QFrame(groupBoxProperties);
        frameMagnitude->setObjectName(QStringLiteral("frameMagnitude"));
        gridLayoutMagnitude = new QGridLayout(frameMagnitude);
        gridLayoutMagnitude->setContentsMargins(0, 0, 0, 0);
        gridLayoutMagnitude->setObjectName(QStringLiteral("gridLayoutMagnitude"));
        labelAbsoluteMagnitude = new QLabel(frameMagnitude);
        labelAbsoluteMagnitude->setObjectName(QStringLiteral("labelAbsoluteMagnitude"));

        gridLayoutMagnitude->addWidget(labelAbsoluteMagnitude, 1, 0, 1, 1);

        lineEditAbsoluteMagnitude = new QLineEdit(frameMagnitude);
        lineEditAbsoluteMagnitude->setObjectName(QStringLiteral("lineEditAbsoluteMagnitude"));

        gridLayoutMagnitude->addWidget(lineEditAbsoluteMagnitude, 1, 1, 1, 1);

        labelSlopeParameter = new QLabel(frameMagnitude);
        labelSlopeParameter->setObjectName(QStringLiteral("labelSlopeParameter"));

        gridLayoutMagnitude->addWidget(labelSlopeParameter, 1, 2, 1, 1);

        lineEditSlopeParameter = new QLineEdit(frameMagnitude);
        lineEditSlopeParameter->setObjectName(QStringLiteral("lineEditSlopeParameter"));

        gridLayoutMagnitude->addWidget(lineEditSlopeParameter, 1, 3, 1, 1);

        pushButtonCalculateRadius = new QPushButton(frameMagnitude);
        pushButtonCalculateRadius->setObjectName(QStringLiteral("pushButtonCalculateRadius"));

        gridLayoutMagnitude->addWidget(pushButtonCalculateRadius, 2, 0, 1, 4);

        labelMagnitudeSystem = new QLabel(frameMagnitude);
        labelMagnitudeSystem->setObjectName(QStringLiteral("labelMagnitudeSystem"));

        gridLayoutMagnitude->addWidget(labelMagnitudeSystem, 0, 0, 1, 4);


        gridLayout_4->addWidget(frameMagnitude, 9, 0, 1, 4);

        lineEditColor = new QLineEdit(groupBoxProperties);
        lineEditColor->setObjectName(QStringLiteral("lineEditColor"));

        gridLayout_4->addWidget(lineEditColor, 4, 2, 1, 1);


        verticalLayoutScroll->addWidget(groupBoxProperties);

        groupBoxOrbitalElements = new QGroupBox(scrollAreaWidgetContents);
        groupBoxOrbitalElements->setObjectName(QStringLiteral("groupBoxOrbitalElements"));
        gridLayoutOrbitalElements = new QGridLayout(groupBoxOrbitalElements);
        gridLayoutOrbitalElements->setContentsMargins(0, 0, 0, 0);
        gridLayoutOrbitalElements->setObjectName(QStringLiteral("gridLayoutOrbitalElements"));
        labelOrbitType = new QLabel(groupBoxOrbitalElements);
        labelOrbitType->setObjectName(QStringLiteral("labelOrbitType"));

        gridLayoutOrbitalElements->addWidget(labelOrbitType, 0, 0, 1, 2);

        radioButtonCometaryOrbit = new QRadioButton(groupBoxOrbitalElements);
        radioButtonCometaryOrbit->setObjectName(QStringLiteral("radioButtonCometaryOrbit"));

        gridLayoutOrbitalElements->addWidget(radioButtonCometaryOrbit, 1, 0, 1, 2);

        radioButtonEllipticOrbit = new QRadioButton(groupBoxOrbitalElements);
        radioButtonEllipticOrbit->setObjectName(QStringLiteral("radioButtonEllipticOrbit"));

        gridLayoutOrbitalElements->addWidget(radioButtonEllipticOrbit, 2, 0, 1, 2);

        labelEccentricity = new QLabel(groupBoxOrbitalElements);
        labelEccentricity->setObjectName(QStringLiteral("labelEccentricity"));

        gridLayoutOrbitalElements->addWidget(labelEccentricity, 4, 0, 1, 1);

        lineEditEccentricity = new QLineEdit(groupBoxOrbitalElements);
        lineEditEccentricity->setObjectName(QStringLiteral("lineEditEccentricity"));

        gridLayoutOrbitalElements->addWidget(lineEditEccentricity, 4, 1, 1, 1);

        labelInclination = new QLabel(groupBoxOrbitalElements);
        labelInclination->setObjectName(QStringLiteral("labelInclination"));

        gridLayoutOrbitalElements->addWidget(labelInclination, 5, 0, 1, 1);

        lineEditInclination = new QLineEdit(groupBoxOrbitalElements);
        lineEditInclination->setObjectName(QStringLiteral("lineEditInclination"));

        gridLayoutOrbitalElements->addWidget(lineEditInclination, 5, 1, 1, 1);

        labelLongitudeOfTheAscendingNode = new QLabel(groupBoxOrbitalElements);
        labelLongitudeOfTheAscendingNode->setObjectName(QStringLiteral("labelLongitudeOfTheAscendingNode"));

        gridLayoutOrbitalElements->addWidget(labelLongitudeOfTheAscendingNode, 6, 0, 1, 1);

        lineEditLongitudeOfTheAscendingNode = new QLineEdit(groupBoxOrbitalElements);
        lineEditLongitudeOfTheAscendingNode->setObjectName(QStringLiteral("lineEditLongitudeOfTheAscendingNode"));

        gridLayoutOrbitalElements->addWidget(lineEditLongitudeOfTheAscendingNode, 6, 1, 1, 1);

        framePeriapsis = new QFrame(groupBoxOrbitalElements);
        framePeriapsis->setObjectName(QStringLiteral("framePeriapsis"));
        gridLayoutPeriapsis = new QGridLayout(framePeriapsis);
        gridLayoutPeriapsis->setContentsMargins(0, 0, 0, 0);
        gridLayoutPeriapsis->setObjectName(QStringLiteral("gridLayoutPeriapsis"));
        radioButtonArgumentOfPeriapsis = new QRadioButton(framePeriapsis);
        radioButtonArgumentOfPeriapsis->setObjectName(QStringLiteral("radioButtonArgumentOfPeriapsis"));

        gridLayoutPeriapsis->addWidget(radioButtonArgumentOfPeriapsis, 0, 0, 1, 1);

        lineEditArgumentOfPeriapsis = new QLineEdit(framePeriapsis);
        lineEditArgumentOfPeriapsis->setObjectName(QStringLiteral("lineEditArgumentOfPeriapsis"));

        gridLayoutPeriapsis->addWidget(lineEditArgumentOfPeriapsis, 0, 1, 1, 1);

        radioButtonLongitudeOfPeriapsis = new QRadioButton(framePeriapsis);
        radioButtonLongitudeOfPeriapsis->setObjectName(QStringLiteral("radioButtonLongitudeOfPeriapsis"));

        gridLayoutPeriapsis->addWidget(radioButtonLongitudeOfPeriapsis, 1, 0, 1, 1);

        lineEditLongitudeOfPeriapsis = new QLineEdit(framePeriapsis);
        lineEditLongitudeOfPeriapsis->setObjectName(QStringLiteral("lineEditLongitudeOfPeriapsis"));

        gridLayoutPeriapsis->addWidget(lineEditLongitudeOfPeriapsis, 1, 1, 1, 1);


        gridLayoutOrbitalElements->addWidget(framePeriapsis, 7, 0, 1, 2);

        frameSemiMajorAxis = new QFrame(groupBoxOrbitalElements);
        frameSemiMajorAxis->setObjectName(QStringLiteral("frameSemiMajorAxis"));
        gridLayoutSemiMajorAxis = new QGridLayout(frameSemiMajorAxis);
        gridLayoutSemiMajorAxis->setContentsMargins(0, 0, 0, 0);
        gridLayoutSemiMajorAxis->setObjectName(QStringLiteral("gridLayoutSemiMajorAxis"));
        lineEditSemiMajorAxis = new QLineEdit(frameSemiMajorAxis);
        lineEditSemiMajorAxis->setObjectName(QStringLiteral("lineEditSemiMajorAxis"));

        gridLayoutSemiMajorAxis->addWidget(lineEditSemiMajorAxis, 0, 1, 1, 1);

        lineEditPeriapsisDistance = new QLineEdit(frameSemiMajorAxis);
        lineEditPeriapsisDistance->setObjectName(QStringLiteral("lineEditPeriapsisDistance"));

        gridLayoutSemiMajorAxis->addWidget(lineEditPeriapsisDistance, 1, 1, 1, 1);

        radioButtonSemiMajorAxis = new QRadioButton(frameSemiMajorAxis);
        radioButtonSemiMajorAxis->setObjectName(QStringLiteral("radioButtonSemiMajorAxis"));

        gridLayoutSemiMajorAxis->addWidget(radioButtonSemiMajorAxis, 0, 0, 1, 1);

        radioButtonPeriapsisDistance = new QRadioButton(frameSemiMajorAxis);
        radioButtonPeriapsisDistance->setObjectName(QStringLiteral("radioButtonPeriapsisDistance"));

        gridLayoutSemiMajorAxis->addWidget(radioButtonPeriapsisDistance, 1, 0, 1, 1);


        gridLayoutOrbitalElements->addWidget(frameSemiMajorAxis, 8, 0, 1, 2);

        framePeriod = new QFrame(groupBoxOrbitalElements);
        framePeriod->setObjectName(QStringLiteral("framePeriod"));
        gridLayoutPeriod = new QGridLayout(framePeriod);
        gridLayoutPeriod->setContentsMargins(0, 0, 0, 0);
        gridLayoutPeriod->setObjectName(QStringLiteral("gridLayoutPeriod"));
        checkBoxPeriod = new QCheckBox(framePeriod);
        checkBoxPeriod->setObjectName(QStringLiteral("checkBoxPeriod"));

        gridLayoutPeriod->addWidget(checkBoxPeriod, 0, 0, 1, 1);

        lineEditPeriod = new QLineEdit(framePeriod);
        lineEditPeriod->setObjectName(QStringLiteral("lineEditPeriod"));

        gridLayoutPeriod->addWidget(lineEditPeriod, 0, 1, 1, 1);

        checkBoxMeanMotion = new QCheckBox(framePeriod);
        checkBoxMeanMotion->setObjectName(QStringLiteral("checkBoxMeanMotion"));

        gridLayoutPeriod->addWidget(checkBoxMeanMotion, 1, 0, 1, 1);

        lineEditMeanMotion = new QLineEdit(framePeriod);
        lineEditMeanMotion->setObjectName(QStringLiteral("lineEditMeanMotion"));

        gridLayoutPeriod->addWidget(lineEditMeanMotion, 1, 1, 1, 1);


        gridLayoutOrbitalElements->addWidget(framePeriod, 9, 0, 1, 2);

        frameEpoch = new QFrame(groupBoxOrbitalElements);
        frameEpoch->setObjectName(QStringLiteral("frameEpoch"));
        gridLayoutEpoch = new QGridLayout(frameEpoch);
        gridLayoutEpoch->setContentsMargins(0, 0, 0, 0);
        gridLayoutEpoch->setObjectName(QStringLiteral("gridLayoutEpoch"));
        lineEditEpoch = new QLineEdit(frameEpoch);
        lineEditEpoch->setObjectName(QStringLiteral("lineEditEpoch"));

        gridLayoutEpoch->addWidget(lineEditEpoch, 0, 1, 1, 1);

        lineEditTimeOfPeriapsis = new QLineEdit(frameEpoch);
        lineEditTimeOfPeriapsis->setObjectName(QStringLiteral("lineEditTimeOfPeriapsis"));

        gridLayoutEpoch->addWidget(lineEditTimeOfPeriapsis, 1, 1, 1, 2);

        radioButtonEpoch = new QRadioButton(frameEpoch);
        radioButtonEpoch->setObjectName(QStringLiteral("radioButtonEpoch"));

        gridLayoutEpoch->addWidget(radioButtonEpoch, 0, 0, 1, 1);

        radioButtonTimeOfPeriapsis = new QRadioButton(frameEpoch);
        radioButtonTimeOfPeriapsis->setObjectName(QStringLiteral("radioButtonTimeOfPeriapsis"));

        gridLayoutEpoch->addWidget(radioButtonTimeOfPeriapsis, 1, 0, 1, 1);

        pushButtonEpochJ2000 = new QPushButton(frameEpoch);
        pushButtonEpochJ2000->setObjectName(QStringLiteral("pushButtonEpochJ2000"));

        gridLayoutEpoch->addWidget(pushButtonEpochJ2000, 0, 2, 1, 1);


        gridLayoutOrbitalElements->addWidget(frameEpoch, 10, 0, 1, 2);

        frameMeanAnomaly = new QFrame(groupBoxOrbitalElements);
        frameMeanAnomaly->setObjectName(QStringLiteral("frameMeanAnomaly"));
        gridLayout_2 = new QGridLayout(frameMeanAnomaly);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEditMeanAnomaly = new QLineEdit(frameMeanAnomaly);
        lineEditMeanAnomaly->setObjectName(QStringLiteral("lineEditMeanAnomaly"));

        gridLayout_2->addWidget(lineEditMeanAnomaly, 1, 1, 1, 1);

        lineEditMeanLongitude = new QLineEdit(frameMeanAnomaly);
        lineEditMeanLongitude->setObjectName(QStringLiteral("lineEditMeanLongitude"));

        gridLayout_2->addWidget(lineEditMeanLongitude, 2, 1, 1, 1);

        radioButtonMeanAnomaly = new QRadioButton(frameMeanAnomaly);
        radioButtonMeanAnomaly->setObjectName(QStringLiteral("radioButtonMeanAnomaly"));

        gridLayout_2->addWidget(radioButtonMeanAnomaly, 1, 0, 1, 1);

        radioButtonMeanLongitude = new QRadioButton(frameMeanAnomaly);
        radioButtonMeanLongitude->setObjectName(QStringLiteral("radioButtonMeanLongitude"));

        gridLayout_2->addWidget(radioButtonMeanLongitude, 2, 0, 1, 1);


        gridLayoutOrbitalElements->addWidget(frameMeanAnomaly, 11, 0, 1, 2);

        radioButtonOrbitFunction = new QRadioButton(groupBoxOrbitalElements);
        radioButtonOrbitFunction->setObjectName(QStringLiteral("radioButtonOrbitFunction"));

        gridLayoutOrbitalElements->addWidget(radioButtonOrbitFunction, 3, 0, 1, 1);

        comboBoxOrbitFunction = new QComboBox(groupBoxOrbitalElements);
        comboBoxOrbitFunction->setObjectName(QStringLiteral("comboBoxOrbitFunction"));

        gridLayoutOrbitalElements->addWidget(comboBoxOrbitFunction, 3, 1, 1, 1);

        checkBoxOrbitVisualizationPeriod = new QCheckBox(groupBoxOrbitalElements);
        checkBoxOrbitVisualizationPeriod->setObjectName(QStringLiteral("checkBoxOrbitVisualizationPeriod"));

        gridLayoutOrbitalElements->addWidget(checkBoxOrbitVisualizationPeriod, 12, 0, 1, 1);

        lineEditOrbitVisualizationPeriod = new QLineEdit(groupBoxOrbitalElements);
        lineEditOrbitVisualizationPeriod->setObjectName(QStringLiteral("lineEditOrbitVisualizationPeriod"));

        gridLayoutOrbitalElements->addWidget(lineEditOrbitVisualizationPeriod, 12, 1, 1, 1);


        verticalLayoutScroll->addWidget(groupBoxOrbitalElements);

        groupBoxRotationalElements = new QGroupBox(scrollAreaWidgetContents);
        groupBoxRotationalElements->setObjectName(QStringLiteral("groupBoxRotationalElements"));
        gridLayout = new QGridLayout(groupBoxRotationalElements);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkBoxObliquity = new QCheckBox(groupBoxRotationalElements);
        checkBoxObliquity->setObjectName(QStringLiteral("checkBoxObliquity"));

        gridLayout->addWidget(checkBoxObliquity, 0, 0, 1, 1);

        lineEditObliquity = new QLineEdit(groupBoxRotationalElements);
        lineEditObliquity->setObjectName(QStringLiteral("lineEditObliquity"));

        gridLayout->addWidget(lineEditObliquity, 0, 1, 1, 3);

        checkBoxNorthPoleRA = new QCheckBox(groupBoxRotationalElements);
        checkBoxNorthPoleRA->setObjectName(QStringLiteral("checkBoxNorthPoleRA"));

        gridLayout->addWidget(checkBoxNorthPoleRA, 2, 0, 1, 1);

        lineEditNorthPoleRA = new QLineEdit(groupBoxRotationalElements);
        lineEditNorthPoleRA->setObjectName(QStringLiteral("lineEditNorthPoleRA"));

        gridLayout->addWidget(lineEditNorthPoleRA, 2, 1, 1, 3);

        checkBoxNorthPoleDec = new QCheckBox(groupBoxRotationalElements);
        checkBoxNorthPoleDec->setObjectName(QStringLiteral("checkBoxNorthPoleDec"));

        gridLayout->addWidget(checkBoxNorthPoleDec, 3, 0, 1, 1);

        lineEditNorthPoleDec = new QLineEdit(groupBoxRotationalElements);
        lineEditNorthPoleDec->setObjectName(QStringLiteral("lineEditNorthPoleDec"));

        gridLayout->addWidget(lineEditNorthPoleDec, 3, 1, 1, 3);

        checkBoxRotationalPeriod = new QCheckBox(groupBoxRotationalElements);
        checkBoxRotationalPeriod->setObjectName(QStringLiteral("checkBoxRotationalPeriod"));

        gridLayout->addWidget(checkBoxRotationalPeriod, 4, 0, 1, 1);

        lineEditRotationalPeriod = new QLineEdit(groupBoxRotationalElements);
        lineEditRotationalPeriod->setObjectName(QStringLiteral("lineEditRotationalPeriod"));

        gridLayout->addWidget(lineEditRotationalPeriod, 4, 1, 1, 3);

        checkBoxPrecessionRate = new QCheckBox(groupBoxRotationalElements);
        checkBoxPrecessionRate->setObjectName(QStringLiteral("checkBoxPrecessionRate"));

        gridLayout->addWidget(checkBoxPrecessionRate, 5, 0, 1, 1);

        lineEditPrecessionRate = new QLineEdit(groupBoxRotationalElements);
        lineEditPrecessionRate->setObjectName(QStringLiteral("lineEditPrecessionRate"));

        gridLayout->addWidget(lineEditPrecessionRate, 5, 1, 1, 3);

        checkBoxRotationalEpoch = new QCheckBox(groupBoxRotationalElements);
        checkBoxRotationalEpoch->setObjectName(QStringLiteral("checkBoxRotationalEpoch"));

        gridLayout->addWidget(checkBoxRotationalEpoch, 6, 0, 1, 1);

        lineEditRotationalEpoch = new QLineEdit(groupBoxRotationalElements);
        lineEditRotationalEpoch->setObjectName(QStringLiteral("lineEditRotationalEpoch"));

        gridLayout->addWidget(lineEditRotationalEpoch, 6, 1, 1, 1);

        checkBoxOffset = new QCheckBox(groupBoxRotationalElements);
        checkBoxOffset->setObjectName(QStringLiteral("checkBoxOffset"));

        gridLayout->addWidget(checkBoxOffset, 7, 0, 1, 1);

        lineEditOffset = new QLineEdit(groupBoxRotationalElements);
        lineEditOffset->setObjectName(QStringLiteral("lineEditOffset"));

        gridLayout->addWidget(lineEditOffset, 7, 1, 1, 3);

        checkBoxEquatorAscendingNode = new QCheckBox(groupBoxRotationalElements);
        checkBoxEquatorAscendingNode->setObjectName(QStringLiteral("checkBoxEquatorAscendingNode"));

        gridLayout->addWidget(checkBoxEquatorAscendingNode, 1, 0, 1, 3);

        pushButtonRotationalEpochJ2000 = new QPushButton(groupBoxRotationalElements);
        pushButtonRotationalEpochJ2000->setObjectName(QStringLiteral("pushButtonRotationalEpochJ2000"));

        gridLayout->addWidget(pushButtonRotationalEpochJ2000, 6, 3, 1, 1);

        lineEditEquatorAscendingNode = new QLineEdit(groupBoxRotationalElements);
        lineEditEquatorAscendingNode->setObjectName(QStringLiteral("lineEditEquatorAscendingNode"));

        gridLayout->addWidget(lineEditEquatorAscendingNode, 1, 3, 1, 1);


        verticalLayoutScroll->addWidget(groupBoxRotationalElements);

        groupBoxRings = new QGroupBox(scrollAreaWidgetContents);
        groupBoxRings->setObjectName(QStringLiteral("groupBoxRings"));
        groupBoxRings->setCheckable(true);
        groupBoxRings->setChecked(false);
        gridLayout_3 = new QGridLayout(groupBoxRings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelInnerSize = new QLabel(groupBoxRings);
        labelInnerSize->setObjectName(QStringLiteral("labelInnerSize"));

        gridLayout_3->addWidget(labelInnerSize, 0, 0, 1, 1);

        labelOuterSize = new QLabel(groupBoxRings);
        labelOuterSize->setObjectName(QStringLiteral("labelOuterSize"));

        gridLayout_3->addWidget(labelOuterSize, 1, 0, 1, 1);

        labelRingTexture = new QLabel(groupBoxRings);
        labelRingTexture->setObjectName(QStringLiteral("labelRingTexture"));

        gridLayout_3->addWidget(labelRingTexture, 2, 0, 1, 1);

        lineEditRingTexture = new QLineEdit(groupBoxRings);
        lineEditRingTexture->setObjectName(QStringLiteral("lineEditRingTexture"));
        lineEditRingTexture->setReadOnly(true);

        gridLayout_3->addWidget(lineEditRingTexture, 2, 1, 1, 1);

        pushButtonSelectRingTexture = new QPushButton(groupBoxRings);
        pushButtonSelectRingTexture->setObjectName(QStringLiteral("pushButtonSelectRingTexture"));

        gridLayout_3->addWidget(pushButtonSelectRingTexture, 2, 2, 1, 1);

        lineEditRingInnerSize = new QLineEdit(groupBoxRings);
        lineEditRingInnerSize->setObjectName(QStringLiteral("lineEditRingInnerSize"));

        gridLayout_3->addWidget(lineEditRingInnerSize, 0, 1, 1, 2);

        lineEditRingOuterSize = new QLineEdit(groupBoxRings);
        lineEditRingOuterSize->setObjectName(QStringLiteral("lineEditRingOuterSize"));

        gridLayout_3->addWidget(lineEditRingOuterSize, 1, 1, 1, 2);


        verticalLayoutScroll->addWidget(groupBoxRings);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayoutWindow->addWidget(scrollArea, 2, 0, 1, 2);

        frameButton = new QFrame(manualImportWindow);
        frameButton->setObjectName(QStringLiteral("frameButton"));
        horizontalLayoutButton = new QHBoxLayout(frameButton);
        horizontalLayoutButton->setObjectName(QStringLiteral("horizontalLayoutButton"));
        labelErrorMessage = new QLabel(frameButton);
        labelErrorMessage->setObjectName(QStringLiteral("labelErrorMessage"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelErrorMessage->sizePolicy().hasHeightForWidth());
        labelErrorMessage->setSizePolicy(sizePolicy1);

        horizontalLayoutButton->addWidget(labelErrorMessage);

        pushButtonSave = new QPushButton(frameButton);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        horizontalLayoutButton->addWidget(pushButtonSave);


        gridLayoutWindow->addWidget(frameButton, 3, 0, 1, 2);

        QWidget::setTabOrder(lineEditName, lineEditIdentifier);
        QWidget::setTabOrder(lineEditIdentifier, checkBoxMinorPlanetNumber);
        QWidget::setTabOrder(checkBoxMinorPlanetNumber, lineEditMinorPlanetNumber);
        QWidget::setTabOrder(lineEditMinorPlanetNumber, radioButtonSolarSystemObject);
        QWidget::setTabOrder(radioButtonSolarSystemObject, radioButtonMinorPlanet);
        QWidget::setTabOrder(radioButtonMinorPlanet, radioButtonComet);
        QWidget::setTabOrder(radioButtonComet, radioButtonSatellite);
        QWidget::setTabOrder(radioButtonSatellite, scrollArea);
        QWidget::setTabOrder(scrollArea, comboBoxParent);
        QWidget::setTabOrder(comboBoxParent, lineEditRadius);
        QWidget::setTabOrder(lineEditRadius, lineEditOblateness);
        QWidget::setTabOrder(lineEditOblateness, lineEditAlbedo);
        QWidget::setTabOrder(lineEditAlbedo, lineEditColor);
        QWidget::setTabOrder(lineEditColor, pushButtonSelectColor);
        QWidget::setTabOrder(pushButtonSelectColor, checkBoxLighting);
        QWidget::setTabOrder(checkBoxLighting, checkBoxAtmosphere);
        QWidget::setTabOrder(checkBoxAtmosphere, checkBoxHidden);
        QWidget::setTabOrder(checkBoxHidden, lineEditTexture);
        QWidget::setTabOrder(lineEditTexture, pushButtonSelectTexture);
        QWidget::setTabOrder(pushButtonSelectTexture, lineEditAbsoluteMagnitude);
        QWidget::setTabOrder(lineEditAbsoluteMagnitude, lineEditSlopeParameter);
        QWidget::setTabOrder(lineEditSlopeParameter, pushButtonCalculateRadius);
        QWidget::setTabOrder(pushButtonCalculateRadius, radioButtonCometaryOrbit);
        QWidget::setTabOrder(radioButtonCometaryOrbit, radioButtonEllipticOrbit);
        QWidget::setTabOrder(radioButtonEllipticOrbit, radioButtonOrbitFunction);
        QWidget::setTabOrder(radioButtonOrbitFunction, comboBoxOrbitFunction);
        QWidget::setTabOrder(comboBoxOrbitFunction, lineEditEccentricity);
        QWidget::setTabOrder(lineEditEccentricity, lineEditInclination);
        QWidget::setTabOrder(lineEditInclination, lineEditLongitudeOfTheAscendingNode);
        QWidget::setTabOrder(lineEditLongitudeOfTheAscendingNode, radioButtonArgumentOfPeriapsis);
        QWidget::setTabOrder(radioButtonArgumentOfPeriapsis, lineEditArgumentOfPeriapsis);
        QWidget::setTabOrder(lineEditArgumentOfPeriapsis, radioButtonLongitudeOfPeriapsis);
        QWidget::setTabOrder(radioButtonLongitudeOfPeriapsis, lineEditLongitudeOfPeriapsis);
        QWidget::setTabOrder(lineEditLongitudeOfPeriapsis, radioButtonSemiMajorAxis);
        QWidget::setTabOrder(radioButtonSemiMajorAxis, lineEditSemiMajorAxis);
        QWidget::setTabOrder(lineEditSemiMajorAxis, radioButtonPeriapsisDistance);
        QWidget::setTabOrder(radioButtonPeriapsisDistance, lineEditPeriapsisDistance);
        QWidget::setTabOrder(lineEditPeriapsisDistance, checkBoxPeriod);
        QWidget::setTabOrder(checkBoxPeriod, lineEditPeriod);
        QWidget::setTabOrder(lineEditPeriod, checkBoxMeanMotion);
        QWidget::setTabOrder(checkBoxMeanMotion, lineEditMeanMotion);
        QWidget::setTabOrder(lineEditMeanMotion, radioButtonEpoch);
        QWidget::setTabOrder(radioButtonEpoch, lineEditEpoch);
        QWidget::setTabOrder(lineEditEpoch, pushButtonEpochJ2000);
        QWidget::setTabOrder(pushButtonEpochJ2000, radioButtonTimeOfPeriapsis);
        QWidget::setTabOrder(radioButtonTimeOfPeriapsis, lineEditTimeOfPeriapsis);
        QWidget::setTabOrder(lineEditTimeOfPeriapsis, radioButtonMeanAnomaly);
        QWidget::setTabOrder(radioButtonMeanAnomaly, lineEditMeanAnomaly);
        QWidget::setTabOrder(lineEditMeanAnomaly, radioButtonMeanLongitude);
        QWidget::setTabOrder(radioButtonMeanLongitude, lineEditMeanLongitude);
        QWidget::setTabOrder(lineEditMeanLongitude, checkBoxOrbitVisualizationPeriod);
        QWidget::setTabOrder(checkBoxOrbitVisualizationPeriod, lineEditOrbitVisualizationPeriod);
        QWidget::setTabOrder(lineEditOrbitVisualizationPeriod, checkBoxObliquity);
        QWidget::setTabOrder(checkBoxObliquity, lineEditObliquity);
        QWidget::setTabOrder(lineEditObliquity, checkBoxEquatorAscendingNode);
        QWidget::setTabOrder(checkBoxEquatorAscendingNode, lineEditEquatorAscendingNode);
        QWidget::setTabOrder(lineEditEquatorAscendingNode, checkBoxNorthPoleRA);
        QWidget::setTabOrder(checkBoxNorthPoleRA, lineEditNorthPoleRA);
        QWidget::setTabOrder(lineEditNorthPoleRA, checkBoxNorthPoleDec);
        QWidget::setTabOrder(checkBoxNorthPoleDec, lineEditNorthPoleDec);
        QWidget::setTabOrder(lineEditNorthPoleDec, checkBoxRotationalPeriod);
        QWidget::setTabOrder(checkBoxRotationalPeriod, lineEditRotationalPeriod);
        QWidget::setTabOrder(lineEditRotationalPeriod, checkBoxPrecessionRate);
        QWidget::setTabOrder(checkBoxPrecessionRate, lineEditPrecessionRate);
        QWidget::setTabOrder(lineEditPrecessionRate, checkBoxRotationalEpoch);
        QWidget::setTabOrder(checkBoxRotationalEpoch, lineEditRotationalEpoch);
        QWidget::setTabOrder(lineEditRotationalEpoch, pushButtonRotationalEpochJ2000);
        QWidget::setTabOrder(pushButtonRotationalEpochJ2000, checkBoxOffset);
        QWidget::setTabOrder(checkBoxOffset, lineEditOffset);
        QWidget::setTabOrder(lineEditOffset, groupBoxRings);
        QWidget::setTabOrder(groupBoxRings, lineEditRingInnerSize);
        QWidget::setTabOrder(lineEditRingInnerSize, lineEditRingOuterSize);
        QWidget::setTabOrder(lineEditRingOuterSize, lineEditRingTexture);
        QWidget::setTabOrder(lineEditRingTexture, pushButtonSelectRingTexture);
        QWidget::setTabOrder(pushButtonSelectRingTexture, pushButtonSave);

        retranslateUi(manualImportWindow);

        QMetaObject::connectSlotsByName(manualImportWindow);
    } // setupUi

    void retranslateUi(QWidget *manualImportWindow)
    {
        closeStelWindow->setText(QString());
        groupBoxObjectType->setTitle(QApplication::translate("manualImportWindow", "Object type", 0));
        radioButtonSolarSystemObject->setText(QApplication::translate("manualImportWindow", "Solar System object", 0));
        radioButtonMinorPlanet->setText(QApplication::translate("manualImportWindow", "Minor planet (asteroid)", 0));
        radioButtonComet->setText(QApplication::translate("manualImportWindow", "Comet", 0));
        radioButtonSatellite->setText(QApplication::translate("manualImportWindow", "Satellite", 0));
        groupBoxName->setTitle(QApplication::translate("manualImportWindow", "Name", 0));
        labelName->setText(QApplication::translate("manualImportWindow", "Name", 0));
        labelIdentifier->setText(QApplication::translate("manualImportWindow", "Identifier", 0));
        checkBoxMinorPlanetNumber->setText(QApplication::translate("manualImportWindow", "Minor planet number", 0));
        groupBoxProperties->setTitle(QApplication::translate("manualImportWindow", "Properties", 0));
        labelParent->setText(QApplication::translate("manualImportWindow", "Parent:", 0));
        labelRadius->setText(QApplication::translate("manualImportWindow", "Radius:", 0));
        labelOblateness->setText(QApplication::translate("manualImportWindow", "Oblateness:", 0));
        labelAlbedo->setText(QApplication::translate("manualImportWindow", "Albedo:", 0));
        labelColor->setText(QApplication::translate("manualImportWindow", "Color:", 0));
        checkBoxLighting->setText(QApplication::translate("manualImportWindow", "Lighting (TODO: More clear name)", 0));
        checkBoxAtmosphere->setText(QApplication::translate("manualImportWindow", "Atmosphere", 0));
        checkBoxHidden->setText(QApplication::translate("manualImportWindow", "Hidden", 0));
        labelTexture->setText(QApplication::translate("manualImportWindow", "Texture:", 0));
        pushButtonSelectTexture->setText(QApplication::translate("manualImportWindow", "...", 0));
        labelAbsoluteMagnitude->setText(QApplication::translate("manualImportWindow", "Absolute magnitude:", 0));
        labelSlopeParameter->setText(QApplication::translate("manualImportWindow", "Slope parameter:", 0));
        pushButtonCalculateRadius->setText(QApplication::translate("manualImportWindow", "Calculate the object's radius from the absolute magnitude and the current albedo", 0));
        labelMagnitudeSystem->setText(QApplication::translate("manualImportWindow", "H-G two parameter magnitude system for minor planets:", 0));
        groupBoxOrbitalElements->setTitle(QApplication::translate("manualImportWindow", "Orbital elements", 0));
        labelOrbitType->setText(QApplication::translate("manualImportWindow", "Orbital function type:", 0));
        radioButtonCometaryOrbit->setText(QApplication::translate("manualImportWindow", "Cometary orbit", 0));
        radioButtonEllipticOrbit->setText(QApplication::translate("manualImportWindow", "Elliptic orbit", 0));
        labelEccentricity->setText(QApplication::translate("manualImportWindow", "Eccentricity (%1):", 0));
        lineEditEccentricity->setText(QApplication::translate("manualImportWindow", "0", 0));
        labelInclination->setText(QApplication::translate("manualImportWindow", "Inclination (degrees):", 0));
        labelLongitudeOfTheAscendingNode->setText(QApplication::translate("manualImportWindow", "Longitude of the ascending node %1:", 0));
        radioButtonArgumentOfPeriapsis->setText(QApplication::translate("manualImportWindow", "Argument of the periapsis %1:", 0));
        radioButtonLongitudeOfPeriapsis->setText(QApplication::translate("manualImportWindow", "Longitude of the periapsis %1:", 0));
        radioButtonSemiMajorAxis->setText(QApplication::translate("manualImportWindow", "Semi-major axis %1:", 0));
        radioButtonPeriapsisDistance->setText(QApplication::translate("manualImportWindow", "Periapsis distance %1:", 0));
        checkBoxPeriod->setText(QApplication::translate("manualImportWindow", "Period:", 0));
        checkBoxMeanMotion->setText(QApplication::translate("manualImportWindow", "Mean motion:", 0));
        radioButtonEpoch->setText(QApplication::translate("manualImportWindow", "Epoch:", 0));
        radioButtonTimeOfPeriapsis->setText(QApplication::translate("manualImportWindow", "Time of periapsis passage:", 0));
        pushButtonEpochJ2000->setText(QApplication::translate("manualImportWindow", "J2000.0", 0));
        radioButtonMeanAnomaly->setText(QApplication::translate("manualImportWindow", "Mean anomaly:", 0));
        radioButtonMeanLongitude->setText(QApplication::translate("manualImportWindow", "Mean longitude:", 0));
        radioButtonOrbitFunction->setText(QApplication::translate("manualImportWindow", "Object-specific:", 0));
        checkBoxOrbitVisualizationPeriod->setText(QApplication::translate("manualImportWindow", "Orbit visualization period:", 0));
        groupBoxRotationalElements->setTitle(QApplication::translate("manualImportWindow", "Rotational elements", 0));
        checkBoxObliquity->setText(QApplication::translate("manualImportWindow", "Obliquity:", 0));
        checkBoxNorthPoleRA->setText(QApplication::translate("manualImportWindow", "North pole right ascension:", 0));
        checkBoxNorthPoleDec->setText(QApplication::translate("manualImportWindow", "North pole declination:", 0));
        checkBoxRotationalPeriod->setText(QApplication::translate("manualImportWindow", "Period (hours):", 0));
        checkBoxPrecessionRate->setText(QApplication::translate("manualImportWindow", "Precession rate:", 0));
        checkBoxRotationalEpoch->setText(QApplication::translate("manualImportWindow", "Epoch:", 0));
        checkBoxOffset->setText(QApplication::translate("manualImportWindow", "Offset:", 0));
        checkBoxEquatorAscendingNode->setText(QApplication::translate("manualImportWindow", "Longitude of the ascending node of the ecliptic on the equator:", 0));
        pushButtonRotationalEpochJ2000->setText(QApplication::translate("manualImportWindow", "J2000.0", 0));
        groupBoxRings->setTitle(QApplication::translate("manualImportWindow", "Rings", 0));
        labelInnerSize->setText(QApplication::translate("manualImportWindow", "Inner size:", 0));
        labelOuterSize->setText(QApplication::translate("manualImportWindow", "Outer size:", 0));
        labelRingTexture->setText(QApplication::translate("manualImportWindow", "Texture:", 0));
        pushButtonSelectRingTexture->setText(QApplication::translate("manualImportWindow", "...", 0));
        labelErrorMessage->setText(QString());
        pushButtonSave->setText(QApplication::translate("manualImportWindow", "Save", 0));
        Q_UNUSED(manualImportWindow);
    } // retranslateUi

};

namespace Ui {
    class manualImportWindow: public Ui_manualImportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALIMPORTWINDOW_H
