/********************************************************************************
** Form generated from reading UI file 'viewDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWDIALOG_H
#define UI_VIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_viewDialogForm
{
public:
    QVBoxLayout *vboxLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *stelWindowTitle;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeStelWindow;
    QFrame *viewContent;
    QVBoxLayout *verticalLayout_5;
    QListWidget *stackListWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QGroupBox *labelsGroupBox;
    QGridLayout *gridLayoutx;
    QCheckBox *starLabelCheckBox;
    QSlider *starsLabelsHorizontalSlider;
    QCheckBox *planetLabelCheckBox;
    QSlider *planetsLabelsHorizontalSlider;
    QCheckBox *nebulaLabelCheckBox;
    QSlider *nebulasLabelsHorizontalSlider;
    QGroupBox *planetsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *showPlanetCheckBox;
    QCheckBox *planetMarkerCheckBox;
    QCheckBox *planetOrbitCheckBox;
    QCheckBox *planetLightSpeedCheckBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *planetScaleMoonCheckBox;
    QDoubleSpinBox *moonScaleFactor;
    QCheckBox *autoChangeLandscapesCheckBox;
    QGroupBox *atmosphereGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *useLocationDataCheckBox;
    QHBoxLayout *_2;
    QLabel *label_4;
    QSpinBox *lightPollutionSpinBox;
    QPushButton *pushButtonAtmosphereDetails;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *starGroupBox;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QDoubleSpinBox *starScaleRadiusDoubleSpinBox;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QDoubleSpinBox *starRelativeScaleDoubleSpinBox;
    QFrame *frameMilkyWay;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelMilkyWay;
    QDoubleSpinBox *milkyWayBrightnessDoubleSpinBox;
    QFrame *frameZodiacalLight;
    QHBoxLayout *horizontalLayout_ZL;
    QLabel *labelZodiacalLight;
    QDoubleSpinBox *zodiacalLightBrightnessDoubleSpinBox;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *starTwinkleCheckBox;
    QDoubleSpinBox *starTwinkleAmountDoubleSpinBox;
    QCheckBox *adaptationCheckbox;
    QGroupBox *shootingStarsGroupBox;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout;
    QLabel *label_14;
    QSpinBox *zhrSpinBox;
    QLabel *zhrLabel;
    QGroupBox *limitsGroupBox;
    QGridLayout *gridLayout_6;
    QCheckBox *starLimitMagnitudeCheckBox;
    QDoubleSpinBox *nebulaLimitMagnitudeDoubleSpinBox;
    QCheckBox *nebulaLimitMagnitudeCheckBox;
    QDoubleSpinBox *starLimitMagnitudeDoubleSpinBox;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QGroupBox *constellationGroupBox;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *showConstellationLinesCheckBox;
    QCheckBox *showConstellationLabelsCheckBox;
    QCheckBox *showConstellationBoundariesCheckBox;
    QCheckBox *showConstellationArtCheckBox;
    QHBoxLayout *hboxLayout1;
    QLabel *label_6;
    QDoubleSpinBox *constellationArtBrightnessSpinBox;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *celestialSphereGroupBox;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *showEquatorialJ2000GridCheckBox;
    QCheckBox *showEquatorialGridCheckBox;
    QCheckBox *showEclipticGridJ2000CheckBox;
    QCheckBox *showAzimuthalGridCheckBox;
    QCheckBox *showGalacticGridCheckBox;
    QVBoxLayout *verticalLayout_15;
    QCheckBox *showEquatorLineCheckBox;
    QCheckBox *showMeridianLineCheckBox;
    QCheckBox *showEclipticLineCheckBox;
    QCheckBox *showHorizonLineCheckBox;
    QCheckBox *showGalacticEquatorLineCheckBox;
    QVBoxLayout *verticalLayout_16;
    QCheckBox *showCardinalPointsCheckBox;
    QGroupBox *setProjectionGroupBox;
    QHBoxLayout *horizontalLayout_10;
    QListWidget *projectionListWidget;
    QTextBrowser *projectionTextBrowser;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QListWidget *landscapesListWidget;
    QTextBrowser *landscapeTextBrowser;
    QGroupBox *landscapeOptionsGroupBox;
    QGridLayout *gridLayout_7;
    QCheckBox *showFogCheckBox;
    QCheckBox *landscapePositionCheckBox;
    QCheckBox *landscapeIlluminationCheckBox;
    QCheckBox *showGroundCheckBox;
    QCheckBox *useAsDefaultLandscapeCheckBox;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *landscapeBrightnessCheckBox;
    QDoubleSpinBox *landscapeBrightnessSpinBox;
    QCheckBox *localLandscapeBrightnessCheckBox;
    QPushButton *pushButtonAddRemoveLandscapes;
    QWidget *page_4;
    QGridLayout *gridLayout_4;
    QListWidget *culturesListWidget;
    QTextBrowser *skyCultureTextBrowser;
    QGroupBox *starloreOptionsgroupBox;
    QFormLayout *formLayout_2;
    QCheckBox *useAsDefaultSkyCultureCheckBox;
    QLabel *label;
    QComboBox *skyCultureNamesStyleComboBox;
    QCheckBox *nativeNameCheckBox;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QListWidget *skyLayerListWidget;
    QFrame *frame_14;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *skyLayerTextBrowser;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QCheckBox *skyLayerEnableCheckBox;

    void setupUi(QWidget *viewDialogForm)
    {
        if (viewDialogForm->objectName().isEmpty())
            viewDialogForm->setObjectName(QStringLiteral("viewDialogForm"));
        viewDialogForm->resize(659, 554);
        QFont font;
        viewDialogForm->setFont(font);
        viewDialogForm->setAutoFillBackground(false);
        viewDialogForm->setStyleSheet(QStringLiteral(""));
        vboxLayout = new QVBoxLayout(viewDialogForm);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(viewDialogForm);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        TitleBar->setMinimumSize(QSize(16, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFont(font);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);

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
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        stelWindowTitle->setFont(font1);
        stelWindowTitle->setStyleSheet(QStringLiteral(""));
        stelWindowTitle->setFrameShape(QFrame::StyledPanel);
        stelWindowTitle->setLineWidth(0);
        stelWindowTitle->setIndent(-1);

        hboxLayout->addWidget(stelWindowTitle);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_3);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeStelWindow->sizePolicy().hasHeightForWidth());
        closeStelWindow->setSizePolicy(sizePolicy);
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);
        closeStelWindow->setContextMenuPolicy(Qt::DefaultContextMenu);

        hboxLayout->addWidget(closeStelWindow);


        vboxLayout->addWidget(TitleBar);

        viewContent = new QFrame(viewDialogForm);
        viewContent->setObjectName(QStringLiteral("viewContent"));
        viewContent->setFrameShape(QFrame::StyledPanel);
        verticalLayout_5 = new QVBoxLayout(viewContent);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        stackListWidget = new QListWidget(viewContent);
        QIcon icon;
        icon.addFile(QStringLiteral(":/graphicGui/tabicon-sky.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/graphicGui/tabicon-markings.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/graphicGui/tabicon-landscape.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/graphicGui/tabicon-starlore.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem3->setIcon(icon3);
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

        verticalLayout_5->addWidget(stackListWidget);

        stackedWidget = new QStackedWidget(viewContent);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelsGroupBox = new QGroupBox(page);
        labelsGroupBox->setObjectName(QStringLiteral("labelsGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelsGroupBox->sizePolicy().hasHeightForWidth());
        labelsGroupBox->setSizePolicy(sizePolicy1);
        labelsGroupBox->setMinimumSize(QSize(0, 150));
        labelsGroupBox->setCheckable(false);
        gridLayoutx = new QGridLayout(labelsGroupBox);
        gridLayoutx->setObjectName(QStringLiteral("gridLayoutx"));
        gridLayoutx->setContentsMargins(0, 0, 0, 0);
        starLabelCheckBox = new QCheckBox(labelsGroupBox);
        starLabelCheckBox->setObjectName(QStringLiteral("starLabelCheckBox"));

        gridLayoutx->addWidget(starLabelCheckBox, 0, 0, 1, 1);

        starsLabelsHorizontalSlider = new QSlider(labelsGroupBox);
        starsLabelsHorizontalSlider->setObjectName(QStringLiteral("starsLabelsHorizontalSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(starsLabelsHorizontalSlider->sizePolicy().hasHeightForWidth());
        starsLabelsHorizontalSlider->setSizePolicy(sizePolicy2);
        starsLabelsHorizontalSlider->setMinimumSize(QSize(180, 0));
        starsLabelsHorizontalSlider->setValue(33);
        starsLabelsHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayoutx->addWidget(starsLabelsHorizontalSlider, 0, 1, 1, 1);

        planetLabelCheckBox = new QCheckBox(labelsGroupBox);
        planetLabelCheckBox->setObjectName(QStringLiteral("planetLabelCheckBox"));

        gridLayoutx->addWidget(planetLabelCheckBox, 2, 0, 1, 1);

        planetsLabelsHorizontalSlider = new QSlider(labelsGroupBox);
        planetsLabelsHorizontalSlider->setObjectName(QStringLiteral("planetsLabelsHorizontalSlider"));
        sizePolicy2.setHeightForWidth(planetsLabelsHorizontalSlider->sizePolicy().hasHeightForWidth());
        planetsLabelsHorizontalSlider->setSizePolicy(sizePolicy2);
        planetsLabelsHorizontalSlider->setMinimumSize(QSize(180, 0));
        planetsLabelsHorizontalSlider->setValue(33);
        planetsLabelsHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayoutx->addWidget(planetsLabelsHorizontalSlider, 2, 1, 1, 1);

        nebulaLabelCheckBox = new QCheckBox(labelsGroupBox);
        nebulaLabelCheckBox->setObjectName(QStringLiteral("nebulaLabelCheckBox"));

        gridLayoutx->addWidget(nebulaLabelCheckBox, 1, 0, 1, 1);

        nebulasLabelsHorizontalSlider = new QSlider(labelsGroupBox);
        nebulasLabelsHorizontalSlider->setObjectName(QStringLiteral("nebulasLabelsHorizontalSlider"));
        sizePolicy2.setHeightForWidth(nebulasLabelsHorizontalSlider->sizePolicy().hasHeightForWidth());
        nebulasLabelsHorizontalSlider->setSizePolicy(sizePolicy2);
        nebulasLabelsHorizontalSlider->setMinimumSize(QSize(180, 0));
        nebulasLabelsHorizontalSlider->setValue(33);
        nebulasLabelsHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayoutx->addWidget(nebulasLabelsHorizontalSlider, 1, 1, 1, 1);


        gridLayout->addWidget(labelsGroupBox, 1, 1, 1, 1, Qt::AlignTop);

        planetsGroupBox = new QGroupBox(page);
        planetsGroupBox->setObjectName(QStringLiteral("planetsGroupBox"));
        planetsGroupBox->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(planetsGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        showPlanetCheckBox = new QCheckBox(planetsGroupBox);
        showPlanetCheckBox->setObjectName(QStringLiteral("showPlanetCheckBox"));
        showPlanetCheckBox->setChecked(true);

        verticalLayout_2->addWidget(showPlanetCheckBox);

        planetMarkerCheckBox = new QCheckBox(planetsGroupBox);
        planetMarkerCheckBox->setObjectName(QStringLiteral("planetMarkerCheckBox"));

        verticalLayout_2->addWidget(planetMarkerCheckBox);

        planetOrbitCheckBox = new QCheckBox(planetsGroupBox);
        planetOrbitCheckBox->setObjectName(QStringLiteral("planetOrbitCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(planetOrbitCheckBox->sizePolicy().hasHeightForWidth());
        planetOrbitCheckBox->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(planetOrbitCheckBox);

        planetLightSpeedCheckBox = new QCheckBox(planetsGroupBox);
        planetLightSpeedCheckBox->setObjectName(QStringLiteral("planetLightSpeedCheckBox"));

        verticalLayout_2->addWidget(planetLightSpeedCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        planetScaleMoonCheckBox = new QCheckBox(planetsGroupBox);
        planetScaleMoonCheckBox->setObjectName(QStringLiteral("planetScaleMoonCheckBox"));

        horizontalLayout->addWidget(planetScaleMoonCheckBox);

        moonScaleFactor = new QDoubleSpinBox(planetsGroupBox);
        moonScaleFactor->setObjectName(QStringLiteral("moonScaleFactor"));
        moonScaleFactor->setDecimals(1);
        moonScaleFactor->setMinimum(1);
        moonScaleFactor->setMaximum(20);
        moonScaleFactor->setSingleStep(0.1);
        moonScaleFactor->setValue(4);

        horizontalLayout->addWidget(moonScaleFactor);


        verticalLayout_2->addLayout(horizontalLayout);

        autoChangeLandscapesCheckBox = new QCheckBox(planetsGroupBox);
        autoChangeLandscapesCheckBox->setObjectName(QStringLiteral("autoChangeLandscapesCheckBox"));

        verticalLayout_2->addWidget(autoChangeLandscapesCheckBox);


        gridLayout->addWidget(planetsGroupBox, 0, 1, 1, 1);

        atmosphereGroupBox = new QGroupBox(page);
        atmosphereGroupBox->setObjectName(QStringLiteral("atmosphereGroupBox"));
        atmosphereGroupBox->setFlat(true);
        atmosphereGroupBox->setCheckable(true);
        verticalLayout_3 = new QVBoxLayout(atmosphereGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        useLocationDataCheckBox = new QCheckBox(atmosphereGroupBox);
        useLocationDataCheckBox->setObjectName(QStringLiteral("useLocationDataCheckBox"));

        verticalLayout_3->addWidget(useLocationDataCheckBox);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        label_4 = new QLabel(atmosphereGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        _2->addWidget(label_4);

        lightPollutionSpinBox = new QSpinBox(atmosphereGroupBox);
        lightPollutionSpinBox->setObjectName(QStringLiteral("lightPollutionSpinBox"));
        lightPollutionSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lightPollutionSpinBox->setMinimum(1);
        lightPollutionSpinBox->setMaximum(9);
        lightPollutionSpinBox->setValue(1);

        _2->addWidget(lightPollutionSpinBox);


        verticalLayout_3->addLayout(_2);

        pushButtonAtmosphereDetails = new QPushButton(atmosphereGroupBox);
        pushButtonAtmosphereDetails->setObjectName(QStringLiteral("pushButtonAtmosphereDetails"));
        pushButtonAtmosphereDetails->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(pushButtonAtmosphereDetails);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout->addWidget(atmosphereGroupBox, 1, 0, 1, 1);

        starGroupBox = new QGroupBox(page);
        starGroupBox->setObjectName(QStringLiteral("starGroupBox"));
        starGroupBox->setAlignment(Qt::AlignLeading);
        starGroupBox->setFlat(false);
        starGroupBox->setCheckable(false);
        starGroupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(starGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(starGroupBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(label_5);

        starScaleRadiusDoubleSpinBox = new QDoubleSpinBox(frame_2);
        starScaleRadiusDoubleSpinBox->setObjectName(QStringLiteral("starScaleRadiusDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(starScaleRadiusDoubleSpinBox->sizePolicy().hasHeightForWidth());
        starScaleRadiusDoubleSpinBox->setSizePolicy(sizePolicy3);
        starScaleRadiusDoubleSpinBox->setMinimumSize(QSize(0, 0));
        starScaleRadiusDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        starScaleRadiusDoubleSpinBox->setAlignment(Qt::AlignCenter);
        starScaleRadiusDoubleSpinBox->setDecimals(1);
        starScaleRadiusDoubleSpinBox->setMaximum(9);
        starScaleRadiusDoubleSpinBox->setSingleStep(0.1);
        starScaleRadiusDoubleSpinBox->setValue(1);

        horizontalLayout_2->addWidget(starScaleRadiusDoubleSpinBox);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(starGroupBox);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(label_7);

        starRelativeScaleDoubleSpinBox = new QDoubleSpinBox(frame_3);
        starRelativeScaleDoubleSpinBox->setObjectName(QStringLiteral("starRelativeScaleDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(starRelativeScaleDoubleSpinBox->sizePolicy().hasHeightForWidth());
        starRelativeScaleDoubleSpinBox->setSizePolicy(sizePolicy3);
        starRelativeScaleDoubleSpinBox->setMinimumSize(QSize(0, 0));
        starRelativeScaleDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        starRelativeScaleDoubleSpinBox->setFrame(true);
        starRelativeScaleDoubleSpinBox->setAlignment(Qt::AlignCenter);
        starRelativeScaleDoubleSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        starRelativeScaleDoubleSpinBox->setDecimals(2);
        starRelativeScaleDoubleSpinBox->setMinimum(0.25);
        starRelativeScaleDoubleSpinBox->setMaximum(5);
        starRelativeScaleDoubleSpinBox->setSingleStep(0.05);
        starRelativeScaleDoubleSpinBox->setValue(1);

        horizontalLayout_3->addWidget(starRelativeScaleDoubleSpinBox);


        verticalLayout->addWidget(frame_3);

        frameMilkyWay = new QFrame(starGroupBox);
        frameMilkyWay->setObjectName(QStringLiteral("frameMilkyWay"));
        frameMilkyWay->setFrameShape(QFrame::StyledPanel);
        frameMilkyWay->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frameMilkyWay);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        labelMilkyWay = new QLabel(frameMilkyWay);
        labelMilkyWay->setObjectName(QStringLiteral("labelMilkyWay"));

        horizontalLayout_8->addWidget(labelMilkyWay);

        milkyWayBrightnessDoubleSpinBox = new QDoubleSpinBox(frameMilkyWay);
        milkyWayBrightnessDoubleSpinBox->setObjectName(QStringLiteral("milkyWayBrightnessDoubleSpinBox"));
        milkyWayBrightnessDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        milkyWayBrightnessDoubleSpinBox->setAlignment(Qt::AlignCenter);
        milkyWayBrightnessDoubleSpinBox->setDecimals(1);
        milkyWayBrightnessDoubleSpinBox->setMaximum(10);
        milkyWayBrightnessDoubleSpinBox->setSingleStep(0.1);
        milkyWayBrightnessDoubleSpinBox->setValue(1);

        horizontalLayout_8->addWidget(milkyWayBrightnessDoubleSpinBox);


        verticalLayout->addWidget(frameMilkyWay);

        frameZodiacalLight = new QFrame(starGroupBox);
        frameZodiacalLight->setObjectName(QStringLiteral("frameZodiacalLight"));
        frameZodiacalLight->setFrameShape(QFrame::StyledPanel);
        frameZodiacalLight->setFrameShadow(QFrame::Raised);
        horizontalLayout_ZL = new QHBoxLayout(frameZodiacalLight);
        horizontalLayout_ZL->setObjectName(QStringLiteral("horizontalLayout_ZL"));
        horizontalLayout_ZL->setContentsMargins(0, 0, 0, 0);
        labelZodiacalLight = new QLabel(frameZodiacalLight);
        labelZodiacalLight->setObjectName(QStringLiteral("labelZodiacalLight"));

        horizontalLayout_ZL->addWidget(labelZodiacalLight);

        zodiacalLightBrightnessDoubleSpinBox = new QDoubleSpinBox(frameZodiacalLight);
        zodiacalLightBrightnessDoubleSpinBox->setObjectName(QStringLiteral("zodiacalLightBrightnessDoubleSpinBox"));
        zodiacalLightBrightnessDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        zodiacalLightBrightnessDoubleSpinBox->setAlignment(Qt::AlignCenter);
        zodiacalLightBrightnessDoubleSpinBox->setDecimals(1);
        zodiacalLightBrightnessDoubleSpinBox->setMaximum(10);
        zodiacalLightBrightnessDoubleSpinBox->setSingleStep(0.1);
        zodiacalLightBrightnessDoubleSpinBox->setValue(1);

        horizontalLayout_ZL->addWidget(zodiacalLightBrightnessDoubleSpinBox);


        verticalLayout->addWidget(frameZodiacalLight);

        frame_12 = new QFrame(starGroupBox);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_9 = new QHBoxLayout(frame_12);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        starTwinkleCheckBox = new QCheckBox(frame_12);
        starTwinkleCheckBox->setObjectName(QStringLiteral("starTwinkleCheckBox"));
        starTwinkleCheckBox->setChecked(true);

        horizontalLayout_9->addWidget(starTwinkleCheckBox);

        starTwinkleAmountDoubleSpinBox = new QDoubleSpinBox(frame_12);
        starTwinkleAmountDoubleSpinBox->setObjectName(QStringLiteral("starTwinkleAmountDoubleSpinBox"));
        starTwinkleAmountDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        starTwinkleAmountDoubleSpinBox->setAlignment(Qt::AlignCenter);
        starTwinkleAmountDoubleSpinBox->setDecimals(1);
        starTwinkleAmountDoubleSpinBox->setMaximum(1.5);
        starTwinkleAmountDoubleSpinBox->setSingleStep(0.1);

        horizontalLayout_9->addWidget(starTwinkleAmountDoubleSpinBox);


        verticalLayout->addWidget(frame_12);

        adaptationCheckbox = new QCheckBox(starGroupBox);
        adaptationCheckbox->setObjectName(QStringLiteral("adaptationCheckbox"));
        adaptationCheckbox->setChecked(false);

        verticalLayout->addWidget(adaptationCheckbox);


        gridLayout->addWidget(starGroupBox, 0, 0, 1, 1, Qt::AlignTop);

        shootingStarsGroupBox = new QGroupBox(page);
        shootingStarsGroupBox->setObjectName(QStringLiteral("shootingStarsGroupBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(shootingStarsGroupBox->sizePolicy().hasHeightForWidth());
        shootingStarsGroupBox->setSizePolicy(sizePolicy5);
        shootingStarsGroupBox->setCheckable(false);
        horizontalLayout_6 = new QHBoxLayout(shootingStarsGroupBox);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_14 = new QLabel(shootingStarsGroupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setTextFormat(Qt::PlainText);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_14);

        zhrSpinBox = new QSpinBox(shootingStarsGroupBox);
        zhrSpinBox->setObjectName(QStringLiteral("zhrSpinBox"));
        zhrSpinBox->setMaximum(240000);
        zhrSpinBox->setValue(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, zhrSpinBox);

        zhrLabel = new QLabel(shootingStarsGroupBox);
        zhrLabel->setObjectName(QStringLiteral("zhrLabel"));
        zhrLabel->setTextFormat(Qt::RichText);
        zhrLabel->setScaledContents(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, zhrLabel);


        horizontalLayout_6->addLayout(formLayout);


        gridLayout->addWidget(shootingStarsGroupBox, 3, 0, 1, 1);

        limitsGroupBox = new QGroupBox(page);
        limitsGroupBox->setObjectName(QStringLiteral("limitsGroupBox"));
        sizePolicy1.setHeightForWidth(limitsGroupBox->sizePolicy().hasHeightForWidth());
        limitsGroupBox->setSizePolicy(sizePolicy1);
        limitsGroupBox->setMinimumSize(QSize(0, 0));
        limitsGroupBox->setCheckable(false);
        gridLayout_6 = new QGridLayout(limitsGroupBox);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        starLimitMagnitudeCheckBox = new QCheckBox(limitsGroupBox);
        starLimitMagnitudeCheckBox->setObjectName(QStringLiteral("starLimitMagnitudeCheckBox"));

        gridLayout_6->addWidget(starLimitMagnitudeCheckBox, 1, 0, 1, 1);

        nebulaLimitMagnitudeDoubleSpinBox = new QDoubleSpinBox(limitsGroupBox);
        nebulaLimitMagnitudeDoubleSpinBox->setObjectName(QStringLiteral("nebulaLimitMagnitudeDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(nebulaLimitMagnitudeDoubleSpinBox->sizePolicy().hasHeightForWidth());
        nebulaLimitMagnitudeDoubleSpinBox->setSizePolicy(sizePolicy3);
        nebulaLimitMagnitudeDoubleSpinBox->setMinimumSize(QSize(0, 0));
        nebulaLimitMagnitudeDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        nebulaLimitMagnitudeDoubleSpinBox->setFrame(true);
        nebulaLimitMagnitudeDoubleSpinBox->setAlignment(Qt::AlignCenter);
        nebulaLimitMagnitudeDoubleSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        nebulaLimitMagnitudeDoubleSpinBox->setDecimals(2);
        nebulaLimitMagnitudeDoubleSpinBox->setMinimum(3);
        nebulaLimitMagnitudeDoubleSpinBox->setMaximum(21);
        nebulaLimitMagnitudeDoubleSpinBox->setSingleStep(0.25);
        nebulaLimitMagnitudeDoubleSpinBox->setValue(8.5);

        gridLayout_6->addWidget(nebulaLimitMagnitudeDoubleSpinBox, 2, 1, 1, 1);

        nebulaLimitMagnitudeCheckBox = new QCheckBox(limitsGroupBox);
        nebulaLimitMagnitudeCheckBox->setObjectName(QStringLiteral("nebulaLimitMagnitudeCheckBox"));

        gridLayout_6->addWidget(nebulaLimitMagnitudeCheckBox, 2, 0, 1, 1);

        starLimitMagnitudeDoubleSpinBox = new QDoubleSpinBox(limitsGroupBox);
        starLimitMagnitudeDoubleSpinBox->setObjectName(QStringLiteral("starLimitMagnitudeDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(starLimitMagnitudeDoubleSpinBox->sizePolicy().hasHeightForWidth());
        starLimitMagnitudeDoubleSpinBox->setSizePolicy(sizePolicy3);
        starLimitMagnitudeDoubleSpinBox->setMinimumSize(QSize(0, 0));
        starLimitMagnitudeDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        starLimitMagnitudeDoubleSpinBox->setFrame(true);
        starLimitMagnitudeDoubleSpinBox->setAlignment(Qt::AlignCenter);
        starLimitMagnitudeDoubleSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        starLimitMagnitudeDoubleSpinBox->setDecimals(2);
        starLimitMagnitudeDoubleSpinBox->setMinimum(0);
        starLimitMagnitudeDoubleSpinBox->setMaximum(21);
        starLimitMagnitudeDoubleSpinBox->setSingleStep(0.1);
        starLimitMagnitudeDoubleSpinBox->setValue(6.5);

        gridLayout_6->addWidget(starLimitMagnitudeDoubleSpinBox, 1, 1, 1, 1);


        gridLayout->addWidget(limitsGroupBox, 3, 1, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        constellationGroupBox = new QGroupBox(page_2);
        constellationGroupBox->setObjectName(QStringLiteral("constellationGroupBox"));
        constellationGroupBox->setCheckable(false);
        verticalLayout_11 = new QVBoxLayout(constellationGroupBox);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        showConstellationLinesCheckBox = new QCheckBox(constellationGroupBox);
        showConstellationLinesCheckBox->setObjectName(QStringLiteral("showConstellationLinesCheckBox"));

        verticalLayout_11->addWidget(showConstellationLinesCheckBox);

        showConstellationLabelsCheckBox = new QCheckBox(constellationGroupBox);
        showConstellationLabelsCheckBox->setObjectName(QStringLiteral("showConstellationLabelsCheckBox"));

        verticalLayout_11->addWidget(showConstellationLabelsCheckBox);

        showConstellationBoundariesCheckBox = new QCheckBox(constellationGroupBox);
        showConstellationBoundariesCheckBox->setObjectName(QStringLiteral("showConstellationBoundariesCheckBox"));

        verticalLayout_11->addWidget(showConstellationBoundariesCheckBox);

        showConstellationArtCheckBox = new QCheckBox(constellationGroupBox);
        showConstellationArtCheckBox->setObjectName(QStringLiteral("showConstellationArtCheckBox"));

        verticalLayout_11->addWidget(showConstellationArtCheckBox);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label_6 = new QLabel(constellationGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        hboxLayout1->addWidget(label_6);

        constellationArtBrightnessSpinBox = new QDoubleSpinBox(constellationGroupBox);
        constellationArtBrightnessSpinBox->setObjectName(QStringLiteral("constellationArtBrightnessSpinBox"));
        constellationArtBrightnessSpinBox->setMaximum(1);
        constellationArtBrightnessSpinBox->setSingleStep(0.05);

        hboxLayout1->addWidget(constellationArtBrightnessSpinBox);


        verticalLayout_11->addLayout(hboxLayout1);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);


        gridLayout_2->addWidget(constellationGroupBox, 0, 2, 1, 1);

        celestialSphereGroupBox = new QGroupBox(page_2);
        celestialSphereGroupBox->setObjectName(QStringLiteral("celestialSphereGroupBox"));
        celestialSphereGroupBox->setCheckable(false);
        verticalLayout_10 = new QVBoxLayout(celestialSphereGroupBox);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        showEquatorialJ2000GridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquatorialJ2000GridCheckBox->setObjectName(QStringLiteral("showEquatorialJ2000GridCheckBox"));

        verticalLayout_13->addWidget(showEquatorialJ2000GridCheckBox);

        showEquatorialGridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquatorialGridCheckBox->setObjectName(QStringLiteral("showEquatorialGridCheckBox"));

        verticalLayout_13->addWidget(showEquatorialGridCheckBox);

        showEclipticGridJ2000CheckBox = new QCheckBox(celestialSphereGroupBox);
        showEclipticGridJ2000CheckBox->setObjectName(QStringLiteral("showEclipticGridJ2000CheckBox"));

        verticalLayout_13->addWidget(showEclipticGridJ2000CheckBox);

        showAzimuthalGridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showAzimuthalGridCheckBox->setObjectName(QStringLiteral("showAzimuthalGridCheckBox"));

        verticalLayout_13->addWidget(showAzimuthalGridCheckBox);

        showGalacticGridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showGalacticGridCheckBox->setObjectName(QStringLiteral("showGalacticGridCheckBox"));

        verticalLayout_13->addWidget(showGalacticGridCheckBox);


        horizontalLayout_5->addLayout(verticalLayout_13);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        showEquatorLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquatorLineCheckBox->setObjectName(QStringLiteral("showEquatorLineCheckBox"));

        verticalLayout_15->addWidget(showEquatorLineCheckBox);

        showMeridianLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showMeridianLineCheckBox->setObjectName(QStringLiteral("showMeridianLineCheckBox"));

        verticalLayout_15->addWidget(showMeridianLineCheckBox);

        showEclipticLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEclipticLineCheckBox->setObjectName(QStringLiteral("showEclipticLineCheckBox"));

        verticalLayout_15->addWidget(showEclipticLineCheckBox);

        showHorizonLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showHorizonLineCheckBox->setObjectName(QStringLiteral("showHorizonLineCheckBox"));

        verticalLayout_15->addWidget(showHorizonLineCheckBox);

        showGalacticEquatorLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showGalacticEquatorLineCheckBox->setObjectName(QStringLiteral("showGalacticEquatorLineCheckBox"));

        verticalLayout_15->addWidget(showGalacticEquatorLineCheckBox);


        horizontalLayout_5->addLayout(verticalLayout_15);


        verticalLayout_10->addLayout(horizontalLayout_5);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        showCardinalPointsCheckBox = new QCheckBox(celestialSphereGroupBox);
        showCardinalPointsCheckBox->setObjectName(QStringLiteral("showCardinalPointsCheckBox"));

        verticalLayout_16->addWidget(showCardinalPointsCheckBox);


        verticalLayout_10->addLayout(verticalLayout_16);


        gridLayout_2->addWidget(celestialSphereGroupBox, 0, 0, 1, 2);

        setProjectionGroupBox = new QGroupBox(page_2);
        setProjectionGroupBox->setObjectName(QStringLiteral("setProjectionGroupBox"));
        sizePolicy1.setHeightForWidth(setProjectionGroupBox->sizePolicy().hasHeightForWidth());
        setProjectionGroupBox->setSizePolicy(sizePolicy1);
        setProjectionGroupBox->setMinimumSize(QSize(0, 150));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        setProjectionGroupBox->setFont(font2);
        setProjectionGroupBox->setCheckable(false);
        horizontalLayout_10 = new QHBoxLayout(setProjectionGroupBox);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        projectionListWidget = new QListWidget(setProjectionGroupBox);
        projectionListWidget->setObjectName(QStringLiteral("projectionListWidget"));
        sizePolicy1.setHeightForWidth(projectionListWidget->sizePolicy().hasHeightForWidth());
        projectionListWidget->setSizePolicy(sizePolicy1);
        projectionListWidget->setMinimumSize(QSize(120, 0));
        projectionListWidget->setMaximumSize(QSize(180, 16777215));
        projectionListWidget->setFocusPolicy(Qt::NoFocus);
        projectionListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        projectionListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_10->addWidget(projectionListWidget);

        projectionTextBrowser = new QTextBrowser(setProjectionGroupBox);
        projectionTextBrowser->setObjectName(QStringLiteral("projectionTextBrowser"));
        projectionTextBrowser->setOpenExternalLinks(true);

        horizontalLayout_10->addWidget(projectionTextBrowser);


        gridLayout_2->addWidget(setProjectionGroupBox, 1, 0, 1, 3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        landscapesListWidget = new QListWidget(page_3);
        landscapesListWidget->setObjectName(QStringLiteral("landscapesListWidget"));
        sizePolicy1.setHeightForWidth(landscapesListWidget->sizePolicy().hasHeightForWidth());
        landscapesListWidget->setSizePolicy(sizePolicy1);
        landscapesListWidget->setMinimumSize(QSize(180, 0));
        landscapesListWidget->setMaximumSize(QSize(120, 16777215));
        landscapesListWidget->setFocusPolicy(Qt::NoFocus);
        landscapesListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_3->addWidget(landscapesListWidget, 0, 0, 4, 1);

        landscapeTextBrowser = new QTextBrowser(page_3);
        landscapeTextBrowser->setObjectName(QStringLiteral("landscapeTextBrowser"));
        landscapeTextBrowser->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(landscapeTextBrowser->sizePolicy().hasHeightForWidth());
        landscapeTextBrowser->setSizePolicy(sizePolicy6);
        QFont font3;
        font3.setPointSize(10);
        landscapeTextBrowser->setFont(font3);
        landscapeTextBrowser->setFrameShape(QFrame::StyledPanel);
        landscapeTextBrowser->setLineWidth(1);
        landscapeTextBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        landscapeTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        landscapeTextBrowser->setOpenExternalLinks(true);

        gridLayout_3->addWidget(landscapeTextBrowser, 0, 1, 1, 1);

        landscapeOptionsGroupBox = new QGroupBox(page_3);
        landscapeOptionsGroupBox->setObjectName(QStringLiteral("landscapeOptionsGroupBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(landscapeOptionsGroupBox->sizePolicy().hasHeightForWidth());
        landscapeOptionsGroupBox->setSizePolicy(sizePolicy7);
        landscapeOptionsGroupBox->setCheckable(false);
        gridLayout_7 = new QGridLayout(landscapeOptionsGroupBox);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        showFogCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        showFogCheckBox->setObjectName(QStringLiteral("showFogCheckBox"));

        gridLayout_7->addWidget(showFogCheckBox, 1, 0, 1, 2);

        landscapePositionCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        landscapePositionCheckBox->setObjectName(QStringLiteral("landscapePositionCheckBox"));

        gridLayout_7->addWidget(landscapePositionCheckBox, 2, 0, 1, 2);

        landscapeIlluminationCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        landscapeIlluminationCheckBox->setObjectName(QStringLiteral("landscapeIlluminationCheckBox"));
        landscapeIlluminationCheckBox->setChecked(true);

        gridLayout_7->addWidget(landscapeIlluminationCheckBox, 6, 0, 1, 2);

        showGroundCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        showGroundCheckBox->setObjectName(QStringLiteral("showGroundCheckBox"));

        gridLayout_7->addWidget(showGroundCheckBox, 0, 0, 1, 2);

        useAsDefaultLandscapeCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        useAsDefaultLandscapeCheckBox->setObjectName(QStringLiteral("useAsDefaultLandscapeCheckBox"));

        gridLayout_7->addWidget(useAsDefaultLandscapeCheckBox, 3, 0, 2, 2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        landscapeBrightnessCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        landscapeBrightnessCheckBox->setObjectName(QStringLiteral("landscapeBrightnessCheckBox"));

        horizontalLayout_11->addWidget(landscapeBrightnessCheckBox);

        landscapeBrightnessSpinBox = new QDoubleSpinBox(landscapeOptionsGroupBox);
        landscapeBrightnessSpinBox->setObjectName(QStringLiteral("landscapeBrightnessSpinBox"));
        landscapeBrightnessSpinBox->setEnabled(false);
        landscapeBrightnessSpinBox->setMaximum(1);
        landscapeBrightnessSpinBox->setSingleStep(0.01);

        horizontalLayout_11->addWidget(landscapeBrightnessSpinBox);

        localLandscapeBrightnessCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        localLandscapeBrightnessCheckBox->setObjectName(QStringLiteral("localLandscapeBrightnessCheckBox"));
        localLandscapeBrightnessCheckBox->setEnabled(false);

        horizontalLayout_11->addWidget(localLandscapeBrightnessCheckBox);


        gridLayout_7->addLayout(horizontalLayout_11, 5, 0, 1, 1);


        gridLayout_3->addWidget(landscapeOptionsGroupBox, 1, 1, 1, 1);

        pushButtonAddRemoveLandscapes = new QPushButton(page_3);
        pushButtonAddRemoveLandscapes->setObjectName(QStringLiteral("pushButtonAddRemoveLandscapes"));
        pushButtonAddRemoveLandscapes->setMinimumSize(QSize(0, 37));
        pushButtonAddRemoveLandscapes->setStyleSheet(QStringLiteral("margin-left: 10px; margin-right: 10px; margin-bottom:10px;"));

        gridLayout_3->addWidget(pushButtonAddRemoveLandscapes, 2, 1, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_4 = new QGridLayout(page_4);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        culturesListWidget = new QListWidget(page_4);
        culturesListWidget->setObjectName(QStringLiteral("culturesListWidget"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(100);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(culturesListWidget->sizePolicy().hasHeightForWidth());
        culturesListWidget->setSizePolicy(sizePolicy8);
        culturesListWidget->setMinimumSize(QSize(180, 0));
        culturesListWidget->setMaximumSize(QSize(120, 16777213));
        culturesListWidget->setFocusPolicy(Qt::NoFocus);
        culturesListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        culturesListWidget->setSelectionRectVisible(false);

        gridLayout_4->addWidget(culturesListWidget, 0, 0, 2, 1);

        skyCultureTextBrowser = new QTextBrowser(page_4);
        skyCultureTextBrowser->setObjectName(QStringLiteral("skyCultureTextBrowser"));
        sizePolicy6.setHeightForWidth(skyCultureTextBrowser->sizePolicy().hasHeightForWidth());
        skyCultureTextBrowser->setSizePolicy(sizePolicy6);
        skyCultureTextBrowser->setMinimumSize(QSize(0, 0));
        skyCultureTextBrowser->setFont(font3);
        skyCultureTextBrowser->setFrameShape(QFrame::StyledPanel);
        skyCultureTextBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        skyCultureTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        skyCultureTextBrowser->setOpenExternalLinks(true);

        gridLayout_4->addWidget(skyCultureTextBrowser, 0, 1, 1, 1);

        starloreOptionsgroupBox = new QGroupBox(page_4);
        starloreOptionsgroupBox->setObjectName(QStringLiteral("starloreOptionsgroupBox"));
        starloreOptionsgroupBox->setEnabled(true);
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(starloreOptionsgroupBox->sizePolicy().hasHeightForWidth());
        starloreOptionsgroupBox->setSizePolicy(sizePolicy9);
        starloreOptionsgroupBox->setMinimumSize(QSize(0, 0));
        formLayout_2 = new QFormLayout(starloreOptionsgroupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        useAsDefaultSkyCultureCheckBox = new QCheckBox(starloreOptionsgroupBox);
        useAsDefaultSkyCultureCheckBox->setObjectName(QStringLiteral("useAsDefaultSkyCultureCheckBox"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, useAsDefaultSkyCultureCheckBox);

        label = new QLabel(starloreOptionsgroupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label);

        skyCultureNamesStyleComboBox = new QComboBox(starloreOptionsgroupBox);
        skyCultureNamesStyleComboBox->setObjectName(QStringLiteral("skyCultureNamesStyleComboBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, skyCultureNamesStyleComboBox);

        nativeNameCheckBox = new QCheckBox(starloreOptionsgroupBox);
        nativeNameCheckBox->setObjectName(QStringLiteral("nativeNameCheckBox"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, nativeNameCheckBox);


        gridLayout_4->addWidget(starloreOptionsgroupBox, 1, 1, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        verticalLayout_12 = new QVBoxLayout(page_5);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        frame_13 = new QFrame(page_5);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_13);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        skyLayerListWidget = new QListWidget(frame_13);
        skyLayerListWidget->setObjectName(QStringLiteral("skyLayerListWidget"));

        verticalLayout_6->addWidget(skyLayerListWidget);


        horizontalLayout_4->addLayout(verticalLayout_6);

        frame_14 = new QFrame(frame_13);
        frame_14->setObjectName(QStringLiteral("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_14);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        skyLayerTextBrowser = new QTextBrowser(frame_14);
        skyLayerTextBrowser->setObjectName(QStringLiteral("skyLayerTextBrowser"));
        skyLayerTextBrowser->setOpenExternalLinks(true);
        skyLayerTextBrowser->setOpenLinks(true);

        verticalLayout_7->addWidget(skyLayerTextBrowser);

        groupBox = new QGroupBox(frame_14);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        skyLayerEnableCheckBox = new QCheckBox(groupBox);
        skyLayerEnableCheckBox->setObjectName(QStringLiteral("skyLayerEnableCheckBox"));

        gridLayout_5->addWidget(skyLayerEnableCheckBox, 0, 0, 1, 1);


        verticalLayout_7->addWidget(groupBox);


        horizontalLayout_4->addWidget(frame_14);


        verticalLayout_12->addWidget(frame_13);

        stackedWidget->addWidget(page_5);

        verticalLayout_5->addWidget(stackedWidget, 0, Qt::AlignTop);


        vboxLayout->addWidget(viewContent);

        QWidget::setTabOrder(starScaleRadiusDoubleSpinBox, starRelativeScaleDoubleSpinBox);
        QWidget::setTabOrder(starRelativeScaleDoubleSpinBox, starTwinkleCheckBox);
        QWidget::setTabOrder(starTwinkleCheckBox, starTwinkleAmountDoubleSpinBox);
        QWidget::setTabOrder(starTwinkleAmountDoubleSpinBox, adaptationCheckbox);
        QWidget::setTabOrder(adaptationCheckbox, showPlanetCheckBox);
        QWidget::setTabOrder(showPlanetCheckBox, planetMarkerCheckBox);
        QWidget::setTabOrder(planetMarkerCheckBox, planetOrbitCheckBox);
        QWidget::setTabOrder(planetOrbitCheckBox, planetLightSpeedCheckBox);
        QWidget::setTabOrder(planetLightSpeedCheckBox, useLocationDataCheckBox);
        QWidget::setTabOrder(useLocationDataCheckBox, lightPollutionSpinBox);
        QWidget::setTabOrder(lightPollutionSpinBox, starLabelCheckBox);
        QWidget::setTabOrder(starLabelCheckBox, starsLabelsHorizontalSlider);
        QWidget::setTabOrder(starsLabelsHorizontalSlider, nebulaLabelCheckBox);
        QWidget::setTabOrder(nebulaLabelCheckBox, nebulasLabelsHorizontalSlider);
        QWidget::setTabOrder(nebulasLabelsHorizontalSlider, planetLabelCheckBox);
        QWidget::setTabOrder(planetLabelCheckBox, planetsLabelsHorizontalSlider);
        QWidget::setTabOrder(planetsLabelsHorizontalSlider, showEquatorialJ2000GridCheckBox);
        QWidget::setTabOrder(showEquatorialJ2000GridCheckBox, showEquatorialGridCheckBox);
        QWidget::setTabOrder(showEquatorialGridCheckBox, showEclipticGridJ2000CheckBox);
        QWidget::setTabOrder(showEclipticGridJ2000CheckBox, showAzimuthalGridCheckBox);
        QWidget::setTabOrder(showAzimuthalGridCheckBox, showGalacticGridCheckBox);
        QWidget::setTabOrder(showGalacticGridCheckBox, showCardinalPointsCheckBox);
        QWidget::setTabOrder(showCardinalPointsCheckBox, showEquatorLineCheckBox);
        QWidget::setTabOrder(showEquatorLineCheckBox, showMeridianLineCheckBox);
        QWidget::setTabOrder(showMeridianLineCheckBox, showEclipticLineCheckBox);
        QWidget::setTabOrder(showEclipticLineCheckBox, showHorizonLineCheckBox);
        QWidget::setTabOrder(showHorizonLineCheckBox, showGalacticEquatorLineCheckBox);
        QWidget::setTabOrder(showGalacticEquatorLineCheckBox, showConstellationLinesCheckBox);
        QWidget::setTabOrder(showConstellationLinesCheckBox, showConstellationLabelsCheckBox);
        QWidget::setTabOrder(showConstellationLabelsCheckBox, showConstellationBoundariesCheckBox);
        QWidget::setTabOrder(showConstellationBoundariesCheckBox, showConstellationArtCheckBox);
        QWidget::setTabOrder(showConstellationArtCheckBox, constellationArtBrightnessSpinBox);
        QWidget::setTabOrder(constellationArtBrightnessSpinBox, projectionTextBrowser);
        QWidget::setTabOrder(projectionTextBrowser, landscapeTextBrowser);
        QWidget::setTabOrder(landscapeTextBrowser, showGroundCheckBox);
        QWidget::setTabOrder(showGroundCheckBox, showFogCheckBox);
        QWidget::setTabOrder(showFogCheckBox, landscapePositionCheckBox);
        QWidget::setTabOrder(landscapePositionCheckBox, useAsDefaultLandscapeCheckBox);
        QWidget::setTabOrder(useAsDefaultLandscapeCheckBox, pushButtonAddRemoveLandscapes);
        QWidget::setTabOrder(pushButtonAddRemoveLandscapes, skyCultureTextBrowser);
        QWidget::setTabOrder(skyCultureTextBrowser, useAsDefaultSkyCultureCheckBox);
        QWidget::setTabOrder(useAsDefaultSkyCultureCheckBox, skyLayerListWidget);
        QWidget::setTabOrder(skyLayerListWidget, skyLayerTextBrowser);
        QWidget::setTabOrder(skyLayerTextBrowser, skyLayerEnableCheckBox);

        retranslateUi(viewDialogForm);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(viewDialogForm);
    } // setupUi

    void retranslateUi(QWidget *viewDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("viewDialogForm", "View", 0));
        closeStelWindow->setText(QString());

        const bool __sortingEnabled = stackListWidget->isSortingEnabled();
        stackListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = stackListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("viewDialogForm", "Sky", 0));
        QListWidgetItem *___qlistwidgetitem1 = stackListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("viewDialogForm", "Markings", 0));
        QListWidgetItem *___qlistwidgetitem2 = stackListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("viewDialogForm", "Landscape", 0));
        QListWidgetItem *___qlistwidgetitem3 = stackListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("viewDialogForm", "Starlore", 0));
        stackListWidget->setSortingEnabled(__sortingEnabled);

        labelsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Labels and Markers", 0));
        starLabelCheckBox->setText(QApplication::translate("viewDialogForm", "Stars", 0));
        planetLabelCheckBox->setText(QApplication::translate("viewDialogForm", "Planets", 0));
#ifndef QT_NO_TOOLTIP
        nebulaLabelCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Labels and markers for deep-sky objects (star clusters, galaxies and nebulas)", 0));
#endif // QT_NO_TOOLTIP
        nebulaLabelCheckBox->setText(QApplication::translate("viewDialogForm", "DSOs", "Deep-sky objects"));
        planetsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Planets and satellites", 0));
        showPlanetCheckBox->setText(QApplication::translate("viewDialogForm", "Show planets", 0));
        planetMarkerCheckBox->setText(QApplication::translate("viewDialogForm", "Show planet markers", 0));
        planetOrbitCheckBox->setText(QApplication::translate("viewDialogForm", "Show planet orbits", 0));
        planetLightSpeedCheckBox->setText(QApplication::translate("viewDialogForm", "Simulate light speed", 0));
        planetScaleMoonCheckBox->setText(QApplication::translate("viewDialogForm", "Scale Moon", 0));
#ifndef QT_NO_TOOLTIP
        moonScaleFactor->setToolTip(QApplication::translate("viewDialogForm", "Scale factor", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        autoChangeLandscapesCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Automatic change of landscape when planet is changed", 0));
#endif // QT_NO_TOOLTIP
        autoChangeLandscapesCheckBox->setText(QApplication::translate("viewDialogForm", "Auto select landscapes", 0));
#ifndef QT_NO_TOOLTIP
        atmosphereGroupBox->setToolTip(QApplication::translate("viewDialogForm", "Show atmosphere", 0));
#endif // QT_NO_TOOLTIP
        atmosphereGroupBox->setTitle(QApplication::translate("viewDialogForm", "Atmosphere", 0));
#ifndef QT_NO_TOOLTIP
        useLocationDataCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Use light pollution data from locations database and ignore settings for light pollution below", 0));
#endif // QT_NO_TOOLTIP
        useLocationDataCheckBox->setText(QApplication::translate("viewDialogForm", "Light pollution data from locations database", 0));
        label_4->setText(QApplication::translate("viewDialogForm", "Light pollution:", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonAtmosphereDetails->setToolTip(QApplication::translate("viewDialogForm", "pressure, temperature, extinction coefficient", 0));
#endif // QT_NO_TOOLTIP
        pushButtonAtmosphereDetails->setText(QApplication::translate("viewDialogForm", "Refraction/Extinction settings...", 0));
        starGroupBox->setTitle(QApplication::translate("viewDialogForm", "Stars", 0));
        label_5->setText(QApplication::translate("viewDialogForm", "Absolute scale:", 0));
        label_7->setText(QApplication::translate("viewDialogForm", "Relative scale:", 0));
        labelMilkyWay->setText(QApplication::translate("viewDialogForm", "Milky Way brightness:", 0));
        labelZodiacalLight->setText(QApplication::translate("viewDialogForm", "Zodiacal Light brightness:", 0));
        starTwinkleCheckBox->setText(QApplication::translate("viewDialogForm", "Twinkle:", 0));
#ifndef QT_NO_TOOLTIP
        adaptationCheckbox->setToolTip(QApplication::translate("viewDialogForm", "Dim faint stars when a very bright object is visible", 0));
#endif // QT_NO_TOOLTIP
        adaptationCheckbox->setText(QApplication::translate("viewDialogForm", "Dynamic eye adaptation", 0));
#ifndef QT_NO_TOOLTIP
        shootingStarsGroupBox->setToolTip(QApplication::translate("viewDialogForm", "Settings for sporadic meteors", 0));
#endif // QT_NO_TOOLTIP
        shootingStarsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Shooting Stars", 0));
#ifndef QT_NO_TOOLTIP
        label_14->setToolTip(QApplication::translate("viewDialogForm", "Hourly zenith rate", 0));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("viewDialogForm", "ZHR:", "Zenithal Hourly Rate"));
        zhrLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        limitsGroupBox->setToolTip(QApplication::translate("viewDialogForm", "Limit Magnitudes (for unaided/binocular observers)", 0));
#endif // QT_NO_TOOLTIP
        limitsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Limit Magnitudes", 0));
#ifndef QT_NO_TOOLTIP
        starLimitMagnitudeCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Limit the magnitude of stars", 0));
#endif // QT_NO_TOOLTIP
        starLimitMagnitudeCheckBox->setText(QApplication::translate("viewDialogForm", "Stars", 0));
#ifndef QT_NO_TOOLTIP
        nebulaLimitMagnitudeCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Limit the magnitude of deep-sky objects (star clusters, galaxies and nebulas)", 0));
#endif // QT_NO_TOOLTIP
        nebulaLimitMagnitudeCheckBox->setText(QApplication::translate("viewDialogForm", "DSOs", "Deep-sky objects"));
        constellationGroupBox->setTitle(QApplication::translate("viewDialogForm", "Constellations", 0));
        showConstellationLinesCheckBox->setText(QApplication::translate("viewDialogForm", "Show lines", 0));
        showConstellationLabelsCheckBox->setText(QApplication::translate("viewDialogForm", "Show labels", 0));
        showConstellationBoundariesCheckBox->setText(QApplication::translate("viewDialogForm", "Show boundaries", 0));
        showConstellationArtCheckBox->setText(QApplication::translate("viewDialogForm", "Show art", 0));
        label_6->setText(QApplication::translate("viewDialogForm", "Art brightness:", 0));
        celestialSphereGroupBox->setTitle(QApplication::translate("viewDialogForm", "Celestial Sphere", 0));
        showEquatorialJ2000GridCheckBox->setText(QApplication::translate("viewDialogForm", "Equatorial grid (on J2000)", 0));
        showEquatorialGridCheckBox->setText(QApplication::translate("viewDialogForm", "Equatorial grid (on date)", 0));
        showEclipticGridJ2000CheckBox->setText(QApplication::translate("viewDialogForm", "Ecliptic grid (on J2000)", 0));
        showAzimuthalGridCheckBox->setText(QApplication::translate("viewDialogForm", "Azimuthal grid", 0));
        showGalacticGridCheckBox->setText(QApplication::translate("viewDialogForm", "Galactic grid", 0));
#ifndef QT_NO_TOOLTIP
        showEquatorLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show equator line", 0));
#endif // QT_NO_TOOLTIP
        showEquatorLineCheckBox->setText(QApplication::translate("viewDialogForm", "Equator", 0));
#ifndef QT_NO_TOOLTIP
        showMeridianLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show meridian line", 0));
#endif // QT_NO_TOOLTIP
        showMeridianLineCheckBox->setText(QApplication::translate("viewDialogForm", "Meridian", 0));
#ifndef QT_NO_TOOLTIP
        showEclipticLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show ecliptic line", 0));
#endif // QT_NO_TOOLTIP
        showEclipticLineCheckBox->setText(QApplication::translate("viewDialogForm", "Ecliptic", 0));
#ifndef QT_NO_TOOLTIP
        showHorizonLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show horizon line", 0));
#endif // QT_NO_TOOLTIP
        showHorizonLineCheckBox->setText(QApplication::translate("viewDialogForm", "Horizon", 0));
#ifndef QT_NO_TOOLTIP
        showGalacticEquatorLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show Galactic equator line", 0));
#endif // QT_NO_TOOLTIP
        showGalacticEquatorLineCheckBox->setText(QApplication::translate("viewDialogForm", "Galactic equator", 0));
        showCardinalPointsCheckBox->setText(QApplication::translate("viewDialogForm", "Cardinal points", 0));
        setProjectionGroupBox->setTitle(QApplication::translate("viewDialogForm", "Projection", 0));
        landscapeOptionsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Options", 0));
        showFogCheckBox->setText(QApplication::translate("viewDialogForm", "Show fog", 0));
        landscapePositionCheckBox->setText(QApplication::translate("viewDialogForm", "Use associated planet and position", 0));
        landscapeIlluminationCheckBox->setText(QApplication::translate("viewDialogForm", "Show illumination layer (bright windows, light pollution, etc.)", 0));
        showGroundCheckBox->setText(QApplication::translate("viewDialogForm", "Show ground", 0));
        useAsDefaultLandscapeCheckBox->setText(QApplication::translate("viewDialogForm", "Use this landscape as default", 0));
#ifndef QT_NO_TOOLTIP
        landscapeBrightnessCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Use minimal brightness to leave landscape visible also in darkness", 0));
#endif // QT_NO_TOOLTIP
        landscapeBrightnessCheckBox->setText(QApplication::translate("viewDialogForm", "Minimal brightness:", 0));
#ifndef QT_NO_TOOLTIP
        landscapeBrightnessSpinBox->setToolTip(QApplication::translate("viewDialogForm", "Value range 0..1 (landscape is black at night - landscape is fully bright)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        localLandscapeBrightnessCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Use minimal brightness as may be specified in landscape.ini", 0));
#endif // QT_NO_TOOLTIP
        localLandscapeBrightnessCheckBox->setText(QApplication::translate("viewDialogForm", "from landscape, if given", 0));
        pushButtonAddRemoveLandscapes->setText(QApplication::translate("viewDialogForm", "Add/remove landscapes...", 0));
        starloreOptionsgroupBox->setTitle(QApplication::translate("viewDialogForm", "Options", 0));
        useAsDefaultSkyCultureCheckBox->setText(QApplication::translate("viewDialogForm", "Use this sky culture as default", 0));
        label->setText(QApplication::translate("viewDialogForm", "Show names", 0));
#ifndef QT_NO_TOOLTIP
        skyCultureNamesStyleComboBox->setToolTip(QApplication::translate("viewDialogForm", "Select if you want names abbreviated, original or translated", 0));
#endif // QT_NO_TOOLTIP
        skyCultureNamesStyleComboBox->setCurrentText(QString());
        nativeNameCheckBox->setText(QApplication::translate("viewDialogForm", "Use native names for planets from current culture", 0));
        groupBox->setTitle(QApplication::translate("viewDialogForm", "Options", 0));
        skyLayerEnableCheckBox->setText(QApplication::translate("viewDialogForm", "Visible", 0));
        Q_UNUSED(viewDialogForm);
    } // retranslateUi

};

namespace Ui {
    class viewDialogForm: public Ui_viewDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWDIALOG_H
