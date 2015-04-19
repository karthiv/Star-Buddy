/****************************************************************************
** Meta object code from reading C++ file 'HelpDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/HelpDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HelpDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HelpDialog_t {
    QByteArrayData data[17];
    char stringdata[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_HelpDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_HelpDialog_t qt_meta_stringdata_HelpDialog = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 18),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 23),
QT_MOC_LITERAL(4, 55, 5),
QT_MOC_LITERAL(5, 61, 11),
QT_MOC_LITERAL(6, 73, 10),
QT_MOC_LITERAL(7, 84, 19),
QT_MOC_LITERAL(8, 104, 9),
QT_MOC_LITERAL(9, 114, 10),
QT_MOC_LITERAL(10, 125, 10),
QT_MOC_LITERAL(11, 136, 16),
QT_MOC_LITERAL(12, 153, 7),
QT_MOC_LITERAL(13, 161, 8),
QT_MOC_LITERAL(14, 170, 22),
QT_MOC_LITERAL(15, 193, 14),
QT_MOC_LITERAL(16, 208, 5)
    },
    "HelpDialog\0updateStateChanged\0\0"
    "HelpDialog::UpdateState\0state\0retranslate\0"
    "updateJSON\0showShortcutsWindow\0updateLog\0"
    "refreshLog\0changePage\0QListWidgetItem*\0"
    "current\0previous\0updateDownloadComplete\0"
    "QNetworkReply*\0reply\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HelpDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x0a,
       6,    0,   58,    2, 0x0a,
       7,    0,   59,    2, 0x08,
       8,    1,   60,    2, 0x08,
       9,    0,   63,    2, 0x08,
      10,    2,   64,    2, 0x08,
      14,    1,   69,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void HelpDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpDialog *_t = static_cast<HelpDialog *>(_o);
        switch (_id) {
        case 0: _t->updateStateChanged((*reinterpret_cast< HelpDialog::UpdateState(*)>(_a[1]))); break;
        case 1: _t->retranslate(); break;
        case 2: _t->updateJSON(); break;
        case 3: _t->showShortcutsWindow(); break;
        case 4: _t->updateLog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->refreshLog(); break;
        case 6: _t->changePage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 7: _t->updateDownloadComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HelpDialog::*_t)(HelpDialog::UpdateState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpDialog::updateStateChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HelpDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_HelpDialog.data,
      qt_meta_data_HelpDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *HelpDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelpDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelpDialog.stringdata))
        return static_cast<void*>(const_cast< HelpDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int HelpDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void HelpDialog::updateStateChanged(HelpDialog::UpdateState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
