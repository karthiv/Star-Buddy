/****************************************************************************
** Meta object code from reading C++ file 'TuiNodeColor.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TextUserInterface/src/TuiNodeColor.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TuiNodeColor.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TuiNodeColor_t {
    QByteArrayData data[5];
    char stringdata[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TuiNodeColor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TuiNodeColor_t qt_meta_stringdata_TuiNodeColor = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 8),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 5),
QT_MOC_LITERAL(4, 29, 1)
    },
    "TuiNodeColor\0setValue\0\0Vec3f\0c\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TuiNodeColor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void TuiNodeColor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TuiNodeColor *_t = static_cast<TuiNodeColor *>(_o);
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< Vec3f(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TuiNodeColor::*_t)(Vec3f );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TuiNodeColor::setValue)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject TuiNodeColor::staticMetaObject = {
    { &TuiNodeEditable::staticMetaObject, qt_meta_stringdata_TuiNodeColor.data,
      qt_meta_data_TuiNodeColor,  qt_static_metacall, 0, 0}
};


const QMetaObject *TuiNodeColor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TuiNodeColor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TuiNodeColor.stringdata))
        return static_cast<void*>(const_cast< TuiNodeColor*>(this));
    return TuiNodeEditable::qt_metacast(_clname);
}

int TuiNodeColor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TuiNodeEditable::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TuiNodeColor::setValue(Vec3f _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
