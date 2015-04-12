/****************************************************************************
** Meta object code from reading C++ file 'PointerCoordinatesWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/PointerCoordinates/src/gui/PointerCoordinatesWindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PointerCoordinatesWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PointerCoordinatesWindow_t {
    QByteArrayData data[12];
    char stringdata[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PointerCoordinatesWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PointerCoordinatesWindow_t qt_meta_stringdata_PointerCoordinatesWindow = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 11),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 23),
QT_MOC_LITERAL(4, 62, 24),
QT_MOC_LITERAL(5, 87, 29),
QT_MOC_LITERAL(6, 117, 29),
QT_MOC_LITERAL(7, 147, 19),
QT_MOC_LITERAL(8, 167, 7),
QT_MOC_LITERAL(9, 175, 19),
QT_MOC_LITERAL(10, 195, 4),
QT_MOC_LITERAL(11, 200, 25)
    },
    "PointerCoordinatesWindow\0retranslate\0"
    "\0saveCoordinatesSettings\0"
    "resetCoordinatesSettings\0"
    "populateCoordinatesPlacesList\0"
    "populateCoordinateSystemsList\0"
    "setCoordinatesPlace\0placeID\0"
    "setCoordinateSystem\0csID\0"
    "setCustomCoordinatesPlace\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PointerCoordinatesWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a,
       3,    0,   55,    2, 0x08,
       4,    0,   56,    2, 0x08,
       5,    0,   57,    2, 0x08,
       6,    0,   58,    2, 0x08,
       7,    1,   59,    2, 0x08,
       9,    1,   62,    2, 0x08,
      11,    0,   65,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

       0        // eod
};

void PointerCoordinatesWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PointerCoordinatesWindow *_t = static_cast<PointerCoordinatesWindow *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->saveCoordinatesSettings(); break;
        case 2: _t->resetCoordinatesSettings(); break;
        case 3: _t->populateCoordinatesPlacesList(); break;
        case 4: _t->populateCoordinateSystemsList(); break;
        case 5: _t->setCoordinatesPlace((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setCoordinateSystem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setCustomCoordinatesPlace(); break;
        default: ;
        }
    }
}

const QMetaObject PointerCoordinatesWindow::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_PointerCoordinatesWindow.data,
      qt_meta_data_PointerCoordinatesWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *PointerCoordinatesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PointerCoordinatesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PointerCoordinatesWindow.stringdata))
        return static_cast<void*>(const_cast< PointerCoordinatesWindow*>(this));
    return StelDialog::qt_metacast(_clname);
}

int PointerCoordinatesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
