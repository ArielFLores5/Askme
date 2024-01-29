/****************************************************************************
** Meta object code from reading C++ file 'apunteform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Downloads/Askme-main/apunteform.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apunteform.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSApunteFormENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSApunteFormENDCLASS = QtMocHelpers::stringData(
    "ApunteForm",
    "apunteTomado",
    "",
    "Apunte*",
    "apunte",
    "on_btnAgregarAsignatura_released",
    "on_btnRefAsig_clicked",
    "on_cmbAsignaturas_currentIndexChanged",
    "index",
    "on_btnAgregarTema_released",
    "on_buttonBox_accepted",
    "on_buttonBox_rejected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSApunteFormENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[7];
    char stringdata5[33];
    char stringdata6[22];
    char stringdata7[38];
    char stringdata8[6];
    char stringdata9[27];
    char stringdata10[22];
    char stringdata11[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSApunteFormENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSApunteFormENDCLASS_t qt_meta_stringdata_CLASSApunteFormENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "ApunteForm"
        QT_MOC_LITERAL(11, 12),  // "apunteTomado"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 7),  // "Apunte*"
        QT_MOC_LITERAL(33, 6),  // "apunte"
        QT_MOC_LITERAL(40, 32),  // "on_btnAgregarAsignatura_released"
        QT_MOC_LITERAL(73, 21),  // "on_btnRefAsig_clicked"
        QT_MOC_LITERAL(95, 37),  // "on_cmbAsignaturas_currentInde..."
        QT_MOC_LITERAL(133, 5),  // "index"
        QT_MOC_LITERAL(139, 26),  // "on_btnAgregarTema_released"
        QT_MOC_LITERAL(166, 21),  // "on_buttonBox_accepted"
        QT_MOC_LITERAL(188, 21)   // "on_buttonBox_rejected"
    },
    "ApunteForm",
    "apunteTomado",
    "",
    "Apunte*",
    "apunte",
    "on_btnAgregarAsignatura_released",
    "on_btnRefAsig_clicked",
    "on_cmbAsignaturas_currentIndexChanged",
    "index",
    "on_btnAgregarTema_released",
    "on_buttonBox_accepted",
    "on_buttonBox_rejected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSApunteFormENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   59,    2, 0x08,    3 /* Private */,
       6,    0,   60,    2, 0x08,    4 /* Private */,
       7,    1,   61,    2, 0x08,    5 /* Private */,
       9,    0,   64,    2, 0x08,    7 /* Private */,
      10,    0,   65,    2, 0x08,    8 /* Private */,
      11,    0,   66,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ApunteForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSApunteFormENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSApunteFormENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSApunteFormENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ApunteForm, std::true_type>,
        // method 'apunteTomado'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Apunte *, std::false_type>,
        // method 'on_btnAgregarAsignatura_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnRefAsig_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cmbAsignaturas_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnAgregarTema_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonBox_accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonBox_rejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ApunteForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApunteForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->apunteTomado((*reinterpret_cast< std::add_pointer_t<Apunte*>>(_a[1]))); break;
        case 1: _t->on_btnAgregarAsignatura_released(); break;
        case 2: _t->on_btnRefAsig_clicked(); break;
        case 3: _t->on_cmbAsignaturas_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_btnAgregarTema_released(); break;
        case 5: _t->on_buttonBox_accepted(); break;
        case 6: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ApunteForm::*)(Apunte * );
            if (_t _q_method = &ApunteForm::apunteTomado; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ApunteForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApunteForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSApunteFormENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ApunteForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ApunteForm::apunteTomado(Apunte * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
