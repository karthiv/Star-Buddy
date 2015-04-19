/****************************************************************************
** Meta object code from reading C++ file 'StelVideoMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/StelVideoMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelVideoMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelVideoMgr_t {
    QByteArrayData data[21];
    char stringdata[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StelVideoMgr_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StelVideoMgr_t qt_meta_stringdata_StelVideoMgr = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 9),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 8),
QT_MOC_LITERAL(4, 33, 2),
QT_MOC_LITERAL(5, 36, 1),
QT_MOC_LITERAL(6, 38, 1),
QT_MOC_LITERAL(7, 40, 4),
QT_MOC_LITERAL(8, 45, 5),
QT_MOC_LITERAL(9, 51, 9),
QT_MOC_LITERAL(10, 61, 10),
QT_MOC_LITERAL(11, 72, 9),
QT_MOC_LITERAL(12, 82, 9),
QT_MOC_LITERAL(13, 92, 9),
QT_MOC_LITERAL(14, 102, 2),
QT_MOC_LITERAL(15, 105, 10),
QT_MOC_LITERAL(16, 116, 13),
QT_MOC_LITERAL(17, 130, 11),
QT_MOC_LITERAL(18, 142, 1),
QT_MOC_LITERAL(19, 144, 1),
QT_MOC_LITERAL(20, 146, 9)
    },
    "StelVideoMgr\0loadVideo\0\0filename\0id\0"
    "x\0y\0show\0alpha\0playVideo\0pauseVideo\0"
    "stopVideo\0dropVideo\0seekVideo\0ms\0"
    "setVideoXY\0setVideoAlpha\0resizeVideo\0"
    "w\0h\0showVideo\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelVideoMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    6,   64,    2, 0x0a,
       9,    1,   77,    2, 0x0a,
      10,    1,   80,    2, 0x0a,
      11,    1,   83,    2, 0x0a,
      12,    1,   86,    2, 0x0a,
      13,    2,   89,    2, 0x0a,
      15,    3,   94,    2, 0x0a,
      16,    2,  101,    2, 0x0a,
      17,    3,  106,    2, 0x0a,
      20,    2,  113,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Float,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,    4,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    4,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    4,   18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    7,

       0        // eod
};

void StelVideoMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelVideoMgr *_t = static_cast<StelVideoMgr *>(_o);
        switch (_id) {
        case 0: _t->loadVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 1: _t->playVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->pauseVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->stopVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->dropVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->seekVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->setVideoXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 7: _t->setVideoAlpha((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->resizeVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 9: _t->showVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject StelVideoMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelVideoMgr.data,
      qt_meta_data_StelVideoMgr,  qt_static_metacall, 0, 0}
};


const QMetaObject *StelVideoMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelVideoMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelVideoMgr.stringdata))
        return static_cast<void*>(const_cast< StelVideoMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int StelVideoMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
