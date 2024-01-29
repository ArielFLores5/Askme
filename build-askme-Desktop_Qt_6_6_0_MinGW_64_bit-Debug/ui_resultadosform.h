/********************************************************************************
** Form generated from reading UI file 'resultadosform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADOSFORM_H
#define UI_RESULTADOSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultadosForm
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QTableWidget *tblResultados;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *lblAsignatura;
    QLabel *label_2;
    QLabel *lblTema;
    QLabel *lblScore;

    void setupUi(QWidget *ResultadosForm)
    {
        if (ResultadosForm->objectName().isEmpty())
            ResultadosForm->setObjectName("ResultadosForm");
        ResultadosForm->resize(423, 431);
        gridLayout_2 = new QGridLayout(ResultadosForm);
        gridLayout_2->setObjectName("gridLayout_2");
        buttonBox = new QDialogButtonBox(ResultadosForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);

        tblResultados = new QTableWidget(ResultadosForm);
        tblResultados->setObjectName("tblResultados");

        gridLayout_2->addWidget(tblResultados, 1, 0, 1, 1);

        groupBox = new QGroupBox(ResultadosForm);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lblAsignatura = new QLabel(groupBox);
        lblAsignatura->setObjectName("lblAsignatura");

        gridLayout->addWidget(lblAsignatura, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lblTema = new QLabel(groupBox);
        lblTema->setObjectName("lblTema");

        gridLayout->addWidget(lblTema, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        lblScore = new QLabel(ResultadosForm);
        lblScore->setObjectName("lblScore");

        gridLayout_2->addWidget(lblScore, 2, 0, 1, 1);


        retranslateUi(ResultadosForm);

        QMetaObject::connectSlotsByName(ResultadosForm);
    } // setupUi

    void retranslateUi(QWidget *ResultadosForm)
    {
        ResultadosForm->setWindowTitle(QCoreApplication::translate("ResultadosForm", "Form", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("ResultadosForm", "Asignatura:", nullptr));
        lblAsignatura->setText(QCoreApplication::translate("ResultadosForm", "Desconocido", nullptr));
        label_2->setText(QCoreApplication::translate("ResultadosForm", "Tema:", nullptr));
        lblTema->setText(QCoreApplication::translate("ResultadosForm", "Desconocido", nullptr));
        lblScore->setText(QCoreApplication::translate("ResultadosForm", "Score:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultadosForm: public Ui_ResultadosForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADOSFORM_H
