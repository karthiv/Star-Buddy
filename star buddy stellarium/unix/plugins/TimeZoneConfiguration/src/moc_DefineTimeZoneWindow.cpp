/****************************************************************************
** Meta object code from reading C++ file 'DefineTimeZoneWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TimeZoneConfiguration/src/gui/DefineTimeZoneWindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DefineTimeZoneWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DefineTimeZoneWindow_t {
    QByteArrayData data[11];
    char stringdata[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DefineTimeZoneWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DefineTimeZoneWindow_t qt_meta_stringdata_DefineTimeZoneWindow = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 15),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 14),
QT_MOC_LITERAL(4, 53, 11),
QT_MOC_LITERAL(5, 65, 13),
QT_MOC_LITERAL(6, 79, 15),
QT_MOC_LITERAL(7, 95, 12),
QT_MOC_LITERAL(8, 108, 30),
QT_MOC_LITERAL(9, 139, 10),
QT_MOC_LITERAL(10, 150, 28)
    },
    "DefineTimeZoneWindow\0timeZoneDefined\0"
    "\0timeZoneString\0retranslate\0useDefinition\0"
    "updateDstOffset\0normalOffset\0"
    "updateDayNumberMaximumDstStart\0"
    "monthIndex\0updateDayNumberMaximumDstEnd\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DefineTimeZoneWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a,
       5,    0,   48,    2, 0x08,
       6,    1,   49,    2, 0x08,
       8,    1,   52,    2, 0x08,
      10,    1,   55,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void DefineTimeZoneWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DefineTimeZoneWindow *_t = static_cast<DefineTimeZoneWindow *>(_o);
        switch (_id) {
        case 0: _t->timeZoneDefined((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->retranslate(); break;
        case 2: _t->useDefinition(); break;
        case 3: _t->updateDstOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->updateDayNumberMaximumDstStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateDayNumberMaximumDstEnd((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DefineTimeZoneWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DefineTimeZoneWindow::timeZoneDefined)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject DefineTimeZoneWindow::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_DefineTimeZoneWindow.data,
      qt_meta_data_DefineTimeZoneWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *DefineTimeZoneWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DefineTimeZoneWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DefineTimeZoneWindow.stringdata))
        return static_cast<void*>(const_cast< DefineTimeZoneWindow*>(this));
    return StelDialog::qt_metacast(_clname);
}

int DefineTimeZoneWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DefineTimeZoneWindow::timeZoneDefined(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
