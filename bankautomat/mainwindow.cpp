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
    timer = new QTimer;


    connect(pPindll, SIGNAL(signalPincode(QString)), // PIN DLL->EXE
                this, SLOT(receivePincode(QString)));

    connect(this, SIGNAL(wrongPinSignal()),
                 pPindll, SLOT(exeVaaraPin()));

    connect(this, SIGNAL(cardLockWarning()),
                 pPindll, SLOT(exeKortinLukitusVaroitus()));

    connect(this, SIGNAL(accountIDtoMainWindow(QString)),
                Ppankkimenu, SLOT(receiveAccountIDfromLogin(QString)));

    connect(this, SIGNAL(clientIDtoMainWindow(QString)),
                Ppankkimenu, SLOT(receiveCLientIDfromLogin(QString)));

    connect(this, SIGNAL(MainTimerSignal()),
                Ppankkimenu, SLOT(startMainTimer()));

    connect(pPindll, SIGNAL(resetLoginTimerSignal()),
                this, SLOT(resetTimer()));

    connect(timer, SIGNAL(timeout()),
                this, SLOT(loginIdleSlot()));

    connect(pPindll, SIGNAL(cancelPincodeLogin()),
                 this, SLOT(loginIdleSlot()));

    connect(this, SIGNAL(wrongPinSignal()),
                 pPindll, SLOT(exeWrongPin()));

        connect(this, SIGNAL(cardLockWarning()),
                pPindll, SLOT(exeCardLockWarning()));


}

MainWindow::~MainWindow()
{

    delete ui;
    delete Ppankkimenu;
    Ppankkimenu=nullptr;

    delete pPindll;
    pPindll = nullptr;

}


void MainWindow::on_kirjaudusisaan_clicked()
{

    pPindll->naytaPincodeUi();


}

void MainWindow::receiveLogin(QString)
{
    qDebug() << "receiveLogin() in EXE";

    if(loginTries == 3 || cardLocked == '1')
   {
            emit cardLockWarning();
   }
    else {
        emit wrongPinSignal();
        loginTries++;
    }
    if(pincode == "1111" && cardLocked == '0')
        {
            delete pPindll;
            pPindll = nullptr;
            Ppankkimenu->show();
            timer->stop();
            loginTries = 1;
        }


}

void MainWindow::receivePincode(QString pin)
{
        pincode = pin;
        qDebug() << "receivePincode() in EXE" << pincode;
        if(pin=="1111")
        {
            Ppankkimenu->exec();
        }
        else{
            pPindll->exeVaaraPin();
        }


}


