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

void naytasaldo::slotSaldo(QString saldo)
{
    Saldo = saldo;
    ui->leSaldo->setText(Saldo);
}

void naytasaldo::paivitaLeClient1(QString Client1)
{
    ui->lineEditNimi->setText(Client1);
}

void naytasaldo::slotClient1(QString Client1)
{
    client1 = Client1;
    ui->lineEditNimi->setText(client1);
}


void naytasaldo::paivitaLeTT10(QString TT10)
{
    ui->ttlabel->setText(TT10);
}

void naytasaldo::updateBalanceSlot()
{

}

void naytasaldo::slotTilitapahtumat(QString TT10)
{
    tt10 = TT10;
    ui->ttlabel->setText(tt10);
}

void naytasaldo::on_palaaNaytasaldo_clicked()
{
    close ();
}

void naytasaldo::slotAsiakas(QString)
{

}





/*void naytasaldo::on_naytaTT10_clicked()
{
    qDebug()<<"naytaTT10";
    pRestapidll->getTT10("1");
}
*/
