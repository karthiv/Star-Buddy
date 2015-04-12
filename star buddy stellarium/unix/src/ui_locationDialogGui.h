/********************************************************************************
** Form generated from reading UI file 'locationDialogGui.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATIONDIALOGGUI_H
#define UI_LOCATIONDIALOGGUI_H

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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "AngleSpinBox.hpp"
#include "Dialog.hpp"
#include "MapLabel.hpp"

QT_BEGIN_NAMESPACE

class Ui_locationDialogForm
{
public:
    QVBoxLayout *vboxLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QFrame *locationContent;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    MapLabel *mapLabel;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QListView *citiesListView;
    QLineEdit *citySearchLineEdit;
    QPushButton *resetListPushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QFrame *frame_4;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    AngleSpinBox *latitudeSpinBox;
    QLabel *label;
    AngleSpinBox *longitudeSpinBox;
    QLabel *label_7;
    QSpinBox *altitudeSpinBox;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonReturnToDefault;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteLocationFromListPushButton;
    QPushButton *addLocationToListPushButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_5;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QLineEdit *cityNameLineEdit;
    QLabel *label_4;
    QComboBox *countryNameComboBox;
    QLabel *label_6;
    QComboBox *planetNameComboBox;
    QCheckBox *useAsDefaultLocationCheckBox;
    QCheckBox *useIpQueryCheckBox;

    void setupUi(QWidget *locationDialogForm)
    {
        if (locationDialogForm->objectName().isEmpty())
            locationDialogForm->setObjectName(QStringLiteral("locationDialogForm"));
        locationDialogForm->resize(700, 460);
        locationDialogForm->setStyleSheet(QStringLiteral(""));
        vboxLayout = new QVBoxLayout(locationDialogForm);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(locationDialogForm);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        TitleBar->setMinimumSize(QSize(16, 25));
        TitleBar->setMaximumSize(QSize(16777215, 30));
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

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


        vboxLayout->addWidget(TitleBar);

        locationContent = new QFrame(locationDialogForm);
        locationContent->setObjectName(QStringLiteral("locationContent"));
        locationContent->setFrameShape(QFrame::StyledPanel);
        gridLayout_2 = new QGridLayout(locationContent);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(locationContent);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 240));
        frame->setMaximumSize(QSize(16777215, 240));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mapLabel = new MapLabel(frame);
        mapLabel->setObjectName(QStringLiteral("mapLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mapLabel->sizePolicy().hasHeightForWidth());
        mapLabel->setSizePolicy(sizePolicy1);
        mapLabel->setMinimumSize(QSize(400, 240));
        mapLabel->setMaximumSize(QSize(400, 240));
        mapLabel->setLineWidth(0);
        mapLabel->setPixmap(QPixmap(QString::fromUtf8("../../data/gui/world.png")));
        mapLabel->setScaledContents(true);
        mapLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(mapLabel, 1, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(0, 240));
        frame_2->setMaximumSize(QSize(16777215, 240));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        citiesListView = new QListView(frame_2);
        citiesListView->setObjectName(QStringLiteral("citiesListView"));
        citiesListView->setFocusPolicy(Qt::NoFocus);
        citiesListView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        citiesListView->setUniformItemSizes(true);

        verticalLayout->addWidget(citiesListView);

        citySearchLineEdit = new QLineEdit(frame_2);
        citySearchLineEdit->setObjectName(QStringLiteral("citySearchLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(citySearchLineEdit->sizePolicy().hasHeightForWidth());
        citySearchLineEdit->setSizePolicy(sizePolicy2);
        citySearchLineEdit->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(citySearchLineEdit);

        resetListPushButton = new QPushButton(frame_2);
        resetListPushButton->setObjectName(QStringLiteral("resetListPushButton"));

        verticalLayout->addWidget(resetListPushButton);


        gridLayout_3->addWidget(frame_2, 1, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 2);

        groupBox = new QGroupBox(locationContent);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 2);

        frame_4 = new QFrame(groupBox);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setMinimumSize(QSize(0, 0));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(6);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        latitudeSpinBox = new AngleSpinBox(frame_4);
        latitudeSpinBox->setObjectName(QStringLiteral("latitudeSpinBox"));
        latitudeSpinBox->setMinimumSize(QSize(180, 24));
        latitudeSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(latitudeSpinBox, 0, 1, 1, 1);

        label = new QLabel(frame_4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        longitudeSpinBox = new AngleSpinBox(frame_4);
        longitudeSpinBox->setObjectName(QStringLiteral("longitudeSpinBox"));
        longitudeSpinBox->setMinimumSize(QSize(140, 24));
        longitudeSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(longitudeSpinBox, 1, 1, 1, 1);

        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 2, 0, 1, 1);

        altitudeSpinBox = new QSpinBox(frame_4);
        altitudeSpinBox->setObjectName(QStringLiteral("altitudeSpinBox"));
        altitudeSpinBox->setMinimumSize(QSize(100, 24));
        altitudeSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        altitudeSpinBox->setMinimum(-2000);
        altitudeSpinBox->setMaximum(200000);
        altitudeSpinBox->setSingleStep(100);

        gridLayout_4->addWidget(altitudeSpinBox, 2, 1, 1, 1);


        gridLayout->addWidget(frame_4, 0, 1, 1, 1);

        frame_3 = new QFrame(groupBox);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(0, 0));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonReturnToDefault = new QPushButton(frame_3);
        pushButtonReturnToDefault->setObjectName(QStringLiteral("pushButtonReturnToDefault"));
        pushButtonReturnToDefault->setEnabled(false);
        pushButtonReturnToDefault->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButtonReturnToDefault);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        deleteLocationFromListPushButton = new QPushButton(frame_3);
        deleteLocationFromListPushButton->setObjectName(QStringLiteral("deleteLocationFromListPushButton"));
        deleteLocationFromListPushButton->setEnabled(false);
        deleteLocationFromListPushButton->setMinimumSize(QSize(60, 0));
        deleteLocationFromListPushButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(deleteLocationFromListPushButton);

        addLocationToListPushButton = new QPushButton(frame_3);
        addLocationToListPushButton->setObjectName(QStringLiteral("addLocationToListPushButton"));
        addLocationToListPushButton->setEnabled(false);
        addLocationToListPushButton->setMinimumSize(QSize(100, 0));
        addLocationToListPushButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(addLocationToListPushButton);


        gridLayout->addWidget(frame_3, 2, 1, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        frame_5 = new QFrame(groupBox);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setMinimumSize(QSize(350, 0));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        cityNameLineEdit = new QLineEdit(frame_5);
        cityNameLineEdit->setObjectName(QStringLiteral("cityNameLineEdit"));

        gridLayout_5->addWidget(cityNameLineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);

        countryNameComboBox = new QComboBox(frame_5);
        countryNameComboBox->setObjectName(QStringLiteral("countryNameComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(countryNameComboBox->sizePolicy().hasHeightForWidth());
        countryNameComboBox->setSizePolicy(sizePolicy3);
        countryNameComboBox->setMinimumSize(QSize(0, 24));
        countryNameComboBox->setMaximumSize(QSize(16777215, 24));
        countryNameComboBox->setEditable(true);
        countryNameComboBox->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_5->addWidget(countryNameComboBox, 1, 1, 1, 1);

        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_5->addWidget(label_6, 2, 0, 1, 1);

        planetNameComboBox = new QComboBox(frame_5);
        planetNameComboBox->setObjectName(QStringLiteral("planetNameComboBox"));
        sizePolicy3.setHeightForWidth(planetNameComboBox->sizePolicy().hasHeightForWidth());
        planetNameComboBox->setSizePolicy(sizePolicy3);
        planetNameComboBox->setMinimumSize(QSize(0, 24));
        planetNameComboBox->setMaximumSize(QSize(16777215, 24));
        planetNameComboBox->setEditable(true);
        planetNameComboBox->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_5->addWidget(planetNameComboBox, 2, 1, 1, 1);


        gridLayout->addWidget(frame_5, 0, 3, 1, 1);

        useAsDefaultLocationCheckBox = new QCheckBox(groupBox);
        useAsDefaultLocationCheckBox->setObjectName(QStringLiteral("useAsDefaultLocationCheckBox"));

        gridLayout->addWidget(useAsDefaultLocationCheckBox, 3, 1, 1, 1);

        useIpQueryCheckBox = new QCheckBox(groupBox);
        useIpQueryCheckBox->setObjectName(QStringLiteral("useIpQueryCheckBox"));

        gridLayout->addWidget(useIpQueryCheckBox, 3, 3, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 1, 1, 1);


        vboxLayout->addWidget(locationContent);


        retranslateUi(locationDialogForm);

        QMetaObject::connectSlotsByName(locationDialogForm);
    } // setupUi

    void retranslateUi(QWidget *locationDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("locationDialogForm", "Location", 0));
        closeStelWindow->setText(QString());
        mapLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        citiesListView->setToolTip(QApplication::translate("locationDialogForm", "Standard list of locations contains only English names (without diacritics!)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        citySearchLineEdit->setToolTip(QApplication::translate("locationDialogForm", "Standard list of locations contains only English names (without diacritics!)", 0));
#endif // QT_NO_TOOLTIP
        citySearchLineEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetListPushButton->setToolTip(QApplication::translate("locationDialogForm", "Reset location list to show all known locations", 0));
#endif // QT_NO_TOOLTIP
        resetListPushButton->setText(QApplication::translate("locationDialogForm", "Reset Location List", 0));
        groupBox->setTitle(QApplication::translate("locationDialogForm", "Current location information", 0));
        label_5->setText(QApplication::translate("locationDialogForm", "Latitude:", 0));
#ifndef QT_NO_TOOLTIP
        latitudeSpinBox->setToolTip(QApplication::translate("locationDialogForm", "You can enter values in decimal degrees, or using dms format, for example: +1d 12m 8s", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("locationDialogForm", "Longitude:", 0));
#ifndef QT_NO_TOOLTIP
        longitudeSpinBox->setToolTip(QApplication::translate("locationDialogForm", "You can enter values in decimal degrees, or using dms format, for example: +1d 12m 8s", 0));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("locationDialogForm", "Altitude:", 0));
#ifndef QT_NO_TOOLTIP
        altitudeSpinBox->setToolTip(QApplication::translate("locationDialogForm", "Enter the altitude in meter", 0));
#endif // QT_NO_TOOLTIP
        altitudeSpinBox->setSuffix(QApplication::translate("locationDialogForm", " m", 0));
        pushButtonReturnToDefault->setText(QApplication::translate("locationDialogForm", "Return to default location", 0));
        deleteLocationFromListPushButton->setText(QApplication::translate("locationDialogForm", "Delete", 0));
        addLocationToListPushButton->setText(QApplication::translate("locationDialogForm", "Add to list", 0));
        label_3->setText(QApplication::translate("locationDialogForm", "Name/City:", 0));
        cityNameLineEdit->setPlaceholderText(QApplication::translate("locationDialogForm", "New Location", 0));
        label_4->setText(QApplication::translate("locationDialogForm", "Country:", 0));
        label_6->setText(QApplication::translate("locationDialogForm", "Planet:", 0));
        useAsDefaultLocationCheckBox->setText(QApplication::translate("locationDialogForm", "Use current location as default", 0));
        useIpQueryCheckBox->setText(QApplication::translate("locationDialogForm", "Get location from Network", 0));
        Q_UNUSED(locationDialogForm);
    } // retranslateUi

};

namespace Ui {
    class locationDialogForm: public Ui_locationDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATIONDIALOGGUI_H
