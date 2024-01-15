#include "askme.h"
#include "ui_askme.h"

Askme::Askme(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Askme)
{
    ui->setupUi(this);
    cargarDatos();
    guardar();
    m_listaDeApuntesForm = nullptr;
}

Askme::~Askme()
{
    delete ui;
}

void Askme::on_apunteTomado(Apunte *apunte)
{
    foreach(Asignatura *a, m_asignaturas){
        qDebug().noquote() << a->toString();
    }
    guardar();
    cargarDatos();
}

void Askme::cargarSubVentana(QWidget *ventana)
{
    auto sub = ui->mdiArea->addSubWindow(ventana);
    sub->show();
}

void Askme::cargarDatos()
{
    m_asignaturas.clear(); // Limpiar las asignaturas existentes

    QFile file("data.csv");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split(',');

            if (fields.size() == 4) {
                QString asignaturaNombre = fields[0].trimmed();
                QString temaNombre = fields[1].trimmed();
                QString termino = fields[2].trimmed();
                QString concepto = fields[3].trimmed();

                // Buscar la asignatura
                Asignatura *asignatura = nullptr;
                foreach (Asignatura *a, m_asignaturas) {
                    if (a->nombre() == asignaturaNombre) {
                        asignatura = a;
                        break;
                    }
                }

                // Si no se encuentra la asignatura, agregarla
                if (!asignatura) {
                    asignatura = new Asignatura(asignaturaNombre);
                    m_asignaturas.append(asignatura);
                }

                // Buscar el tema dentro de la asignatura
                Tema *tema = nullptr;
                foreach (Tema *t, asignatura->temas()) {
                    if (t->nombre() == temaNombre) {
                        tema = t;
                        break;
                    }
                }

                // Si no se encuentra el tema, agregarlo
                if (!tema) {
                    tema = new Tema(temaNombre);
                    asignatura->agregarTema(tema);
                }

                // Agregar el apunte al tema
                Apunte *apunte = new Apunte(termino, concepto);
                tema->agregarApunte(apunte);
            }
        }
        file.close();
    }
}


void Askme::guardar()
{
    QFile file("Apuntes.csv");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);

        // Guardar asignaturas y temas
        foreach (Asignatura *asignatura, m_asignaturas) {
            foreach (Tema *tema, asignatura->temas()) {
                foreach (Apunte *apunte, tema->apuntes()) {
                    // Formato: Asignatura,Tema,Termino,Concepto
                    out << asignatura->nombre() << ","
                        << tema->nombre() << ","
                        << apunte->termino() << ","
                        << apunte->concepto() << "\n";
                }
            }
        }

        file.close();
    }
}
void Askme::on_actionNuevo_triggered()
{
    ApunteForm *w = new ApunteForm(this);
    w->setAsignaturas(m_asignaturas);
    w->cargarAsignaturas();

    connect(w, SIGNAL(apunteTomado(Apunte*)), this, SLOT(on_apunteTomado(Apunte*)));

    cargarSubVentana(w);

    // Cargar los datos después de agregar un nuevo apunte
    cargarDatos();
}


void Askme::on_actionLista_triggered()
{
    if (!m_listaDeApuntesForm) {
        m_listaDeApuntesForm = new Listadeapuntesform(this);

        // Conectar señal destroyed para manejar la liberación de recursos
        connect(m_listaDeApuntesForm, &QObject::destroyed, this, [=] {
            m_listaDeApuntesForm = nullptr;
        });
    }
    if (!m_listaDeApuntesForm->isVisible()) {
        cargarSubVentana(m_listaDeApuntesForm);
    }
}