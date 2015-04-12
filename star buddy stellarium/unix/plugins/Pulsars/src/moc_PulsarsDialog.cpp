/****************************************************************************
** Meta object code from reading C++ file 'PulsarsDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Pulsars/src/gui/PulsarsDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PulsarsDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PulsarsDialog_t {
    QByteArrayData data[19];
    char stringdata[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PulsarsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PulsarsDialog_t qt_meta_stringdata_PulsarsDialog = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 11),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 19),
QT_MOC_LITERAL(4, 47, 15),
QT_MOC_LITERAL(5, 63, 4),
QT_MOC_LITERAL(6, 68, 17),
QT_MOC_LITERAL(7, 86, 10),
QT_MOC_LITERAL(8, 97, 22),
QT_MOC_LITERAL(9, 120, 21),
QT_MOC_LITERAL(10, 142, 26),
QT_MOC_LITERAL(11, 169, 27),
QT_MOC_LITERAL(12, 197, 19),
QT_MOC_LITERAL(13, 217, 20),
QT_MOC_LITERAL(14, 238, 5),
QT_MOC_LITERAL(15, 244, 22),
QT_MOC_LITERAL(16, 267, 15),
QT_MOC_LITERAL(17, 283, 12),
QT_MOC_LITERAL(18, 296, 10)
    },
    "PulsarsDialog\0retranslate\0\0"
    "refreshUpdateValues\0setUpdateValues\0"
    "days\0setUpdatesEnabled\0checkState\0"
    "setDistributionEnabled\0setSeparateColorsFlag\0"
    "setDisplayAtStartupEnabled\0"
    "setDisplayShowPulsarsButton\0"
    "updateStateReceiver\0Pulsars::UpdateState\0"
    "state\0updateCompleteReceiver\0"
    "restoreDefaults\0saveSettings\0updateJSON\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PulsarsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a,
       3,    0,   80,    2, 0x0a,
       4,    1,   81,    2, 0x08,
       6,    1,   84,    2, 0x08,
       8,    1,   87,    2, 0x08,
       9,    1,   90,    2, 0x08,
      10,    1,   93,    2, 0x08,
      11,    1,   96,    2, 0x08,
      12,    1,   99,    2, 0x08,
      15,    0,  102,    2, 0x08,
      16,    0,  103,    2, 0x08,
      17,    0,  104,    2, 0x08,
      18,    0,  105,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PulsarsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PulsarsDialog *_t = static_cast<PulsarsDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->refreshUpdateValues(); break;
        case 2: _t->setUpdateValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setUpdatesEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setDistributionEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setSeparateColorsFlag((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setDisplayAtStartupEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setDisplayShowPulsarsButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateStateReceiver((*reinterpret_cast< Pulsars::UpdateState(*)>(_a[1]))); break;
        case 9: _t->updateCompleteReceiver(); break;
        case 10: _t->restoreDefaults(); break;
        case 11: _t->saveSettings(); break;
        case 12: _t->updateJSON(); break;
        default: ;
        }
    }
}

const QMetaObject PulsarsDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_PulsarsDialog.data,
      qt_meta_data_PulsarsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *PulsarsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PulsarsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PulsarsDialog.stringdata))
        return static_cast<void*>(const_cast< PulsarsDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int PulsarsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
