#include "resultadosform.h"
#include "ui_resultadosform.h"

ResultadosForm::ResultadosForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ResultadosForm)
{
    ui->setupUi(this);
}

ResultadosForm::~ResultadosForm()
{
    delete ui;
}

void ResultadosForm::setDatos(Cuestionario *cuestionario)
{
    if (cuestionario)
    {
        m_cuestionario = cuestionario;
        cargarDatos();
    }
    else
    {

    }
}

void ResultadosForm::setCuestionario(Cuestionario *newCuestionario)
{
    m_cuestionario = newCuestionario;
    cargarDatos();

}

void ResultadosForm::cargarDatos()
{
    float score = m_cuestionario->score();
    QString tema = m_cuestionario->nombreTema();

    QString porcentaje = QString::number(score, 'f', 2) + "%";

    ui->lblScore->setText("Score: " + porcentaje);
    ui->lblTema->setText(tema);

    QList<Pregunta *> preguntas = m_cuestionario->preguntas();

    ui->tblResultados->setRowCount(preguntas.size());
    ui->tblResultados->setColumnCount(2);

    ui->tblResultados->setHorizontalHeaderLabels({"Término", "Contestada Correctamente"});

        // Llenar la tabla con los datos de las preguntas
    for (int i = 0; i < preguntas.size(); ++i)
    {
        QTableWidgetItem *terminoItem = new QTableWidgetItem(preguntas[i]->apunte()->termino());
        QTableWidgetItem *correctoItem = new QTableWidgetItem(preguntas[i]->correcta() ? "Correcto" : "Falso");

        ui->tblResultados->setItem(i, 0, terminoItem);
        ui->tblResultados->setItem(i, 1, correctoItem);
    }
}
