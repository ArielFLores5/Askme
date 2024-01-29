/********************************************************************************
** Form generated from reading UI file 'cuestionarioform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUESTIONARIOFORM_H
#define UI_CUESTIONARIOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CuestionarioForm
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cmbAsignaturas;
    QLabel *label_2;
    QComboBox *cmbTemas;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *CuestionarioForm)
    {
        if (CuestionarioForm->objectName().isEmpty())
            CuestionarioForm->setObjectName("CuestionarioForm");
        CuestionarioForm->resize(386, 150);
        gridLayout = new QGridLayout(CuestionarioForm);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(CuestionarioForm);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cmbAsignaturas = new QComboBox(CuestionarioForm);
        cmbAsignaturas->setObjectName("cmbAsignaturas");

        gridLayout->addWidget(cmbAsignaturas, 0, 1, 1, 1);

        label_2 = new QLabel(CuestionarioForm);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cmbTemas = new QComboBox(CuestionarioForm);
        cmbTemas->setObjectName("cmbTemas");

        gridLayout->addWidget(cmbTemas, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(CuestionarioForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(CuestionarioForm);

        QMetaObject::connectSlotsByName(CuestionarioForm);
    } // setupUi

    void retranslateUi(QWidget *CuestionarioForm)
    {
        CuestionarioForm->setWindowTitle(QCoreApplication::translate("CuestionarioForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("CuestionarioForm", "Asignatura:", nullptr));
        label_2->setText(QCoreApplication::translate("CuestionarioForm", "Tema:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CuestionarioForm: public Ui_CuestionarioForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUESTIONARIOFORM_H
