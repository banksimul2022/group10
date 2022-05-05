#include "nostarahaa.h"
#include "ui_nostarahaa.h"

nostarahaa::nostarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);

    pRestapidll = new Restapidll;
}

nostarahaa::~nostarahaa()
{
    delete ui;
}

void nostarahaa::on_palaaNostarahaa_clicked()
{

    close ();
}




void nostarahaa::on_btn20Eur_clicked(QString Summa)
{
    close();
}


void nostarahaa::on_btn40Eur_clicked(QString Summa)
{
    close();
}


void nostarahaa::on_btn60Eur_clicked(QString Summa)
{
    close();
}


void nostarahaa::on_btn100Eur_clicked(QString Summa)
{
    close();
}


void nostarahaa::on_btn200Eur_clicked(QString Summa)
{
    close();
}


void nostarahaa::on_btn500Eur_clicked(QString Summa)
{
    close();
}

