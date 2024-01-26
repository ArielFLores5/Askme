#include "creditosform.h"
#include "ui_creditosform.h"

CreditosForm::CreditosForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreditosForm)
{
    ui->setupUi(this);

    ui->cmbNombreC->addItem("rtufino");
    ui->cmbNombreC->addItem("defaultdavr21");
    ui->cmbNombreC->addItem("FLiam Tech");
    ui->cmbNombreC->addItem("Hayai01");
    ui->cmbNombreC->addItem("Mayerli12");
    ui->cmbNombreC->addItem("LuisCOD369");
    ui->cmbNombreC->addItem("ArielFLores5");
    ui->cmbNombreC->addItem("EonSoulCout");


}

CreditosForm::~CreditosForm()
{
    delete ui;
}

void CreditosForm::on_pushButton_released()
{
    int index = ui->cmbNombreC->currentIndex();
    QString URL;
    switch(index)
    {
    case 0:
        URL = "https://github.com/rtufino";
        break;
    case 1:
        URL = "https://github.com/defaultdavr21";
        break;
    case 2:
        URL = "https://github.com/FLiamTech";
        break;
    case 3:
        URL = "https://github.com/Hayai01";
        break;
    case 4:
        URL = "https://github.com/Mayerli12";
        break;
    case 5:
        URL = "https://github.com/LuisCOD369";
        break;
    case 6:
        URL = "https://github.com/ArielFLores5";
        break;
    case 7:
        URL = "https://github.com/EonSoulCout";
        break;

    }

    if(!URL.isEmpty())
    {
        QDesktopServices::openUrl(QUrl(URL));
    }

}
