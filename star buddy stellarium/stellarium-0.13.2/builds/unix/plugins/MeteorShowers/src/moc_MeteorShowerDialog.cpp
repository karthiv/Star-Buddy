/****************************************************************************
** Meta object code from reading C++ file 'MeteorShowerDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/MeteorShowers/src/gui/MeteorShowerDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MeteorShowerDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MeteorShowerDialog_t {
    QByteArrayData data[25];
    char stringdata[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MeteorShowerDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MeteorShowerDialog_t qt_meta_stringdata_MeteorShowerDialog = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 11),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 19),
QT_MOC_LITERAL(4, 52, 19),
QT_MOC_LITERAL(5, 72, 17),
QT_MOC_LITERAL(6, 90, 15),
QT_MOC_LITERAL(7, 106, 5),
QT_MOC_LITERAL(8, 112, 17),
QT_MOC_LITERAL(9, 130, 10),
QT_MOC_LITERAL(10, 141, 19),
QT_MOC_LITERAL(11, 161, 26),
QT_MOC_LITERAL(12, 188, 5),
QT_MOC_LITERAL(13, 194, 22),
QT_MOC_LITERAL(14, 217, 15),
QT_MOC_LITERAL(15, 233, 12),
QT_MOC_LITERAL(16, 246, 10),
QT_MOC_LITERAL(17, 257, 11),
QT_MOC_LITERAL(18, 269, 11),
QT_MOC_LITERAL(19, 281, 10),
QT_MOC_LITERAL(20, 292, 10),
QT_MOC_LITERAL(21, 303, 12),
QT_MOC_LITERAL(22, 316, 11),
QT_MOC_LITERAL(23, 328, 10),
QT_MOC_LITERAL(24, 339, 17)
    },
    "MeteorShowerDialog\0retranslate\0\0"
    "refreshUpdateValues\0refreshColorMarkers\0"
    "refreshRangeDates\0setUpdateValues\0"
    "hours\0setUpdatesEnabled\0checkState\0"
    "updateStateReceiver\0MeteorShowers::UpdateState\0"
    "state\0updateCompleteReceiver\0"
    "restoreDefaults\0saveSettings\0updateJSON\0"
    "setColorARR\0setColorARG\0setColorIR\0"
    "checkDates\0searchEvents\0selectEvent\0"
    "modelIndex\0repaintTreeWidget\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeteorShowerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a,
       3,    0,  105,    2, 0x0a,
       4,    0,  106,    2, 0x0a,
       5,    0,  107,    2, 0x0a,
       6,    1,  108,    2, 0x08,
       8,    1,  111,    2, 0x08,
      10,    1,  114,    2, 0x08,
      13,    0,  117,    2, 0x08,
      14,    0,  118,    2, 0x08,
      15,    0,  119,    2, 0x08,
      16,    0,  120,    2, 0x08,
      17,    0,  121,    2, 0x08,
      18,    0,  122,    2, 0x08,
      19,    0,  123,    2, 0x08,
      20,    0,  124,    2, 0x08,
      21,    0,  125,    2, 0x08,
      22,    1,  126,    2, 0x08,
      24,    0,  129,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   23,
    QMetaType::Void,

       0        // eod
};

void MeteorShowerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MeteorShowerDialog *_t = static_cast<MeteorShowerDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->refreshUpdateValues(); break;
        case 2: _t->refreshColorMarkers(); break;
        case 3: _t->refreshRangeDates(); break;
        case 4: _t->setUpdateValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setUpdatesEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->updateStateReceiver((*reinterpret_cast< MeteorShowers::UpdateState(*)>(_a[1]))); break;
        case 7: _t->updateCompleteReceiver(); break;
        case 8: _t->restoreDefaults(); break;
        case 9: _t->saveSettings(); break;
        case 10: _t->updateJSON(); break;
        case 11: _t->setColorARR(); break;
        case 12: _t->setColorARG(); break;
        case 13: _t->setColorIR(); break;
        case 14: _t->checkDates(); break;
        case 15: _t->searchEvents(); break;
        case 16: _t->selectEvent((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->repaintTreeWidget(); break;
        default: ;
        }
    }
}

const QMetaObject MeteorShowerDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_MeteorShowerDialog.data,
      qt_meta_data_MeteorShowerDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *MeteorShowerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeteorShowerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeteorShowerDialog.stringdata))
        return static_cast<void*>(const_cast< MeteorShowerDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int MeteorShowerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
