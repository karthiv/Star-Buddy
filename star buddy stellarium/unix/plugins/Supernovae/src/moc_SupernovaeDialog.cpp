/****************************************************************************
** Meta object code from reading C++ file 'SupernovaeDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Supernovae/src/gui/SupernovaeDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SupernovaeDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SupernovaeDialog_t {
    QByteArrayData data[15];
    char stringdata[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SupernovaeDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SupernovaeDialog_t qt_meta_stringdata_SupernovaeDialog = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 11),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 19),
QT_MOC_LITERAL(4, 50, 15),
QT_MOC_LITERAL(5, 66, 4),
QT_MOC_LITERAL(6, 71, 17),
QT_MOC_LITERAL(7, 89, 10),
QT_MOC_LITERAL(8, 100, 19),
QT_MOC_LITERAL(9, 120, 23),
QT_MOC_LITERAL(10, 144, 5),
QT_MOC_LITERAL(11, 150, 22),
QT_MOC_LITERAL(12, 173, 15),
QT_MOC_LITERAL(13, 189, 12),
QT_MOC_LITERAL(14, 202, 10)
    },
    "SupernovaeDialog\0retranslate\0\0"
    "refreshUpdateValues\0setUpdateValues\0"
    "days\0setUpdatesEnabled\0checkState\0"
    "updateStateReceiver\0Supernovae::UpdateState\0"
    "state\0updateCompleteReceiver\0"
    "restoreDefaults\0saveSettings\0updateJSON\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SupernovaeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a,
       3,    0,   60,    2, 0x0a,
       4,    1,   61,    2, 0x08,
       6,    1,   64,    2, 0x08,
       8,    1,   67,    2, 0x08,
      11,    0,   70,    2, 0x08,
      12,    0,   71,    2, 0x08,
      13,    0,   72,    2, 0x08,
      14,    0,   73,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SupernovaeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SupernovaeDialog *_t = static_cast<SupernovaeDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->refreshUpdateValues(); break;
        case 2: _t->setUpdateValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setUpdatesEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateStateReceiver((*reinterpret_cast< Supernovae::UpdateState(*)>(_a[1]))); break;
        case 5: _t->updateCompleteReceiver(); break;
        case 6: _t->restoreDefaults(); break;
        case 7: _t->saveSettings(); break;
        case 8: _t->updateJSON(); break;
        default: ;
        }
    }
}

const QMetaObject SupernovaeDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SupernovaeDialog.data,
      qt_meta_data_SupernovaeDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SupernovaeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SupernovaeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SupernovaeDialog.stringdata))
        return static_cast<void*>(const_cast< SupernovaeDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SupernovaeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
