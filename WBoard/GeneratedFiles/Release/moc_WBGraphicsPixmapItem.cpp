/****************************************************************************
** Meta object code from reading C++ file 'WBGraphicsPixmapItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/domain/WBGraphicsPixmapItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBGraphicsPixmapItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBGraphicsPixmapItem_t {
    QByteArrayData data[2];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsPixmapItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsPixmapItem_t qt_meta_stringdata_WBGraphicsPixmapItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WBGraphicsPixmapItem"
QT_MOC_LITERAL(1, 21, 7) // "opacity"

    },
    "WBGraphicsPixmapItem\0opacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsPixmapItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095103,

       0        // eod
};

void WBGraphicsPixmapItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WBGraphicsPixmapItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->opacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WBGraphicsPixmapItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsPixmapItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsPixmapItem.data,
    qt_meta_data_WBGraphicsPixmapItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsPixmapItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsPixmapItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsPixmapItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(this);
    if (!strcmp(_clname, "WBItem"))
        return static_cast< WBItem*>(this);
    if (!strcmp(_clname, "WBGraphicsItem"))
        return static_cast< WBGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int WBGraphicsPixmapItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
