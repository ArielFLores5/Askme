/****************************************************************************
** Meta object code from reading C++ file 'askme.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Downloads/Askme-main/askme.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'askme.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAskmeENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAskmeENDCLASS = QtMocHelpers::stringData(
    "Askme",
    "on_apunteTomado",
    "",
    "Apunte*",
    "apunte",
    "on_cuestionarioCreado",
    "Cuestionario*",
    "cuestionario",
    "on_preguntasContestadas",
    "on_actionNuevo_triggered",
    "on_actionLista_triggered",
    "on_actionGenerar_triggered",
    "on_actionCreditos_triggered",
    "on_actionSalir_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAskmeENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[6];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[7];
    char stringdata5[22];
    char stringdata6[14];
    char stringdata7[13];
    char stringdata8[24];
    char stringdata9[25];
    char stringdata10[25];
    char stringdata11[27];
    char stringdata12[28];
    char stringdata13[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAskmeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAskmeENDCLASS_t qt_meta_stringdata_CLASSAskmeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Askme"
        QT_MOC_LITERAL(6, 15),  // "on_apunteTomado"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 7),  // "Apunte*"
        QT_MOC_LITERAL(31, 6),  // "apunte"
        QT_MOC_LITERAL(38, 21),  // "on_cuestionarioCreado"
        QT_MOC_LITERAL(60, 13),  // "Cuestionario*"
        QT_MOC_LITERAL(74, 12),  // "cuestionario"
        QT_MOC_LITERAL(87, 23),  // "on_preguntasContestadas"
        QT_MOC_LITERAL(111, 24),  // "on_actionNuevo_triggered"
        QT_MOC_LITERAL(136, 24),  // "on_actionLista_triggered"
        QT_MOC_LITERAL(161, 26),  // "on_actionGenerar_triggered"
        QT_MOC_LITERAL(188, 27),  // "on_actionCreditos_triggered"
        QT_MOC_LITERAL(216, 24)   // "on_actionSalir_triggered"
    },
    "Askme",
    "on_apunteTomado",
    "",
    "Apunte*",
    "apunte",
    "on_cuestionarioCreado",
    "Cuestionario*",
    "cuestionario",
    "on_preguntasContestadas",
    "on_actionNuevo_triggered",
    "on_actionLista_triggered",
    "on_actionGenerar_triggered",
    "on_actionCreditos_triggered",
    "on_actionSalir_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAskmeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x0a,    1 /* Public */,
       5,    1,   65,    2, 0x0a,    3 /* Public */,
       8,    1,   68,    2, 0x0a,    5 /* Public */,
       9,    0,   71,    2, 0x08,    7 /* Private */,
      10,    0,   72,    2, 0x08,    8 /* Private */,
      11,    0,   73,    2, 0x08,    9 /* Private */,
      12,    0,   74,    2, 0x08,   10 /* Private */,
      13,    0,   75,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Askme::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSAskmeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAskmeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAskmeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Askme, std::true_type>,
        // method 'on_apunteTomado'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Apunte *, std::false_type>,
        // method 'on_cuestionarioCreado'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Cuestionario *, std::false_type>,
        // method 'on_preguntasContestadas'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Cuestionario *, std::false_type>,
        // method 'on_actionNuevo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLista_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGenerar_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCreditos_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSalir_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Askme::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Askme *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_apunteTomado((*reinterpret_cast< std::add_pointer_t<Apunte*>>(_a[1]))); break;
        case 1: _t->on_cuestionarioCreado((*reinterpret_cast< std::add_pointer_t<Cuestionario*>>(_a[1]))); break;
        case 2: _t->on_preguntasContestadas((*reinterpret_cast< std::add_pointer_t<Cuestionario*>>(_a[1]))); break;
        case 3: _t->on_actionNuevo_triggered(); break;
        case 4: _t->on_actionLista_triggered(); break;
        case 5: _t->on_actionGenerar_triggered(); break;
        case 6: _t->on_actionCreditos_triggered(); break;
        case 7: _t->on_actionSalir_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *Askme::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Askme::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAskmeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Askme::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
