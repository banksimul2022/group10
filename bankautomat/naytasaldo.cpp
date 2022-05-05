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

void naytasaldo::paivitaLeSaldo(QString saldo)
{
    ui->leSaldo->setText(saldo);

}

void naytasaldo::paivitaLeTT10(QString TT10)
{
    ui->leTT10->setText(TT10);
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

void naytasaldo::slotTilitapahtumat(QString TT10)
{
    tt10 = TT10;
    ui->leTT10->setText(tt10);
}

/*void naytasaldo::on_naytaTT10_clicked()
{
    qDebug()<<"naytaTT10";
    pRestapidll->getTT10("1");
}
*/
