/****************************************************************************
** Meta object code from reading C++ file 'SimbadSearcher.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/SimbadSearcher.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimbadSearcher.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SimbadLookupReply_t {
    QByteArrayData data[9];
    char stringdata[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SimbadLookupReply_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SimbadLookupReply_t qt_meta_stringdata_SimbadLookupReply = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 13),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 17),
QT_MOC_LITERAL(4, 51, 19),
QT_MOC_LITERAL(5, 71, 18),
QT_MOC_LITERAL(6, 90, 20),
QT_MOC_LITERAL(7, 111, 24),
QT_MOC_LITERAL(8, 136, 20)
    },
    "SimbadLookupReply\0statusChanged\0\0"
    "httpQueryFinished\0delayTimerCompleted\0"
    "SimbadLookupStatus\0SimbadLookupQuerying\0"
    "SimbadLookupErrorOccured\0SimbadLookupFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimbadLookupReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08,
       4,    0,   31,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
       5, 0x0,    3,   36,

 // enum data: key, value
       6, uint(SimbadLookupReply::SimbadLookupQuerying),
       7, uint(SimbadLookupReply::SimbadLookupErrorOccured),
       8, uint(SimbadLookupReply::SimbadLookupFinished),

       0        // eod
};

void SimbadLookupReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimbadLookupReply *_t = static_cast<SimbadLookupReply *>(_o);
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->httpQueryFinished(); break;
        case 2: _t->delayTimerCompleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SimbadLookupReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SimbadLookupReply::statusChanged)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SimbadLookupReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimbadLookupReply.data,
      qt_meta_data_SimbadLookupReply,  qt_static_metacall, 0, 0}
};


const QMetaObject *SimbadLookupReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimbadLookupReply::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimbadLookupReply.stringdata))
        return static_cast<void*>(const_cast< SimbadLookupReply*>(this));
    return QObject::qt_metacast(_clname);
}

int SimbadLookupReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SimbadLookupReply::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_SimbadSearcher_t {
    QByteArrayData data[1];
    char stringdata[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SimbadSearcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SimbadSearcher_t qt_meta_stringdata_SimbadSearcher = {
    {
QT_MOC_LITERAL(0, 0, 14)
    },
    "SimbadSearcher\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimbadSearcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SimbadSearcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SimbadSearcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimbadSearcher.data,
      qt_meta_data_SimbadSearcher,  qt_static_metacall, 0, 0}
};


const QMetaObject *SimbadSearcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimbadSearcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimbadSearcher.stringdata))
        return static_cast<void*>(const_cast< SimbadSearcher*>(this));
    return QObject::qt_metacast(_clname);
}

int SimbadSearcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
