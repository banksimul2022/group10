#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pKirjaudusisaan = new kirjaudusisaan(this);

    serialPort = new Rfid(this);

    connect(serialPort, SIGNAL(korttiIdSignal(QByteArray)),
            this, SLOT(korttiIdSlot(QByteArray)));
}

MainWindow::~MainWindow()
{
    delete serialPort;
    delete ui;


}


void MainWindow::on_kirjaudusisaan_clicked()
{

    pKirjaudusisaan -> exec();

}

void MainWindow::korttiIdSlot(QByteArray)
{
   ui->kirjaudusisaan->setText("toimiiko");
}

