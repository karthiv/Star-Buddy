/****************************************************************************
** Meta object code from reading C++ file 'Observability.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Observability/src/Observability.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Observability.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Observability_t {
    QByteArrayData data[22];
    char stringdata[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Observability_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Observability_t qt_meta_stringdata_Observability = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 18),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 17),
QT_MOC_LITERAL(4, 52, 16),
QT_MOC_LITERAL(5, 69, 7),
QT_MOC_LITERAL(6, 77, 18),
QT_MOC_LITERAL(7, 96, 21),
QT_MOC_LITERAL(8, 118, 21),
QT_MOC_LITERAL(9, 140, 19),
QT_MOC_LITERAL(10, 160, 12),
QT_MOC_LITERAL(11, 173, 5),
QT_MOC_LITERAL(12, 179, 5),
QT_MOC_LITERAL(13, 185, 11),
QT_MOC_LITERAL(14, 197, 4),
QT_MOC_LITERAL(15, 202, 19),
QT_MOC_LITERAL(16, 222, 8),
QT_MOC_LITERAL(17, 231, 18),
QT_MOC_LITERAL(18, 250, 10),
QT_MOC_LITERAL(19, 261, 1),
QT_MOC_LITERAL(20, 263, 17),
QT_MOC_LITERAL(21, 281, 14)
    },
    "Observability\0resetConfiguration\0\0"
    "saveConfiguration\0enableTodayField\0"
    "enabled\0enableAcroCosField\0"
    "enableGoodNightsField\0enableOppositionField\0"
    "enableFullMoonField\0setFontColor\0Vec3f\0"
    "color\0setFontSize\0size\0setTwilightAltitude\0"
    "altitude\0setHorizonAltitude\0showReport\0"
    "b\0updateMessageText\0flagShowReport\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Observability[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       1,  142, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a,
       3,    0,  105,    2, 0x0a,
       4,    1,  106,    2, 0x0a,
       4,    0,  109,    2, 0x2a,
       6,    1,  110,    2, 0x0a,
       6,    0,  113,    2, 0x2a,
       7,    1,  114,    2, 0x0a,
       7,    0,  117,    2, 0x2a,
       8,    1,  118,    2, 0x0a,
       8,    0,  121,    2, 0x2a,
       9,    1,  122,    2, 0x0a,
       9,    0,  125,    2, 0x2a,
      10,    1,  126,    2, 0x0a,
      13,    1,  129,    2, 0x0a,
      15,    1,  132,    2, 0x0a,
      17,    1,  135,    2, 0x0a,
      18,    1,  138,    2, 0x0a,
      20,    0,  141,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00095003,

       0        // eod
};

void Observability::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Observability *_t = static_cast<Observability *>(_o);
        switch (_id) {
        case 0: _t->resetConfiguration(); break;
        case 1: _t->saveConfiguration(); break;
        case 2: _t->enableTodayField((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableTodayField(); break;
        case 4: _t->enableAcroCosField((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->enableAcroCosField(); break;
        case 6: _t->enableGoodNightsField((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->enableGoodNightsField(); break;
        case 8: _t->enableOppositionField((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->enableOppositionField(); break;
        case 10: _t->enableFullMoonField((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->enableFullMoonField(); break;
        case 12: _t->setFontColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 13: _t->setFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setTwilightAltitude((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setHorizonAltitude((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->showReport((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->updateMessageText(); break;
        default: ;
        }
    }
}

const QMetaObject Observability::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_Observability.data,
      qt_meta_data_Observability,  qt_static_metacall, 0, 0}
};


const QMetaObject *Observability::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Observability::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Observability.stringdata))
        return static_cast<void*>(const_cast< Observability*>(this));
    return StelModule::qt_metacast(_clname);
}

int Observability::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isShownReport(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: showReport(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_ObservabilityStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ObservabilityStelPluginInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ObservabilityStelPluginInterface_t qt_meta_stringdata_ObservabilityStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 32)
    },
    "ObservabilityStelPluginInterface\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObservabilityStelPluginInterface[] = {

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

void ObservabilityStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ObservabilityStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ObservabilityStelPluginInterface.data,
      qt_meta_data_ObservabilityStelPluginInterface,  qt_static_metacall, 0, 0}
};


const QMetaObject *ObservabilityStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObservabilityStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ObservabilityStelPluginInterface.stringdata))
        return static_cast<void*>(const_cast< ObservabilityStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< ObservabilityStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< ObservabilityStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int ObservabilityStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0xc0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x25, 0x00, 0x73, 0x74, 0x65, 0x6c, 0x6c, 0x61,
    0x72, 0x69, 0x75, 0x6d, 0x2e, 0x53, 0x74, 0x65,
    0x6c, 0x47, 0x75, 0x69, 0x50, 0x6c, 0x75, 0x67,
    0x69, 0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x66,
    0x61, 0x63, 0x65, 0x2f, 0x31, 0x2e, 0x30, 0x00,
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 0x63, 0x6c,
    0x61, 0x73, 0x73, 0x4e, 0x61, 0x6d, 0x65, 0x00,
    0x20, 0x00, 0x4f, 0x62, 0x73, 0x65, 0x72, 0x76,
    0x61, 0x62, 0x69, 0x6c, 0x69, 0x74, 0x79, 0x53,
    0x74, 0x65, 0x6c, 0x50, 0x6c, 0x75, 0x67, 0x69,
    0x6e, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61,
    0x63, 0x65, 0x00, 0x00, 0x3a, 0x40, 0xa0, 0x00,
    0x07, 0x00, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x64, 0x65, 0x62, 0x75, 0x67, 0x00,
    0x15, 0x14, 0x00, 0x00, 0x08, 0x00, 0x4d, 0x65,
    0x74, 0x61, 0x44, 0x61, 0x74, 0x61, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    0x61, 0x6d, 0x65, 0x00, 0x20, 0x00, 0x4f, 0x62,
    0x73, 0x65, 0x72, 0x76, 0x61, 0x62, 0x69, 0x6c,
    0x69, 0x74, 0x79, 0x53, 0x74, 0x65, 0x6c, 0x50,
    0x6c, 0x75, 0x67, 0x69, 0x6e, 0x49, 0x6e, 0x74,
    0x65, 0x72, 0x66, 0x61, 0x63, 0x65, 0x00, 0x00,
    0x31, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x3a, 0x40, 0xa0, 0x00,
    0x07, 0x00, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(ObservabilityStelPluginInterface, ObservabilityStelPluginInterface)

QT_END_MOC_NAMESPACE
