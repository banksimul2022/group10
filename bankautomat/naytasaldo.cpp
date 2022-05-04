#include "naytasaldo.h"
#include "ui_naytasaldo.h"


naytasaldo::naytasaldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::naytasaldo)
{
    ui->setupUi(this);




}

naytasaldo::~naytasaldo()
{
    delete ui;
}

void naytasaldo::getAsiakas()
{

}

void naytasaldo::getSaldo()
{

}

void naytasaldo::on_palaaNaytasaldo_clicked()
{
    close ();
}

void naytasaldo::slotAsiakas(QString)
{

}

void naytasaldo::slotSaldo(QString saldo)
{
    Saldo = saldo;
    ui->leSaldo->setText(Saldo);
}

void naytasaldo::slotTilitapahtumat(QString)
{

}




