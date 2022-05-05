/****************************************************************************
** Meta object code from reading C++ file 'engine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../engine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'engine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_engine_t {
    QByteArrayData data[21];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_engine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_engine_t qt_meta_stringdata_engine = {
    {
QT_MOC_LITERAL(0, 0, 6), // "engine"
QT_MOC_LITERAL(1, 7, 13), // "pincodeFromUI"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 16), // "resetTimerSignal"
QT_MOC_LITERAL(4, 39, 15), // "cancelPINSignal"
QT_MOC_LITERAL(5, 55, 15), // "resetLoginTimer"
QT_MOC_LITERAL(6, 71, 12), // "updateScreen"
QT_MOC_LITERAL(7, 84, 12), // "cardLockInfo"
QT_MOC_LITERAL(8, 97, 13), // "on_a1_clicked"
QT_MOC_LITERAL(9, 111, 13), // "on_a2_clicked"
QT_MOC_LITERAL(10, 125, 13), // "on_a3_clicked"
QT_MOC_LITERAL(11, 139, 13), // "on_a4_clicked"
QT_MOC_LITERAL(12, 153, 13), // "on_a5_clicked"
QT_MOC_LITERAL(13, 167, 13), // "on_a6_clicked"
QT_MOC_LITERAL(14, 181, 13), // "on_a7_clicked"
QT_MOC_LITERAL(15, 195, 13), // "on_a8_clicked"
QT_MOC_LITERAL(16, 209, 13), // "on_a9_clicked"
QT_MOC_LITERAL(17, 223, 13), // "on_a0_clicked"
QT_MOC_LITERAL(18, 237, 16), // "on_clear_clicked"
QT_MOC_LITERAL(19, 254, 16), // "on_enter_clicked"
QT_MOC_LITERAL(20, 271, 17) // "on_cancel_clicked"

    },
    "engine\0pincodeFromUI\0\0resetTimerSignal\0"
    "cancelPINSignal\0resetLoginTimer\0"
    "updateScreen\0cardLockInfo\0on_a1_clicked\0"
    "on_a2_clicked\0on_a3_clicked\0on_a4_clicked\0"
    "on_a5_clicked\0on_a6_clicked\0on_a7_clicked\0"
    "on_a8_clicked\0on_a9_clicked\0on_a0_clicked\0"
    "on_clear_clicked\0on_enter_clicked\0"
    "on_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_engine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  112,    2, 0x0a /* Public */,
       6,    0,  113,    2, 0x0a /* Public */,
       7,    0,  114,    2, 0x0a /* Public */,
       8,    0,  115,    2, 0x08 /* Private */,
       9,    0,  116,    2, 0x08 /* Private */,
      10,    0,  117,    2, 0x08 /* Private */,
      11,    0,  118,    2, 0x08 /* Private */,
      12,    0,  119,    2, 0x08 /* Private */,
      13,    0,  120,    2, 0x08 /* Private */,
      14,    0,  121,    2, 0x08 /* Private */,
      15,    0,  122,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void engine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<engine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pincodeFromUI(); break;
        case 1: _t->resetTimerSignal(); break;
        case 2: _t->cancelPINSignal(); break;
        case 3: _t->resetLoginTimer(); break;
        case 4: _t->updateScreen(); break;
        case 5: _t->cardLockInfo(); break;
        case 6: _t->on_a1_clicked(); break;
        case 7: _t->on_a2_clicked(); break;
        case 8: _t->on_a3_clicked(); break;
        case 9: _t->on_a4_clicked(); break;
        case 10: _t->on_a5_clicked(); break;
        case 11: _t->on_a6_clicked(); break;
        case 12: _t->on_a7_clicked(); break;
        case 13: _t->on_a8_clicked(); break;
        case 14: _t->on_a9_clicked(); break;
        case 15: _t->on_a0_clicked(); break;
        case 16: _t->on_clear_clicked(); break;
        case 17: _t->on_enter_clicked(); break;
        case 18: _t->on_cancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (engine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&engine::pincodeFromUI)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (engine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&engine::resetTimerSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (engine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&engine::cancelPINSignal)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject engine::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_engine.data,
    qt_meta_data_engine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *engine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *engine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_engine.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int engine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void engine::pincodeFromUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void engine::resetTimerSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void engine::cancelPINSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
