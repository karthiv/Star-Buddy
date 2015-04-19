/********************************************************************************
** Form generated from reading UI file 'telescopeConfigurationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELESCOPECONFIGURATIONDIALOG_H
#define UI_TELESCOPECONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_telescopeConfigurationDialog
{
public:
    QVBoxLayout *_2;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QGroupBox *groupBoxType;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonTelescopeLocal;
    QRadioButton *radioButtonTelescopeConnection;
    QRadioButton *radioButtonTelescopeVirtual;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayoutScrollArea;
    QGroupBox *groupBoxTelescopeProperties;
    QVBoxLayout *verticalLayoutTelescope;
    QLabel *labelTelescopeName;
    QLineEdit *lineEditTelescopeName;
    QHBoxLayout *horizontalLayoutDelay;
    QLabel *labelConnectionDelay;
    QDoubleSpinBox *doubleSpinBoxTelescopeDelay;
    QLabel *labelEquinox;
    QFrame *frameEquinox;
    QHBoxLayout *horizontalLayoutEpoch;
    QRadioButton *radioButtonJ2000;
    QRadioButton *radioButtonJNow;
    QCheckBox *checkBoxConnectAtStartup;
    QGroupBox *groupBoxDeviceSettings;
    QVBoxLayout *verticalLayoutDevice;
    QHBoxLayout *horizontalLayoutSerialPort;
    QLabel *labelSerialPort;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditSerialPort;
    QLabel *labelDeviceModel;
    QComboBox *comboBoxDeviceModel;
    QLabel *labelDeviceModelDescription;
    QGroupBox *groupBoxConnectionSettings;
    QGridLayout *gridLayout;
    QLabel *labelHost;
    QLineEdit *lineEditHostName;
    QLabel *labelColon;
    QSpinBox *spinBoxTCPPort;
    QLabel *labelTCPPort;
    QGroupBox *groupBoxUserInterface;
    QVBoxLayout *verticalLayoutUserInterface;
    QCheckBox *checkBoxCircles;
    QLabel *labelCircles;
    QLineEdit *lineEditCircleList;
    QFrame *frameOkCancelButtons;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonDiscard;

    void setupUi(QWidget *telescopeConfigurationDialog)
    {
        if (telescopeConfigurationDialog->objectName().isEmpty())
            telescopeConfigurationDialog->setObjectName(QStringLiteral("telescopeConfigurationDialog"));
        telescopeConfigurationDialog->setWindowModality(Qt::WindowModal);
        telescopeConfigurationDialog->resize(400, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(telescopeConfigurationDialog->sizePolicy().hasHeightForWidth());
        telescopeConfigurationDialog->setSizePolicy(sizePolicy);
        telescopeConfigurationDialog->setMinimumSize(QSize(400, 480));
        _2 = new QVBoxLayout(telescopeConfigurationDialog);
        _2->setSpacing(0);
        _2->setContentsMargins(0, 0, 0, 0);
        _2->setObjectName(QStringLiteral("_2"));
        TitleBar = new BarFrame(telescopeConfigurationDialog);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        TitleBar->setMinimumSize(QSize(16, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(0);
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


        _2->addWidget(TitleBar);

        groupBoxType = new QGroupBox(telescopeConfigurationDialog);
        groupBoxType->setObjectName(QStringLiteral("groupBoxType"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxType->sizePolicy().hasHeightForWidth());
        groupBoxType->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(groupBoxType);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButtonTelescopeLocal = new QRadioButton(groupBoxType);
        radioButtonTelescopeLocal->setObjectName(QStringLiteral("radioButtonTelescopeLocal"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(radioButtonTelescopeLocal->sizePolicy().hasHeightForWidth());
        radioButtonTelescopeLocal->setSizePolicy(sizePolicy2);
        radioButtonTelescopeLocal->setMinimumSize(QSize(0, 24));
        radioButtonTelescopeLocal->setChecked(true);

        verticalLayout->addWidget(radioButtonTelescopeLocal);

        radioButtonTelescopeConnection = new QRadioButton(groupBoxType);
        radioButtonTelescopeConnection->setObjectName(QStringLiteral("radioButtonTelescopeConnection"));
        sizePolicy2.setHeightForWidth(radioButtonTelescopeConnection->sizePolicy().hasHeightForWidth());
        radioButtonTelescopeConnection->setSizePolicy(sizePolicy2);
        radioButtonTelescopeConnection->setMinimumSize(QSize(0, 24));

        verticalLayout->addWidget(radioButtonTelescopeConnection);

        radioButtonTelescopeVirtual = new QRadioButton(groupBoxType);
        radioButtonTelescopeVirtual->setObjectName(QStringLiteral("radioButtonTelescopeVirtual"));
        sizePolicy2.setHeightForWidth(radioButtonTelescopeVirtual->sizePolicy().hasHeightForWidth());
        radioButtonTelescopeVirtual->setSizePolicy(sizePolicy2);
        radioButtonTelescopeVirtual->setMinimumSize(QSize(0, 24));

        verticalLayout->addWidget(radioButtonTelescopeVirtual);


        _2->addWidget(groupBoxType);

        scrollArea = new QScrollArea(telescopeConfigurationDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 382, 476));
        verticalLayoutScrollArea = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayoutScrollArea->setSpacing(0);
        verticalLayoutScrollArea->setContentsMargins(0, 0, 0, 0);
        verticalLayoutScrollArea->setObjectName(QStringLiteral("verticalLayoutScrollArea"));
        groupBoxTelescopeProperties = new QGroupBox(scrollAreaWidgetContents);
        groupBoxTelescopeProperties->setObjectName(QStringLiteral("groupBoxTelescopeProperties"));
        verticalLayoutTelescope = new QVBoxLayout(groupBoxTelescopeProperties);
        verticalLayoutTelescope->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTelescope->setObjectName(QStringLiteral("verticalLayoutTelescope"));
        labelTelescopeName = new QLabel(groupBoxTelescopeProperties);
        labelTelescopeName->setObjectName(QStringLiteral("labelTelescopeName"));
        sizePolicy2.setHeightForWidth(labelTelescopeName->sizePolicy().hasHeightForWidth());
        labelTelescopeName->setSizePolicy(sizePolicy2);
        labelTelescopeName->setMinimumSize(QSize(0, 24));
        labelTelescopeName->setBaseSize(QSize(110, 24));

        verticalLayoutTelescope->addWidget(labelTelescopeName);

        lineEditTelescopeName = new QLineEdit(groupBoxTelescopeProperties);
        lineEditTelescopeName->setObjectName(QStringLiteral("lineEditTelescopeName"));
        lineEditTelescopeName->setMinimumSize(QSize(0, 24));
        lineEditTelescopeName->setMaxLength(50);

        verticalLayoutTelescope->addWidget(lineEditTelescopeName);

        horizontalLayoutDelay = new QHBoxLayout();
        horizontalLayoutDelay->setObjectName(QStringLiteral("horizontalLayoutDelay"));
        labelConnectionDelay = new QLabel(groupBoxTelescopeProperties);
        labelConnectionDelay->setObjectName(QStringLiteral("labelConnectionDelay"));
        sizePolicy2.setHeightForWidth(labelConnectionDelay->sizePolicy().hasHeightForWidth());
        labelConnectionDelay->setSizePolicy(sizePolicy2);
        labelConnectionDelay->setMinimumSize(QSize(0, 24));

        horizontalLayoutDelay->addWidget(labelConnectionDelay);

        doubleSpinBoxTelescopeDelay = new QDoubleSpinBox(groupBoxTelescopeProperties);
        doubleSpinBoxTelescopeDelay->setObjectName(QStringLiteral("doubleSpinBoxTelescopeDelay"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(doubleSpinBoxTelescopeDelay->sizePolicy().hasHeightForWidth());
        doubleSpinBoxTelescopeDelay->setSizePolicy(sizePolicy3);
        doubleSpinBoxTelescopeDelay->setMinimumSize(QSize(50, 24));
        doubleSpinBoxTelescopeDelay->setSuffix(QStringLiteral("s"));
        doubleSpinBoxTelescopeDelay->setDecimals(2);
        doubleSpinBoxTelescopeDelay->setMinimum(0.1);
        doubleSpinBoxTelescopeDelay->setMaximum(10);
        doubleSpinBoxTelescopeDelay->setSingleStep(0.1);
        doubleSpinBoxTelescopeDelay->setValue(0.5);

        horizontalLayoutDelay->addWidget(doubleSpinBoxTelescopeDelay);


        verticalLayoutTelescope->addLayout(horizontalLayoutDelay);

        labelEquinox = new QLabel(groupBoxTelescopeProperties);
        labelEquinox->setObjectName(QStringLiteral("labelEquinox"));

        verticalLayoutTelescope->addWidget(labelEquinox);

        frameEquinox = new QFrame(groupBoxTelescopeProperties);
        frameEquinox->setObjectName(QStringLiteral("frameEquinox"));
        horizontalLayoutEpoch = new QHBoxLayout(frameEquinox);
        horizontalLayoutEpoch->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutEpoch->setObjectName(QStringLiteral("horizontalLayoutEpoch"));
        radioButtonJ2000 = new QRadioButton(frameEquinox);
        radioButtonJ2000->setObjectName(QStringLiteral("radioButtonJ2000"));

        horizontalLayoutEpoch->addWidget(radioButtonJ2000);

        radioButtonJNow = new QRadioButton(frameEquinox);
        radioButtonJNow->setObjectName(QStringLiteral("radioButtonJNow"));

        horizontalLayoutEpoch->addWidget(radioButtonJNow);


        verticalLayoutTelescope->addWidget(frameEquinox);

        checkBoxConnectAtStartup = new QCheckBox(groupBoxTelescopeProperties);
        checkBoxConnectAtStartup->setObjectName(QStringLiteral("checkBoxConnectAtStartup"));
        checkBoxConnectAtStartup->setMinimumSize(QSize(0, 24));

        verticalLayoutTelescope->addWidget(checkBoxConnectAtStartup);


        verticalLayoutScrollArea->addWidget(groupBoxTelescopeProperties);

        groupBoxDeviceSettings = new QGroupBox(scrollAreaWidgetContents);
        groupBoxDeviceSettings->setObjectName(QStringLiteral("groupBoxDeviceSettings"));
        verticalLayoutDevice = new QVBoxLayout(groupBoxDeviceSettings);
        verticalLayoutDevice->setContentsMargins(0, 0, 0, 0);
        verticalLayoutDevice->setObjectName(QStringLiteral("verticalLayoutDevice"));
        horizontalLayoutSerialPort = new QHBoxLayout();
        horizontalLayoutSerialPort->setObjectName(QStringLiteral("horizontalLayoutSerialPort"));
        labelSerialPort = new QLabel(groupBoxDeviceSettings);
        labelSerialPort->setObjectName(QStringLiteral("labelSerialPort"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelSerialPort->sizePolicy().hasHeightForWidth());
        labelSerialPort->setSizePolicy(sizePolicy4);
        labelSerialPort->setMinimumSize(QSize(0, 24));

        horizontalLayoutSerialPort->addWidget(labelSerialPort);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutSerialPort->addItem(horizontalSpacer);

        lineEditSerialPort = new QLineEdit(groupBoxDeviceSettings);
        lineEditSerialPort->setObjectName(QStringLiteral("lineEditSerialPort"));
        lineEditSerialPort->setMinimumSize(QSize(0, 24));

        horizontalLayoutSerialPort->addWidget(lineEditSerialPort);


        verticalLayoutDevice->addLayout(horizontalLayoutSerialPort);

        labelDeviceModel = new QLabel(groupBoxDeviceSettings);
        labelDeviceModel->setObjectName(QStringLiteral("labelDeviceModel"));
        sizePolicy2.setHeightForWidth(labelDeviceModel->sizePolicy().hasHeightForWidth());
        labelDeviceModel->setSizePolicy(sizePolicy2);
        labelDeviceModel->setMinimumSize(QSize(0, 24));

        verticalLayoutDevice->addWidget(labelDeviceModel);

        comboBoxDeviceModel = new QComboBox(groupBoxDeviceSettings);
        comboBoxDeviceModel->setObjectName(QStringLiteral("comboBoxDeviceModel"));
        sizePolicy2.setHeightForWidth(comboBoxDeviceModel->sizePolicy().hasHeightForWidth());
        comboBoxDeviceModel->setSizePolicy(sizePolicy2);
        comboBoxDeviceModel->setMinimumSize(QSize(0, 24));

        verticalLayoutDevice->addWidget(comboBoxDeviceModel);

        labelDeviceModelDescription = new QLabel(groupBoxDeviceSettings);
        labelDeviceModelDescription->setObjectName(QStringLiteral("labelDeviceModelDescription"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelDeviceModelDescription->sizePolicy().hasHeightForWidth());
        labelDeviceModelDescription->setSizePolicy(sizePolicy5);
        labelDeviceModelDescription->setMinimumSize(QSize(0, 0));
        labelDeviceModelDescription->setContextMenuPolicy(Qt::DefaultContextMenu);
        labelDeviceModelDescription->setFrameShape(QFrame::NoFrame);
        labelDeviceModelDescription->setTextFormat(Qt::PlainText);
        labelDeviceModelDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelDeviceModelDescription->setWordWrap(true);
        labelDeviceModelDescription->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayoutDevice->addWidget(labelDeviceModelDescription);


        verticalLayoutScrollArea->addWidget(groupBoxDeviceSettings);

        groupBoxConnectionSettings = new QGroupBox(scrollAreaWidgetContents);
        groupBoxConnectionSettings->setObjectName(QStringLiteral("groupBoxConnectionSettings"));
        gridLayout = new QGridLayout(groupBoxConnectionSettings);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelHost = new QLabel(groupBoxConnectionSettings);
        labelHost->setObjectName(QStringLiteral("labelHost"));
        labelHost->setEnabled(false);

        gridLayout->addWidget(labelHost, 0, 0, 1, 1);

        lineEditHostName = new QLineEdit(groupBoxConnectionSettings);
        lineEditHostName->setObjectName(QStringLiteral("lineEditHostName"));
        lineEditHostName->setEnabled(false);
        lineEditHostName->setText(QStringLiteral("localhost"));
        lineEditHostName->setMaxLength(255);

        gridLayout->addWidget(lineEditHostName, 1, 0, 1, 1);

        labelColon = new QLabel(groupBoxConnectionSettings);
        labelColon->setObjectName(QStringLiteral("labelColon"));
        labelColon->setText(QStringLiteral(":"));

        gridLayout->addWidget(labelColon, 1, 1, 1, 1);

        spinBoxTCPPort = new QSpinBox(groupBoxConnectionSettings);
        spinBoxTCPPort->setObjectName(QStringLiteral("spinBoxTCPPort"));
        sizePolicy4.setHeightForWidth(spinBoxTCPPort->sizePolicy().hasHeightForWidth());
        spinBoxTCPPort->setSizePolicy(sizePolicy4);
        spinBoxTCPPort->setMinimum(1024);
        spinBoxTCPPort->setMaximum(65535);

        gridLayout->addWidget(spinBoxTCPPort, 1, 2, 1, 1);

        labelTCPPort = new QLabel(groupBoxConnectionSettings);
        labelTCPPort->setObjectName(QStringLiteral("labelTCPPort"));
        labelTCPPort->setEnabled(true);

        gridLayout->addWidget(labelTCPPort, 0, 2, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxConnectionSettings);

        groupBoxUserInterface = new QGroupBox(scrollAreaWidgetContents);
        groupBoxUserInterface->setObjectName(QStringLiteral("groupBoxUserInterface"));
        verticalLayoutUserInterface = new QVBoxLayout(groupBoxUserInterface);
        verticalLayoutUserInterface->setContentsMargins(0, 0, 0, 0);
        verticalLayoutUserInterface->setObjectName(QStringLiteral("verticalLayoutUserInterface"));
        checkBoxCircles = new QCheckBox(groupBoxUserInterface);
        checkBoxCircles->setObjectName(QStringLiteral("checkBoxCircles"));

        verticalLayoutUserInterface->addWidget(checkBoxCircles);

        labelCircles = new QLabel(groupBoxUserInterface);
        labelCircles->setObjectName(QStringLiteral("labelCircles"));
        labelCircles->setEnabled(false);

        verticalLayoutUserInterface->addWidget(labelCircles);

        lineEditCircleList = new QLineEdit(groupBoxUserInterface);
        lineEditCircleList->setObjectName(QStringLiteral("lineEditCircleList"));
        lineEditCircleList->setEnabled(false);

        verticalLayoutUserInterface->addWidget(lineEditCircleList);


        verticalLayoutScrollArea->addWidget(groupBoxUserInterface);

        scrollArea->setWidget(scrollAreaWidgetContents);

        _2->addWidget(scrollArea);

        frameOkCancelButtons = new QFrame(telescopeConfigurationDialog);
        frameOkCancelButtons->setObjectName(QStringLiteral("frameOkCancelButtons"));
        horizontalLayout = new QHBoxLayout(frameOkCancelButtons);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 5, 0, 5);
        pushButtonSave = new QPushButton(frameOkCancelButtons);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        sizePolicy.setHeightForWidth(pushButtonSave->sizePolicy().hasHeightForWidth());
        pushButtonSave->setSizePolicy(sizePolicy);
        pushButtonSave->setMinimumSize(QSize(140, 28));
        pushButtonSave->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(pushButtonSave);

        pushButtonDiscard = new QPushButton(frameOkCancelButtons);
        pushButtonDiscard->setObjectName(QStringLiteral("pushButtonDiscard"));
        sizePolicy.setHeightForWidth(pushButtonDiscard->sizePolicy().hasHeightForWidth());
        pushButtonDiscard->setSizePolicy(sizePolicy);
        pushButtonDiscard->setMinimumSize(QSize(140, 28));

        horizontalLayout->addWidget(pushButtonDiscard);


        _2->addWidget(frameOkCancelButtons);

        QWidget::setTabOrder(radioButtonTelescopeLocal, radioButtonTelescopeConnection);
        QWidget::setTabOrder(radioButtonTelescopeConnection, radioButtonTelescopeVirtual);
        QWidget::setTabOrder(radioButtonTelescopeVirtual, scrollArea);
        QWidget::setTabOrder(scrollArea, lineEditTelescopeName);
        QWidget::setTabOrder(lineEditTelescopeName, doubleSpinBoxTelescopeDelay);
        QWidget::setTabOrder(doubleSpinBoxTelescopeDelay, checkBoxConnectAtStartup);
        QWidget::setTabOrder(checkBoxConnectAtStartup, lineEditSerialPort);
        QWidget::setTabOrder(lineEditSerialPort, comboBoxDeviceModel);
        QWidget::setTabOrder(comboBoxDeviceModel, lineEditHostName);
        QWidget::setTabOrder(lineEditHostName, spinBoxTCPPort);
        QWidget::setTabOrder(spinBoxTCPPort, checkBoxCircles);
        QWidget::setTabOrder(checkBoxCircles, lineEditCircleList);
        QWidget::setTabOrder(lineEditCircleList, pushButtonDiscard);
        QWidget::setTabOrder(pushButtonDiscard, pushButtonSave);

        retranslateUi(telescopeConfigurationDialog);
        QObject::connect(checkBoxCircles, SIGNAL(toggled(bool)), labelCircles, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxCircles, SIGNAL(toggled(bool)), lineEditCircleList, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(telescopeConfigurationDialog);
    } // setupUi

    void retranslateUi(QWidget *telescopeConfigurationDialog)
    {
        stelWindowTitle->setText(QApplication::translate("telescopeConfigurationDialog", "Telescope Configuration", 0));
        closeStelWindow->setText(QString());
        groupBoxType->setTitle(QApplication::translate("telescopeConfigurationDialog", "Telescope controlled by:", 0));
#ifndef QT_NO_TOOLTIP
        radioButtonTelescopeLocal->setToolTip(QApplication::translate("telescopeConfigurationDialog", "A telescope connected to this computer via a serial port and controlled directly by Stellarium.", 0));
#endif // QT_NO_TOOLTIP
        radioButtonTelescopeLocal->setText(QApplication::translate("telescopeConfigurationDialog", "Stellarium, directly through a serial port", 0));
#ifndef QT_NO_TOOLTIP
        radioButtonTelescopeConnection->setToolTip(QApplication::translate("telescopeConfigurationDialog", "A telescope controlled by an external application, either at this computer or at a remote machine.", 0));
#endif // QT_NO_TOOLTIP
        radioButtonTelescopeConnection->setText(QApplication::translate("telescopeConfigurationDialog", "External software or a remote computer", 0));
        radioButtonTelescopeVirtual->setText(QApplication::translate("telescopeConfigurationDialog", "Nothing, just simulate one (a moving reticle)", 0));
        groupBoxTelescopeProperties->setTitle(QApplication::translate("telescopeConfigurationDialog", "Telescope properties", 0));
        labelTelescopeName->setText(QApplication::translate("telescopeConfigurationDialog", "Name:", 0));
        labelConnectionDelay->setText(QApplication::translate("telescopeConfigurationDialog", "Connection delay:", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxTelescopeDelay->setToolTip(QApplication::translate("telescopeConfigurationDialog", "The approximate time it takes for the signals from the telescope to reach Stellarium.\n"
"Increase this value if the reticle is skipping.", 0));
#endif // QT_NO_TOOLTIP
        labelEquinox->setText(QApplication::translate("telescopeConfigurationDialog", "Coordinate system:", 0));
        radioButtonJ2000->setText(QApplication::translate("telescopeConfigurationDialog", "J2000 (default)", 0));
        radioButtonJNow->setText(QApplication::translate("telescopeConfigurationDialog", "Equinox of the date (JNow)", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxConnectAtStartup->setToolTip(QApplication::translate("telescopeConfigurationDialog", "Automatically attempt to start the telescope or establish connection when Stellarium starts", 0));
#endif // QT_NO_TOOLTIP
        checkBoxConnectAtStartup->setText(QApplication::translate("telescopeConfigurationDialog", "Start/connect at startup", 0));
        groupBoxDeviceSettings->setTitle(QApplication::translate("telescopeConfigurationDialog", "Device settings", 0));
        labelSerialPort->setText(QApplication::translate("telescopeConfigurationDialog", "Serial port:", 0));
        labelDeviceModel->setText(QApplication::translate("telescopeConfigurationDialog", "Device model:", 0));
        groupBoxConnectionSettings->setTitle(QApplication::translate("telescopeConfigurationDialog", "Connection settings", 0));
        labelHost->setText(QApplication::translate("telescopeConfigurationDialog", "Host:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditHostName->setToolTip(QApplication::translate("telescopeConfigurationDialog", "Host name or IPv4 address of the machine that hosts the telescope server", 0));
#endif // QT_NO_TOOLTIP
        labelTCPPort->setText(QApplication::translate("telescopeConfigurationDialog", "TCP port:", 0));
        groupBoxUserInterface->setTitle(QApplication::translate("telescopeConfigurationDialog", "User interface settings", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxCircles->setToolTip(QApplication::translate("telescopeConfigurationDialog", "Show circles with fixed angular size around the telescope reticle", 0));
#endif // QT_NO_TOOLTIP
        checkBoxCircles->setText(QApplication::translate("telescopeConfigurationDialog", "Use field of view indicators", 0));
        labelCircles->setText(QApplication::translate("telescopeConfigurationDialog", "Circle size(s):", 0));
#ifndef QT_NO_TOOLTIP
        lineEditCircleList->setToolTip(QApplication::translate("telescopeConfigurationDialog", "Up to ten decimal values in degrees of arc, separated with commas", 0));
#endif // QT_NO_TOOLTIP
        lineEditCircleList->setText(QString());
        pushButtonSave->setText(QApplication::translate("telescopeConfigurationDialog", "OK", 0));
        pushButtonDiscard->setText(QApplication::translate("telescopeConfigurationDialog", "Cancel", 0));
        Q_UNUSED(telescopeConfigurationDialog);
    } // retranslateUi

};

namespace Ui {
    class telescopeConfigurationDialog: public Ui_telescopeConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELESCOPECONFIGURATIONDIALOG_H
