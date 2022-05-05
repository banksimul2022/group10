/****************************************************************************
** Meta object code from reading C++ file 'nostarahaa.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bankautomat/nostarahaa.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nostarahaa.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nostarahaa_t {
    QByteArrayData data[10];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nostarahaa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nostarahaa_t qt_meta_stringdata_nostarahaa = {
    {
QT_MOC_LITERAL(0, 0, 10), // "nostarahaa"
QT_MOC_LITERAL(1, 11, 26), // "on_palaaNostarahaa_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "on_btn20Eur_clicked"
QT_MOC_LITERAL(4, 59, 19), // "on_btn40Eur_clicked"
QT_MOC_LITERAL(5, 79, 19), // "on_btn60Eur_clicked"
QT_MOC_LITERAL(6, 99, 20), // "on_btn100Eur_clicked"
QT_MOC_LITERAL(7, 120, 20), // "on_btn200Eur_clicked"
QT_MOC_LITERAL(8, 141, 20), // "on_btn500Eur_clicked"
QT_MOC_LITERAL(9, 162, 9) // "slotNosto"

    },
    "nostarahaa\0on_palaaNostarahaa_clicked\0"
    "\0on_btn20Eur_clicked\0on_btn40Eur_clicked\0"
    "on_btn60Eur_clicked\0on_btn100Eur_clicked\0"
    "on_btn200Eur_clicked\0on_btn500Eur_clicked\0"
    "slotNosto"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nostarahaa[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void nostarahaa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<nostarahaa *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_palaaNostarahaa_clicked(); break;
        case 1: _t->on_btn20Eur_clicked(); break;
        case 2: _t->on_btn40Eur_clicked(); break;
        case 3: _t->on_btn60Eur_clicked(); break;
        case 4: _t->on_btn100Eur_clicked(); break;
        case 5: _t->on_btn200Eur_clicked(); break;
        case 6: _t->on_btn500Eur_clicked(); break;
        case 7: _t->slotNosto((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject nostarahaa::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_nostarahaa.data,
    qt_meta_data_nostarahaa,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *nostarahaa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nostarahaa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nostarahaa.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int nostarahaa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
