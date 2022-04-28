#include "rfid.h"
#include <QObject>
#include <QDebug>


Rfid::Rfid(QObject *parent) : QObject(parent), serialPort( new QSerialPort)


  {


    serialPort->setPortName("COM3");
    serialPort->setBaudRate(9600);
    serialPort->setDataBits(QSerialPort::DataBits(8));
    serialPort->setParity(QSerialPort::Parity(0));
    serialPort->setStopBits(QSerialPort::StopBits(1));
    serialPort->setFlowControl(QSerialPort::FlowControl(0));
    connect(serialPort, SIGNAL(QSerialPort::readyRead), this, SLOT(serialSlot));

    if    (!serialPort->open(QIODevice::ReadWrite)) {
        qDebug()<<serialPort->errorString();
    } else {
        qDebug() << "Yhteys auki";
}
}

Rfid::~Rfid()
{
    delete serialPort;
}



void Rfid::serialSlot()
{

    QByteArray korttiID = serialPort->readAll();
    emit korttiIdSignal(korttiID);
}
