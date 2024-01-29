#ifndef LISTADEAPUNTESFORM_H
#define LISTADEAPUNTESFORM_H

#include <QWidget>
#include <QTableWidget>

#include <asignatura.h>

namespace Ui {
class Listadeapuntesform;
}

class Listadeapuntesform : public QWidget
{
    Q_OBJECT

public:
    explicit Listadeapuntesform(QWidget *parent = nullptr);
    void setAsignaturas(QList<Asignatura *> *asignaturas);
    void cargarAsignaturas();
    void cargarTerminos(int fila, int columna);
    ~Listadeapuntesform();

private:
    Ui::Listadeapuntesform *ui;
    QList<Asignatura *> *m_asignaturas;

private slots:
    void cargarTemas();
    void on_tblTemas_cellClicked(int row, int column);
};


#endif // LISTADEAPUNTESFORM_H
