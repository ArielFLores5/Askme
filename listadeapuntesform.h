#ifndef LISTADEAPUNTESFORM_H
#define LISTADEAPUNTESFORM_H

#include <QWidget>
#include <QMap>
#include <QPair>
#include <QTableWidget>  // Agrega esta línea

namespace Ui {
class Listadeapuntesform;
}

class Listadeapuntesform : public QWidget
{
    Q_OBJECT

public:
    explicit Listadeapuntesform(QWidget *parent = nullptr);
    ~Listadeapuntesform();

private slots:
    void actualizarTemasYTerminos(const QString &asignaturaSeleccionada);
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::Listadeapuntesform *ui;

    QMap<QString, QPair<QStringList, QStringList>> temasYTerminosPorAsignatura;

    QTableWidget *tableWidgetTema;
    QTableWidget *tableWidgetTermino;

    void cargarDatosIniciales();
    QStringList obtenerTemas(const QString &asignatura);
    QStringList obtenerTerminos(const QString &asignatura);
    void cargarEnTabla(QTableWidget *tableWidget, const QStringList &datos);
};

#endif // LISTADEAPUNTESFORM_H
