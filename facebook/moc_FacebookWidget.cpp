/****************************************************************************
** Meta object code from reading C++ file 'FacebookWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FacebookWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FacebookWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FacebookWidget_t {
    QByteArrayData data[13];
    char stringdata[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FacebookWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FacebookWidget_t qt_meta_stringdata_FacebookWidget = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 12),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 19),
QT_MOC_LITERAL(4, 49, 33),
QT_MOC_LITERAL(5, 83, 6),
QT_MOC_LITERAL(6, 90, 23),
QT_MOC_LITERAL(7, 114, 27),
QT_MOC_LITERAL(8, 142, 28),
QT_MOC_LITERAL(9, 171, 22),
QT_MOC_LITERAL(10, 194, 19),
QT_MOC_LITERAL(11, 214, 12),
QT_MOC_LITERAL(12, 227, 3)
    },
    "FacebookWidget\0getNewStatus\0\0"
    "onSystemTrayClicked\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0messagesActionTriggered\0"
    "notificationActionTriggered\0"
    "friendRequestActionTriggered\0"
    "toggleWindowVisibility\0quitActionTriggered\0"
    "delegateLink\0url\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FacebookWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08,
       3,    1,   55,    2, 0x08,
       6,    0,   58,    2, 0x08,
       7,    0,   59,    2, 0x08,
       8,    0,   60,    2, 0x08,
       9,    0,   61,    2, 0x08,
      10,    0,   62,    2, 0x08,
      11,    1,   63,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   12,

       0        // eod
};

void FacebookWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FacebookWidget *_t = static_cast<FacebookWidget *>(_o);
        switch (_id) {
        case 0: _t->getNewStatus(); break;
        case 1: _t->onSystemTrayClicked((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 2: _t->messagesActionTriggered(); break;
        case 3: _t->notificationActionTriggered(); break;
        case 4: _t->friendRequestActionTriggered(); break;
        case 5: _t->toggleWindowVisibility(); break;
        case 6: _t->quitActionTriggered(); break;
        case 7: _t->delegateLink((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FacebookWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FacebookWidget.data,
      qt_meta_data_FacebookWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *FacebookWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FacebookWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FacebookWidget.stringdata))
        return static_cast<void*>(const_cast< FacebookWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FacebookWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
