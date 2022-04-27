#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <pankkimenu.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pPindll = new Pindll;
    Ppankkimenu = new pankkimenu;

    connect(pPindll->pengine,SIGNAL(pinkoodi_signal(QString)),
                this,SLOT(pinkoodi_slot(QString)));



}

MainWindow::~MainWindow()
{

    delete ui;

    delete pPindll;
    pPindll = nullptr;

}


void MainWindow::on_kirjaudusisaan_clicked()
{

    pPindll->login();

}

void MainWindow::loginSlot(QString truefalse)
{

qDebug()<< "login slotissa: " + truefalse;
}

void MainWindow::pinkoodiSlot(QString)
{

}

