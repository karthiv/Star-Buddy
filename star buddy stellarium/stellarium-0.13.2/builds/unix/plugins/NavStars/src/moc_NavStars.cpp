/****************************************************************************
** Meta object code from reading C++ file 'NavStars.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/NavStars/src/NavStars.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NavStars.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NavStars_t {
    QByteArrayData data[8];
    char stringdata[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_NavStars_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_NavStars_t qt_meta_stringdata_NavStars = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 20),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 1),
QT_MOC_LITERAL(4, 33, 16),
QT_MOC_LITERAL(5, 50, 16),
QT_MOC_LITERAL(6, 67, 16),
QT_MOC_LITERAL(7, 84, 15)
    },
    "NavStars\0navStarsMarksChanged\0\0b\0"
    "setNavStarsMarks\0getNavStarsMarks\0"
    "starNamesChanged\0navStarsVisible\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavStars[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a,
       5,    0,   40,    2, 0x0a,
       6,    1,   41,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void NavStars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavStars *_t = static_cast<NavStars *>(_o);
        switch (_id) {
        case 0: _t->navStarsMarksChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setNavStarsMarks((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->getNavStarsMarks();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->starNamesChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NavStars::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavStars::navStarsMarksChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject NavStars::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_NavStars.data,
      qt_meta_data_NavStars,  qt_static_metacall, 0, 0}
};


const QMetaObject *NavStars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavStars::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NavStars.stringdata))
        return static_cast<void*>(const_cast< NavStars*>(this));
    return StelModule::qt_metacast(_clname);
}

int NavStars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = getNavStarsMarks(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNavStarsMarks(*reinterpret_cast< bool*>(_v)); break;
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
void NavStars::navStarsMarksChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_NavStarsStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_NavStarsStelPluginInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_NavStarsStelPluginInterface_t qt_meta_stringdata_NavStarsStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 27)
    },
    "NavStarsStelPluginInterface\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavStarsStelPluginInterface[] = {

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

void NavStarsStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject NavStarsStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NavStarsStelPluginInterface.data,
      qt_meta_data_NavStarsStelPluginInterface,  qt_static_metacall, 0, 0}
};


const QMetaObject *NavStarsStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavStarsStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NavStarsStelPluginInterface.stringdata))
        return static_cast<void*>(const_cast< NavStarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< NavStarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< NavStarsStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int NavStarsStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0xbc, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa8, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x25, 0x00, 0x73, 0x74, 0x65, 0x6c, 0x6c, 0x61,
    0x72, 0x69, 0x75, 0x6d, 0x2e, 0x53, 0x74, 0x65,
    0x6c, 0x47, 0x75, 0x69, 0x50, 0x6c, 0x75, 0x67,
    0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x66,
    0x61, 0x63, 0x65, 0x2f, 0x31, 0x2e, 0x30, 0x00,
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 0x63, 0x6c,
    0x61, 0x73, 0x73, 0x4e, 0x61, 0x6d, 0x65, 0x00,
    0x1b, 0x00, 0x4e, 0x61, 0x76, 0x53, 0x74, 0x61,
    0x72, 0x73, 0x53, 0x74, 0x65, 0x6c, 0x50, 0x6c,
    0x75, 0x67, 0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65,
    0x72, 0x66, 0x61, 0x63, 0x65, 0x00, 0x00, 0x00,
    0x3a, 0x40, 0xa0, 0x00, 0x07, 0x00, 0x76, 0x65,
    0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x95, 0x13, 0x00, 0x00,
    0x08, 0x00, 0x4d, 0x65, 0x74, 0x61, 0x44, 0x61,
    0x74, 0x61, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x70, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xbc, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa8, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    0x61, 0x6d, 0x65, 0x00, 0x1b, 0x00, 0x4e, 0x61,
    0x76, 0x53, 0x74, 0x61, 0x72, 0x73, 0x53, 0x74,
    0x65, 0x6c, 0x50, 0x6c, 0x75, 0x67, 0x69, 0x6e,
    0x49, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63,
    0x65, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x64, 0x65, 0x62, 0x75, 0x67, 0x00,
    0x3a, 0x40, 0xa0, 0x00, 0x07, 0x00, 0x76, 0x65,
    0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
    0x5c, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(NavStarsStelPluginInterface, NavStarsStelPluginInterface)

QT_END_MOC_NAMESPACE
