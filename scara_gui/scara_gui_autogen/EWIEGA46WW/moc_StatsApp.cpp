/****************************************************************************
** Meta object code from reading C++ file 'StatsApp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../StatsApp.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StatsApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSStatsAppENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSStatsAppENDCLASS = QtMocHelpers::stringData(
    "StatsApp",
    "updateReceivedPackets",
    "",
    "numPackets",
    "updateNumberOfDrawnLine",
    "numLines",
    "updateNumberOfLinesToDraw",
    "updateLastPacketSize",
    "size",
    "updatePacketFrequencyPlot",
    "resetPlot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSStatsAppENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[9];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[24];
    char stringdata5[9];
    char stringdata6[26];
    char stringdata7[21];
    char stringdata8[5];
    char stringdata9[26];
    char stringdata10[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSStatsAppENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSStatsAppENDCLASS_t qt_meta_stringdata_CLASSStatsAppENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "StatsApp"
        QT_MOC_LITERAL(9, 21),  // "updateReceivedPackets"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 10),  // "numPackets"
        QT_MOC_LITERAL(43, 23),  // "updateNumberOfDrawnLine"
        QT_MOC_LITERAL(67, 8),  // "numLines"
        QT_MOC_LITERAL(76, 25),  // "updateNumberOfLinesToDraw"
        QT_MOC_LITERAL(102, 20),  // "updateLastPacketSize"
        QT_MOC_LITERAL(123, 4),  // "size"
        QT_MOC_LITERAL(128, 25),  // "updatePacketFrequencyPlot"
        QT_MOC_LITERAL(154, 9)   // "resetPlot"
    },
    "StatsApp",
    "updateReceivedPackets",
    "",
    "numPackets",
    "updateNumberOfDrawnLine",
    "numLines",
    "updateNumberOfLinesToDraw",
    "updateLastPacketSize",
    "size",
    "updatePacketFrequencyPlot",
    "resetPlot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStatsAppENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x0a,    1 /* Public */,
       4,    1,   53,    2, 0x0a,    3 /* Public */,
       6,    1,   56,    2, 0x0a,    5 /* Public */,
       7,    1,   59,    2, 0x0a,    7 /* Public */,
       9,    0,   62,    2, 0x0a,    9 /* Public */,
      10,    0,   63,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject StatsApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSStatsAppENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStatsAppENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStatsAppENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StatsApp, std::true_type>,
        // method 'updateReceivedPackets'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateNumberOfDrawnLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateNumberOfLinesToDraw'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateLastPacketSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'updatePacketFrequencyPlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetPlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void StatsApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatsApp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateReceivedPackets((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->updateNumberOfDrawnLine((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->updateNumberOfLinesToDraw((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->updateLastPacketSize((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->updatePacketFrequencyPlot(); break;
        case 5: _t->resetPlot(); break;
        default: ;
        }
    }
}

const QMetaObject *StatsApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatsApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStatsAppENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StatsApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
