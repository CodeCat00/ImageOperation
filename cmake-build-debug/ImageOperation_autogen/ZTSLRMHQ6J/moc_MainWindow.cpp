/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../view/slot/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 4), // "open"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "save"
QT_MOC_LITERAL(4, 22, 15), // "setOpenFilePath"
QT_MOC_LITERAL(5, 38, 15), // "setSaveFilePath"
QT_MOC_LITERAL(6, 54, 11), // "binaryImage"
QT_MOC_LITERAL(7, 66, 11), // "logarithmic"
QT_MOC_LITERAL(8, 78, 5), // "gamma"
QT_MOC_LITERAL(9, 84, 21), // "histogramEqualization"
QT_MOC_LITERAL(10, 106, 19), // "smoothSpatialFilter"
QT_MOC_LITERAL(11, 126, 23), // "sharpeningSpatialFilter"
QT_MOC_LITERAL(12, 150, 12), // "gaussianBlur"
QT_MOC_LITERAL(13, 163, 10), // "medianBlur"
QT_MOC_LITERAL(14, 174, 5), // "sobel"
QT_MOC_LITERAL(15, 180, 9), // "laplacian"
QT_MOC_LITERAL(16, 190, 17), // "imageInversionAct"
QT_MOC_LITERAL(17, 208, 16), // "outlierDetection"
QT_MOC_LITERAL(18, 225, 19), // "grayscaleProcessing"
QT_MOC_LITERAL(19, 245, 8), // "preImage"
QT_MOC_LITERAL(20, 254, 9), // "nextImage"
QT_MOC_LITERAL(21, 264, 10), // "wheelEvent"
QT_MOC_LITERAL(22, 275, 12), // "QWheelEvent*"
QT_MOC_LITERAL(23, 288, 5) // "event"

    },
    "MainWindow\0open\0\0save\0setOpenFilePath\0"
    "setSaveFilePath\0binaryImage\0logarithmic\0"
    "gamma\0histogramEqualization\0"
    "smoothSpatialFilter\0sharpeningSpatialFilter\0"
    "gaussianBlur\0medianBlur\0sobel\0laplacian\0"
    "imageInversionAct\0outlierDetection\0"
    "grayscaleProcessing\0preImage\0nextImage\0"
    "wheelEvent\0QWheelEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x08 /* Private */,
       3,    0,  115,    2, 0x08 /* Private */,
       4,    0,  116,    2, 0x08 /* Private */,
       5,    0,  117,    2, 0x08 /* Private */,
       6,    0,  118,    2, 0x08 /* Private */,
       7,    0,  119,    2, 0x08 /* Private */,
       8,    0,  120,    2, 0x08 /* Private */,
       9,    0,  121,    2, 0x08 /* Private */,
      10,    0,  122,    2, 0x08 /* Private */,
      11,    0,  123,    2, 0x08 /* Private */,
      12,    0,  124,    2, 0x08 /* Private */,
      13,    0,  125,    2, 0x08 /* Private */,
      14,    0,  126,    2, 0x08 /* Private */,
      15,    0,  127,    2, 0x08 /* Private */,
      16,    0,  128,    2, 0x08 /* Private */,
      17,    0,  129,    2, 0x08 /* Private */,
      18,    0,  130,    2, 0x08 /* Private */,
      19,    0,  131,    2, 0x08 /* Private */,
      20,    0,  132,    2, 0x08 /* Private */,
      21,    1,  133,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->save(); break;
        case 2: _t->setOpenFilePath(); break;
        case 3: _t->setSaveFilePath(); break;
        case 4: _t->binaryImage(); break;
        case 5: _t->logarithmic(); break;
        case 6: _t->gamma(); break;
        case 7: _t->histogramEqualization(); break;
        case 8: _t->smoothSpatialFilter(); break;
        case 9: _t->sharpeningSpatialFilter(); break;
        case 10: _t->gaussianBlur(); break;
        case 11: _t->medianBlur(); break;
        case 12: _t->sobel(); break;
        case 13: _t->laplacian(); break;
        case 14: _t->imageInversionAct(); break;
        case 15: _t->outlierDetection(); break;
        case 16: _t->grayscaleProcessing(); break;
        case 17: _t->preImage(); break;
        case 18: _t->nextImage(); break;
        case 19: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
