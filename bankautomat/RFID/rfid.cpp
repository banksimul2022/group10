#include "rfid.h"


RFID::RFID(QObject *parent) : QObject(parent)
{
    port = new QSerialPort(this);
}

RFID::~RFID()
{
    delete port;
    port = nullptr;
}

void RFID::kortinID()
{
    //port->setBaudRate(9600);
    port->setPortName("COM3");
    port->open(QIODevice::ReadOnly);
    qDebug()<<"Syota kortti";
    connect(port, SIGNAL(readyRead()),this, SLOT(RcvID));

}

void RFID::RcvID()
{
    //QByteArray ID = port->
}
