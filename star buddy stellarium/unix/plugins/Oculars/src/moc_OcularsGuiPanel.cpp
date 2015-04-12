/****************************************************************************
** Meta object code from reading C++ file 'OcularsGuiPanel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Oculars/src/gui/OcularsGuiPanel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OcularsGuiPanel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OcularsGuiPanel_t {
    QByteArrayData data[12];
    char stringdata[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_OcularsGuiPanel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_OcularsGuiPanel_t qt_meta_stringdata_OcularsGuiPanel = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 13),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 10),
QT_MOC_LITERAL(4, 42, 7),
QT_MOC_LITERAL(5, 50, 14),
QT_MOC_LITERAL(6, 65, 20),
QT_MOC_LITERAL(7, 86, 17),
QT_MOC_LITERAL(8, 104, 23),
QT_MOC_LITERAL(9, 128, 18),
QT_MOC_LITERAL(10, 147, 14),
QT_MOC_LITERAL(11, 162, 10)
    },
    "OcularsGuiPanel\0showOcularGui\0\0"
    "showCcdGui\0foldGui\0updatePosition\0"
    "updateOcularControls\0updateCcdControls\0"
    "updateTelescopeControls\0updateLensControls\0"
    "setColorScheme\0schemeName\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OcularsGuiPanel[] = {

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
       4,    0,   61,    2, 0x0a,
       5,    0,   62,    2, 0x08,
       6,    0,   63,    2, 0x08,
       7,    0,   64,    2, 0x08,
       8,    0,   65,    2, 0x08,
       9,    0,   66,    2, 0x08,
      10,    1,   67,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void OcularsGuiPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OcularsGuiPanel *_t = static_cast<OcularsGuiPanel *>(_o);
        switch (_id) {
        case 0: _t->showOcularGui(); break;
        case 1: _t->showCcdGui(); break;
        case 2: _t->foldGui(); break;
        case 3: _t->updatePosition(); break;
        case 4: _t->updateOcularControls(); break;
        case 5: _t->updateCcdControls(); break;
        case 6: _t->updateTelescopeControls(); break;
        case 7: _t->updateLensControls(); break;
        case 8: _t->setColorScheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject OcularsGuiPanel::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_OcularsGuiPanel.data,
      qt_meta_data_OcularsGuiPanel,  qt_static_metacall, 0, 0}
};


const QMetaObject *OcularsGuiPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OcularsGuiPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OcularsGuiPanel.stringdata))
        return static_cast<void*>(const_cast< OcularsGuiPanel*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int OcularsGuiPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
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
