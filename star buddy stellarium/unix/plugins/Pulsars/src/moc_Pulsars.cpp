/****************************************************************************
** Meta object code from reading C++ file 'Pulsars.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Pulsars/src/Pulsars.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Pulsars.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pulsars_t {
    QByteArrayData data[21];
    char stringdata[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Pulsars_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Pulsars_t qt_meta_stringdata_Pulsars = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 18),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 20),
QT_MOC_LITERAL(4, 49, 5),
QT_MOC_LITERAL(5, 55, 18),
QT_MOC_LITERAL(6, 74, 10),
QT_MOC_LITERAL(7, 85, 18),
QT_MOC_LITERAL(8, 104, 1),
QT_MOC_LITERAL(9, 106, 18),
QT_MOC_LITERAL(10, 125, 14),
QT_MOC_LITERAL(11, 140, 7),
QT_MOC_LITERAL(12, 148, 8),
QT_MOC_LITERAL(13, 157, 14),
QT_MOC_LITERAL(14, 172, 24),
QT_MOC_LITERAL(15, 197, 24),
QT_MOC_LITERAL(16, 222, 14),
QT_MOC_LITERAL(17, 237, 22),
QT_MOC_LITERAL(18, 260, 14),
QT_MOC_LITERAL(19, 275, 5),
QT_MOC_LITERAL(20, 281, 14)
    },
    "Pulsars\0updateStateChanged\0\0"
    "Pulsars::UpdateState\0state\0"
    "jsonUpdateComplete\0updateJSON\0"
    "setFlagShowPulsars\0b\0getFlagShowPulsars\0"
    "displayMessage\0message\0hexColor\0"
    "messageTimeout\0setFlagShowPulsarsButton\0"
    "getFlagShowPulsarsButton\0checkForUpdate\0"
    "updateDownloadComplete\0QNetworkReply*\0"
    "reply\0pulsarsVisible\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pulsars[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06,
       5,    0,   77,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   78,    2, 0x0a,
       7,    1,   79,    2, 0x0a,
       9,    0,   82,    2, 0x0a,
      10,    2,   83,    2, 0x0a,
      10,    1,   88,    2, 0x2a,
      13,    0,   91,    2, 0x0a,
      14,    1,   92,    2, 0x0a,
      15,    0,   95,    2, 0x0a,
      16,    0,   96,    2, 0x08,
      17,    1,   97,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00095003,

       0        // eod
};

void Pulsars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Pulsars *_t = static_cast<Pulsars *>(_o);
        switch (_id) {
        case 0: _t->updateStateChanged((*reinterpret_cast< Pulsars::UpdateState(*)>(_a[1]))); break;
        case 1: _t->jsonUpdateComplete(); break;
        case 2: _t->updateJSON(); break;
        case 3: _t->setFlagShowPulsars((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->getFlagShowPulsars();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->messageTimeout(); break;
        case 8: _t->setFlagShowPulsarsButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: { bool _r = _t->getFlagShowPulsarsButton();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->checkForUpdate(); break;
        case 11: _t->updateDownloadComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Pulsars::*_t)(Pulsars::UpdateState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pulsars::updateStateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Pulsars::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pulsars::jsonUpdateComplete)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Pulsars::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_Pulsars.data,
      qt_meta_data_Pulsars,  qt_static_metacall, 0, 0}
};


const QMetaObject *Pulsars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pulsars::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pulsars.stringdata))
        return static_cast<void*>(const_cast< Pulsars*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int Pulsars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = getFlagShowPulsars(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFlagShowPulsars(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Pulsars::updateStateChanged(Pulsars::UpdateState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pulsars::jsonUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
struct qt_meta_stringdata_PulsarsStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PulsarsStelPluginInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PulsarsStelPluginInterface_t qt_meta_stringdata_PulsarsStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 26)
    },
    "PulsarsStelPluginInterface\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PulsarsStelPluginInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PulsarsStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PulsarsStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PulsarsStelPluginInterface.data,
      qt_meta_data_PulsarsStelPluginInterface,  qt_static_metacall, 0, 0}
};


const QMetaObject *PulsarsStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PulsarsStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PulsarsStelPluginInterface.stringdata))
        return static_cast<void*>(const_cast< PulsarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< PulsarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< PulsarsStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int PulsarsStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x25, 0x00, 0x73, 0x74, 0x65, 0x6c, 0x6c, 0x61,
    0x72, 0x69, 0x75, 0x6d, 0x2e, 0x53, 0x74, 0x65,
    0x6c, 0x47, 0x75, 0x69, 0x50, 0x6c, 0x75, 0x67,
    0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x66,
    0x61, 0x63, 0x65, 0x2f, 0x31, 0x2e, 0x30, 0x00,
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 0x63, 0x6c,
    0x61, 0x73, 0x73, 0x4e, 0x61, 0x6d, 0x65, 0x00,
    0x1a, 0x00, 0x50, 0x75, 0x6c, 0x73, 0x61, 0x72,
    0x73, 0x53, 0x74, 0x65, 0x6c, 0x50, 0x6c, 0x75,
    0x67, 0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72,
    0x66, 0x61, 0x63, 0x65, 0x3a, 0x40, 0xa0, 0x00,
    0x07, 0x00, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x64, 0x65, 0x62, 0x75, 0x67, 0x00,
    0x15, 0x13, 0x00, 0x00, 0x08, 0x00, 0x4d, 0x65,
    0x74, 0x61, 0x44, 0x61, 0x74, 0x61, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
    0x7c, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x25, 0x00, 0x73, 0x74, 0x65, 0x6c, 0x6c, 0x61,
    0x72, 0x69, 0x75, 0x6d, 0x2e, 0x53, 0x74, 0x65,
    0x6c, 0x47, 0x75, 0x69, 0x50, 0x6c, 0x75, 0x67,
    0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x66,
    0x61, 0x63, 0x65, 0x2f, 0x31, 0x2e, 0x30, 0x00,
    0x15, 0x0a, 0x00, 0x00, 0x08, 0x00, 0x4d, 0x65,
    0x74, 0x61, 0x44, 0x61, 0x74, 0x61, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x0d, 0x00, 0x00,
    0x09, 0x00, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x4e,
    0x61, 0x6d, 0x65, 0x00, 0x1a, 0x00, 0x50, 0x75,
    0x6c, 0x73, 0x61, 0x72, 0x73, 0x53, 0x74, 0x65,
    0x6c, 0x50, 0x6c, 0x75, 0x67, 0x69, 0x6e, 0x49,
    0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63, 0x65,
    0x31, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x3a, 0x40, 0xa0, 0x00,
    0x07, 0x00, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(PulsarsStelPluginInterface, PulsarsStelPluginInterface)

QT_END_MOC_NAMESPACE
