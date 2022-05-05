#include "selaatilitapahtumia.h"
#include "ui_selaatilitapahtumia.h"

selaatilitapahtumia::selaatilitapahtumia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selaatilitapahtumia)
{
    ui->setupUi(this);
    pRestapidll = new Restapidll; //uus
}

selaatilitapahtumia::~selaatilitapahtumia()
{
    delete ui;
    delete pRestapidll; //uus
    pRestapidll = nullptr; //uus
}


void selaatilitapahtumia::on_btnPalaatilitapahtumat_clicked()
{
    close();
}


void selaatilitapahtumia::on_btnSeuraava_clicked() //uus
{
    pRestapidll->getTT5("1");
}

void selaatilitapahtumia::slotTT5(QString TT5) //uus
{
    tt5 = TT5;
    ui->leTT5->setText(tt5);
}

void selaatilitapahtumia::paivitaTT5(QString TT5) //uus
{
    ui->leTT5->setText(TT5);
}

void selaatilitapahtumia::on_btnEdellinen_clicked()
{

}

void selaatilitapahtumia::paivitaLeClient(QString Client)
{
    ui->lineEdit_3->setText(Client);
}


void selaatilitapahtumia::slotClient(QString Client)
{
    client = Client;
    ui->lineEdit_3->setText(client);
}


