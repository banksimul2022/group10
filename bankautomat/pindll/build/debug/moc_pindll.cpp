/****************************************************************************
** Meta object code from reading C++ file 'pindll.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../pindll.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pindll.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Pindll_t {
    QByteArrayData data[12];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pindll_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pindll_t qt_meta_stringdata_Pindll = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Pindll"
QT_MOC_LITERAL(1, 7, 13), // "signalPincode"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 21), // "resetLoginTimerSignal"
QT_MOC_LITERAL(4, 44, 18), // "cancelPincodeLogin"
QT_MOC_LITERAL(5, 63, 12), // "wrongPinToUI"
QT_MOC_LITERAL(6, 76, 12), // "cardLockToUI"
QT_MOC_LITERAL(7, 89, 11), // "pincodeSlot"
QT_MOC_LITERAL(8, 101, 24), // "receiveTimerSignalFromUI"
QT_MOC_LITERAL(9, 126, 16), // "receiveCancelPin"
QT_MOC_LITERAL(10, 143, 11), // "exeVaaraPin"
QT_MOC_LITERAL(11, 155, 24) // "exeKortinLukitusVaroitus"

    },
    "Pindll\0signalPincode\0\0resetLoginTimerSignal\0"
    "cancelPincodeLogin\0wrongPinToUI\0"
    "cardLockToUI\0pincodeSlot\0"
    "receiveTimerSignalFromUI\0receiveCancelPin\0"
    "exeVaaraPin\0exeKortinLukitusVaroitus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pindll[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    0,   67,    2, 0x06 /* Public */,
       4,    0,   68,    2, 0x06 /* Public */,
       5,    0,   69,    2, 0x06 /* Public */,
       6,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   71,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    0,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Pindll::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Pindll *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalPincode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->resetLoginTimerSignal(); break;
        case 2: _t->cancelPincodeLogin(); break;
        case 3: _t->wrongPinToUI(); break;
        case 4: _t->cardLockToUI(); break;
        case 5: _t->pincodeSlot(); break;
        case 6: _t->receiveTimerSignalFromUI(); break;
        case 7: _t->receiveCancelPin(); break;
        case 8: _t->exeVaaraPin(); break;
        case 9: _t->exeKortinLukitusVaroitus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Pindll::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pindll::signalPincode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Pindll::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pindll::resetLoginTimerSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Pindll::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pindll::cancelPincodeLogin)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Pindll::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pindll::wrongPinToUI)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Pindll::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pindll::cardLockToUI)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Pindll::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Pindll.data,
    qt_meta_data_Pindll,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Pindll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pindll::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Pindll.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Pindll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Pindll::signalPincode(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pindll::resetLoginTimerSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Pindll::cancelPincodeLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Pindll::wrongPinToUI()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Pindll::cardLockToUI()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
