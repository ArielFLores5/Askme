/********************************************************************************
** Form generated from reading UI file 'askme.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKME_H
#define UI_ASKME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Askme
{
public:
    QAction *actionNuevo;
    QAction *actionLista;
    QAction *actionGenerar;
    QAction *actionCreditos;
    QAction *actionSalir;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuApuntes_2;
    QMenu *menuPreguntas;
    QMenu *menuAcerca_de;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Askme)
    {
        if (Askme->objectName().isEmpty())
            Askme->setObjectName("Askme");
        Askme->resize(800, 600);
        Askme->setStyleSheet(QString::fromUtf8("background-color: rgb(215, 230, 255);"));
        actionNuevo = new QAction(Askme);
        actionNuevo->setObjectName("actionNuevo");
        actionLista = new QAction(Askme);
        actionLista->setObjectName("actionLista");
        actionGenerar = new QAction(Askme);
        actionGenerar->setObjectName("actionGenerar");
        actionCreditos = new QAction(Askme);
        actionCreditos->setObjectName("actionCreditos");
        actionSalir = new QAction(Askme);
        actionSalir->setObjectName("actionSalir");
        centralwidget = new QWidget(Askme);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName("mdiArea");
        mdiArea->setStyleSheet(QString::fromUtf8("border-color: rgb(9, 6, 6);"));

        horizontalLayout->addWidget(mdiArea);

        Askme->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Askme);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        menuApuntes_2 = new QMenu(menuArchivo);
        menuApuntes_2->setObjectName("menuApuntes_2");
        menuPreguntas = new QMenu(menuArchivo);
        menuPreguntas->setObjectName("menuPreguntas");
        menuAcerca_de = new QMenu(menubar);
        menuAcerca_de->setObjectName("menuAcerca_de");
        Askme->setMenuBar(menubar);
        statusbar = new QStatusBar(Askme);
        statusbar->setObjectName("statusbar");
        Askme->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuAcerca_de->menuAction());
        menuArchivo->addAction(menuApuntes_2->menuAction());
        menuArchivo->addAction(menuPreguntas->menuAction());
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuApuntes_2->addAction(actionNuevo);
        menuApuntes_2->addAction(actionLista);
        menuPreguntas->addAction(actionGenerar);
        menuAcerca_de->addAction(actionCreditos);

        retranslateUi(Askme);

        QMetaObject::connectSlotsByName(Askme);
    } // setupUi

    void retranslateUi(QMainWindow *Askme)
    {
        Askme->setWindowTitle(QCoreApplication::translate("Askme", "Askme", nullptr));
        actionNuevo->setText(QCoreApplication::translate("Askme", "&Nuevo", nullptr));
#if QT_CONFIG(tooltip)
        actionNuevo->setToolTip(QCoreApplication::translate("Askme", "Crear un nuevo apunte", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNuevo->setShortcut(QCoreApplication::translate("Askme", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLista->setText(QCoreApplication::translate("Askme", "&Lista", nullptr));
#if QT_CONFIG(tooltip)
        actionLista->setToolTip(QCoreApplication::translate("Askme", "Lista de apuntes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLista->setShortcut(QCoreApplication::translate("Askme", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGenerar->setText(QCoreApplication::translate("Askme", "&Generar", nullptr));
#if QT_CONFIG(tooltip)
        actionGenerar->setToolTip(QCoreApplication::translate("Askme", "Generar nuevas preguntas", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGenerar->setShortcut(QCoreApplication::translate("Askme", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCreditos->setText(QCoreApplication::translate("Askme", "&Cr\303\251ditos", nullptr));
#if QT_CONFIG(tooltip)
        actionCreditos->setToolTip(QCoreApplication::translate("Askme", "Autores de la aplicaci\303\263n", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSalir->setText(QCoreApplication::translate("Askme", "&Salir", nullptr));
#if QT_CONFIG(tooltip)
        actionSalir->setToolTip(QCoreApplication::translate("Askme", "Salir de a aplicaci{on", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSalir->setShortcut(QCoreApplication::translate("Askme", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        menuArchivo->setTitle(QCoreApplication::translate("Askme", "&Archivo", nullptr));
        menuApuntes_2->setTitle(QCoreApplication::translate("Askme", "&Apuntes", nullptr));
        menuPreguntas->setTitle(QCoreApplication::translate("Askme", "&Preguntas", nullptr));
        menuAcerca_de->setTitle(QCoreApplication::translate("Askme", "A&cerca de", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Askme: public Ui_Askme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKME_H
