/********************************************************************************
** Form generated from reading UI file 'creditosform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITOSFORM_H
#define UI_CREDITOSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditosForm
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label;
    QComboBox *cmbNombreC;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *CreditosForm)
    {
        if (CreditosForm->objectName().isEmpty())
            CreditosForm->setObjectName("CreditosForm");
        CreditosForm->resize(663, 319);
        gridLayout = new QGridLayout(CreditosForm);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(CreditosForm);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(CreditosForm);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(CreditosForm);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 0, 1, 2);

        label_6 = new QLabel(CreditosForm);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 2, 1, 2);

        label_8 = new QLabel(CreditosForm);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        label_10 = new QLabel(CreditosForm);
        label_10->setObjectName("label_10");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(114, 163, 255);"));

        gridLayout->addWidget(label_10, 2, 1, 1, 1);

        label_9 = new QLabel(CreditosForm);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 2, 2, 1, 1);

        label_11 = new QLabel(CreditosForm);
        label_11->setObjectName("label_11");
        QFont font1;
        font1.setBold(true);
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(114, 163, 255);"));

        gridLayout->addWidget(label_11, 2, 3, 1, 1);

        label = new QLabel(CreditosForm);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 0, 1, 1);

        cmbNombreC = new QComboBox(CreditosForm);
        cmbNombreC->setObjectName("cmbNombreC");
        cmbNombreC->setStyleSheet(QString::fromUtf8("background-color: rgb(166, 202, 255);\n"
"color: rgb(11, 11, 11);"));

        gridLayout->addWidget(cmbNombreC, 3, 1, 1, 1);

        label_2 = new QLabel(CreditosForm);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        pushButton = new QPushButton(CreditosForm);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(166, 202, 255);\n"
"color: rgb(11, 11, 11);"));

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);


        retranslateUi(CreditosForm);

        QMetaObject::connectSlotsByName(CreditosForm);
    } // setupUi

    void retranslateUi(QWidget *CreditosForm)
    {
        CreditosForm->setWindowTitle(QCoreApplication::translate("CreditosForm", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("CreditosForm", "Carrera: Computaci\303\263n", nullptr));
        label_4->setText(QCoreApplication::translate("CreditosForm", "Carrera: Filosof\303\255a", nullptr));
        label_5->setText(QCoreApplication::translate("CreditosForm", "Asingatura: Programaci\303\263n Orientada a Objetos", nullptr));
        label_6->setText(QCoreApplication::translate("CreditosForm", "Asignatura: Seminario de problemas filos\303\263ficos", nullptr));
        label_8->setText(QCoreApplication::translate("CreditosForm", "Docente:", nullptr));
        label_10->setText(QCoreApplication::translate("CreditosForm", "Rodrigo Tufi\303\261o", nullptr));
        label_9->setText(QCoreApplication::translate("CreditosForm", "Docente:", nullptr));
        label_11->setText(QCoreApplication::translate("CreditosForm", "William Orlando C\303\241rdenas Marin", nullptr));
        label->setText(QCoreApplication::translate("CreditosForm", "Nombres:", nullptr));
        label_2->setText(QCoreApplication::translate("CreditosForm", "GitHub", nullptr));
        pushButton->setText(QCoreApplication::translate("CreditosForm", "Ir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditosForm: public Ui_CreditosForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITOSFORM_H
