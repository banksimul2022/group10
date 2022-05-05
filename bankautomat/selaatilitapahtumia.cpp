#include "selaatilitapahtumia.h"
#include "ui_selaatilitapahtumia.h"

selaatilitapahtumia::selaatilitapahtumia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selaatilitapahtumia)
{
    ui->setupUi(this);

    pRestapidll = new Restapidll;

    /*connect(pRestapidll, SIGNAL(TT5ToExe(QString)),
                    this,SLOT(haeTT5(QString)));

    connect(pRestapidll, SIGNAL(TT5ekaToExe(QString)),
                    this,SLOT(haeTT5eka(QString)));*/

}

selaatilitapahtumia::~selaatilitapahtumia()
{
    delete ui;
    delete pRestapidll;
    pRestapidll = nullptr;
}


void selaatilitapahtumia::on_btnPalaatilitapahtumat_clicked()
{

    close();
}


void selaatilitapahtumia::on_btnSeuraava_clicked()
{
    qDebug()<<"seuraava klikked";
    ui->leTT5->setText(tt5);
}


void selaatilitapahtumia::on_btnEdellinen_clicked()
{
    ui->leTT5->setText(tt5eka);
}

void selaatilitapahtumia::slotTT5(QString TT5)
{
    tt5=TT5;
    ui->leTT5->setText(tt5);
}

void selaatilitapahtumia::paivitaTT5(QString TT5)
{
    ui->leTT5->setText(TT5);
}

void selaatilitapahtumia::slotTT5eka(QString TT5eka)
{
    tt5eka = TT5eka;
    ui->leTT5->setText(tt5eka);
}

void selaatilitapahtumia::paivitaTT5eka(QString TT5eka)
{
    ui->leTT5->setText(TT5eka);
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

