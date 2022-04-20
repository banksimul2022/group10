#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pRfid = new Rfid;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pRfid;
    pRfid = nullptr;

}


void MainWindow::on_pushButton_clicked()
{

}

