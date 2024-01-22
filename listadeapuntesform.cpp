#include "listadeapuntesform.h"
#include "ui_listadeapuntesform.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QPair>

Listadeapuntesform::Listadeapuntesform(QWidget *parent)
    : QWidget(parent), ui(new Ui::Listadeapuntesform)
{
    ui->setupUi(this);

    // Conectar el cambio de selección en cmbAsignaturas2 con la función correspondiente
    connect(ui->cmbAsignaturas2, &QComboBox::currentTextChanged,
            this, &Listadeapuntesform::actualizarTemasYTerminos);

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
    temasYTerminosPorAsignatura.clear(); // Limpiamos el mapa

    QFile file("C:/Users/lab/Downloads/build-askme-Desktop_Qt_5_12_12_MinGW_64_bit-Debug/data.csv");
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

                // Verificamos si la asignatura ya está en el mapa
                if (!temasYTerminosPorAsignatura.contains(asignatura))
                {
                    // Si no está, la agregamos al mapa con listas vacías de temas y términos
                    temasYTerminosPorAsignatura[asignatura] = qMakePair(QStringList(), QStringList());
                }

                // Agregamos el tema y término a las listas correspondientes de la asignatura
                temasYTerminosPorAsignatura[asignatura].first.append(parts[1].trimmed()); // Temas
                temasYTerminosPorAsignatura[asignatura].second.append(parts[2].trimmed()); // Términos
            }
        }

        file.close();
    }
    else
    {
        QMessageBox::critical(this, "Error", "No se pudo abrir el archivo CSV.");
    }

    ui->cmbAsignaturas2->addItems(temasYTerminosPorAsignatura.keys());

    // Al cargar asignaturas iniciales, también cargamos los temas y términos
    actualizarTemasYTerminos(ui->cmbAsignaturas2->currentText());
}

void Listadeapuntesform::actualizarTemasYTerminos(const QString &asignaturaSeleccionada)
{
    // Obtener temas y términos de la asignatura seleccionada
    QStringList temas = obtenerTemas(asignaturaSeleccionada);
    QStringList terminos = obtenerTerminos(asignaturaSeleccionada);

    // Limpiar y cargar temas en la tabla
    cargarEnTabla(tableWidgetTema, temas);

    // Limpiar y cargar términos en la tabla
    cargarEnTabla(tableWidgetTermino, terminos);
}

void Listadeapuntesform::cargarEnTabla(QTableWidget *tableWidget, const QStringList &datos)
{
    tableWidget->clearContents();
    tableWidget->setRowCount(datos.size());

    for (int i = 0; i < datos.size(); ++i)
    {
        QTableWidgetItem *item = new QTableWidgetItem(datos[i]);
        item->setFlags(item->flags() ^ Qt::ItemIsEditable); // Hacer las celdas no editables
        tableWidget->setItem(i, 0, item);
    }

    // Ajustar el tamaño de las columnas automáticamente
    tableWidget->resizeColumnsToContents();
    tableWidget->resizeRowsToContents();
}

QStringList Listadeapuntesform::obtenerTemas(const QString &asignatura)
{
    return temasYTerminosPorAsignatura.value(asignatura).first;
}

QStringList Listadeapuntesform::obtenerTerminos(const QString &asignatura)
{
    return temasYTerminosPorAsignatura.value(asignatura).second;
}

void Listadeapuntesform::on_buttonBox_rejected()
{
    this->close(); // Cerrar la subventana
}


