/****************************************************************************
** Meta object code from reading C++ file 'ZodiacalLight.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/modules/ZodiacalLight.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZodiacalLight.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ZodiacalLight_t {
    QByteArrayData data[12];
    char stringdata[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ZodiacalLight_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ZodiacalLight_t qt_meta_stringdata_ZodiacalLight = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 12),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 12),
QT_MOC_LITERAL(4, 41, 10),
QT_MOC_LITERAL(5, 52, 8),
QT_MOC_LITERAL(6, 61, 5),
QT_MOC_LITERAL(7, 67, 8),
QT_MOC_LITERAL(8, 76, 1),
QT_MOC_LITERAL(9, 78, 11),
QT_MOC_LITERAL(10, 90, 1),
QT_MOC_LITERAL(11, 92, 11)
    },
    "ZodiacalLight\0getIntensity\0\0setIntensity\0"
    "aintensity\0getColor\0Vec3f\0setColor\0c\0"
    "setFlagShow\0b\0getFlagShow\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZodiacalLight[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a,
       3,    1,   45,    2, 0x0a,
       5,    0,   48,    2, 0x0a,
       7,    1,   49,    2, 0x0a,
       9,    1,   52,    2, 0x0a,
      11,    0,   55,    2, 0x0a,

 // slots: parameters
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,    4,
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 6,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Bool,

       0        // eod
};

void ZodiacalLight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZodiacalLight *_t = static_cast<ZodiacalLight *>(_o);
        switch (_id) {
        case 0: { double _r = _t->getIntensity();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 1: _t->setIntensity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: { Vec3f _r = _t->getColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 3: _t->setColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 4: _t->setFlagShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->getFlagShow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ZodiacalLight::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_ZodiacalLight.data,
      qt_meta_data_ZodiacalLight,  qt_static_metacall, 0, 0}
};


const QMetaObject *ZodiacalLight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZodiacalLight::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZodiacalLight.stringdata))
        return static_cast<void*>(const_cast< ZodiacalLight*>(this));
    return StelModule::qt_metacast(_clname);
}

int ZodiacalLight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_END_MOC_NAMESPACE
