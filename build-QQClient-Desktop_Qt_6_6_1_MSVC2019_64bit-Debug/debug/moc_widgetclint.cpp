/****************************************************************************
** Meta object code from reading C++ file 'widgetclint.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QQClient/widgetclint.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetclint.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSwidgetclintENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSwidgetclintENDCLASS = QtMocHelpers::stringData(
    "widgetclint",
    "closesocket",
    "",
    "setmsg",
    "beginchat2",
    "on_pBclose_clicked",
    "on_pBsend_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSwidgetclintENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[11];
    char stringdata5[19];
    char stringdata6[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSwidgetclintENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSwidgetclintENDCLASS_t qt_meta_stringdata_CLASSwidgetclintENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "widgetclint"
        QT_MOC_LITERAL(12, 11),  // "closesocket"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 6),  // "setmsg"
        QT_MOC_LITERAL(32, 10),  // "beginchat2"
        QT_MOC_LITERAL(43, 18),  // "on_pBclose_clicked"
        QT_MOC_LITERAL(62, 17)   // "on_pBsend_clicked"
    },
    "widgetclint",
    "closesocket",
    "",
    "setmsg",
    "beginchat2",
    "on_pBclose_clicked",
    "on_pBsend_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSwidgetclintENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    0,   46,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject widgetclint::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSwidgetclintENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSwidgetclintENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSwidgetclintENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<widgetclint, std::true_type>,
        // method 'closesocket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setmsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'beginchat2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pBclose_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pBsend_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void widgetclint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<widgetclint *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closesocket(); break;
        case 1: _t->setmsg(); break;
        case 2: _t->beginchat2(); break;
        case 3: _t->on_pBclose_clicked(); break;
        case 4: _t->on_pBsend_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (widgetclint::*)();
            if (_t _q_method = &widgetclint::closesocket; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (widgetclint::*)();
            if (_t _q_method = &widgetclint::setmsg; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (widgetclint::*)();
            if (_t _q_method = &widgetclint::beginchat2; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *widgetclint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *widgetclint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSwidgetclintENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int widgetclint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void widgetclint::closesocket()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void widgetclint::setmsg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void widgetclint::beginchat2()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
