/****************************************************************************
** Meta object code from reading C++ file 'StarMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/modules/StarMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StarMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StarMgr_t {
    QByteArrayData data[29];
    char stringdata[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StarMgr_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StarMgr_t qt_meta_stringdata_StarMgr = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 26),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 9),
QT_MOC_LITERAL(4, 46, 21),
QT_MOC_LITERAL(5, 68, 13),
QT_MOC_LITERAL(6, 82, 5),
QT_MOC_LITERAL(7, 88, 1),
QT_MOC_LITERAL(8, 90, 13),
QT_MOC_LITERAL(9, 104, 12),
QT_MOC_LITERAL(10, 117, 1),
QT_MOC_LITERAL(11, 119, 12),
QT_MOC_LITERAL(12, 132, 13),
QT_MOC_LITERAL(13, 146, 13),
QT_MOC_LITERAL(14, 160, 15),
QT_MOC_LITERAL(15, 176, 1),
QT_MOC_LITERAL(16, 178, 15),
QT_MOC_LITERAL(17, 194, 11),
QT_MOC_LITERAL(18, 206, 11),
QT_MOC_LITERAL(19, 218, 15),
QT_MOC_LITERAL(20, 234, 1),
QT_MOC_LITERAL(21, 236, 15),
QT_MOC_LITERAL(22, 252, 12),
QT_MOC_LITERAL(23, 265, 7),
QT_MOC_LITERAL(24, 273, 10),
QT_MOC_LITERAL(25, 284, 16),
QT_MOC_LITERAL(26, 301, 13),
QT_MOC_LITERAL(27, 315, 18),
QT_MOC_LITERAL(28, 334, 19)
    },
    "StarMgr\0starLabelsDisplayedChanged\0\0"
    "displayed\0starsDisplayedChanged\0"
    "setLabelColor\0Vec3f\0c\0getLabelColor\0"
    "setFlagStars\0b\0getFlagStars\0setFlagLabels\0"
    "getFlagLabels\0setLabelsAmount\0a\0"
    "getLabelsAmount\0setFontSize\0newFontSize\0"
    "setFlagSciNames\0f\0getFlagSciNames\0"
    "setStelStyle\0section\0updateI18n\0"
    "updateSkyCulture\0skyCultureDir\0"
    "flagStarsDisplayed\0flagLabelsDisplayed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StarMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       2,  130, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06,
       4,    1,   97,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,  100,    2, 0x0a,
       8,    0,  103,    2, 0x0a,
       9,    1,  104,    2, 0x0a,
      11,    0,  107,    2, 0x0a,
      12,    1,  108,    2, 0x0a,
      13,    0,  111,    2, 0x0a,
      14,    1,  112,    2, 0x0a,
      16,    0,  115,    2, 0x0a,
      17,    1,  116,    2, 0x0a,
      19,    1,  119,    2, 0x0a,
      21,    0,  122,    2, 0x0a,
      22,    1,  123,    2, 0x08,
      24,    0,  126,    2, 0x08,
      25,    1,  127,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    0x80000000 | 6,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Float,   15,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,

 // properties: name, type, flags
      27, QMetaType::Bool, 0x00495003,
      28, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void StarMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StarMgr *_t = static_cast<StarMgr *>(_o);
        switch (_id) {
        case 0: _t->starLabelsDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->starsDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->setLabelColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 3: { Vec3f _r = _t->getLabelColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 4: _t->setFlagStars((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->getFlagStars();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setFlagLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->getFlagLabels();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->setLabelsAmount((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: { float _r = _t->getLabelsAmount();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 10: _t->setFontSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->setFlagSciNames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: { bool _r = _t->getFlagSciNames();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->updateI18n(); break;
        case 15: _t->updateSkyCulture((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StarMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StarMgr::starLabelsDisplayedChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (StarMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StarMgr::starsDisplayedChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject StarMgr::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_StarMgr.data,
      qt_meta_data_StarMgr,  qt_static_metacall, 0, 0}
};


const QMetaObject *StarMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StarMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StarMgr.stringdata))
        return static_cast<void*>(const_cast< StarMgr*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int StarMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = getFlagStars(); break;
        case 1: *reinterpret_cast< bool*>(_v) = getFlagLabels(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFlagStars(*reinterpret_cast< bool*>(_v)); break;
        case 1: setFlagLabels(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StarMgr::starLabelsDisplayedChanged(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StarMgr::starsDisplayedChanged(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
