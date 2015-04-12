/****************************************************************************
** Meta object code from reading C++ file 'SolarSystemManagerWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/SolarSystemEditor/src/gui/SolarSystemManagerWindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SolarSystemManagerWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SolarSystemManagerWindow_t {
    QByteArrayData data[11];
    char stringdata[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SolarSystemManagerWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SolarSystemManagerWindow_t qt_meta_stringdata_SolarSystemManagerWindow = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 11),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 17),
QT_MOC_LITERAL(4, 56, 20),
QT_MOC_LITERAL(5, 77, 23),
QT_MOC_LITERAL(6, 101, 12),
QT_MOC_LITERAL(7, 114, 12),
QT_MOC_LITERAL(8, 127, 15),
QT_MOC_LITERAL(9, 143, 17),
QT_MOC_LITERAL(10, 161, 22)
    },
    "SolarSystemManagerWindow\0retranslate\0"
    "\0copyConfiguration\0replaceConfiguration\0"
    "populateSolarSystemList\0removeObject\0"
    "newImportMPC\0newImportManual\0"
    "resetImportManual\0repaintSolarSystemList\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SolarSystemManagerWindow[] = {

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
       4,    0,   61,    2, 0x08,
       5,    0,   62,    2, 0x08,
       6,    0,   63,    2, 0x08,
       7,    0,   64,    2, 0x08,
       8,    0,   65,    2, 0x08,
       9,    1,   66,    2, 0x08,
      10,    0,   69,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void SolarSystemManagerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SolarSystemManagerWindow *_t = static_cast<SolarSystemManagerWindow *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->copyConfiguration(); break;
        case 2: _t->replaceConfiguration(); break;
        case 3: _t->populateSolarSystemList(); break;
        case 4: _t->removeObject(); break;
        case 5: _t->newImportMPC(); break;
        case 6: _t->newImportManual(); break;
        case 7: _t->resetImportManual((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->repaintSolarSystemList(); break;
        default: ;
        }
    }
}

const QMetaObject SolarSystemManagerWindow::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SolarSystemManagerWindow.data,
      qt_meta_data_SolarSystemManagerWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *SolarSystemManagerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SolarSystemManagerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SolarSystemManagerWindow.stringdata))
        return static_cast<void*>(const_cast< SolarSystemManagerWindow*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SolarSystemManagerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
