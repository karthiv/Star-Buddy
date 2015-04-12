/****************************************************************************
** Meta object code from reading C++ file 'StelScriptMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/StelScriptMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelScriptMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelScriptMgr_t {
    QByteArrayData data[27];
    char stringdata[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StelScriptMgr_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StelScriptMgr_t qt_meta_stringdata_StelScriptMgr = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 13),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 13),
QT_MOC_LITERAL(4, 43, 11),
QT_MOC_LITERAL(5, 55, 12),
QT_MOC_LITERAL(6, 68, 7),
QT_MOC_LITERAL(7, 76, 1),
QT_MOC_LITERAL(8, 78, 9),
QT_MOC_LITERAL(9, 88, 10),
QT_MOC_LITERAL(10, 99, 14),
QT_MOC_LITERAL(11, 114, 11),
QT_MOC_LITERAL(12, 126, 21),
QT_MOC_LITERAL(13, 148, 18),
QT_MOC_LITERAL(14, 167, 9),
QT_MOC_LITERAL(15, 177, 8),
QT_MOC_LITERAL(16, 186, 11),
QT_MOC_LITERAL(17, 198, 10),
QT_MOC_LITERAL(18, 209, 13),
QT_MOC_LITERAL(19, 223, 1),
QT_MOC_LITERAL(20, 225, 13),
QT_MOC_LITERAL(21, 239, 5),
QT_MOC_LITERAL(22, 245, 3),
QT_MOC_LITERAL(23, 249, 6),
QT_MOC_LITERAL(24, 256, 11),
QT_MOC_LITERAL(25, 268, 12),
QT_MOC_LITERAL(26, 281, 11)
    },
    "StelScriptMgr\0scriptRunning\0\0scriptStopped\0"
    "scriptDebug\0scriptOutput\0getName\0s\0"
    "getAuthor\0getLicense\0getDescription\0"
    "getShortcut\0runPreprocessedScript\0"
    "preprocessedScript\0runScript\0fileName\0"
    "includePath\0stopScript\0setScriptRate\0"
    "r\0getScriptRate\0debug\0msg\0output\0"
    "pauseScript\0resumeScript\0scriptEnded\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelScriptMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06,
       3,    0,  115,    2, 0x06,
       4,    1,  116,    2, 0x06,
       5,    1,  119,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,  122,    2, 0x0a,
       8,    1,  125,    2, 0x0a,
       9,    1,  128,    2, 0x0a,
      10,    1,  131,    2, 0x0a,
      11,    1,  134,    2, 0x0a,
      12,    1,  137,    2, 0x0a,
      14,    2,  140,    2, 0x0a,
      14,    1,  145,    2, 0x2a,
      17,    0,  148,    2, 0x0a,
      18,    1,  149,    2, 0x0a,
      20,    0,  152,    2, 0x0a,
      21,    1,  153,    2, 0x0a,
      23,    1,  156,    2, 0x0a,
      24,    0,  159,    2, 0x0a,
      25,    0,  160,    2, 0x0a,
      26,    0,  161,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::QString, QMetaType::QString,    7,
    QMetaType::QString, QMetaType::QString,    7,
    QMetaType::QString, QMetaType::QString,    7,
    QMetaType::QString, QMetaType::QString,    7,
    QMetaType::QString, QMetaType::QString,    7,
    QMetaType::Bool, QMetaType::QString,   13,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   15,   16,
    QMetaType::Bool, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Double,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StelScriptMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelScriptMgr *_t = static_cast<StelScriptMgr *>(_o);
        switch (_id) {
        case 0: _t->scriptRunning(); break;
        case 1: _t->scriptStopped(); break;
        case 2: _t->scriptDebug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->scriptOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { QString _r = _t->getName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->getAuthor((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->getLicense((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->getDescription((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->getShortcut((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->runPreprocessedScript((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->runScript((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->runScript((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->stopScript(); break;
        case 13: _t->setScriptRate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: { double _r = _t->getScriptRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 15: _t->debug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->output((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->pauseScript(); break;
        case 18: _t->resumeScript(); break;
        case 19: _t->scriptEnded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelScriptMgr::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelScriptMgr::scriptRunning)) {
                *result = 0;
            }
        }
        {
            typedef void (StelScriptMgr::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelScriptMgr::scriptStopped)) {
                *result = 1;
            }
        }
        {
            typedef void (StelScriptMgr::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelScriptMgr::scriptDebug)) {
                *result = 2;
            }
        }
        {
            typedef void (StelScriptMgr::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelScriptMgr::scriptOutput)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject StelScriptMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelScriptMgr.data,
      qt_meta_data_StelScriptMgr,  qt_static_metacall, 0, 0}
};


const QMetaObject *StelScriptMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelScriptMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelScriptMgr.stringdata))
        return static_cast<void*>(const_cast< StelScriptMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int StelScriptMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void StelScriptMgr::scriptRunning()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StelScriptMgr::scriptStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StelScriptMgr::scriptDebug(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StelScriptMgr::scriptOutput(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
