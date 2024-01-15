#ifndef ASKME_H
#define ASKME_H

#include <QMainWindow>
#include <QMdiSubWindow>
#include <QFile>
#include <QTextStream>

#include "apunteform.h"
#include "asignatura.h"
#include "listadeapuntesform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Askme; }
QT_END_NAMESPACE

class Askme : public QMainWindow
{
    Q_OBJECT

public:
    Askme(QWidget *parent = nullptr);
    ~Askme();

public slots:
    void on_apunteTomado(Apunte *apunte);

private slots:
    void on_actionNuevo_triggered();
    void guardar();
    void on_actionLista_triggered();

private:
    Ui::Askme *ui;
    void cargarSubVentana(QWidget *ventana);
    void cargarDatos();
    QList<Asignatura*> m_asignaturas;
    Listadeapuntesform *m_listaDeApuntesForm;

};
#endif // ASKME_H
