#include "rfid.h"
#include <qdebug.h>
#include <QDebug>


RFID::RFID(QObject *parent) : QObject (parent), port(new QSerialPort)
{

   port->setPortName("COM3");
   port->setBaudRate(9600);
   port->setDataBits(QSerialPort::DataBits(8));
   port->setParity(QSerialPort::Parity(0));
   port->setStopBits(QSerialPort::StopBits(1));
   port->setFlowControl(QSerialPort::FlowControl(0));

   connect(port, SIGNAL(QSerialPort::readyRead), this, SLOT(serialSlot));
   if(port->open(QIODevice::ReadWrite)) {
       qDebug()<< port->errorString();
   } else {
       qDebug()<< "Serial open ok";
   }
}

RFID::~RFID()
{
    delete port;
    port = nullptr;
}

void RFID::kortinID()
{
   // port->setBaudRate(9600);
   // port->setPortName("COM3");
   // port->open(QIODevice::ReadOnly);
   // qDebug()<<"Syota kortti";
   // connect(port, SIGNAL(readyRead()),this, SLOT(RcvID));

}

void RFID::RcvID()
{

}

void RFID::serialSlot()
{
    QByteArray korttiid = port->readAll();
    //emit lahetamainwindow(viesti);
}
