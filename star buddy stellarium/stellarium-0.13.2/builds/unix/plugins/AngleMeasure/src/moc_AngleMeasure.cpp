/****************************************************************************
** Meta object code from reading C++ file 'AngleMeasure.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/AngleMeasure/src/AngleMeasure.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AngleMeasure.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AngleMeasure_t {
    QByteArrayData data[16];
    char stringdata[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AngleMeasure_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AngleMeasure_t qt_meta_stringdata_AngleMeasure = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 18),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 1),
QT_MOC_LITERAL(4, 35, 12),
QT_MOC_LITERAL(5, 48, 17),
QT_MOC_LITERAL(6, 66, 20),
QT_MOC_LITERAL(7, 87, 14),
QT_MOC_LITERAL(8, 102, 14),
QT_MOC_LITERAL(9, 117, 28),
QT_MOC_LITERAL(10, 146, 26),
QT_MOC_LITERAL(11, 173, 17),
QT_MOC_LITERAL(12, 191, 12),
QT_MOC_LITERAL(13, 204, 7),
QT_MOC_LITERAL(14, 212, 9),
QT_MOC_LITERAL(15, 222, 11)
    },
    "AngleMeasure\0enableAngleMeasure\0\0b\0"
    "useDmsFormat\0showPositionAngle\0"
    "showPositionAngleHor\0showEquatorial\0"
    "showHorizontal\0showHorizontalStartSkylinked\0"
    "showHorizontalEndSkylinked\0updateMessageText\0"
    "clearMessage\0enabled\0dmsFormat\0"
    "paDisplayed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AngleMeasure[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a,
       4,    1,   67,    2, 0x0a,
       5,    1,   70,    2, 0x0a,
       6,    1,   73,    2, 0x0a,
       7,    1,   76,    2, 0x0a,
       8,    1,   79,    2, 0x0a,
       9,    1,   82,    2, 0x0a,
      10,    1,   85,    2, 0x0a,
      11,    0,   88,    2, 0x08,
      12,    0,   89,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00095003,
      14, QMetaType::Bool, 0x00095003,
      15, QMetaType::Bool, 0x00095003,

       0        // eod
};

void AngleMeasure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AngleMeasure *_t = static_cast<AngleMeasure *>(_o);
        switch (_id) {
        case 0: _t->enableAngleMeasure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->useDmsFormat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showPositionAngle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showPositionAngleHor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showEquatorial((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showHorizontal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showHorizontalStartSkylinked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showHorizontalEndSkylinked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateMessageText(); break;
        case 9: _t->clearMessage(); break;
        default: ;
        }
    }
}

const QMetaObject AngleMeasure::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_AngleMeasure.data,
      qt_meta_data_AngleMeasure,  qt_static_metacall, 0, 0}
};


const QMetaObject *AngleMeasure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AngleMeasure::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AngleMeasure.stringdata))
        return static_cast<void*>(const_cast< AngleMeasure*>(this));
    return StelModule::qt_metacast(_clname);
}

int AngleMeasure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isDmsFormat(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isPaDisplayed(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: enableAngleMeasure(*reinterpret_cast< bool*>(_v)); break;
        case 1: useDmsFormat(*reinterpret_cast< bool*>(_v)); break;
        case 2: showPositionAngle(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_AngleMeasureStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AngleMeasureStelPluginInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AngleMeasureStelPluginInterface_t qt_meta_stringdata_AngleMeasureStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 31)
    },
    "AngleMeasureStelPluginInterface\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AngleMeasureStelPluginInterface[] = {

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

void AngleMeasureStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AngleMeasureStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AngleMeasureStelPluginInterface.data,
      qt_meta_data_AngleMeasureStelPluginInterface,  qt_static_metacall, 0, 0}
};


const QMetaObject *AngleMeasureStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AngleMeasureStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AngleMeasureStelPluginInterface.stringdata))
        return static_cast<void*>(const_cast< AngleMeasureStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< AngleMeasureStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< AngleMeasureStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int AngleMeasureStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0xc0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x25, 0x00, 0x73, 0x74, 0x65, 0x6c, 0x6c, 0x61,
    0x72, 0x69, 0x75, 0x6d, 0x2e, 0x53, 0x74, 0x65,
    0x6c, 0x47, 0x75, 0x69, 0x50, 0x6c, 0x75, 0x67,
    0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x66,
    0x61, 0x63, 0x65, 0x2f, 0x31, 0x2e, 0x30, 0x00,
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 0x63, 0x6c,
    0x61, 0x73, 0x73, 0x4e, 0x61, 0x6d, 0x65, 0x00,
    0x1f, 0x00, 0x41, 0x6e, 0x67, 0x6c, 0x65, 0x4d,
    0x65, 0x61, 0x73, 0x75, 0x72, 0x65, 0x53, 0x74,
    0x65, 0x6c, 0x50, 0x6c, 0x75, 0x67, 0x69, 0x6e,
    0x49, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63,
    0x65, 0x00, 0x00, 0x00, 0x3a, 0x40, 0xa0, 0x00,
    0x07, 0x00, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x64, 0x65, 0x62, 0x75, 0x67, 0x00,
    0x15, 0x14, 0x00, 0x00, 0x08, 0x00, 0x4d, 0x65,
    0x74, 0x61, 0x44, 0x61, 0x74, 0x61, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    0x61, 0x6d, 0x65, 0x00, 0x1f, 0x00, 0x41, 0x6e,
    0x67, 0x6c, 0x65, 0x4d, 0x65, 0x61, 0x73, 0x75,
    0x72, 0x65, 0x53, 0x74, 0x65, 0x6c, 0x50, 0x6c,
    0x75, 0x67, 0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65,
    0x72, 0x66, 0x61, 0x63, 0x65, 0x00, 0x00, 0x00,
    0x31, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x3a, 0x40, 0xa0, 0x00,
    0x07, 0x00, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(AngleMeasureStelPluginInterface, AngleMeasureStelPluginInterface)

QT_END_MOC_NAMESPACE
