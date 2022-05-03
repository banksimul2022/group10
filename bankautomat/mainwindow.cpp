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


void MainWindow::pinkoodi_slot(QString pinkoodi)
{

}

void MainWindow::login_slot(QString)
{

}





