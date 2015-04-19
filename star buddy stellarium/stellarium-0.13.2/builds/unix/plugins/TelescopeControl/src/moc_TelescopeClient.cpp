/****************************************************************************
** Meta object code from reading C++ file 'TelescopeClient.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TelescopeControl/src/clients/TelescopeClient.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelescopeClient.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TelescopeClient_t {
    QByteArrayData data[1];
    char stringdata[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TelescopeClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TelescopeClient_t qt_meta_stringdata_TelescopeClient = {
    {
QT_MOC_LITERAL(0, 0, 15)
    },
    "TelescopeClient\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelescopeClient[] = {

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

void TelescopeClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TelescopeClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TelescopeClient.data,
      qt_meta_data_TelescopeClient,  qt_static_metacall, 0, 0}
};


const QMetaObject *TelescopeClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelescopeClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeClient.stringdata))
        return static_cast<void*>(const_cast< TelescopeClient*>(this));
    if (!strcmp(_clname, "StelObject"))
        return static_cast< StelObject*>(const_cast< TelescopeClient*>(this));
    return QObject::qt_metacast(_clname);
}

int TelescopeClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_TelescopeTCP_t {
    QByteArrayData data[5];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TelescopeTCP_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TelescopeTCP_t qt_meta_stringdata_TelescopeTCP = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 12),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 28),
QT_MOC_LITERAL(4, 56, 11)
    },
    "TelescopeTCP\0socketFailed\0\0"
    "QAbstractSocket::SocketError\0socketError\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelescopeTCP[] = {

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
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void TelescopeTCP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TelescopeTCP *_t = static_cast<TelescopeTCP *>(_o);
        switch (_id) {
        case 0: _t->socketFailed((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject TelescopeTCP::staticMetaObject = {
    { &TelescopeClient::staticMetaObject, qt_meta_stringdata_TelescopeTCP.data,
      qt_meta_data_TelescopeTCP,  qt_static_metacall, 0, 0}
};


const QMetaObject *TelescopeTCP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelescopeTCP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeTCP.stringdata))
        return static_cast<void*>(const_cast< TelescopeTCP*>(this));
    return TelescopeClient::qt_metacast(_clname);
}

int TelescopeTCP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TelescopeClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
