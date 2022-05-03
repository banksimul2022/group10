#include "engine.h"
#include "ui_engine.h"
#include <qdebug.h>
#include <QTimer>


engine::engine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::engine)
{
    ui->setupUi(this);

    timer = new QTimer;


        connect(ui->a1, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));

        connect(ui->a2, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));

        connect(ui->a3, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));

        connect(ui->a4, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));

        connect(ui->a5, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));

        connect(ui->a6, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));

        connect(ui->a7, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));

        connect(ui->a8, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));

        connect(ui->a9, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));

        connect(ui->a0, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));

        connect(ui->clear, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));

        connect(ui->enter, SIGNAL(clicked()),
                this, SLOT(resetLoginTimer()));






}

engine::~engine()
{
    delete ui;
    delete timer;
    timer=nullptr;




}

QString engine::returnPincode()
{
    return setValue;
}

void engine::resetLoginTimer()
{
       emit resetTimerSignal();
}

void engine::updateScreen()
{
    ui->lineEdit->setText("Wrong pincode");


}

void engine::cardLockInfo()
{
        qDebug() << "cardLockInfo in DLL";
        ui->lineEdit->setText("Card is locked");
}



// CLICK HANDLERS

void engine::on_a1_clicked()
{
        setValue.append("1");
        hideValue.append("*");
        ui->lineEdit->setText(hideValue);
}


void engine::on_a2_clicked()
{
        setValue.append("2");
        hideValue.append("*");
        ui->lineEdit->setText(hideValue);
}


void engine::on_a3_clicked()
{
    setValue.append("3");
    hideValue.append("*");
    ui->lineEdit->setText(hideValue);
}


void engine::on_a4_clicked()
{
    setValue.append("4");
    hideValue.append("*");
    ui->lineEdit->setText(hideValue);

}


void engine::on_a5_clicked()
{
    setValue.append("5");
    hideValue.append("*");
    ui->lineEdit->setText(hideValue);
}


void engine::on_a6_clicked()
{
    setValue.append("6");
    hideValue.append("*");
    ui->lineEdit->setText(hideValue);
}


void engine::on_a7_clicked()
{
    setValue.append("7");
    hideValue.append("*");
    ui->lineEdit->setText(hideValue);
}


void engine::on_a8_clicked()
{
    setValue.append("8");
    hideValue.append("*");
    ui->lineEdit->setText(hideValue);
}


void engine::on_a9_clicked()
{
    setValue.append("9");
    hideValue.append("*");
    ui->lineEdit->setText(hideValue);

}


void engine::on_a0_clicked()
{
    setValue.append("9");
    hideValue.append("*");
    ui->lineEdit->setText(hideValue);

}


void engine::on_clear_clicked()
{
      setValue="";
      hideValue="";
      ui->lineEdit->setText(hideValue);
}


void engine::on_enter_clicked()
{
   if(setValue.length() > 4 || setValue.length() < 4) {
       ui->lineEdit->setText("PIN must be 4 numbers");
   }

   else {
   emit pincodeFromUI();
   }
}



void engine::on_cancel_clicked()
{
    emit cancelPINSignal();
}

