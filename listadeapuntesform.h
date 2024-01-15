#ifndef LISTADEAPUNTESFORM_H
#define LISTADEAPUNTESFORM_H

#include <QWidget>
#include <QComboBox>
#include <QTableWidget> // Cambié esto de QListView a QListWidget
#include <QStringList>
#include <QMap>

namespace Ui {
class Listadeapuntesform;
}

class Listadeapuntesform : public QWidget
{
    Q_OBJECT

public:
    explicit Listadeapuntesform(QWidget *parent = nullptr);
    ~Listadeapuntesform();

public slots:
    void on_buttonBox_rejected();
    void cargarDatosIniciales();
    void actualizarTemasYTerminos(const QString &asignaturaSeleccionada);
    QStringList obtenerTemas(const QString &asignatura);
    QStringList obtenerTerminos(const QString &asignatura);
private:
    Ui::Listadeapuntesform *ui;
    QTableWidget *tableWidgetTema;
    QTableWidget *tableWidgetTermino;
    QStringList obtenerAsignaturas();
    void cargarEnTabla(QTableWidget *tableWidget, const QStringList &datos);

    QStringList asignaturas;  // Agregamos estas líneas
    QMap<QString, QString> temasPorAsignatura;
    QMap<QString, QString> terminosPorAsignatura;
};
#endif // LISTADEAPUNTESFORM_H
