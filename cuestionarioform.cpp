#include "cuestionarioform.h"
#include "ui_cuestionarioform.h"

CuestionarioForm::CuestionarioForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CuestionarioForm)
{
    ui->setupUi(this);
}

CuestionarioForm::~CuestionarioForm()
{
    delete ui;
}

void CuestionarioForm::setAsignaturas(QList<Asignatura *> &asignaturas)
{
    m_asignaturas = &asignaturas;
}

void CuestionarioForm::cargarAsignaturas()
{
    ui->cmbAsignaturas->clear();
    foreach(Asignatura *a, *m_asignaturas){
        ui->cmbAsignaturas->addItem(a->nombre());
    }
}

void CuestionarioForm::on_cmbAsignaturas_currentIndexChanged(int index)
{
    ui->cmbTemas->clear();
    if (index >= 0 && index < m_asignaturas->size()){
        Asignatura *a = m_asignaturas->at(index);
        foreach(Tema *t, a->temas()){
            ui->cmbTemas->addItem(t->nombre());
        }
    }
}

void CuestionarioForm::on_buttonBox_accepted()
{
    // Obtener los indices de los combos
    int indexAsignatura = ui->cmbAsignaturas->currentIndex();
    int indexTema = ui->cmbTemas->currentIndex();
    // Obtener el texto de la asignatura seleccionada
    QString asignatura = ui->cmbAsignaturas->currentText();
    //Crear la tarea
    Tema *t = m_asignaturas->at(indexAsignatura)->temas().at(indexTema);
    // emite señal
    emit cuestionarioCreado(new Cuestionario(asignatura, t));
    // cerrar
    this->parentWidget()->close();

}
void CuestionarioForm::on_buttonBox_rejected()
{
    this->parentWidget()->close();
}
