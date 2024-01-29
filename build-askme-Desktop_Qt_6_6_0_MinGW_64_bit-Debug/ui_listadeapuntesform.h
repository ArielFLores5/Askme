/********************************************************************************
** Form generated from reading UI file 'listadeapuntesform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTADEAPUNTESFORM_H
#define UI_LISTADEAPUNTESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Listadeapuntesform
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cmbAsignaturas;
    QLabel *label_2;
    QTableWidget *tblTemas;
    QLabel *label_3;
    QTableWidget *tblTerminos;

    void setupUi(QWidget *Listadeapuntesform)
    {
        if (Listadeapuntesform->objectName().isEmpty())
            Listadeapuntesform->setObjectName("Listadeapuntesform");
        Listadeapuntesform->resize(346, 445);
        gridLayout = new QGridLayout(Listadeapuntesform);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(Listadeapuntesform);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color: rgb(30, 90, 255);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cmbAsignaturas = new QComboBox(Listadeapuntesform);
        cmbAsignaturas->setObjectName("cmbAsignaturas");
        cmbAsignaturas->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(cmbAsignaturas, 0, 1, 1, 1);

        label_2 = new QLabel(Listadeapuntesform);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color: rgb(30, 90, 255);"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tblTemas = new QTableWidget(Listadeapuntesform);
        tblTemas->setObjectName("tblTemas");
        tblTemas->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(tblTemas, 2, 0, 1, 2);

        label_3 = new QLabel(Listadeapuntesform);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color: rgb(30, 90, 255);"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        tblTerminos = new QTableWidget(Listadeapuntesform);
        tblTerminos->setObjectName("tblTerminos");
        tblTerminos->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(tblTerminos, 4, 0, 1, 2);


        retranslateUi(Listadeapuntesform);

        QMetaObject::connectSlotsByName(Listadeapuntesform);
    } // setupUi

    void retranslateUi(QWidget *Listadeapuntesform)
    {
        Listadeapuntesform->setWindowTitle(QCoreApplication::translate("Listadeapuntesform", "Form", nullptr));
        label->setText(QCoreApplication::translate("Listadeapuntesform", "Asignatura", nullptr));
        label_2->setText(QCoreApplication::translate("Listadeapuntesform", "Temas:", nullptr));
        label_3->setText(QCoreApplication::translate("Listadeapuntesform", "Terminos:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Listadeapuntesform: public Ui_Listadeapuntesform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTADEAPUNTESFORM_H
