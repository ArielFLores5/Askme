#ifndef RESULTADOSFORM_H
#define RESULTADOSFORM_H

#include <QWidget>

#include <cuestionario.h>
#include <cuestionarioform.h>

namespace Ui {
class ResultadosForm;
}

class ResultadosForm : public QWidget
{
    Q_OBJECT

public:
    explicit ResultadosForm(QWidget *parent = nullptr);
    ~ResultadosForm();
    void setDatos(Cuestionario *cuestionario);

    void setCuestionario(Cuestionario *newCuestionario);

private:
    Ui::ResultadosForm *ui;

    Cuestionario *m_cuestionario;

    void cargarDatos();
};

#endif // RESULTADOSFORM_H
