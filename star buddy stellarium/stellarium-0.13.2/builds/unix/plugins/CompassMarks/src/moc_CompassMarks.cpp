/****************************************************************************
** Meta object code from reading C++ file 'CompassMarks.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/CompassMarks/src/CompassMarks.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CompassMarks.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CompassMarks_t {
    QByteArrayData data[10];
    char stringdata[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CompassMarks_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CompassMarks_t qt_meta_stringdata_CompassMarks = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 19),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 15),
QT_MOC_LITERAL(4, 50, 1),
QT_MOC_LITERAL(5, 52, 17),
QT_MOC_LITERAL(6, 70, 17),
QT_MOC_LITERAL(7, 88, 27),
QT_MOC_LITERAL(8, 116, 21),
QT_MOC_LITERAL(9, 138, 12)
    },
    "CompassMarks\0compassMarksChanged\0\0"
    "setCompassMarks\0b\0loadConfiguration\0"
    "saveConfiguration\0restoreDefaultConfiguration\0"
    "cardinalPointsChanged\0marksVisible\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompassMarks[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   47,    2, 0x0a,
       5,    0,   50,    2, 0x0a,
       6,    0,   51,    2, 0x0a,
       7,    0,   52,    2, 0x0a,
       8,    1,   53,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void CompassMarks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CompassMarks *_t = static_cast<CompassMarks *>(_o);
        switch (_id) {
        case 0: _t->compassMarksChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setCompassMarks((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->loadConfiguration(); break;
        case 3: _t->saveConfiguration(); break;
        case 4: _t->restoreDefaultConfiguration(); break;
        case 5: _t->cardinalPointsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CompassMarks::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CompassMarks::compassMarksChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CompassMarks::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_CompassMarks.data,
      qt_meta_data_CompassMarks,  qt_static_metacall, 0, 0}
};


const QMetaObject *CompassMarks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompassMarks::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompassMarks.stringdata))
        return static_cast<void*>(const_cast< CompassMarks*>(this));
    return StelModule::qt_metacast(_clname);
}

int CompassMarks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = getCompassMarks(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCompassMarks(*reinterpret_cast< bool*>(_v)); break;
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
void CompassMarks::compassMarksChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CompassMarksStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CompassMarksStelPluginInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CompassMarksStelPluginInterface_t qt_meta_stringdata_CompassMarksStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 31)
    },
    "CompassMarksStelPluginInterface\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompassMarksStelPluginInterface[] = {

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

void CompassMarksStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CompassMarksStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CompassMarksStelPluginInterface.data,
      qt_meta_data_CompassMarksStelPluginInterface,  qt_static_metacall, 0, 0}
};


const QMetaObject *CompassMarksStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompassMarksStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompassMarksStelPluginInterface.stringdata))
        return static_cast<void*>(const_cast< CompassMarksStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< CompassMarksStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< CompassMarksStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int CompassMarksStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x1f, 0x00, 0x43, 0x6f, 0x6d, 0x70, 0x61, 0x73,
    0x73, 0x4d, 0x61, 0x72, 0x6b, 0x73, 0x53, 0x74,
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
    0x61, 0x6d, 0x65, 0x00, 0x1f, 0x00, 0x43, 0x6f,
    0x6d, 0x70, 0x61, 0x73, 0x73, 0x4d, 0x61, 0x72,
    0x6b, 0x73, 0x53, 0x74, 0x65, 0x6c, 0x50, 0x6c,
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

QT_MOC_EXPORT_PLUGIN(CompassMarksStelPluginInterface, CompassMarksStelPluginInterface)

QT_END_MOC_NAMESPACE
