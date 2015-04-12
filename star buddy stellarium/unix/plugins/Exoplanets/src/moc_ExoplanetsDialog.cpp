/****************************************************************************
** Meta object code from reading C++ file 'ExoplanetsDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Exoplanets/src/gui/ExoplanetsDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExoplanetsDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExoplanetsDialog_t {
    QByteArrayData data[20];
    char stringdata[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ExoplanetsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ExoplanetsDialog_t qt_meta_stringdata_ExoplanetsDialog = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 11),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 19),
QT_MOC_LITERAL(4, 50, 15),
QT_MOC_LITERAL(5, 66, 5),
QT_MOC_LITERAL(6, 72, 17),
QT_MOC_LITERAL(7, 90, 10),
QT_MOC_LITERAL(8, 101, 22),
QT_MOC_LITERAL(9, 124, 18),
QT_MOC_LITERAL(10, 143, 19),
QT_MOC_LITERAL(11, 163, 26),
QT_MOC_LITERAL(12, 190, 30),
QT_MOC_LITERAL(13, 221, 19),
QT_MOC_LITERAL(14, 241, 23),
QT_MOC_LITERAL(15, 265, 5),
QT_MOC_LITERAL(16, 271, 22),
QT_MOC_LITERAL(17, 294, 15),
QT_MOC_LITERAL(18, 310, 12),
QT_MOC_LITERAL(19, 323, 10)
    },
    "ExoplanetsDialog\0retranslate\0\0"
    "refreshUpdateValues\0setUpdateValues\0"
    "hours\0setUpdatesEnabled\0checkState\0"
    "setDistributionEnabled\0setTimelineEnabled\0"
    "setHabitableEnabled\0setDisplayAtStartupEnabled\0"
    "setDisplayShowExoplanetsButton\0"
    "updateStateReceiver\0Exoplanets::UpdateState\0"
    "state\0updateCompleteReceiver\0"
    "restoreDefaults\0saveSettings\0updateJSON\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExoplanetsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a,
       3,    0,   85,    2, 0x0a,
       4,    1,   86,    2, 0x08,
       6,    1,   89,    2, 0x08,
       8,    1,   92,    2, 0x08,
       9,    1,   95,    2, 0x08,
      10,    1,   98,    2, 0x08,
      11,    1,  101,    2, 0x08,
      12,    1,  104,    2, 0x08,
      13,    1,  107,    2, 0x08,
      16,    0,  110,    2, 0x08,
      17,    0,  111,    2, 0x08,
      18,    0,  112,    2, 0x08,
      19,    0,  113,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ExoplanetsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExoplanetsDialog *_t = static_cast<ExoplanetsDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->refreshUpdateValues(); break;
        case 2: _t->setUpdateValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setUpdatesEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setDistributionEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setTimelineEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setHabitableEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setDisplayAtStartupEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setDisplayShowExoplanetsButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateStateReceiver((*reinterpret_cast< Exoplanets::UpdateState(*)>(_a[1]))); break;
        case 10: _t->updateCompleteReceiver(); break;
        case 11: _t->restoreDefaults(); break;
        case 12: _t->saveSettings(); break;
        case 13: _t->updateJSON(); break;
        default: ;
        }
    }
}

const QMetaObject ExoplanetsDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_ExoplanetsDialog.data,
      qt_meta_data_ExoplanetsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *ExoplanetsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExoplanetsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExoplanetsDialog.stringdata))
        return static_cast<void*>(const_cast< ExoplanetsDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int ExoplanetsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
