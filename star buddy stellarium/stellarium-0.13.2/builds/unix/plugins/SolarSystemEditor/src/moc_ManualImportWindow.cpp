/****************************************************************************
** Meta object code from reading C++ file 'ManualImportWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/SolarSystemEditor/src/gui/ManualImportWindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManualImportWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ManualImportWindow_t {
    QByteArrayData data[11];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ManualImportWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ManualImportWindow_t qt_meta_stringdata_ManualImportWindow = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 11),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 11),
QT_MOC_LITERAL(4, 44, 16),
QT_MOC_LITERAL(5, 61, 16),
QT_MOC_LITERAL(6, 78, 19),
QT_MOC_LITERAL(7, 98, 25),
QT_MOC_LITERAL(8, 124, 24),
QT_MOC_LITERAL(9, 149, 23),
QT_MOC_LITERAL(10, 173, 21)
    },
    "ManualImportWindow\0retranslate\0\0"
    "selectColor\0parseColorString\0"
    "toggleCometOrbit\0toggleEllipticOrbit\0"
    "toggleObjectSpecificOrbit\0"
    "toggleMeanMotionOrPeriod\0"
    "selectPlanetTextureFile\0selectRingTextureFile\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManualImportWindow[] = {

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
       3,    0,   60,    2, 0x08,
       4,    1,   61,    2, 0x08,
       5,    1,   64,    2, 0x08,
       6,    1,   67,    2, 0x08,
       7,    1,   70,    2, 0x08,
       8,    1,   73,    2, 0x08,
       9,    0,   76,    2, 0x08,
      10,    0,   77,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ManualImportWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ManualImportWindow *_t = static_cast<ManualImportWindow *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->selectColor(); break;
        case 2: _t->parseColorString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->toggleCometOrbit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->toggleEllipticOrbit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->toggleObjectSpecificOrbit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->toggleMeanMotionOrPeriod((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->selectPlanetTextureFile(); break;
        case 8: _t->selectRingTextureFile(); break;
        default: ;
        }
    }
}

const QMetaObject ManualImportWindow::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_ManualImportWindow.data,
      qt_meta_data_ManualImportWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *ManualImportWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManualImportWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ManualImportWindow.stringdata))
        return static_cast<void*>(const_cast< ManualImportWindow*>(this));
    return StelDialog::qt_metacast(_clname);
}

int ManualImportWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
