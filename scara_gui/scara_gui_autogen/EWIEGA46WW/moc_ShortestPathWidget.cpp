/****************************************************************************
** Meta object code from reading C++ file 'ShortestPathWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ShortestPathWidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShortestPathWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSShortestPathWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSShortestPathWidgetENDCLASS = QtMocHelpers::stringData(
    "ShortestPathWidget",
    "onCellClicked",
    "",
    "onNumberSelected",
    "number",
    "findDestinationPosition",
    "std::pair<int,int>",
    "findStartPosition",
    "resetGrid"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSShortestPathWidgetENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[19];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[7];
    char stringdata5[24];
    char stringdata6[19];
    char stringdata7[18];
    char stringdata8[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSShortestPathWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSShortestPathWidgetENDCLASS_t qt_meta_stringdata_CLASSShortestPathWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "ShortestPathWidget"
        QT_MOC_LITERAL(19, 13),  // "onCellClicked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 16),  // "onNumberSelected"
        QT_MOC_LITERAL(51, 6),  // "number"
        QT_MOC_LITERAL(58, 23),  // "findDestinationPosition"
        QT_MOC_LITERAL(82, 18),  // "std::pair<int,int>"
        QT_MOC_LITERAL(101, 17),  // "findStartPosition"
        QT_MOC_LITERAL(119, 9)   // "resetGrid"
    },
    "ShortestPathWidget",
    "onCellClicked",
    "",
    "onNumberSelected",
    "number",
    "findDestinationPosition",
    "std::pair<int,int>",
    "findStartPosition",
    "resetGrid"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSShortestPathWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    1,   45,    2, 0x0a,    2 /* Public */,
       5,    0,   48,    2, 0x0a,    4 /* Public */,
       7,    0,   49,    2, 0x0a,    5 /* Public */,
       8,    0,   50,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    0x80000000 | 6,
    0x80000000 | 6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ShortestPathWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSShortestPathWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSShortestPathWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSShortestPathWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShortestPathWidget, std::true_type>,
        // method 'onCellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNumberSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'findDestinationPosition'
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        // method 'findStartPosition'
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        // method 'resetGrid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ShortestPathWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShortestPathWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCellClicked(); break;
        case 1: _t->onNumberSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: { std::pair<int,int> _r = _t->findDestinationPosition();
            if (_a[0]) *reinterpret_cast< std::pair<int,int>*>(_a[0]) = std::move(_r); }  break;
        case 3: { std::pair<int,int> _r = _t->findStartPosition();
            if (_a[0]) *reinterpret_cast< std::pair<int,int>*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->resetGrid(); break;
        default: ;
        }
    }
}

const QMetaObject *ShortestPathWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortestPathWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSShortestPathWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ShortestPathWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
