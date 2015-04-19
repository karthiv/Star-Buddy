/****************************************************************************
** Meta object code from reading C++ file 'MeteorMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/modules/MeteorMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MeteorMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MeteorMgr_t {
    QByteArrayData data[12];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MeteorMgr_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MeteorMgr_t qt_meta_stringdata_MeteorMgr = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 10),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 6),
QT_MOC_LITERAL(4, 29, 6),
QT_MOC_LITERAL(5, 36, 3),
QT_MOC_LITERAL(6, 40, 11),
QT_MOC_LITERAL(7, 52, 1),
QT_MOC_LITERAL(8, 54, 11),
QT_MOC_LITERAL(9, 66, 14),
QT_MOC_LITERAL(10, 81, 4),
QT_MOC_LITERAL(11, 86, 3)
    },
    "MeteorMgr\0zhrChanged\0\0getZHR\0setZHR\0"
    "zhr\0setFlagShow\0b\0getFlagShow\0"
    "setMaxVelocity\0maxv\0ZHR\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeteorMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   47,    2, 0x0a,
       4,    1,   48,    2, 0x0a,
       6,    1,   51,    2, 0x0a,
       8,    0,   54,    2, 0x0a,
       9,    1,   55,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   10,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void MeteorMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MeteorMgr *_t = static_cast<MeteorMgr *>(_o);
        switch (_id) {
        case 0: _t->zhrChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { int _r = _t->getZHR();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->setZHR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setFlagShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->getFlagShow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setMaxVelocity((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MeteorMgr::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MeteorMgr::zhrChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MeteorMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_MeteorMgr.data,
      qt_meta_data_MeteorMgr,  qt_static_metacall, 0, 0}
};


const QMetaObject *MeteorMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeteorMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeteorMgr.stringdata))
        return static_cast<void*>(const_cast< MeteorMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int MeteorMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< int*>(_v) = getZHR(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setZHR(*reinterpret_cast< int*>(_v)); break;
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
void MeteorMgr::zhrChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
