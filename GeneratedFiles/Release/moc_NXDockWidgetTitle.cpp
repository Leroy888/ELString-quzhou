/****************************************************************************
** Meta object code from reading C++ file 'NXDockWidgetTitle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../View/NXDockWidgetTitle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NXDockWidgetTitle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NXDockWidgetTitle_t {
    QByteArrayData data[5];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NXDockWidgetTitle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NXDockWidgetTitle_t qt_meta_stringdata_NXDockWidgetTitle = {
    {
QT_MOC_LITERAL(0, 0, 17), // "NXDockWidgetTitle"
QT_MOC_LITERAL(1, 18, 18), // "menuButton_pressed"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "autoHideButton_pressed"
QT_MOC_LITERAL(4, 61, 19) // "closeButton_pressed"

    },
    "NXDockWidgetTitle\0menuButton_pressed\0"
    "\0autoHideButton_pressed\0closeButton_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NXDockWidgetTitle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NXDockWidgetTitle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NXDockWidgetTitle *_t = static_cast<NXDockWidgetTitle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->menuButton_pressed(); break;
        case 1: _t->autoHideButton_pressed(); break;
        case 2: _t->closeButton_pressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NXDockWidgetTitle::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NXDockWidgetTitle::menuButton_pressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NXDockWidgetTitle::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NXDockWidgetTitle::autoHideButton_pressed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NXDockWidgetTitle::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NXDockWidgetTitle::closeButton_pressed)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NXDockWidgetTitle::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_NXDockWidgetTitle.data,
      qt_meta_data_NXDockWidgetTitle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NXDockWidgetTitle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NXDockWidgetTitle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NXDockWidgetTitle.stringdata0))
        return static_cast<void*>(const_cast< NXDockWidgetTitle*>(this));
    return QFrame::qt_metacast(_clname);
}

int NXDockWidgetTitle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void NXDockWidgetTitle::menuButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void NXDockWidgetTitle::autoHideButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void NXDockWidgetTitle::closeButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
