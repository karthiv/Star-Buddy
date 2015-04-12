/****************************************************************************
** Meta object code from reading C++ file 'FOVWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/FOV/src/gui/FOVWindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FOVWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FOVWindow_t {
    QByteArrayData data[16];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FOVWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FOVWindow_t qt_meta_stringdata_FOVWindow = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 11),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 15),
QT_MOC_LITERAL(4, 39, 16),
QT_MOC_LITERAL(5, 56, 10),
QT_MOC_LITERAL(6, 67, 5),
QT_MOC_LITERAL(7, 73, 10),
QT_MOC_LITERAL(8, 84, 10),
QT_MOC_LITERAL(9, 95, 10),
QT_MOC_LITERAL(10, 106, 10),
QT_MOC_LITERAL(11, 117, 10),
QT_MOC_LITERAL(12, 128, 10),
QT_MOC_LITERAL(13, 139, 10),
QT_MOC_LITERAL(14, 150, 10),
QT_MOC_LITERAL(15, 161, 10)
    },
    "FOVWindow\0retranslate\0\0saveFOVSettings\0"
    "resetFOVSettings\0updateFOV0\0value\0"
    "updateFOV1\0updateFOV2\0updateFOV3\0"
    "updateFOV4\0updateFOV5\0updateFOV6\0"
    "updateFOV7\0updateFOV8\0updateFOV9\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FOVWindow[] = {

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
       3,    0,   80,    2, 0x08,
       4,    0,   81,    2, 0x08,
       5,    1,   82,    2, 0x08,
       7,    1,   85,    2, 0x08,
       8,    1,   88,    2, 0x08,
       9,    1,   91,    2, 0x08,
      10,    1,   94,    2, 0x08,
      11,    1,   97,    2, 0x08,
      12,    1,  100,    2, 0x08,
      13,    1,  103,    2, 0x08,
      14,    1,  106,    2, 0x08,
      15,    1,  109,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,

       0        // eod
};

void FOVWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FOVWindow *_t = static_cast<FOVWindow *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->saveFOVSettings(); break;
        case 2: _t->resetFOVSettings(); break;
        case 3: _t->updateFOV0((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->updateFOV1((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->updateFOV2((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->updateFOV3((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->updateFOV4((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->updateFOV5((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->updateFOV6((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->updateFOV7((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->updateFOV8((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->updateFOV9((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FOVWindow::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_FOVWindow.data,
      qt_meta_data_FOVWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *FOVWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FOVWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FOVWindow.stringdata))
        return static_cast<void*>(const_cast< FOVWindow*>(this));
    return StelDialog::qt_metacast(_clname);
}

int FOVWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
