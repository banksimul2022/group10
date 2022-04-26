#include "rfid.h"
#include <QObject>


RFID::RFID(QObject *parent) : QObject(parent)
  port = new QSerialPort(this);

{
   port->setPortName("COM3");
   port->setBaudRate(9600);
   port->setDataBits(QSerialPort::DataBits(8));
   port->setStopBits(QSerialPort::StopBits(1));
   port->setFlowControl(QSerialPort::FlowControl(0));

   connec
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

}
