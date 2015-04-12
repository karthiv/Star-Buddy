/****************************************************************************
** Meta object code from reading C++ file 'ScreenImageMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/ScreenImageMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenImageMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScreenImage_t {
    QByteArrayData data[4];
    char stringdata[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ScreenImage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ScreenImage_t qt_meta_stringdata_ScreenImage = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 10),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 5)
    },
    "ScreenImage\0setOpacity\0\0alpha\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenImage[] = {

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
       1,    1,   19,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,

       0        // eod
};

void ScreenImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenImage *_t = static_cast<ScreenImage *>(_o);
        switch (_id) {
        case 0: _t->setOpacity((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ScreenImage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScreenImage.data,
      qt_meta_data_ScreenImage,  qt_static_metacall, 0, 0}
};


const QMetaObject *ScreenImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenImage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenImage.stringdata))
        return static_cast<void*>(const_cast< ScreenImage*>(this));
    return QObject::qt_metacast(_clname);
}

int ScreenImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_ScreenImageMgr_t {
    QByteArrayData data[22];
    char stringdata[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ScreenImageMgr_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ScreenImageMgr_t qt_meta_stringdata_ScreenImageMgr = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 17),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 2),
QT_MOC_LITERAL(4, 37, 8),
QT_MOC_LITERAL(5, 46, 1),
QT_MOC_LITERAL(6, 48, 1),
QT_MOC_LITERAL(7, 50, 5),
QT_MOC_LITERAL(8, 56, 7),
QT_MOC_LITERAL(9, 64, 5),
QT_MOC_LITERAL(10, 70, 12),
QT_MOC_LITERAL(11, 83, 12),
QT_MOC_LITERAL(12, 96, 13),
QT_MOC_LITERAL(13, 110, 14),
QT_MOC_LITERAL(14, 125, 9),
QT_MOC_LITERAL(15, 135, 4),
QT_MOC_LITERAL(16, 140, 13),
QT_MOC_LITERAL(17, 154, 10),
QT_MOC_LITERAL(18, 165, 8),
QT_MOC_LITERAL(19, 174, 11),
QT_MOC_LITERAL(20, 186, 15),
QT_MOC_LITERAL(21, 202, 14)
    },
    "ScreenImageMgr\0createScreenImage\0\0id\0"
    "filename\0x\0y\0scale\0visible\0alpha\0"
    "fadeDuration\0getShowImage\0getImageWidth\0"
    "getImageHeight\0showImage\0show\0"
    "setImageAlpha\0setImageXY\0duration\0"
    "deleteImage\0deleteAllImages\0getAllImageIDs\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenImageMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    8,   89,    2, 0x0a,
       1,    7,  106,    2, 0x2a,
       1,    6,  121,    2, 0x2a,
       1,    5,  134,    2, 0x2a,
       1,    4,  145,    2, 0x2a,
      11,    1,  154,    2, 0x0a,
      12,    1,  157,    2, 0x0a,
      13,    1,  160,    2, 0x0a,
      14,    2,  163,    2, 0x0a,
      16,    2,  168,    2, 0x0a,
      17,    4,  173,    2, 0x0a,
      17,    3,  182,    2, 0x2a,
      19,    1,  189,    2, 0x0a,
      20,    0,  192,    2, 0x0a,
      21,    0,  193,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Float, QMetaType::Float,    3,    4,    5,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Float,    3,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float,    3,    4,    5,    6,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    3,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    5,    6,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    3,    5,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::QStringList,

       0        // eod
};

void ScreenImageMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenImageMgr *_t = static_cast<ScreenImageMgr *>(_o);
        switch (_id) {
        case 0: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8]))); break;
        case 1: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 2: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 3: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 4: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 5: { bool _r = _t->getShowImage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->getImageWidth((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->getImageHeight((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->showImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->setImageAlpha((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->setImageXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 11: _t->setImageXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 12: _t->deleteImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->deleteAllImages(); break;
        case 14: { QStringList _r = _t->getAllImageIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ScreenImageMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_ScreenImageMgr.data,
      qt_meta_data_ScreenImageMgr,  qt_static_metacall, 0, 0}
};


const QMetaObject *ScreenImageMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenImageMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenImageMgr.stringdata))
        return static_cast<void*>(const_cast< ScreenImageMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int ScreenImageMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
