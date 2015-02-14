/****************************************************************************
** Meta object code from reading C++ file 'asy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../asy/asy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_asy_t {
    QByteArrayData data[8];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_asy_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_asy_t qt_meta_stringdata_asy = {
    {
QT_MOC_LITERAL(0, 0, 3),
QT_MOC_LITERAL(1, 4, 11),
QT_MOC_LITERAL(2, 16, 0),
QT_MOC_LITERAL(3, 17, 12),
QT_MOC_LITERAL(4, 30, 11),
QT_MOC_LITERAL(5, 42, 21),
QT_MOC_LITERAL(6, 64, 22),
QT_MOC_LITERAL(7, 87, 8)
    },
    "asy\0first_timer\0\0second_timer\0third_timer\0"
    "on_pushButton_clicked\0on_asy_iconSizeChanged\0"
    "iconSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_asy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,    7,

       0        // eod
};

void asy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        asy *_t = static_cast<asy *>(_o);
        switch (_id) {
        case 0: _t->first_timer(); break;
        case 1: _t->second_timer(); break;
        case 2: _t->third_timer(); break;
        case 3: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject asy::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_asy.data,
      qt_meta_data_asy,  qt_static_metacall, 0, 0}
};


const QMetaObject *asy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *asy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_asy.stringdata))
        return static_cast<void*>(const_cast< asy*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int asy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
