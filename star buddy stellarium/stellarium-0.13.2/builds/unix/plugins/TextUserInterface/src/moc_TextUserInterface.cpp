/****************************************************************************
** Meta object code from reading C++ file 'TextUserInterface.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TextUserInterface/src/TextUserInterface.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextUserInterface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TextUserInterface_t {
    QByteArrayData data[31];
    char stringdata[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TextUserInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TextUserInterface_t qt_meta_stringdata_TextUserInterface = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 16),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 7),
QT_MOC_LITERAL(4, 44, 14),
QT_MOC_LITERAL(5, 59, 9),
QT_MOC_LITERAL(6, 69, 13),
QT_MOC_LITERAL(7, 83, 8),
QT_MOC_LITERAL(8, 92, 15),
QT_MOC_LITERAL(9, 108, 10),
QT_MOC_LITERAL(10, 119, 13),
QT_MOC_LITERAL(11, 133, 10),
QT_MOC_LITERAL(12, 144, 11),
QT_MOC_LITERAL(13, 156, 8),
QT_MOC_LITERAL(14, 165, 11),
QT_MOC_LITERAL(15, 177, 8),
QT_MOC_LITERAL(16, 186, 12),
QT_MOC_LITERAL(17, 199, 9),
QT_MOC_LITERAL(18, 209, 18),
QT_MOC_LITERAL(19, 228, 4),
QT_MOC_LITERAL(20, 233, 13),
QT_MOC_LITERAL(21, 247, 6),
QT_MOC_LITERAL(22, 254, 13),
QT_MOC_LITERAL(23, 268, 13),
QT_MOC_LITERAL(24, 282, 3),
QT_MOC_LITERAL(25, 286, 14),
QT_MOC_LITERAL(26, 301, 4),
QT_MOC_LITERAL(27, 306, 19),
QT_MOC_LITERAL(28, 326, 8),
QT_MOC_LITERAL(29, 335, 14),
QT_MOC_LITERAL(30, 350, 6)
    },
    "TextUserInterface\0setTuiMenuActive\0\0"
    "tActive\0setTuiDateTime\0tDateTime\0"
    "setTuiObjInfo\0tObjInfo\0setTuiGravityUi\0"
    "tGravityUi\0setHomePlanet\0planetName\0"
    "setAltitude\0altitude\0setLatitude\0"
    "latitude\0setLongitude\0longitude\0"
    "setStartupDateMode\0mode\0setDateFormat\0"
    "format\0setTimeFormat\0setSkyCulture\0"
    "i18\0setAppLanguage\0lang\0saveDefaultSettings\0"
    "shutDown\0setBortleScale\0bortle\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextUserInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a,
       4,    1,   97,    2, 0x0a,
       6,    1,  100,    2, 0x0a,
       8,    1,  103,    2, 0x0a,
      10,    1,  106,    2, 0x08,
      12,    1,  109,    2, 0x08,
      14,    1,  112,    2, 0x08,
      16,    1,  115,    2, 0x08,
      18,    1,  118,    2, 0x08,
      20,    1,  121,    2, 0x08,
      22,    1,  124,    2, 0x08,
      23,    1,  127,    2, 0x08,
      25,    1,  130,    2, 0x08,
      27,    0,  133,    2, 0x08,
      28,    0,  134,    2, 0x08,
      29,    1,  135,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   30,

       0        // eod
};

void TextUserInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TextUserInterface *_t = static_cast<TextUserInterface *>(_o);
        switch (_id) {
        case 0: _t->setTuiMenuActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setTuiDateTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setTuiObjInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setTuiGravityUi((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setHomePlanet((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setAltitude((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setLatitude((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setLongitude((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setStartupDateMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setDateFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setTimeFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setSkyCulture((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->setAppLanguage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->saveDefaultSettings(); break;
        case 14: _t->shutDown(); break;
        case 15: _t->setBortleScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TextUserInterface::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_TextUserInterface.data,
      qt_meta_data_TextUserInterface,  qt_static_metacall, 0, 0}
};


const QMetaObject *TextUserInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextUserInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextUserInterface.stringdata))
        return static_cast<void*>(const_cast< TextUserInterface*>(this));
    return StelModule::qt_metacast(_clname);
}

int TextUserInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
struct qt_meta_stringdata_TextUserInterfaceStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TextUserInterfaceStelPluginInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TextUserInterfaceStelPluginInterface_t qt_meta_stringdata_TextUserInterfaceStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 36)
    },
    "TextUserInterfaceStelPluginInterface\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextUserInterfaceStelPluginInterface[] = {

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

void TextUserInterfaceStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TextUserInterfaceStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TextUserInterfaceStelPluginInterface.data,
      qt_meta_data_TextUserInterfaceStelPluginInterface,  qt_static_metacall, 0, 0}
};


const QMetaObject *TextUserInterfaceStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextUserInterfaceStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextUserInterfaceStelPluginInterface.stringdata))
        return static_cast<void*>(const_cast< TextUserInterfaceStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< TextUserInterfaceStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< TextUserInterfaceStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int TextUserInterfaceStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xc4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x25, 0x00, 0x73, 0x74, 0x65, 0x6c, 0x6c, 0x61,
    0x72, 0x69, 0x75, 0x6d, 0x2e, 0x53, 0x74, 0x65,
    0x6c, 0x47, 0x75, 0x69, 0x50, 0x6c, 0x75, 0x67,
    0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x66,
    0x61, 0x63, 0x65, 0x2f, 0x31, 0x2e, 0x30, 0x00,
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 0x63, 0x6c,
    0x61, 0x73, 0x73, 0x4e, 0x61, 0x6d, 0x65, 0x00,
    0x24, 0x00, 0x54, 0x65, 0x78, 0x74, 0x55, 0x73,
    0x65, 0x72, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x66,
    0x61, 0x63, 0x65, 0x53, 0x74, 0x65, 0x6c, 0x50,
    0x6c, 0x75, 0x67, 0x69, 0x6e, 0x49, 0x6e, 0x74,
    0x65, 0x72, 0x66, 0x61, 0x63, 0x65, 0x00, 0x00,
    0x3a, 0x40, 0xa0, 0x00, 0x07, 0x00, 0x76, 0x65,
    0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x95, 0x14, 0x00, 0x00,
    0x08, 0x00, 0x4d, 0x65, 0x74, 0x61, 0x44, 0x61,
    0x74, 0x61, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    0x78, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xc4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x25, 0x00, 0x73, 0x74, 0x65, 0x6c, 0x6c, 0x61,
    0x72, 0x69, 0x75, 0x6d, 0x2e, 0x53, 0x74, 0x65,
    0x6c, 0x47, 0x75, 0x69, 0x50, 0x6c, 0x75, 0x67,
    0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x66,
    0x61, 0x63, 0x65, 0x2f, 0x31, 0x2e, 0x30, 0x00,
    0x15, 0x0a, 0x00, 0x00, 0x08, 0x00, 0x4d, 0x65,
    0x74, 0x61, 0x44, 0x61, 0x74, 0x61, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x0d, 0x00, 0x00,
    0x09, 0x00, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x4e,
    0x61, 0x6d, 0x65, 0x00, 0x24, 0x00, 0x54, 0x65,
    0x78, 0x74, 0x55, 0x73, 0x65, 0x72, 0x49, 0x6e,
    0x74, 0x65, 0x72, 0x66, 0x61, 0x63, 0x65, 0x53,
    0x74, 0x65, 0x6c, 0x50, 0x6c, 0x75, 0x67, 0x69,
    0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61,
    0x63, 0x65, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x64, 0x65, 0x62, 0x75, 0x67, 0x00,
    0x3a, 0x40, 0xa0, 0x00, 0x07, 0x00, 0x76, 0x65,
    0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
    0x5c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(TextUserInterfaceStelPluginInterface, TextUserInterfaceStelPluginInterface)

QT_END_MOC_NAMESPACE
