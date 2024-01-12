/****************************************************************************
** Meta object code from reading C++ file 'RobotMainMenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scara_gui/RobotMainMenu.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobotMainMenu.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRobotMainMenuENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRobotMainMenuENDCLASS = QtMocHelpers::stringData(
    "RobotMainMenu",
    "drawingStatus",
    "",
    "status",
    "stats_received_packet_num",
    "received_packet_num",
    "stats_last_packet_size",
    "last_packet_size",
    "stats_number_of_drawn_line",
    "number_of_drawn_line",
    "stats_number_of_lines_to_draw",
    "number_of_lines_to_draw",
    "sendServoAngles",
    "angle_1",
    "angle_2",
    "angle_3",
    "setServerInfo",
    "ip",
    "port",
    "setColors",
    "colorArr",
    "disconnectFromServer",
    "initializeServerListener",
    "showLoadingBar",
    "value",
    "setTotalLineNumber",
    "totalLineNumber",
    "defaultButtonClicked",
    "setButtonClicked",
    "robotDrawingSignal",
    "stats_received_packet_num_slot",
    "stats_last_packet_size_slot",
    "stats_number_of_drawn_line_slot",
    "stats_number_of_lines_to_draw_slot",
    "stagesTextLabel"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRobotMainMenuENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[14];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[26];
    char stringdata5[20];
    char stringdata6[23];
    char stringdata7[17];
    char stringdata8[27];
    char stringdata9[21];
    char stringdata10[30];
    char stringdata11[24];
    char stringdata12[16];
    char stringdata13[8];
    char stringdata14[8];
    char stringdata15[8];
    char stringdata16[14];
    char stringdata17[3];
    char stringdata18[5];
    char stringdata19[10];
    char stringdata20[9];
    char stringdata21[21];
    char stringdata22[25];
    char stringdata23[15];
    char stringdata24[6];
    char stringdata25[19];
    char stringdata26[16];
    char stringdata27[21];
    char stringdata28[17];
    char stringdata29[19];
    char stringdata30[31];
    char stringdata31[28];
    char stringdata32[32];
    char stringdata33[35];
    char stringdata34[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRobotMainMenuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRobotMainMenuENDCLASS_t qt_meta_stringdata_CLASSRobotMainMenuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "RobotMainMenu"
        QT_MOC_LITERAL(14, 13),  // "drawingStatus"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 6),  // "status"
        QT_MOC_LITERAL(36, 25),  // "stats_received_packet_num"
        QT_MOC_LITERAL(62, 19),  // "received_packet_num"
        QT_MOC_LITERAL(82, 22),  // "stats_last_packet_size"
        QT_MOC_LITERAL(105, 16),  // "last_packet_size"
        QT_MOC_LITERAL(122, 26),  // "stats_number_of_drawn_line"
        QT_MOC_LITERAL(149, 20),  // "number_of_drawn_line"
        QT_MOC_LITERAL(170, 29),  // "stats_number_of_lines_to_draw"
        QT_MOC_LITERAL(200, 23),  // "number_of_lines_to_draw"
        QT_MOC_LITERAL(224, 15),  // "sendServoAngles"
        QT_MOC_LITERAL(240, 7),  // "angle_1"
        QT_MOC_LITERAL(248, 7),  // "angle_2"
        QT_MOC_LITERAL(256, 7),  // "angle_3"
        QT_MOC_LITERAL(264, 13),  // "setServerInfo"
        QT_MOC_LITERAL(278, 2),  // "ip"
        QT_MOC_LITERAL(281, 4),  // "port"
        QT_MOC_LITERAL(286, 9),  // "setColors"
        QT_MOC_LITERAL(296, 8),  // "colorArr"
        QT_MOC_LITERAL(305, 20),  // "disconnectFromServer"
        QT_MOC_LITERAL(326, 24),  // "initializeServerListener"
        QT_MOC_LITERAL(351, 14),  // "showLoadingBar"
        QT_MOC_LITERAL(366, 5),  // "value"
        QT_MOC_LITERAL(372, 18),  // "setTotalLineNumber"
        QT_MOC_LITERAL(391, 15),  // "totalLineNumber"
        QT_MOC_LITERAL(407, 20),  // "defaultButtonClicked"
        QT_MOC_LITERAL(428, 16),  // "setButtonClicked"
        QT_MOC_LITERAL(445, 18),  // "robotDrawingSignal"
        QT_MOC_LITERAL(464, 30),  // "stats_received_packet_num_slot"
        QT_MOC_LITERAL(495, 27),  // "stats_last_packet_size_slot"
        QT_MOC_LITERAL(523, 31),  // "stats_number_of_drawn_line_slot"
        QT_MOC_LITERAL(555, 34),  // "stats_number_of_lines_to_draw..."
        QT_MOC_LITERAL(590, 15)   // "stagesTextLabel"
    },
    "RobotMainMenu",
    "drawingStatus",
    "",
    "status",
    "stats_received_packet_num",
    "received_packet_num",
    "stats_last_packet_size",
    "last_packet_size",
    "stats_number_of_drawn_line",
    "number_of_drawn_line",
    "stats_number_of_lines_to_draw",
    "number_of_lines_to_draw",
    "sendServoAngles",
    "angle_1",
    "angle_2",
    "angle_3",
    "setServerInfo",
    "ip",
    "port",
    "setColors",
    "colorArr",
    "disconnectFromServer",
    "initializeServerListener",
    "showLoadingBar",
    "value",
    "setTotalLineNumber",
    "totalLineNumber",
    "defaultButtonClicked",
    "setButtonClicked",
    "robotDrawingSignal",
    "stats_received_packet_num_slot",
    "stats_last_packet_size_slot",
    "stats_number_of_drawn_line_slot",
    "stats_number_of_lines_to_draw_slot",
    "stagesTextLabel"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRobotMainMenuENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  134,    2, 0x06,    1 /* Public */,
       4,    1,  137,    2, 0x06,    3 /* Public */,
       6,    1,  140,    2, 0x06,    5 /* Public */,
       8,    1,  143,    2, 0x06,    7 /* Public */,
      10,    1,  146,    2, 0x06,    9 /* Public */,
      12,    3,  149,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    2,  156,    2, 0x0a,   15 /* Public */,
      19,    1,  161,    2, 0x0a,   18 /* Public */,
      21,    0,  164,    2, 0x0a,   20 /* Public */,
      22,    0,  165,    2, 0x0a,   21 /* Public */,
      23,    1,  166,    2, 0x0a,   22 /* Public */,
      25,    1,  169,    2, 0x0a,   24 /* Public */,
      27,    0,  172,    2, 0x0a,   26 /* Public */,
      28,    0,  173,    2, 0x0a,   27 /* Public */,
      29,    1,  174,    2, 0x0a,   28 /* Public */,
      30,    1,  177,    2, 0x0a,   30 /* Public */,
      31,    1,  180,    2, 0x0a,   32 /* Public */,
      32,    1,  183,    2, 0x0a,   34 /* Public */,
      33,    1,  186,    2, 0x0a,   36 /* Public */,
      34,    1,  189,    2, 0x0a,   38 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   13,   14,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::QStringList,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   24,

       0        // eod
};

Q_CONSTINIT const QMetaObject RobotMainMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSRobotMainMenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRobotMainMenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRobotMainMenuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RobotMainMenu, std::true_type>,
        // method 'drawingStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'stats_received_packet_num'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'stats_last_packet_size'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double, std::false_type>,
        // method 'stats_number_of_drawn_line'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'stats_number_of_lines_to_draw'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'sendServoAngles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double, std::false_type>,
        // method 'setServerInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setColors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QString> &, std::false_type>,
        // method 'disconnectFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initializeServerListener'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showLoadingBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setTotalLineNumber'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'defaultButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'robotDrawingSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'stats_received_packet_num_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'stats_last_packet_size_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double, std::false_type>,
        // method 'stats_number_of_drawn_line_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'stats_number_of_lines_to_draw_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'stagesTextLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void RobotMainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobotMainMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->drawingStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->stats_received_packet_num((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->stats_last_packet_size((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->stats_number_of_drawn_line((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->stats_number_of_lines_to_draw((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->sendServoAngles((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 6: _t->setServerInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->setColors((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 8: _t->disconnectFromServer(); break;
        case 9: _t->initializeServerListener(); break;
        case 10: _t->showLoadingBar((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->setTotalLineNumber((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->defaultButtonClicked(); break;
        case 13: _t->setButtonClicked(); break;
        case 14: _t->robotDrawingSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->stats_received_packet_num_slot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->stats_last_packet_size_slot((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 17: _t->stats_number_of_drawn_line_slot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->stats_number_of_lines_to_draw_slot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->stagesTextLabel((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RobotMainMenu::*)(const bool );
            if (_t _q_method = &RobotMainMenu::drawingStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RobotMainMenu::*)(const int );
            if (_t _q_method = &RobotMainMenu::stats_received_packet_num; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RobotMainMenu::*)(const double );
            if (_t _q_method = &RobotMainMenu::stats_last_packet_size; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RobotMainMenu::*)(const int );
            if (_t _q_method = &RobotMainMenu::stats_number_of_drawn_line; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RobotMainMenu::*)(const int );
            if (_t _q_method = &RobotMainMenu::stats_number_of_lines_to_draw; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RobotMainMenu::*)(const double , const double , const double );
            if (_t _q_method = &RobotMainMenu::sendServoAngles; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *RobotMainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobotMainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRobotMainMenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RobotMainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void RobotMainMenu::drawingStatus(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RobotMainMenu::stats_received_packet_num(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RobotMainMenu::stats_last_packet_size(const double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RobotMainMenu::stats_number_of_drawn_line(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RobotMainMenu::stats_number_of_lines_to_draw(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RobotMainMenu::sendServoAngles(const double _t1, const double _t2, const double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
