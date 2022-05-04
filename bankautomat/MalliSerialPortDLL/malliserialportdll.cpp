#include "malliserialportdll.h"
#include <QDebug>

MalliSerialPortDLL::MalliSerialPortDLL(QObject * parent) :
    QObject{parent}, serialPort(new QSerialPort)
{
    serialPort->setPortName("COM3");
    serialPort->setBaudRate(9600);
    serialPort->setDataBits(QSerialPort::DataBits(8));
    serialPort->setParity(QSerialPort::Parity(0));
    serialPort->setStopBits(QSerialPort::StopBits(1));
    serialPort->setFlowControl(QSerialPort::FlowControl(0));

    connect(serialPort,&QSerialPort::readyRead, this, &MalliSerialPortDLL::serialSlot);

    if (serialPort->open(QIODevice::ReadWrite)) {
        qDebug() <<serialPort->errorString();
    } else {
        qDebug() << "Serial open ok";
    }

}

MalliSerialPortDLL::~MalliSerialPortDLL()
{
    delete serialPort;
}

void MalliSerialPortDLL::serialSlot()
{
    QByteArray korttiid = serialPort->readAll();
    qDebug() << "SerialSlot: " << korttiid;
    emit lahetaid(korttiid);    // lähettää exeen
}
