/****************************************************************************
** Meta object code from reading C++ file 'ScriptConsole.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/ScriptConsole.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptConsole.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScriptConsole_t {
    QByteArrayData data[16];
    char stringdata[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ScriptConsole_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ScriptConsole_t qt_meta_stringdata_ScriptConsole = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 11),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 9),
QT_MOC_LITERAL(4, 37, 10),
QT_MOC_LITERAL(5, 48, 10),
QT_MOC_LITERAL(6, 59, 18),
QT_MOC_LITERAL(7, 78, 16),
QT_MOC_LITERAL(8, 95, 11),
QT_MOC_LITERAL(9, 107, 13),
QT_MOC_LITERAL(10, 121, 1),
QT_MOC_LITERAL(11, 123, 16),
QT_MOC_LITERAL(12, 140, 13),
QT_MOC_LITERAL(13, 154, 8),
QT_MOC_LITERAL(14, 163, 3),
QT_MOC_LITERAL(15, 167, 16)
    },
    "ScriptConsole\0retranslate\0\0runScript\0"
    "loadScript\0saveScript\0clearButtonPressed\0"
    "preprocessScript\0scriptEnded\0appendLogLine\0"
    "s\0appendOutputLine\0includeBrowse\0"
    "quickRun\0idx\0rowColumnChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a,
       3,    0,   75,    2, 0x0a,
       4,    0,   76,    2, 0x0a,
       5,    0,   77,    2, 0x0a,
       6,    0,   78,    2, 0x0a,
       7,    0,   79,    2, 0x0a,
       8,    0,   80,    2, 0x0a,
       9,    1,   81,    2, 0x0a,
      11,    1,   84,    2, 0x0a,
      12,    0,   87,    2, 0x0a,
      13,    1,   88,    2, 0x0a,
      15,    0,   91,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

void ScriptConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptConsole *_t = static_cast<ScriptConsole *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->runScript(); break;
        case 2: _t->loadScript(); break;
        case 3: _t->saveScript(); break;
        case 4: _t->clearButtonPressed(); break;
        case 5: _t->preprocessScript(); break;
        case 6: _t->scriptEnded(); break;
        case 7: _t->appendLogLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->appendOutputLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->includeBrowse(); break;
        case 10: _t->quickRun((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->rowColumnChanged(); break;
        default: ;
        }
    }
}

const QMetaObject ScriptConsole::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_ScriptConsole.data,
      qt_meta_data_ScriptConsole,  qt_static_metacall, 0, 0}
};


const QMetaObject *ScriptConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptConsole.stringdata))
        return static_cast<void*>(const_cast< ScriptConsole*>(this));
    return StelDialog::qt_metacast(_clname);
}

int ScriptConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
