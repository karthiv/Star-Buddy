/****************************************************************************
** Meta object code from reading C++ file 'TimeZoneConfigurationWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TimeZoneConfiguration/src/gui/TimeZoneConfigurationWindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimeZoneConfigurationWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TimeZoneConfigurationWindow_t {
    QByteArrayData data[11];
    char stringdata[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TimeZoneConfigurationWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TimeZoneConfigurationWindow_t qt_meta_stringdata_TimeZoneConfigurationWindow = {
    {
QT_MOC_LITERAL(0, 0, 27),
QT_MOC_LITERAL(1, 28, 11),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 20),
QT_MOC_LITERAL(4, 62, 24),
QT_MOC_LITERAL(5, 87, 25),
QT_MOC_LITERAL(6, 113, 15),
QT_MOC_LITERAL(7, 129, 18),
QT_MOC_LITERAL(8, 148, 13),
QT_MOC_LITERAL(9, 162, 13),
QT_MOC_LITERAL(10, 176, 27)
    },
    "TimeZoneConfigurationWindow\0retranslate\0"
    "\0saveTimeZoneSettings\0openDefineTimeZoneWindow\0"
    "closeDefineTimeZoneWindow\0timeZoneDefined\0"
    "timeZoneDefinition\0setTimeFormat\0"
    "setDateFormat\0updateDisplayFormatSwitches\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeZoneConfigurationWindow[] = {

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
       5,    1,   57,    2, 0x08,
       6,    1,   60,    2, 0x08,
       8,    1,   63,    2, 0x08,
       9,    1,   66,    2, 0x08,
      10,    0,   69,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void TimeZoneConfigurationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeZoneConfigurationWindow *_t = static_cast<TimeZoneConfigurationWindow *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->saveTimeZoneSettings(); break;
        case 2: _t->openDefineTimeZoneWindow(); break;
        case 3: _t->closeDefineTimeZoneWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->timeZoneDefined((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setTimeFormat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setDateFormat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateDisplayFormatSwitches(); break;
        default: ;
        }
    }
}

const QMetaObject TimeZoneConfigurationWindow::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_TimeZoneConfigurationWindow.data,
      qt_meta_data_TimeZoneConfigurationWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *TimeZoneConfigurationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeZoneConfigurationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeZoneConfigurationWindow.stringdata))
        return static_cast<void*>(const_cast< TimeZoneConfigurationWindow*>(this));
    return StelDialog::qt_metacast(_clname);
}

int TimeZoneConfigurationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
