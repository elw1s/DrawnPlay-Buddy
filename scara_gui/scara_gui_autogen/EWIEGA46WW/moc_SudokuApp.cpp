/****************************************************************************
** Meta object code from reading C++ file 'SudokuApp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SudokuApp.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SudokuApp.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSudokuAppENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSudokuAppENDCLASS = QtMocHelpers::stringData(
    "SudokuApp",
    "drawButtonClicked",
    "",
    "onNumberButtonClicked",
    "onSolveButtonClicked",
    "onResetButtonClicked",
    "robotDrawingSignal",
    "status"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSudokuAppENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[10];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[21];
    char stringdata5[21];
    char stringdata6[19];
    char stringdata7[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSudokuAppENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSudokuAppENDCLASS_t qt_meta_stringdata_CLASSSudokuAppENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "SudokuApp"
        QT_MOC_LITERAL(10, 17),  // "drawButtonClicked"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 21),  // "onNumberButtonClicked"
        QT_MOC_LITERAL(51, 20),  // "onSolveButtonClicked"
        QT_MOC_LITERAL(72, 20),  // "onResetButtonClicked"
        QT_MOC_LITERAL(93, 18),  // "robotDrawingSignal"
        QT_MOC_LITERAL(112, 6)   // "status"
    },
    "SudokuApp",
    "drawButtonClicked",
    "",
    "onNumberButtonClicked",
    "onSolveButtonClicked",
    "onResetButtonClicked",
    "robotDrawingSignal",
    "status"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSudokuAppENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    1,   48,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject SudokuApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSSudokuAppENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSudokuAppENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSudokuAppENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SudokuApp, std::true_type>,
        // method 'drawButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNumberButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSolveButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResetButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'robotDrawingSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>
    >,
    nullptr
} };

void SudokuApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SudokuApp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->drawButtonClicked(); break;
        case 1: _t->onNumberButtonClicked(); break;
        case 2: _t->onSolveButtonClicked(); break;
        case 3: _t->onResetButtonClicked(); break;
        case 4: _t->robotDrawingSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SudokuApp::*)();
            if (_t _q_method = &SudokuApp::drawButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SudokuApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SudokuApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSudokuAppENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SudokuApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SudokuApp::drawButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
