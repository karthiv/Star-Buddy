/****************************************************************************
** Meta object code from reading C++ file 'Telescope.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Oculars/src/Telescope.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Telescope.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Telescope_t {
    QByteArrayData data[9];
    char stringdata[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Telescope_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Telescope_t qt_meta_stringdata_Telescope = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 0),
QT_MOC_LITERAL(2, 11, 7),
QT_MOC_LITERAL(3, 19, 5),
QT_MOC_LITERAL(4, 25, 4),
QT_MOC_LITERAL(5, 30, 8),
QT_MOC_LITERAL(6, 39, 11),
QT_MOC_LITERAL(7, 51, 8),
QT_MOC_LITERAL(8, 60, 8)
    },
    "Telescope\0\0QObject\0other\0name\0diameter\0"
    "focalLength\0hFlipped\0vFlipped\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Telescope[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   17, // properties
       0,    0, // enums/sets
       1,   32, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, 0x80000000 | 2,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095103,
       5, QMetaType::Double, 0x00095103,
       6, QMetaType::Double, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   14,    1, 0x0e,

       0        // eod
};

void Telescope::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Telescope *_r = new Telescope((*reinterpret_cast< const QObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    }
    Q_UNUSED(_o);
}

const QMetaObject Telescope::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Telescope.data,
      qt_meta_data_Telescope,  qt_static_metacall, 0, 0}
};


const QMetaObject *Telescope::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Telescope::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Telescope.stringdata))
        return static_cast<void*>(const_cast< Telescope*>(this));
    return QObject::qt_metacast(_clname);
}

int Telescope::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< double*>(_v) = diameter(); break;
        case 2: *reinterpret_cast< double*>(_v) = focalLength(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isHFlipped(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isVFlipped(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setDiameter(*reinterpret_cast< double*>(_v)); break;
        case 2: setFocalLength(*reinterpret_cast< double*>(_v)); break;
        case 3: setHFlipped(*reinterpret_cast< bool*>(_v)); break;
        case 4: setVFlipped(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
