/****************************************************************************
** Meta object code from reading C++ file 'WBDownloadThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/core/WBDownloadThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDownloadThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDownloadThread_t {
    QByteArrayData data[10];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDownloadThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDownloadThread_t qt_meta_stringdata_WBDownloadThread = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WBDownloadThread"
QT_MOC_LITERAL(1, 17, 15), // "downloadFinised"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 2), // "id"
QT_MOC_LITERAL(4, 37, 16), // "downloadProgress"
QT_MOC_LITERAL(5, 54, 7), // "current"
QT_MOC_LITERAL(6, 62, 5), // "total"
QT_MOC_LITERAL(7, 68, 18), // "onDownloadProgress"
QT_MOC_LITERAL(8, 87, 8), // "received"
QT_MOC_LITERAL(9, 96, 18) // "onDownloadFinished"

    },
    "WBDownloadThread\0downloadFinised\0\0id\0"
    "downloadProgress\0current\0total\0"
    "onDownloadProgress\0received\0"
    "onDownloadFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDownloadThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    3,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   44,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    3,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    6,
    QMetaType::Void,

       0        // eod
};

void WBDownloadThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDownloadThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadFinised((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 2: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->onDownloadFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDownloadThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadThread::downloadFinised)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDownloadThread::*)(int , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadThread::downloadProgress)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDownloadThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_WBDownloadThread.data,
    qt_meta_data_WBDownloadThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDownloadThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDownloadThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDownloadThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int WBDownloadThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void WBDownloadThread::downloadFinised(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBDownloadThread::downloadProgress(int _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
