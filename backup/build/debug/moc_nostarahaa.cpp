/****************************************************************************
** Meta object code from reading C++ file 'nostarahaa.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../nostarahaa.h"
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
    char stringdata0[168];
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
QT_MOC_LITERAL(4, 59, 5), // "Summa"
QT_MOC_LITERAL(5, 65, 19), // "on_btn40Eur_clicked"
QT_MOC_LITERAL(6, 85, 19), // "on_btn60Eur_clicked"
QT_MOC_LITERAL(7, 105, 20), // "on_btn100Eur_clicked"
QT_MOC_LITERAL(8, 126, 20), // "on_btn200Eur_clicked"
QT_MOC_LITERAL(9, 147, 20) // "on_btn500Eur_clicked"

    },
    "nostarahaa\0on_palaaNostarahaa_clicked\0"
    "\0on_btn20Eur_clicked\0Summa\0"
    "on_btn40Eur_clicked\0on_btn60Eur_clicked\0"
    "on_btn100Eur_clicked\0on_btn200Eur_clicked\0"
    "on_btn500Eur_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nostarahaa[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       6,    1,   56,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
       9,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void nostarahaa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<nostarahaa *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_palaaNostarahaa_clicked(); break;
        case 1: _t->on_btn20Eur_clicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_btn40Eur_clicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_btn60Eur_clicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_btn100Eur_clicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_btn200Eur_clicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_btn500Eur_clicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
