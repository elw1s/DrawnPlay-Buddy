/****************************************************************************
** Meta object code from reading C++ file 'DrawingApp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DrawingApp.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DrawingApp.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDrawingAppENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDrawingAppENDCLASS = QtMocHelpers::stringData(
    "DrawingApp",
    "drawButtonClicked",
    "",
    "saveImage",
    "setPenStroke",
    "stroke",
    "setEraserTrue",
    "setEraserFalse",
    "resetDrawing",
    "createStyledButton",
    "QPushButton*",
    "icon",
    "size",
    "textColor",
    "borderColor",
    "QWidget*",
    "parent",
    "robotDrawingSignal",
    "status",
    "setColors",
    "colorArr"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDrawingAppENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[13];
    char stringdata5[7];
    char stringdata6[14];
    char stringdata7[15];
    char stringdata8[13];
    char stringdata9[19];
    char stringdata10[13];
    char stringdata11[5];
    char stringdata12[5];
    char stringdata13[10];
    char stringdata14[12];
    char stringdata15[9];
    char stringdata16[7];
    char stringdata17[19];
    char stringdata18[7];
    char stringdata19[10];
    char stringdata20[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDrawingAppENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDrawingAppENDCLASS_t qt_meta_stringdata_CLASSDrawingAppENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "DrawingApp"
        QT_MOC_LITERAL(11, 17),  // "drawButtonClicked"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 9),  // "saveImage"
        QT_MOC_LITERAL(40, 12),  // "setPenStroke"
        QT_MOC_LITERAL(53, 6),  // "stroke"
        QT_MOC_LITERAL(60, 13),  // "setEraserTrue"
        QT_MOC_LITERAL(74, 14),  // "setEraserFalse"
        QT_MOC_LITERAL(89, 12),  // "resetDrawing"
        QT_MOC_LITERAL(102, 18),  // "createStyledButton"
        QT_MOC_LITERAL(121, 12),  // "QPushButton*"
        QT_MOC_LITERAL(134, 4),  // "icon"
        QT_MOC_LITERAL(139, 4),  // "size"
        QT_MOC_LITERAL(144, 9),  // "textColor"
        QT_MOC_LITERAL(154, 11),  // "borderColor"
        QT_MOC_LITERAL(166, 8),  // "QWidget*"
        QT_MOC_LITERAL(175, 6),  // "parent"
        QT_MOC_LITERAL(182, 18),  // "robotDrawingSignal"
        QT_MOC_LITERAL(201, 6),  // "status"
        QT_MOC_LITERAL(208, 9),  // "setColors"
        QT_MOC_LITERAL(218, 8)   // "colorArr"
    },
    "DrawingApp",
    "drawButtonClicked",
    "",
    "saveImage",
    "setPenStroke",
    "stroke",
    "setEraserTrue",
    "setEraserFalse",
    "resetDrawing",
    "createStyledButton",
    "QPushButton*",
    "icon",
    "size",
    "textColor",
    "borderColor",
    "QWidget*",
    "parent",
    "robotDrawingSignal",
    "status",
    "setColors",
    "colorArr"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDrawingAppENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    1,   70,    2, 0x08,    3 /* Private */,
       6,    0,   73,    2, 0x08,    5 /* Private */,
       7,    0,   74,    2, 0x08,    6 /* Private */,
       8,    0,   75,    2, 0x08,    7 /* Private */,
       9,    5,   76,    2, 0x08,    8 /* Private */,
      17,    1,   87,    2, 0x0a,   14 /* Public */,
      19,    1,   90,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 10, QMetaType::QIcon, QMetaType::QSize, QMetaType::QString, QMetaType::QString, 0x80000000 | 15,   11,   12,   13,   14,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::QStringList,   20,

       0        // eod
};

Q_CONSTINIT const QMetaObject DrawingApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSDrawingAppENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDrawingAppENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDrawingAppENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DrawingApp, std::true_type>,
        // method 'drawButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPenStroke'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setEraserTrue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setEraserFalse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetDrawing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createStyledButton'
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'robotDrawingSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'setColors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QString> &, std::false_type>
    >,
    nullptr
} };

void DrawingApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrawingApp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->drawButtonClicked(); break;
        case 1: _t->saveImage(); break;
        case 2: _t->setPenStroke((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setEraserTrue(); break;
        case 4: _t->setEraserFalse(); break;
        case 5: _t->resetDrawing(); break;
        case 6: { QPushButton* _r = _t->createStyledButton((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPushButton**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->robotDrawingSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setColors((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrawingApp::*)();
            if (_t _q_method = &DrawingApp::drawButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *DrawingApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawingApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDrawingAppENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DrawingApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void DrawingApp::drawButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
