/****************************************************************************
** Meta object code from reading C++ file 'odometry_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rviz_plugin_covariance/src/odometry_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'odometry_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_rviz_plugin_covariance__OdometryDisplay_t {
    QByteArrayData data[7];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_plugin_covariance__OdometryDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_plugin_covariance__OdometryDisplay_t qt_meta_stringdata_rviz_plugin_covariance__OdometryDisplay = {
    {
QT_MOC_LITERAL(0, 0, 39), // "rviz_plugin_covariance::Odome..."
QT_MOC_LITERAL(1, 40, 17), // "updateShapeChoice"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 21), // "updateShapeVisibility"
QT_MOC_LITERAL(4, 81, 19), // "updateColorAndAlpha"
QT_MOC_LITERAL(5, 101, 20), // "updateArrowsGeometry"
QT_MOC_LITERAL(6, 122, 18) // "updateAxisGeometry"

    },
    "rviz_plugin_covariance::OdometryDisplay\0"
    "updateShapeChoice\0\0updateShapeVisibility\0"
    "updateColorAndAlpha\0updateArrowsGeometry\0"
    "updateAxisGeometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_plugin_covariance__OdometryDisplay[] = {

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
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz_plugin_covariance::OdometryDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OdometryDisplay *_t = static_cast<OdometryDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateShapeChoice(); break;
        case 1: _t->updateShapeVisibility(); break;
        case 2: _t->updateColorAndAlpha(); break;
        case 3: _t->updateArrowsGeometry(); break;
        case 4: _t->updateAxisGeometry(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject rviz_plugin_covariance::OdometryDisplay::staticMetaObject = {
    { &rviz::MessageFilterDisplay<nav_msgs::Odometry>::staticMetaObject, qt_meta_stringdata_rviz_plugin_covariance__OdometryDisplay.data,
      qt_meta_data_rviz_plugin_covariance__OdometryDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *rviz_plugin_covariance::OdometryDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_plugin_covariance::OdometryDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_plugin_covariance__OdometryDisplay.stringdata0))
        return static_cast<void*>(const_cast< OdometryDisplay*>(this));
    return rviz::MessageFilterDisplay<nav_msgs::Odometry>::qt_metacast(_clname);
}

int rviz_plugin_covariance::OdometryDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::MessageFilterDisplay<nav_msgs::Odometry>::qt_metacall(_c, _id, _a);
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
