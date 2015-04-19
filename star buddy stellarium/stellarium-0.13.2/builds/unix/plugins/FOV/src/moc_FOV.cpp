/****************************************************************************
** Meta object code from reading C++ file 'FOV.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/FOV/src/FOV.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FOV.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FOV_t {
    QByteArrayData data[3];
    char stringdata[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FOV_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FOV_t qt_meta_stringdata_FOV = {
    {
QT_MOC_LITERAL(0, 0, 3),
QT_MOC_LITERAL(1, 4, 6),
QT_MOC_LITERAL(2, 11, 0)
    },
    "FOV\0setFOV\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FOV[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void FOV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FOV *_t = static_cast<FOV *>(_o);
        switch (_id) {
        case 0: _t->setFOV(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FOV::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_FOV.data,
      qt_meta_data_FOV,  qt_static_metacall, 0, 0}
};


const QMetaObject *FOV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FOV::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FOV.stringdata))
        return static_cast<void*>(const_cast< FOV*>(this));
    return StelModule::qt_metacast(_clname);
}

int FOV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_FOVStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FOVStelPluginInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FOVStelPluginInterface_t qt_meta_stringdata_FOVStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 22)
    },
    "FOVStelPluginInterface\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FOVStelPluginInterface[] = {

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

void FOVStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FOVStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FOVStelPluginInterface.data,
      qt_meta_data_FOVStelPluginInterface,  qt_static_metacall, 0, 0}
};


const QMetaObject *FOVStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FOVStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FOVStelPluginInterface.stringdata))
        return static_cast<void*>(const_cast< FOVStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< FOVStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< FOVStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int FOVStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0xb4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x25, 0x00, 0x73, 0x74, 0x65, 0x6c, 0x6c, 0x61,
    0x72, 0x69, 0x75, 0x6d, 0x2e, 0x53, 0x74, 0x65,
    0x6c, 0x47, 0x75, 0x69, 0x50, 0x6c, 0x75, 0x67,
    0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x66,
    0x61, 0x63, 0x65, 0x2f, 0x31, 0x2e, 0x30, 0x00,
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 0x63, 0x6c,
    0x61, 0x73, 0x73, 0x4e, 0x61, 0x6d, 0x65, 0x00,
    0x16, 0x00, 0x46, 0x4f, 0x56, 0x53, 0x74, 0x65,
    0x6c, 0x50, 0x6c, 0x75, 0x67, 0x69, 0x6e, 0x49,
    0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63, 0x65,
    0x3a, 0x40, 0xa0, 0x00, 0x07, 0x00, 0x76, 0x65,
    0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x95, 0x12, 0x00, 0x00,
    0x08, 0x00, 0x4d, 0x65, 0x74, 0x61, 0x44, 0x61,
    0x74, 0x61, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
    0x68, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xb4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    0x61, 0x6d, 0x65, 0x00, 0x16, 0x00, 0x46, 0x4f,
    0x56, 0x53, 0x74, 0x65, 0x6c, 0x50, 0x6c, 0x75,
    0x67, 0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72,
    0x66, 0x61, 0x63, 0x65, 0x31, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x64, 0x65, 0x62, 0x75, 0x67, 0x00,
    0x3a, 0x40, 0xa0, 0x00, 0x07, 0x00, 0x76, 0x65,
    0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
    0x5c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(FOVStelPluginInterface, FOVStelPluginInterface)

QT_END_MOC_NAMESPACE
