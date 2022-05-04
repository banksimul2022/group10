#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <pankkimenu.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pPindll = new Pindll(this);

    Ppankkimenu = new pankkimenu;

    pRestapidll = new Restapidll;

    timer = new QTimer;


    connect(pPindll, SIGNAL(pinkoodi_signal(QString)), // PIN DLL->EXE
                this, SLOT(pinkoodi_slot(QString)));

    connect(pRestapidll, SIGNAL(loginSignal(QString)), //login success / fail
                this, SLOT(login_slot(QString)));

    connect(this, SIGNAL(wrongPinSignal()),
                 pPindll, SLOT(pinkoodi_vaarin()));

    connect(pRestapidll, SIGNAL(saldoToExe(QString)),
                    this,SLOT(haesaldo(QString)));


}

MainWindow::~MainWindow()
{

    delete ui;

    delete Ppankkimenu;
    Ppankkimenu=nullptr;

    delete pPindll;
    pPindll = nullptr;

    delete timer;
    timer=nullptr;

}

void MainWindow::haenimi(QString)
{

}

void MainWindow::haesaldo(QString)
{

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
        Ppankkimenu->exec();
    }
    else{

    }

}

void MainWindow::login_slot(QByteArray truefalse)
{

}





