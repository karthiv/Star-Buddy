/****************************************************************************
** Meta object code from reading C++ file 'Ocular.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Oculars/src/Ocular.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Ocular.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Ocular_t {
    QByteArrayData data[11];
    char stringdata[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Ocular_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Ocular_t qt_meta_stringdata_Ocular = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 0),
QT_MOC_LITERAL(2, 8, 7),
QT_MOC_LITERAL(3, 16, 5),
QT_MOC_LITERAL(4, 22, 10),
QT_MOC_LITERAL(5, 33, 18),
QT_MOC_LITERAL(6, 52, 12),
QT_MOC_LITERAL(7, 65, 20),
QT_MOC_LITERAL(8, 86, 9),
QT_MOC_LITERAL(9, 96, 4),
QT_MOC_LITERAL(10, 101, 11)
    },
    "Ocular\0\0QObject\0other\0binoculars\0"
    "permanentCrosshair\0appearentFOV\0"
    "effectiveFocalLength\0fieldStop\0name\0"
    "reticlePath\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ocular[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   17, // properties
       0,    0, // enums/sets
       1,   38, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, 0x80000000 | 2,    3,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00095103,
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::Double, 0x00095103,
       7, QMetaType::Double, 0x00095103,
       8, QMetaType::Double, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   14,    1, 0x0e,

       0        // eod
};

void Ocular::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Ocular *_r = new Ocular((*reinterpret_cast< const QObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    }
    Q_UNUSED(_o);
}

const QMetaObject Ocular::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Ocular.data,
      qt_meta_data_Ocular,  qt_static_metacall, 0, 0}
};


const QMetaObject *Ocular::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ocular::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ocular.stringdata))
        return static_cast<void*>(const_cast< Ocular*>(this));
    return QObject::qt_metacast(_clname);
}

int Ocular::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isBinoculars(); break;
        case 1: *reinterpret_cast< bool*>(_v) = hasPermanentCrosshair(); break;
        case 2: *reinterpret_cast< double*>(_v) = appearentFOV(); break;
        case 3: *reinterpret_cast< double*>(_v) = effectiveFocalLength(); break;
        case 4: *reinterpret_cast< double*>(_v) = fieldStop(); break;
        case 5: *reinterpret_cast< QString*>(_v) = name(); break;
        case 6: *reinterpret_cast< QString*>(_v) = reticlePath(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBinoculars(*reinterpret_cast< bool*>(_v)); break;
        case 1: setPermanentCrosshair(*reinterpret_cast< bool*>(_v)); break;
        case 2: setAppearentFOV(*reinterpret_cast< double*>(_v)); break;
        case 3: setEffectiveFocalLength(*reinterpret_cast< double*>(_v)); break;
        case 4: setFieldStop(*reinterpret_cast< double*>(_v)); break;
        case 5: setName(*reinterpret_cast< QString*>(_v)); break;
        case 6: setReticlePath(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
