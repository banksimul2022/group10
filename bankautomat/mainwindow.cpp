#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <naytasaldo.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pPindll = new Pindll(this);

    pRestapidll = new Restapidll;

    Pnaytasaldo = new naytasaldo;

    Pnostarahaa = new nostarahaa;

    Pselaatilitapahtumia = new selaatilitapahtumia;


    timer = new QTimer;


    connect(pPindll, SIGNAL(pinkoodi_signal(QString)), // PIN DLL->EXE
                this, SLOT(pinkoodi_slot(QString)));

    connect(pRestapidll, SIGNAL(loginSignal(QByteArray)), //login success / fail
                this, SLOT(login_slot(QByteArray)));

    connect(this, SIGNAL(wrongPinSignal()),
                 pPindll, SLOT(pinkoodi_vaarin()));

    connect(pRestapidll, SIGNAL(saldoToExe(QString)),
                    this,SLOT(haesaldo(QString)));

    connect(pRestapidll, SIGNAL(nimiToExe(QString)),
                    this,SLOT(haenimi(QString)));

    connect(pRestapidll, SIGNAL(nimiToExe(QString)),
                    this,SLOT(haenimi1(QString)));

    connect(pRestapidll, SIGNAL(TT10ToExe(QString)),
                    this,SLOT(haeTT10(QString)));

    connect(pRestapidll, SIGNAL(TT5ToExe(QString)),
                    this,SLOT(haeTT5(QString)));




}

MainWindow::~MainWindow()
{

    delete ui;

    delete pPindll;
    pPindll = nullptr;

    delete timer;
    timer=nullptr;

    delete Pnostarahaa;
    Pnostarahaa = nullptr;

    delete Pselaatilitapahtumia;
    Pselaatilitapahtumia = nullptr;

    delete Pnaytasaldo;
    Pnaytasaldo = nullptr;
}

void MainWindow::haenimi(QString Client)
{
    Pselaatilitapahtumia->paivitaLeClient(Client);

}

void MainWindow::haenimi1(QString Client1)
{
    Pnaytasaldo->paivitaLeClient1(Client1);
}

void MainWindow::haesaldo(QString saldo)
{
    qDebug()<<"hae saldoo "+saldo;
    //saldo = saldo+" $";
    //Ppankkimenu->asetaSaldo(saldo);
    Pnaytasaldo->show();
    Pnaytasaldo->paivitaLeSaldo(saldo);


}

void MainWindow::haeTT10(QString TT10)
{
    qDebug()<<"hae 10 tilitapahtumaa"+TT10;
    Pnaytasaldo->paivitaLeTT10(TT10);

}

void MainWindow::haeTT5(QString TT5)
{
    Pselaatilitapahtumia->on_btnSeuraava_clicked(TT5);

}


void MainWindow::on_kirjaudusisaan_clicked()
{

    pPindll->naytaPincodeUi();



}

void MainWindow::RFID_slot(QByteArray)
{
    pPindll->naytaPincodeUi();
}

void MainWindow::startTimer()
{

}

void MainWindow::tiliValittuSlot(QString)
{

}

void MainWindow::getAsiakasSlot(QString)
{

}

void MainWindow::trueFalse()
{

}

void MainWindow::wrongPinSignal()
{

}


void MainWindow::pinkoodi_slot(QString pinkoodi)
{
    pRestapidll->login("999-999-999", pinkoodi);

    if(pinkoodi=="1234")
    {
     pPindll->suljePincodeUi();
    }
    else{

    }

}

void MainWindow::login_slot(QByteArray truefalse)
{
    qDebug()<<"login_slot"<<truefalse;
    pRestapidll->setToken(truefalse);
}


void MainWindow::on_lenaytasaldo_clicked()
{
    pRestapidll->getSaldo("1");
    pRestapidll->getTT10("1");
    pRestapidll->getNimi("1");
}

void MainWindow::on_nostarahaa_clicked()
{
    Pnostarahaa->show();
}


void MainWindow::on_logoff_clicked()
{
    close();
}


void MainWindow::on_selaaTT_clicked()
{
    Pselaatilitapahtumia->show();
    pRestapidll->getNimi("1");
    pRestapidll->getTT5("1");
}

