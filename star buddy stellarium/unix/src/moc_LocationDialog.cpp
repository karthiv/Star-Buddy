/****************************************************************************
** Meta object code from reading C++ file 'LocationDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/LocationDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocationDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LocationDialog_t {
    QByteArrayData data[23];
    char stringdata[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_LocationDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_LocationDialog_t qt_meta_stringdata_LocationDialog = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 11),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 10),
QT_MOC_LITERAL(4, 39, 17),
QT_MOC_LITERAL(5, 57, 12),
QT_MOC_LITERAL(6, 70, 8),
QT_MOC_LITERAL(7, 79, 18),
QT_MOC_LITERAL(8, 98, 9),
QT_MOC_LITERAL(9, 108, 8),
QT_MOC_LITERAL(10, 117, 19),
QT_MOC_LITERAL(11, 137, 5),
QT_MOC_LITERAL(12, 143, 19),
QT_MOC_LITERAL(13, 163, 4),
QT_MOC_LITERAL(14, 168, 21),
QT_MOC_LITERAL(15, 190, 1),
QT_MOC_LITERAL(16, 192, 24),
QT_MOC_LITERAL(17, 217, 29),
QT_MOC_LITERAL(18, 247, 20),
QT_MOC_LITERAL(19, 268, 17),
QT_MOC_LITERAL(20, 286, 15),
QT_MOC_LITERAL(21, 302, 5),
QT_MOC_LITERAL(22, 308, 18)
    },
    "LocationDialog\0retranslate\0\0reportEdit\0"
    "updateFromProgram\0StelLocation\0location\0"
    "setPositionFromMap\0longitude\0latitude\0"
    "setPositionFromList\0index\0moveToAnotherPlanet\0"
    "text\0setPositionFromCoords\0i\0"
    "addCurrentLocationToList\0"
    "deleteCurrentLocationFromList\0"
    "filterSitesByCountry\0resetCompleteList\0"
    "ipQueryLocation\0state\0setDefaultLocation\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocationDialog[] = {

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
       3,    0,   85,    2, 0x08,
       4,    1,   86,    2, 0x08,
       7,    2,   89,    2, 0x08,
      10,    1,   94,    2, 0x08,
      12,    1,   97,    2, 0x08,
      14,    1,  100,    2, 0x08,
      14,    0,  103,    2, 0x28,
      16,    0,  104,    2, 0x08,
      17,    0,  105,    2, 0x08,
      18,    0,  106,    2, 0x08,
      19,    0,  107,    2, 0x08,
      20,    1,  108,    2, 0x08,
      22,    1,  111,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    8,    9,
    QMetaType::Void, QMetaType::QModelIndex,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   21,

       0        // eod
};

void LocationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LocationDialog *_t = static_cast<LocationDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->reportEdit(); break;
        case 2: _t->updateFromProgram((*reinterpret_cast< const StelLocation(*)>(_a[1]))); break;
        case 3: _t->setPositionFromMap((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->setPositionFromList((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->moveToAnotherPlanet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setPositionFromCoords((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setPositionFromCoords(); break;
        case 8: _t->addCurrentLocationToList(); break;
        case 9: _t->deleteCurrentLocationFromList(); break;
        case 10: _t->filterSitesByCountry(); break;
        case 11: _t->resetCompleteList(); break;
        case 12: _t->ipQueryLocation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setDefaultLocation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LocationDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_LocationDialog.data,
      qt_meta_data_LocationDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *LocationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LocationDialog.stringdata))
        return static_cast<void*>(const_cast< LocationDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int LocationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
