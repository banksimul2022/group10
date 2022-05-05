#include "nostarahaa.h"
#include "ui_nostarahaa.h"
#include "restapidll.h"

nostarahaa::nostarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);

}

nostarahaa::~nostarahaa()
{
    delete ui;
}

void nostarahaa::paivitaNosto(QString)
{

}

void nostarahaa::slotNosto(QString)
{

}

void nostarahaa::on_palaaNostarahaa_clicked()
{
    close ();
}


void nostarahaa::on_btn20Eur_clicked()
{
    close();
}


void nostarahaa::on_btn40Eur_clicked()
{
    close();
}


void nostarahaa::on_btn60Eur_clicked()
{
    close();
}


void nostarahaa::on_btn100Eur_clicked()
{
    close();
}


void nostarahaa::on_btn200Eur_clicked()
{
    close();
}


void nostarahaa::on_btn500Eur_clicked()
{
    close();
}


