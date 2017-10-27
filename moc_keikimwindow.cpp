/****************************************************************************
** Meta object code from reading C++ file 'keikimwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "keikimwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keikimwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KeikiMWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      28,   13,   13,   13, 0x08,
      39,   13,   13,   13, 0x08,
      50,   13,   13,   13, 0x08,
      62,   13,   13,   13, 0x08,
      73,   13,   13,   13, 0x08,
      81,   13,   13,   13, 0x08,
     101,   13,   13,   13, 0x08,
     123,   13,   13,   13, 0x08,
     138,   13,   13,   13, 0x08,
     161,  153,   13,   13, 0x08,
     177,  153,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_KeikiMWindow[] = {
    "KeikiMWindow\0\0updateImage()\0doLThumb()\0"
    "doRThumb()\0saveImage()\0clearAll()\0"
    "print()\0clearTotalCounter()\0"
    "clearSessionCounter()\0showAboutDlg()\0"
    "showTutorial()\0new_val\0createPDF(bool)\0"
    "toggleTemplate(bool)\0"
};

void KeikiMWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KeikiMWindow *_t = static_cast<KeikiMWindow *>(_o);
        switch (_id) {
        case 0: _t->updateImage(); break;
        case 1: _t->doLThumb(); break;
        case 2: _t->doRThumb(); break;
        case 3: _t->saveImage(); break;
        case 4: _t->clearAll(); break;
        case 5: _t->print(); break;
        case 6: _t->clearTotalCounter(); break;
        case 7: _t->clearSessionCounter(); break;
        case 8: _t->showAboutDlg(); break;
        case 9: _t->showTutorial(); break;
        case 10: _t->createPDF((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->toggleTemplate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KeikiMWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KeikiMWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_KeikiMWindow,
      qt_meta_data_KeikiMWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeikiMWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeikiMWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeikiMWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeikiMWindow))
        return static_cast<void*>(const_cast< KeikiMWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int KeikiMWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
