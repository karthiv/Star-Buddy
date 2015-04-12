/****************************************************************************
** Meta object code from reading C++ file 'ShortcutLineEdit.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/ShortcutLineEdit.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShortcutLineEdit.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShortcutLineEdit_t {
    QByteArrayData data[9];
    char stringdata[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ShortcutLineEdit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ShortcutLineEdit_t qt_meta_stringdata_ShortcutLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 12),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 5),
QT_MOC_LITERAL(4, 37, 15),
QT_MOC_LITERAL(5, 53, 5),
QT_MOC_LITERAL(6, 59, 9),
QT_MOC_LITERAL(7, 69, 11),
QT_MOC_LITERAL(8, 81, 2)
    },
    "ShortcutLineEdit\0focusChanged\0\0focus\0"
    "contentsChanged\0clear\0backspace\0"
    "setContents\0ks\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06,
       4,    0,   42,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x0a,
       6,    0,   44,    2, 0x0a,
       7,    1,   45,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QKeySequence,    8,

       0        // eod
};

void ShortcutLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShortcutLineEdit *_t = static_cast<ShortcutLineEdit *>(_o);
        switch (_id) {
        case 0: _t->focusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->contentsChanged(); break;
        case 2: _t->clear(); break;
        case 3: _t->backspace(); break;
        case 4: _t->setContents((*reinterpret_cast< QKeySequence(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ShortcutLineEdit::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShortcutLineEdit::focusChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ShortcutLineEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShortcutLineEdit::contentsChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ShortcutLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_ShortcutLineEdit.data,
      qt_meta_data_ShortcutLineEdit,  qt_static_metacall, 0, 0}
};


const QMetaObject *ShortcutLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutLineEdit.stringdata))
        return static_cast<void*>(const_cast< ShortcutLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int ShortcutLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ShortcutLineEdit::focusChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ShortcutLineEdit::contentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
