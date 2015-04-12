/****************************************************************************
** Meta object code from reading C++ file 'StelMainView.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/StelMainView.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelMainView.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelMainView_t {
    QByteArrayData data[26];
    char stringdata[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StelMainView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StelMainView_t qt_meta_stringdata_StelMainView = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 19),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 13),
QT_MOC_LITERAL(4, 48, 14),
QT_MOC_LITERAL(5, 63, 10),
QT_MOC_LITERAL(6, 74, 7),
QT_MOC_LITERAL(7, 82, 29),
QT_MOC_LITERAL(8, 112, 29),
QT_MOC_LITERAL(9, 142, 1),
QT_MOC_LITERAL(10, 144, 20),
QT_MOC_LITERAL(11, 165, 16),
QT_MOC_LITERAL(12, 182, 20),
QT_MOC_LITERAL(13, 203, 16),
QT_MOC_LITERAL(14, 220, 1),
QT_MOC_LITERAL(15, 222, 9),
QT_MOC_LITERAL(16, 232, 1),
QT_MOC_LITERAL(17, 234, 9),
QT_MOC_LITERAL(18, 244, 9),
QT_MOC_LITERAL(19, 254, 9),
QT_MOC_LITERAL(20, 264, 17),
QT_MOC_LITERAL(21, 282, 11),
QT_MOC_LITERAL(22, 294, 15),
QT_MOC_LITERAL(23, 310, 12),
QT_MOC_LITERAL(24, 323, 13),
QT_MOC_LITERAL(25, 337, 10)
    },
    "StelMainView\0screenshotRequested\0\0"
    "setFullScreen\0saveScreenShot\0filePrefix\0"
    "saveDir\0getFlagInvertScreenShotColors\0"
    "setFlagInvertScreenShotColors\0b\0"
    "getFlagCursorTimeout\0getCursorTimeout\0"
    "setFlagCursorTimeout\0setCursorTimeout\0"
    "t\0setMinFps\0m\0getMinFps\0setMaxFps\0"
    "getMaxFps\0maxFpsSceneUpdate\0updateScene\0"
    "thereWasAnEvent\0doScreenshot\0minFpsChanged\0"
    "fullScreen\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelMainView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       1,  152, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,  115,    2, 0x0a,
       4,    2,  118,    2, 0x0a,
       4,    1,  123,    2, 0x2a,
       4,    0,  126,    2, 0x2a,
       7,    0,  127,    2, 0x0a,
       8,    1,  128,    2, 0x0a,
      10,    0,  131,    2, 0x0a,
      11,    0,  132,    2, 0x0a,
      12,    1,  133,    2, 0x0a,
      13,    1,  136,    2, 0x0a,
      15,    1,  139,    2, 0x0a,
      17,    0,  142,    2, 0x0a,
      18,    1,  143,    2, 0x0a,
      19,    0,  146,    2, 0x0a,
      20,    0,  147,    2, 0x0a,
      21,    0,  148,    2, 0x0a,
      22,    0,  149,    2, 0x0a,
      23,    0,  150,    2, 0x08,
      24,    0,  151,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Bool,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Float,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      25, QMetaType::Bool, 0x00095103,

       0        // eod
};

void StelMainView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelMainView *_t = static_cast<StelMainView *>(_o);
        switch (_id) {
        case 0: _t->screenshotRequested(); break;
        case 1: _t->setFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->saveScreenShot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->saveScreenShot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->saveScreenShot(); break;
        case 5: { bool _r = _t->getFlagInvertScreenShotColors();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setFlagInvertScreenShotColors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->getFlagCursorTimeout();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { float _r = _t->getCursorTimeout();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 9: _t->setFlagCursorTimeout((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setCursorTimeout((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->setMinFps((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: { float _r = _t->getMinFps();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 13: _t->setMaxFps((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: { float _r = _t->getMaxFps();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 15: _t->maxFpsSceneUpdate(); break;
        case 16: _t->updateScene(); break;
        case 17: _t->thereWasAnEvent(); break;
        case 18: _t->doScreenshot(); break;
        case 19: _t->minFpsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelMainView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainView::screenshotRequested)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject StelMainView::staticMetaObject = {
    { &QDeclarativeView::staticMetaObject, qt_meta_stringdata_StelMainView.data,
      qt_meta_data_StelMainView,  qt_static_metacall, 0, 0}
};


const QMetaObject *StelMainView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelMainView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelMainView.stringdata))
        return static_cast<void*>(const_cast< StelMainView*>(this));
    return QDeclarativeView::qt_metacast(_clname);
}

int StelMainView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isFullScreen(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFullScreen(*reinterpret_cast< bool*>(_v)); break;
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
void StelMainView::screenshotRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
