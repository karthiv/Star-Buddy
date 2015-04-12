/****************************************************************************
** Meta object code from reading C++ file 'StelGuiItems.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/StelGuiItems.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelGuiItems.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelProgressBarMgr_t {
    QByteArrayData data[7];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StelProgressBarMgr_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StelProgressBarMgr_t qt_meta_stringdata_StelProgressBarMgr = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 14),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 29),
QT_MOC_LITERAL(4, 65, 1),
QT_MOC_LITERAL(5, 67, 17),
QT_MOC_LITERAL(6, 85, 13)
    },
    "StelProgressBarMgr\0addProgressBar\0\0"
    "const StelProgressController*\0p\0"
    "removeProgressBar\0oneBarChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelProgressBarMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a,
       5,    1,   32,    2, 0x0a,
       6,    0,   35,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void StelProgressBarMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelProgressBarMgr *_t = static_cast<StelProgressBarMgr *>(_o);
        switch (_id) {
        case 0: _t->addProgressBar((*reinterpret_cast< const StelProgressController*(*)>(_a[1]))); break;
        case 1: _t->removeProgressBar((*reinterpret_cast< const StelProgressController*(*)>(_a[1]))); break;
        case 2: _t->oneBarChanged(); break;
        default: ;
        }
    }
}

const QMetaObject StelProgressBarMgr::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_StelProgressBarMgr.data,
      qt_meta_data_StelProgressBarMgr,  qt_static_metacall, 0, 0}
};


const QMetaObject *StelProgressBarMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelProgressBarMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelProgressBarMgr.stringdata))
        return static_cast<void*>(const_cast< StelProgressBarMgr*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int StelProgressBarMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_CornerButtons_t {
    QByteArrayData data[1];
    char stringdata[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CornerButtons_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CornerButtons_t qt_meta_stringdata_CornerButtons = {
    {
QT_MOC_LITERAL(0, 0, 13)
    },
    "CornerButtons\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CornerButtons[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CornerButtons::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CornerButtons::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CornerButtons.data,
      qt_meta_data_CornerButtons,  qt_static_metacall, 0, 0}
};


const QMetaObject *CornerButtons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CornerButtons::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CornerButtons.stringdata))
        return static_cast<void*>(const_cast< CornerButtons*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< CornerButtons*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< CornerButtons*>(this));
    return QObject::qt_metacast(_clname);
}

int CornerButtons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_StelButton_t {
    QByteArrayData data[9];
    char stringdata[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StelButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StelButton_t qt_meta_stringdata_StelButton = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 7),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 9),
QT_MOC_LITERAL(4, 30, 12),
QT_MOC_LITERAL(5, 43, 1),
QT_MOC_LITERAL(6, 45, 10),
QT_MOC_LITERAL(7, 56, 16),
QT_MOC_LITERAL(8, 73, 5)
    },
    "StelButton\0toggled\0\0triggered\0"
    "hoverChanged\0b\0setChecked\0animValueChanged\0"
    "value\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,
       3,    0,   47,    2, 0x06,
       4,    1,   48,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,   51,    2, 0x0a,
       6,    1,   54,    2, 0x0a,
       7,    1,   57,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QReal,    8,

       0        // eod
};

void StelButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelButton *_t = static_cast<StelButton *>(_o);
        switch (_id) {
        case 0: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->triggered(); break;
        case 2: _t->hoverChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->animValueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelButton::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelButton::toggled)) {
                *result = 0;
            }
        }
        {
            typedef void (StelButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelButton::triggered)) {
                *result = 1;
            }
        }
        {
            typedef void (StelButton::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelButton::hoverChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject StelButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelButton.data,
      qt_meta_data_StelButton,  qt_static_metacall, 0, 0}
};


const QMetaObject *StelButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelButton.stringdata))
        return static_cast<void*>(const_cast< StelButton*>(this));
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(const_cast< StelButton*>(this));
    return QObject::qt_metacast(_clname);
}

int StelButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void StelButton::toggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelButton::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StelButton::hoverChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_LeftStelBar_t {
    QByteArrayData data[4];
    char stringdata[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_LeftStelBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_LeftStelBar_t qt_meta_stringdata_LeftStelBar = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 18),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 1)
    },
    "LeftStelBar\0buttonHoverChanged\0\0b\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LeftStelBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void LeftStelBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LeftStelBar *_t = static_cast<LeftStelBar *>(_o);
        switch (_id) {
        case 0: _t->buttonHoverChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LeftStelBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LeftStelBar.data,
      qt_meta_data_LeftStelBar,  qt_static_metacall, 0, 0}
};


const QMetaObject *LeftStelBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LeftStelBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LeftStelBar.stringdata))
        return static_cast<void*>(const_cast< LeftStelBar*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< LeftStelBar*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< LeftStelBar*>(this));
    return QObject::qt_metacast(_clname);
}

int LeftStelBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_BottomStelBar_t {
    QByteArrayData data[5];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BottomStelBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BottomStelBar_t qt_meta_stringdata_BottomStelBar = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 11),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 18),
QT_MOC_LITERAL(4, 46, 1)
    },
    "BottomStelBar\0sizeChanged\0\0"
    "buttonHoverChanged\0b\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BottomStelBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void BottomStelBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BottomStelBar *_t = static_cast<BottomStelBar *>(_o);
        switch (_id) {
        case 0: _t->sizeChanged(); break;
        case 1: _t->buttonHoverChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BottomStelBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomStelBar::sizeChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject BottomStelBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BottomStelBar.data,
      qt_meta_data_BottomStelBar,  qt_static_metacall, 0, 0}
};


const QMetaObject *BottomStelBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BottomStelBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BottomStelBar.stringdata))
        return static_cast<void*>(const_cast< BottomStelBar*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< BottomStelBar*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< BottomStelBar*>(this));
    return QObject::qt_metacast(_clname);
}

int BottomStelBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BottomStelBar::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
