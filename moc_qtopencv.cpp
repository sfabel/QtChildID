/****************************************************************************
** Meta object code from reading C++ file 'qtopencv.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtopencv.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtopencv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qtopencv[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,   19,    9,    9, 0x0a,
      37,   35,    9,    9, 0x0a,
      52,    9,    9,    9, 0x0a,
      60,    9,    9,    9, 0x0a,
      67,    9,    9,    9, 0x08,
      84,    9,    9,    9, 0x08,
     101,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qtopencv[] = {
    "qtopencv\0\0newImg()\0w\0setWidth(int)\0h\0"
    "setHeight(int)\0start()\0stop()\0"
    "captureStarted()\0captureStopped()\0"
    "ocv2qt()\0"
};

void qtopencv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qtopencv *_t = static_cast<qtopencv *>(_o);
        switch (_id) {
        case 0: _t->newImg(); break;
        case 1: _t->setWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->start(); break;
        case 4: _t->stop(); break;
        case 5: _t->captureStarted(); break;
        case 6: _t->captureStopped(); break;
        case 7: _t->ocv2qt(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qtopencv::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qtopencv::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qtopencv,
      qt_meta_data_qtopencv, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qtopencv::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qtopencv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qtopencv::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qtopencv))
        return static_cast<void*>(const_cast< qtopencv*>(this));
    return QWidget::qt_metacast(_clname);
}

int qtopencv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void qtopencv::newImg()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
