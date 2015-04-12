/****************************************************************************
** Meta object code from reading C++ file 'SlewDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TelescopeControl/src/gui/SlewDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlewDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SlewDialog_t {
    QByteArrayData data[15];
    char stringdata[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SlewDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SlewDialog_t qt_meta_stringdata_SlewDialog = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 11),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 17),
QT_MOC_LITERAL(4, 42, 4),
QT_MOC_LITERAL(5, 47, 12),
QT_MOC_LITERAL(6, 60, 4),
QT_MOC_LITERAL(7, 65, 4),
QT_MOC_LITERAL(8, 70, 15),
QT_MOC_LITERAL(9, 86, 12),
QT_MOC_LITERAL(10, 99, 3),
QT_MOC_LITERAL(11, 103, 12),
QT_MOC_LITERAL(12, 116, 16),
QT_MOC_LITERAL(13, 133, 20),
QT_MOC_LITERAL(14, 154, 13)
    },
    "SlewDialog\0retranslate\0\0showConfiguration\0"
    "slew\0addTelescope\0slot\0name\0removeTelescope\0"
    "setFormatHMS\0set\0setFormatDMS\0"
    "setFormatDecimal\0getCurrentObjectInfo\0"
    "getCenterInfo\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlewDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a,
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    2,   67,    2, 0x08,
       8,    1,   72,    2, 0x08,
       9,    1,   75,    2, 0x08,
      11,    1,   78,    2, 0x08,
      12,    1,   81,    2, 0x08,
      13,    0,   84,    2, 0x08,
      14,    0,   85,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SlewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlewDialog *_t = static_cast<SlewDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->showConfiguration(); break;
        case 2: _t->slew(); break;
        case 3: _t->addTelescope((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->removeTelescope((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setFormatHMS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setFormatDMS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFormatDecimal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->getCurrentObjectInfo(); break;
        case 9: _t->getCenterInfo(); break;
        default: ;
        }
    }
}

const QMetaObject SlewDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SlewDialog.data,
      qt_meta_data_SlewDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SlewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SlewDialog.stringdata))
        return static_cast<void*>(const_cast< SlewDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SlewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
