/****************************************************************************
** Meta object code from reading C++ file 'StelActionMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/StelActionMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelActionMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelAction_t {
    QByteArrayData data[11];
    char stringdata[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StelAction_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StelAction_t qt_meta_stringdata_StelAction = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 7),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 9),
QT_MOC_LITERAL(4, 30, 7),
QT_MOC_LITERAL(5, 38, 10),
QT_MOC_LITERAL(6, 49, 7),
QT_MOC_LITERAL(7, 57, 6),
QT_MOC_LITERAL(8, 64, 15),
QT_MOC_LITERAL(9, 80, 9),
QT_MOC_LITERAL(10, 90, 7)
    },
    "StelAction\0toggled\0\0triggered\0changed\0"
    "setChecked\0trigger\0toggle\0propertyChanged\0"
    "onChanged\0checked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06,
       3,    0,   57,    2, 0x06,
       4,    0,   58,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,   59,    2, 0x0a,
       6,    0,   62,    2, 0x0a,
       7,    0,   63,    2, 0x0a,
       8,    1,   64,    2, 0x08,
       9,    0,   67,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void StelAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelAction *_t = static_cast<StelAction *>(_o);
        switch (_id) {
        case 0: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->triggered(); break;
        case 2: _t->changed(); break;
        case 3: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->trigger(); break;
        case 5: _t->toggle(); break;
        case 6: _t->propertyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelAction::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelAction::toggled)) {
                *result = 0;
            }
        }
        {
            typedef void (StelAction::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelAction::triggered)) {
                *result = 1;
            }
        }
        {
            typedef void (StelAction::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelAction::changed)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject StelAction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelAction.data,
      qt_meta_data_StelAction,  qt_static_metacall, 0, 0}
};


const QMetaObject *StelAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelAction.stringdata))
        return static_cast<void*>(const_cast< StelAction*>(this));
    return QObject::qt_metacast(_clname);
}

int StelAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isChecked(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setChecked(*reinterpret_cast< bool*>(_v)); break;
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
void StelAction::toggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelAction::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StelAction::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
struct qt_meta_stringdata_StelActionMgr_t {
    QByteArrayData data[4];
    char stringdata[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StelActionMgr_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StelActionMgr_t qt_meta_stringdata_StelActionMgr = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 20),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 5)
    },
    "StelActionMgr\0setAllActionsEnabled\0\0"
    "value\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelActionMgr[] = {

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
       1,    1,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void StelActionMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelActionMgr *_t = static_cast<StelActionMgr *>(_o);
        switch (_id) {
        case 0: _t->setAllActionsEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject StelActionMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelActionMgr.data,
      qt_meta_data_StelActionMgr,  qt_static_metacall, 0, 0}
};


const QMetaObject *StelActionMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelActionMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelActionMgr.stringdata))
        return static_cast<void*>(const_cast< StelActionMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int StelActionMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
