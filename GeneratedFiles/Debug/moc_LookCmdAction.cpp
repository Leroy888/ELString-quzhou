/****************************************************************************
** Meta object code from reading C++ file 'LookCmdAction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../View/LookCmdAction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LookCmdAction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LookCmdAction_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LookCmdAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LookCmdAction_t qt_meta_stringdata_LookCmdAction = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LookCmdAction"
QT_MOC_LITERAL(1, 14, 7), // "sig_cmd"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "nCmd"
QT_MOC_LITERAL(4, 28, 22), // "on_Btn_LOOKDIR_clicked"
QT_MOC_LITERAL(5, 51, 17), // "on_Btn_OK_clicked"
QT_MOC_LITERAL(6, 69, 17) // "on_Btn_NG_clicked"

    },
    "LookCmdAction\0sig_cmd\0\0nCmd\0"
    "on_Btn_LOOKDIR_clicked\0on_Btn_OK_clicked\0"
    "on_Btn_NG_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LookCmdAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LookCmdAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LookCmdAction *_t = static_cast<LookCmdAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_cmd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_Btn_LOOKDIR_clicked(); break;
        case 2: _t->on_Btn_OK_clicked(); break;
        case 3: _t->on_Btn_NG_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LookCmdAction::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LookCmdAction::sig_cmd)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LookCmdAction::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LookCmdAction.data,
      qt_meta_data_LookCmdAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LookCmdAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LookCmdAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LookCmdAction.stringdata0))
        return static_cast<void*>(const_cast< LookCmdAction*>(this));
    return QWidget::qt_metacast(_clname);
}

int LookCmdAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void LookCmdAction::sig_cmd(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
