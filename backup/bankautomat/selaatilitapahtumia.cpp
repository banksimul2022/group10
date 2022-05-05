#include "selaatilitapahtumia.h"
#include "ui_selaatilitapahtumia.h"

selaatilitapahtumia::selaatilitapahtumia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selaatilitapahtumia)
{
    ui->setupUi(this);
}

selaatilitapahtumia::~selaatilitapahtumia()
{
    delete ui;
}

void selaatilitapahtumia::on_btnPalaatilitapahtumat_clicked()
{
    close();
}


void selaatilitapahtumia::on_btnSeuraava_clicked()
{

}


void selaatilitapahtumia::on_btnEdellinen_clicked()
{

}

