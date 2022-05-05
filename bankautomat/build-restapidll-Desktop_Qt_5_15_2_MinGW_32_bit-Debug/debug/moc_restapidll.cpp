/****************************************************************************
** Meta object code from reading C++ file 'restapidll.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../restapidll/restapidll.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'restapidll.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Restapidll_t {
    QByteArrayData data[18];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Restapidll_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Restapidll_t qt_meta_stringdata_Restapidll = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Restapidll"
QT_MOC_LITERAL(1, 11, 10), // "saldoToExe"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "loginSignal"
QT_MOC_LITERAL(4, 35, 10), // "summaToExe"
QT_MOC_LITERAL(5, 46, 9), // "TT10ToExe"
QT_MOC_LITERAL(6, 56, 8), // "TT5ToExe"
QT_MOC_LITERAL(7, 65, 11), // "TT5ekaToExe"
QT_MOC_LITERAL(8, 77, 9), // "nimiToExe"
QT_MOC_LITERAL(9, 87, 12), // "getSaldoSlot"
QT_MOC_LITERAL(10, 100, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 115, 5), // "reply"
QT_MOC_LITERAL(12, 121, 9), // "loginSlot"
QT_MOC_LITERAL(13, 131, 9), // "nostoSlot"
QT_MOC_LITERAL(14, 141, 11), // "getTT10Slot"
QT_MOC_LITERAL(15, 153, 10), // "getTT5Slot"
QT_MOC_LITERAL(16, 164, 13), // "getTT5ekaSlot"
QT_MOC_LITERAL(17, 178, 11) // "getNimiSlot"

    },
    "Restapidll\0saldoToExe\0\0loginSignal\0"
    "summaToExe\0TT10ToExe\0TT5ToExe\0TT5ekaToExe\0"
    "nimiToExe\0getSaldoSlot\0QNetworkReply*\0"
    "reply\0loginSlot\0nostoSlot\0getTT10Slot\0"
    "getTT5Slot\0getTT5ekaSlot\0getNimiSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Restapidll[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    1,   90,    2, 0x06 /* Public */,
       5,    1,   93,    2, 0x06 /* Public */,
       6,    1,   96,    2, 0x06 /* Public */,
       7,    1,   99,    2, 0x06 /* Public */,
       8,    1,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  105,    2, 0x08 /* Private */,
      12,    1,  108,    2, 0x08 /* Private */,
      13,    1,  111,    2, 0x08 /* Private */,
      14,    1,  114,    2, 0x08 /* Private */,
      15,    1,  117,    2, 0x08 /* Private */,
      16,    1,  120,    2, 0x08 /* Private */,
      17,    1,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void Restapidll::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Restapidll *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saldoToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->loginSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->summaToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->TT10ToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->TT5ToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->TT5ekaToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->nimiToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->getSaldoSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->loginSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->nostoSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->getTT10Slot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->getTT5Slot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->getTT5ekaSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->getNimiSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Restapidll::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Restapidll::saldoToExe)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Restapidll::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Restapidll::loginSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Restapidll::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Restapidll::summaToExe)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Restapidll::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Restapidll::TT10ToExe)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Restapidll::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Restapidll::TT5ToExe)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Restapidll::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Restapidll::TT5ekaToExe)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Restapidll::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Restapidll::nimiToExe)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Restapidll::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Restapidll.data,
    qt_meta_data_Restapidll,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Restapidll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Restapidll::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Restapidll.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Restapidll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Restapidll::saldoToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Restapidll::loginSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Restapidll::summaToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Restapidll::TT10ToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Restapidll::TT5ToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Restapidll::TT5ekaToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Restapidll::nimiToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
