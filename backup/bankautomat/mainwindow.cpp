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




}

MainWindow::~MainWindow()
{

    delete ui;



    delete pPindll;
    pPindll = nullptr;

    delete timer;
    timer=nullptr;

}

void MainWindow::haenimi(QString)
{
  // nimi = nimi+"";
  // Ppankkimenu->asetaNimi(nimi);
   pRestapidll->getNimi(QString());

}

void MainWindow::haesaldo(QString saldo)
{
    qDebug()<<"hae saldoo "+saldo;
    //saldo = saldo+" $";
    //Ppankkimenu->asetaSaldo(saldo);
   // Pnaytasaldo->paivitaLeSaldo(saldo);

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
}

