#include "listadeapuntesform.h"
#include "ui_listadeapuntesform.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Listadeapuntesform::Listadeapuntesform(QWidget *parent)
    : QWidget(parent), ui(new Ui::Listadeapuntesform)
{
    ui->setupUi(this);

    // Conectar el cambio de selección en cmbAsignaturas2 con la función correspondiente
    connect(ui->cmbAsignaturas2, SIGNAL(currentIndexChanged(const QString&)),
            this, SLOT(actualizarTemasYTerminos(const QString&)));

    // Configurar QTableWidgets
    tableWidgetTema = ui->tableWidgetTema;
    tableWidgetTema->setColumnCount(1); // Número de columnas para temas
    tableWidgetTema->setHorizontalHeaderLabels(QStringList() << "Temas");

    tableWidgetTermino = ui->tableWidgetTermino;
    tableWidgetTermino->setColumnCount(1); // Número de columnas para términos
    tableWidgetTermino->setHorizontalHeaderLabels(QStringList() << "Terminos");

    // Cargar asignaturas y datos iniciales al iniciar la ventana
    cargarDatosIniciales();
}


Listadeapuntesform::~Listadeapuntesform()
{
    delete ui;
}

void Listadeapuntesform::cargarDatosIniciales()
{
    asignaturas.clear(); // Limpiamos la lista de asignaturas

    QFile file("C:/Users/Ariel Flores/Music/build-askme-Desktop_Qt_6_6_0_MinGW_64_bit-Debug/data.csv");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList parts = line.split(",");
            if (parts.size() >= 3) // Asegurémonos de tener al menos tres partes (asignatura, tema, término)
            {
                QString asignatura = parts[0].trimmed();
                asignaturas << asignatura;

                // Mapear la asignatura a sus respectivos temas y términos
                temasPorAsignatura[asignatura] = parts[1].trimmed();
                terminosPorAsignatura[asignatura] = parts[2].trimmed();
            }
        }

        file.close();
    }
    else
    {
        QMessageBox::critical(this, "Error", "No se pudo abrir el archivo CSV.");
    }

    ui->cmbAsignaturas2->addItems(asignaturas);

    // Al cargar asignaturas iniciales, también cargamos los temas y términos
    actualizarTemasYTerminos(ui->cmbAsignaturas2->currentText());
}

QStringList Listadeapuntesform::obtenerAsignaturas()
{
    QStringList asignaturas;

    QFile file("C:/Users/Ariel Flores/Music/build-askme-Desktop_Qt_6_6_0_MinGW_64_bit-Debug/data.csv");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList parts = line.split(",");
            if (!parts.isEmpty())
                asignaturas << parts[0];
        }

        file.close();
    }
    else
    {
        QMessageBox::critical(this, "Error", "No se pudo abrir el archivo CSV.");
    }

    return asignaturas;
}

void Listadeapuntesform::cargarEnTabla(QTableWidget *tableWidget, const QStringList &datos)
{
    tableWidget->clearContents();
    tableWidget->setRowCount(datos.size());

    for (int i = 0; i < datos.size(); ++i)
    {
        QTableWidgetItem *item = new QTableWidgetItem(datos[i]);
        tableWidget->setItem(i, 0, item);
    }
}

QStringList Listadeapuntesform::obtenerTemas(const QString &asignatura)
{
    return temasPorAsignatura.value(asignatura).split(';'); // Suponiendo que los temas están separados por ';'
}

QStringList Listadeapuntesform::obtenerTerminos(const QString &asignatura)
{
    return terminosPorAsignatura.value(asignatura).split(';'); // Suponiendo que los términos están separados por ';'
}
void Listadeapuntesform::actualizarTemasYTerminos(const QString &asignaturaSeleccionada)
{
        // Obtener temas y términos de la asignatura seleccionada
        QStringList temas = obtenerTemas(asignaturaSeleccionada);
        QStringList terminos = obtenerTerminos(asignaturaSeleccionada);

        // Limpiar y cargar temas en la tabla
        tableWidgetTema->clearContents();
        tableWidgetTema->setRowCount(temas.size());
        for (int i = 0; i < temas.size(); ++i)
        {
            QTableWidgetItem *item = new QTableWidgetItem(temas[i]);
            tableWidgetTema->setItem(i, 0, item);
        }

        // Limpiar y cargar términos en la tabla
        tableWidgetTermino->clearContents();
        tableWidgetTermino->setRowCount(terminos.size());
        for (int i = 0; i < terminos.size(); ++i)
        {
            QTableWidgetItem *item = new QTableWidgetItem(terminos[i]);
            tableWidgetTermino->setItem(i, 0, item);
        }
    }

void Listadeapuntesform::on_buttonBox_rejected()
{
    this->close(); // Cerrar la subventana
}
