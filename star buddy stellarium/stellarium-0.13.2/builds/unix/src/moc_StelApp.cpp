/****************************************************************************
** Meta object code from reading C++ file 'StelApp.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/StelApp.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelApp.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelApp_t {
    QByteArrayData data[19];
    char stringdata[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StelApp_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StelApp_t qt_meta_stringdata_StelApp = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 22),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 18),
QT_MOC_LITERAL(4, 51, 15),
QT_MOC_LITERAL(5, 67, 17),
QT_MOC_LITERAL(6, 85, 16),
QT_MOC_LITERAL(7, 102, 29),
QT_MOC_LITERAL(8, 132, 18),
QT_MOC_LITERAL(9, 151, 11),
QT_MOC_LITERAL(10, 163, 18),
QT_MOC_LITERAL(11, 182, 18),
QT_MOC_LITERAL(12, 201, 6),
QT_MOC_LITERAL(13, 208, 15),
QT_MOC_LITERAL(14, 224, 26),
QT_MOC_LITERAL(15, 251, 14),
QT_MOC_LITERAL(16, 266, 5),
QT_MOC_LITERAL(17, 272, 4),
QT_MOC_LITERAL(18, 277, 9)
    },
    "StelApp\0visionNightModeChanged\0\0"
    "colorSchemeChanged\0languageChanged\0"
    "skyCultureChanged\0progressBarAdded\0"
    "const StelProgressController*\0"
    "progressBarRemoved\0aboutToQuit\0"
    "setVisionModeNight\0getVisionModeNight\0"
    "getFps\0getTotalRunTime\0"
    "reportFileDownloadFinished\0QNetworkReply*\0"
    "reply\0quit\0nightMode\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       1,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06,
       3,    1,   82,    2, 0x06,
       4,    0,   85,    2, 0x06,
       5,    1,   86,    2, 0x06,
       6,    1,   89,    2, 0x06,
       8,    1,   92,    2, 0x06,
       9,    0,   95,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      10,    1,   96,    2, 0x0a,
      11,    0,   99,    2, 0x0a,
      12,    0,  100,    2, 0x0a,
      13,    0,  101,    2, 0x0a,
      14,    1,  102,    2, 0x0a,
      17,    0,  105,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool,
    QMetaType::Float,
    QMetaType::Double,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void StelApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelApp *_t = static_cast<StelApp *>(_o);
        switch (_id) {
        case 0: _t->visionNightModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->colorSchemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->languageChanged(); break;
        case 3: _t->skyCultureChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->progressBarAdded((*reinterpret_cast< const StelProgressController*(*)>(_a[1]))); break;
        case 5: _t->progressBarRemoved((*reinterpret_cast< const StelProgressController*(*)>(_a[1]))); break;
        case 6: _t->aboutToQuit(); break;
        case 7: _t->setVisionModeNight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: { bool _r = _t->getVisionModeNight();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { float _r = _t->getFps();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 10: { double _r = _t->getTotalRunTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 11: _t->reportFileDownloadFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->quit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelApp::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::visionNightModeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (StelApp::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::colorSchemeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (StelApp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::languageChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (StelApp::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::skyCultureChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (StelApp::*_t)(const StelProgressController * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::progressBarAdded)) {
                *result = 4;
            }
        }
        {
            typedef void (StelApp::*_t)(const StelProgressController * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::progressBarRemoved)) {
                *result = 5;
            }
        }
        {
            typedef void (StelApp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::aboutToQuit)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject StelApp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelApp.data,
      qt_meta_data_StelApp,  qt_static_metacall, 0, 0}
};


const QMetaObject *StelApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelApp.stringdata))
        return static_cast<void*>(const_cast< StelApp*>(this));
    return QObject::qt_metacast(_clname);
}

int StelApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = getVisionModeNight(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setVisionModeNight(*reinterpret_cast< bool*>(_v)); break;
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
void StelApp::visionNightModeChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelApp::colorSchemeChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StelApp::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void StelApp::skyCultureChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StelApp::progressBarAdded(const StelProgressController * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StelApp::progressBarRemoved(const StelProgressController * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StelApp::aboutToQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
