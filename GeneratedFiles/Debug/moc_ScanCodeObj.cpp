/****************************************************************************
** Meta object code from reading C++ file 'ScanCodeObj.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Model/ScanCodeObj.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScanCodeObj.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScanCodeObj_t {
    QByteArrayData data[6];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScanCodeObj_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScanCodeObj_t qt_meta_stringdata_ScanCodeObj = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ScanCodeObj"
QT_MOC_LITERAL(1, 12, 8), // "Sig_Code"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "codeBar"
QT_MOC_LITERAL(4, 30, 9), // "slot_Data"
QT_MOC_LITERAL(5, 40, 12) // "slot_TimeOut"

    },
    "ScanCodeObj\0Sig_Code\0\0codeBar\0slot_Data\0"
    "slot_TimeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScanCodeObj[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScanCodeObj::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScanCodeObj *_t = static_cast<ScanCodeObj *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Sig_Code((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->slot_Data(); break;
        case 2: _t->slot_TimeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScanCodeObj::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScanCodeObj::Sig_Code)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ScanCodeObj::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScanCodeObj.data,
      qt_meta_data_ScanCodeObj,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScanCodeObj::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScanCodeObj::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScanCodeObj.stringdata0))
        return static_cast<void*>(const_cast< ScanCodeObj*>(this));
    return QObject::qt_metacast(_clname);
}

int ScanCodeObj::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ScanCodeObj::Sig_Code(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
