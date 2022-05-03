#include "rfid.h"
#include <QObject>
#include <QDebug>


Rfid::Rfid(QObject *parent) : QObject(parent), serialPort( new QSerialPort)


  {

    qDebug()<< "Dll luotu ";
    /*
    serialPort->setPortName("COM3");
    serialPort->setBaudRate(9600);
    serialPort->setDataBits(QSerialPort::DataBits(8));
    serialPort->setParity(QSerialPort::Parity(0));
    serialPort->setStopBits(QSerialPort::StopBits(1));
    serialPort->setFlowControl(QSerialPort::FlowControl(0));
    connect(serialPort, SIGNAL(QSerialPort::readyRead), this, SLOT(serialSlot));
    serialPort->read(16).chopped(3).remove(0, 3);
    if    (!serialPort->open(QIODevice::ReadWrite)) {
        qDebug()<<serialPort->errorString();
    } else {
        qDebug() << "Yhteys auki";
}
}
*/
}
Rfid::~Rfid()
{
    delete serialPort;
    qDebug()<< "dll tuhottu" ;
}

void Rfid::readID()
{
    serialPort->setPortName("COM3");
    serialPort->open(QIODevice::ReadOnly);
    qDebug()<<"COM7 aukaistu";
    connect(serialPort,SIGNAL(readyRead()), this, SLOT(receiveCardID()));
}





void Rfid::receiveCardID()
{
    ID = serialPort->read(16).chopped(3).remove(0,3);
    disconnect(serialPort,SIGNAL(readyRead()),this, SLOT(receiveCardID()));
    qDebug()<< "lähetetään kortti id:tä" << ID;
    emit korttiIdSignal(ID);
}

