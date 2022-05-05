#include "nostarahaa.h"
#include "ui_nostarahaa.h"
#include <qdebug.h>

nostarahaa::nostarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);

    pRestapidll = new Restapidll;

    connect(pRestapidll, SIGNAL(summaToExe(QString)),
                    this,SLOT(signaaliRestApi(QString)));

}

nostarahaa::~nostarahaa()
{
    delete ui;
}

void nostarahaa::signaaliRestApi(QByteArray)
{

}


void nostarahaa::on_palaaNostarahaa_clicked()
{

    close ();
}




void nostarahaa::on_btn20Eur_clicked()
{
    qDebug()<<"Nostettiin 20";
    pRestapidll->nosto("20");
    ui->lineEdit->setText("Nosto onnistui, ota rahat automaatista! | 20e");
}


void nostarahaa::on_btn40Eur_clicked()
{
    qDebug()<<"Nostettiin 40";
    pRestapidll->nosto("40");
    ui->lineEdit->setText("Nosto onnistui, ota rahat automaatista! | 40e");
}


void nostarahaa::on_btn60Eur_clicked()
{
    qDebug()<<"Nostettiin 60";
    pRestapidll->nosto("60");
    ui->lineEdit->setText("Nosto onnistui, ota rahat automaatista!");
}


void nostarahaa::on_btn100Eur_clicked()
{
    qDebug()<<"Nostettiin 100";
    pRestapidll->nosto("100");
    ui->lineEdit->setText("Nosto onnistui, ota rahat automaatista!");
}


void nostarahaa::on_btn200Eur_clicked()
{
    qDebug()<<"Nostettiin 200";
    pRestapidll->nosto("200");
    ui->lineEdit->setText("Nosto onnistui, ota rahat automaatista!");
}


void nostarahaa::on_btn500Eur_clicked()
{
    qDebug()<<"Nostettiin 500";
    pRestapidll->nosto("500");
    ui->lineEdit->setText("Nosto onnistui, ota rahat automaatista!");
}

