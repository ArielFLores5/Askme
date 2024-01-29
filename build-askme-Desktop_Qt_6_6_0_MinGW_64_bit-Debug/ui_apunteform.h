/********************************************************************************
** Form generated from reading UI file 'apunteform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APUNTEFORM_H
#define UI_APUNTEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApunteForm
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbAsignaturas;
    QPushButton *btnRefAsig;
    QPushButton *btnAgregarAsignatura;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *cmbTemas;
    QPushButton *btnRefTema;
    QPushButton *btnAgregarTema;
    QLabel *label_3;
    QLineEdit *txtTermino;
    QTextEdit *txtConcepto;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;

    void setupUi(QWidget *ApunteForm)
    {
        if (ApunteForm->objectName().isEmpty())
            ApunteForm->setObjectName("ApunteForm");
        ApunteForm->resize(275, 216);
        formLayout = new QFormLayout(ApunteForm);
        formLayout->setObjectName("formLayout");
        label = new QLabel(ApunteForm);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        cmbAsignaturas = new QComboBox(ApunteForm);
        cmbAsignaturas->setObjectName("cmbAsignaturas");

        horizontalLayout->addWidget(cmbAsignaturas);

        btnRefAsig = new QPushButton(ApunteForm);
        btnRefAsig->setObjectName("btnRefAsig");
        btnRefAsig->setMinimumSize(QSize(0, 0));
        btnRefAsig->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(btnRefAsig);

        btnAgregarAsignatura = new QPushButton(ApunteForm);
        btnAgregarAsignatura->setObjectName("btnAgregarAsignatura");
        btnAgregarAsignatura->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(btnAgregarAsignatura);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        label_2 = new QLabel(ApunteForm);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cmbTemas = new QComboBox(ApunteForm);
        cmbTemas->setObjectName("cmbTemas");

        horizontalLayout_2->addWidget(cmbTemas);

        btnRefTema = new QPushButton(ApunteForm);
        btnRefTema->setObjectName("btnRefTema");
        btnRefTema->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(btnRefTema);

        btnAgregarTema = new QPushButton(ApunteForm);
        btnAgregarTema->setObjectName("btnAgregarTema");
        btnAgregarTema->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(btnAgregarTema);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        label_3 = new QLabel(ApunteForm);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtTermino = new QLineEdit(ApunteForm);
        txtTermino->setObjectName("txtTermino");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtTermino);

        txtConcepto = new QTextEdit(ApunteForm);
        txtConcepto->setObjectName("txtConcepto");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtConcepto);

        buttonBox = new QDialogButtonBox(ApunteForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(4, QFormLayout::FieldRole, buttonBox);

        label_4 = new QLabel(ApunteForm);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);


        retranslateUi(ApunteForm);

        QMetaObject::connectSlotsByName(ApunteForm);
    } // setupUi

    void retranslateUi(QWidget *ApunteForm)
    {
        ApunteForm->setWindowTitle(QCoreApplication::translate("ApunteForm", "Apunte", nullptr));
        label->setText(QCoreApplication::translate("ApunteForm", "Asignaturas:", nullptr));
        btnRefAsig->setText(QCoreApplication::translate("ApunteForm", "R", nullptr));
        btnAgregarAsignatura->setText(QCoreApplication::translate("ApunteForm", "+", nullptr));
        label_2->setText(QCoreApplication::translate("ApunteForm", "Temas:", nullptr));
        btnRefTema->setText(QCoreApplication::translate("ApunteForm", "R", nullptr));
        btnAgregarTema->setText(QCoreApplication::translate("ApunteForm", "+", nullptr));
        label_3->setText(QCoreApplication::translate("ApunteForm", "T\303\251rmino:", nullptr));
        txtConcepto->setHtml(QCoreApplication::translate("ApunteForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("ApunteForm", "Concepto:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApunteForm: public Ui_ApunteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APUNTEFORM_H
