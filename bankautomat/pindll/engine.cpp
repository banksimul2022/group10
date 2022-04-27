#include "engine.h"
#include "ui_engine.h"
#include <qdebug.h>

engine::engine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::engine)
{
    ui->setupUi(this);
    ui->lineEdit->setMaxLength(4);
}

engine::~engine()
{
    delete ui;
    ui= nullptr;
}

void engine::on_pushButton_clicked()
{
    QString t = ui->lineEdit->text();
    qDebug() << "lineedit: " + t;
    emit pinkoodi_signal(t);
}


void engine::on_a1_clicked()
{

    ui -> lineEdit ->setText(pinkoodi+"1");
        pinkoodi = ui -> lineEdit -> text();
}


void engine::on_a2_clicked()
{
    ui -> lineEdit ->setText(pinkoodi+"2");
        pinkoodi = ui -> lineEdit -> text();
}


void engine::on_a3_clicked()
{
    ui -> lineEdit ->setText(pinkoodi+"3");
       pinkoodi = ui -> lineEdit -> text();
}


void engine::on_a4_clicked()
{
    ui -> lineEdit ->setText(pinkoodi+"4");
        pinkoodi = ui -> lineEdit -> text();

}


void engine::on_a5_clicked()
{
    ui -> lineEdit ->setText(pinkoodi+"5");
        pinkoodi = ui -> lineEdit -> text();
}


void engine::on_a6_clicked()
{
    ui -> lineEdit ->setText(pinkoodi+"6");
        pinkoodi = ui -> lineEdit -> text();
}


void engine::on_a7_clicked()
{
    ui -> lineEdit ->setText(pinkoodi+"7");
        pinkoodi = ui -> lineEdit -> text();
}


void engine::on_a8_clicked()
{
    ui -> lineEdit ->setText(pinkoodi+"8");
        pinkoodi = ui -> lineEdit -> text();
}


void engine::on_a9_clicked()
{
    ui -> lineEdit ->setText(pinkoodi+"9");
        pinkoodi = ui -> lineEdit -> text();

}


void engine::on_a0_clicked()
{
    ui -> lineEdit ->setText(pinkoodi+"0");
        pinkoodi = ui -> lineEdit -> text();

}


void engine::on_clear_clicked()
{
    pinkoodi.clear();
        ui->lineEdit->clear();
}


void engine::on_enter_clicked()
{
    qDebug()<<pinkoodi;
    emit pinkoodi_signal(pinkoodi);


}

