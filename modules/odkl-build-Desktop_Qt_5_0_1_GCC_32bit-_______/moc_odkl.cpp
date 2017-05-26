/****************************************************************************
** Meta object code from reading C++ file 'odkl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../odkl/odkl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'odkl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_odkl_t {
    QByteArrayData data[12];
    char stringdata[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_odkl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_odkl_t qt_meta_stringdata_odkl = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 6),
QT_MOC_LITERAL(2, 12, 0),
QT_MOC_LITERAL(3, 13, 8),
QT_MOC_LITERAL(4, 22, 33),
QT_MOC_LITERAL(5, 56, 1),
QT_MOC_LITERAL(6, 58, 25),
QT_MOC_LITERAL(7, 84, 23),
QT_MOC_LITERAL(8, 108, 5),
QT_MOC_LITERAL(9, 114, 22),
QT_MOC_LITERAL(10, 137, 4),
QT_MOC_LITERAL(11, 142, 25)
    },
    "odkl\0logout\0\0showhide\0"
    "QSystemTrayIcon::ActivationReason\0r\0"
    "on_ExitPushButton_clicked\0"
    "on_webView_titleChanged\0title\0"
    "on_webView_linkClicked\0arg1\0"
    "on_lineEdit_returnPressed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_odkl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08,
       3,    1,   50,    2, 0x08,
       3,    0,   53,    2, 0x28,
       6,    0,   54,    2, 0x08,
       7,    1,   55,    2, 0x08,
       9,    1,   58,    2, 0x08,
      11,    0,   61,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void,

       0        // eod
};

void odkl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        odkl *_t = static_cast<odkl *>(_o);
        switch (_id) {
        case 0: _t->logout(); break;
        case 1: _t->showhide((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 2: _t->showhide(); break;
        case 3: _t->on_ExitPushButton_clicked(); break;
        case 4: _t->on_webView_titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_webView_linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->on_lineEdit_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObject odkl::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_odkl.data,
      qt_meta_data_odkl,  qt_static_metacall, 0, 0}
};


const QMetaObject *odkl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *odkl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_odkl.stringdata))
        return static_cast<void*>(const_cast< odkl*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int odkl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
