/****************************************************************************
** Meta object code from reading C++ file 'SearchDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/SearchDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CompletionLabel_t {
    QByteArrayData data[5];
    char stringdata[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CompletionLabel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CompletionLabel_t qt_meta_stringdata_CompletionLabel = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 10),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 14),
QT_MOC_LITERAL(4, 43, 11)
    },
    "CompletionLabel\0selectNext\0\0selectPrevious\0"
    "selectFirst\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompletionLabel[] = {

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
       1,    0,   29,    2, 0x0a,
       3,    0,   30,    2, 0x0a,
       4,    0,   31,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CompletionLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CompletionLabel *_t = static_cast<CompletionLabel *>(_o);
        switch (_id) {
        case 0: _t->selectNext(); break;
        case 1: _t->selectPrevious(); break;
        case 2: _t->selectFirst(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CompletionLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_CompletionLabel.data,
      qt_meta_data_CompletionLabel,  qt_static_metacall, 0, 0}
};


const QMetaObject *CompletionLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompletionLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompletionLabel.stringdata))
        return static_cast<void*>(const_cast< CompletionLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int CompletionLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SearchDialog_t {
    QByteArrayData data[41];
    char stringdata[619];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SearchDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SearchDialog_t qt_meta_stringdata_SearchDialog = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 11),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 14),
QT_MOC_LITERAL(4, 41, 26),
QT_MOC_LITERAL(5, 68, 16),
QT_MOC_LITERAL(6, 85, 2),
QT_MOC_LITERAL(7, 88, 26),
QT_MOC_LITERAL(8, 115, 29),
QT_MOC_LITERAL(9, 145, 29),
QT_MOC_LITERAL(10, 175, 3),
QT_MOC_LITERAL(11, 179, 19),
QT_MOC_LITERAL(12, 199, 4),
QT_MOC_LITERAL(13, 204, 29),
QT_MOC_LITERAL(14, 234, 22),
QT_MOC_LITERAL(15, 257, 18),
QT_MOC_LITERAL(16, 276, 21),
QT_MOC_LITERAL(17, 298, 19),
QT_MOC_LITERAL(18, 318, 4),
QT_MOC_LITERAL(19, 323, 10),
QT_MOC_LITERAL(20, 334, 8),
QT_MOC_LITERAL(21, 343, 16),
QT_MOC_LITERAL(22, 360, 4),
QT_MOC_LITERAL(23, 365, 17),
QT_MOC_LITERAL(24, 383, 7),
QT_MOC_LITERAL(25, 391, 21),
QT_MOC_LITERAL(26, 413, 18),
QT_MOC_LITERAL(27, 432, 6),
QT_MOC_LITERAL(28, 439, 26),
QT_MOC_LITERAL(29, 466, 18),
QT_MOC_LITERAL(30, 485, 18),
QT_MOC_LITERAL(31, 504, 5),
QT_MOC_LITERAL(32, 510, 16),
QT_MOC_LITERAL(33, 527, 13),
QT_MOC_LITERAL(34, 541, 15),
QT_MOC_LITERAL(35, 557, 2),
QT_MOC_LITERAL(36, 560, 10),
QT_MOC_LITERAL(37, 571, 15),
QT_MOC_LITERAL(38, 587, 10),
QT_MOC_LITERAL(39, 598, 10),
QT_MOC_LITERAL(40, 609, 8)
    },
    "SearchDialog\0retranslate\0\0setSimpleStyle\0"
    "setCurrentCoordinateSystem\0CoordinateSystem\0"
    "cs\0getCurrentCoordinateSystem\0"
    "getCurrentCoordinateSystemKey\0"
    "setCurrentCoordinateSystemKey\0key\0"
    "setCoordinateSystem\0csID\0"
    "populateCoordinateSystemsList\0"
    "populateCoordinateAxis\0greekLetterClicked\0"
    "onSimbadStatusChanged\0onSearchTextChanged\0"
    "text\0gotoObject\0nameI18n\0QListWidgetItem*\0"
    "item\0searchListChanged\0newText\0"
    "manualPositionChanged\0enableSimbadSearch\0"
    "enable\0enableStartOfWordsAutofill\0"
    "setHasSelectedFlag\0selectSimbadServer\0"
    "index\0updateListWidget\0updateListTab\0"
    "showContextMenu\0pt\0pasteAndGo\0"
    "equatorialJ2000\0equatorial\0horizontal\0"
    "galactic\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       1,  188, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  139,    2, 0x0a,
       3,    0,  140,    2, 0x0a,
       4,    1,  141,    2, 0x0a,
       7,    0,  144,    2, 0x0a,
       8,    0,  145,    2, 0x0a,
       9,    1,  146,    2, 0x0a,
      11,    1,  149,    2, 0x0a,
      13,    0,  152,    2, 0x0a,
      14,    0,  153,    2, 0x0a,
      15,    0,  154,    2, 0x08,
      16,    0,  155,    2, 0x08,
      17,    1,  156,    2, 0x08,
      19,    0,  159,    2, 0x08,
      19,    1,  160,    2, 0x08,
      19,    1,  163,    2, 0x08,
      23,    1,  166,    2, 0x08,
      25,    0,  169,    2, 0x08,
      26,    1,  170,    2, 0x08,
      28,    1,  173,    2, 0x08,
      29,    0,  176,    2, 0x08,
      30,    1,  177,    2, 0x08,
      32,    1,  180,    2, 0x08,
      33,    0,  183,    2, 0x08,
      34,    1,  184,    2, 0x08,
      36,    0,  187,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    0x80000000 | 5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   35,
    QMetaType::Void,

 // enums: name, flags, count, data
       5, 0x0,    4,  192,

 // enum data: key, value
      37, uint(SearchDialog::equatorialJ2000),
      38, uint(SearchDialog::equatorial),
      39, uint(SearchDialog::horizontal),
      40, uint(SearchDialog::galactic),

       0        // eod
};

void SearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchDialog *_t = static_cast<SearchDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->setSimpleStyle(); break;
        case 2: _t->setCurrentCoordinateSystem((*reinterpret_cast< CoordinateSystem(*)>(_a[1]))); break;
        case 3: { CoordinateSystem _r = _t->getCurrentCoordinateSystem();
            if (_a[0]) *reinterpret_cast< CoordinateSystem*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->getCurrentCoordinateSystemKey();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->setCurrentCoordinateSystemKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setCoordinateSystem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->populateCoordinateSystemsList(); break;
        case 8: _t->populateCoordinateAxis(); break;
        case 9: _t->greekLetterClicked(); break;
        case 10: _t->onSimbadStatusChanged(); break;
        case 11: _t->onSearchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->gotoObject(); break;
        case 13: _t->gotoObject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->gotoObject((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 15: _t->searchListChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->manualPositionChanged(); break;
        case 17: _t->enableSimbadSearch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->enableStartOfWordsAutofill((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setHasSelectedFlag(); break;
        case 20: _t->selectSimbadServer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->updateListWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->updateListTab(); break;
        case 23: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 24: _t->pasteAndGo(); break;
        default: ;
        }
    }
}

const QMetaObject SearchDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SearchDialog.data,
      qt_meta_data_SearchDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchDialog.stringdata))
        return static_cast<void*>(const_cast< SearchDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
