#include "rfiddll.h"
#include <QDebug>

RfidDll::RfidDll(QObject * parent) : QObject{parent}, serialport(new QSerialPort)

{
        serialport->setPortName("COM3");
        serialport->setBaudRate(9600);
        serialport->setDataBits(QSerialPort::DataBits(8));
        serialport->setParity(QSerialPort::Parity(0));
        serialport->setStopBits(QSerialPort::StopBits(1));
        serialport->setFlowControl(QSerialPort::FlowControl(0));

        connect(serialport,&QSerialPort::readyRead, this, &RfidDll::serialSlot);

        if (serialport->open(QIODevice::ReadWrite)) {
            qDebug() <<serialport->errorString();
        } else {
            qDebug() << "Serial open ok";
        }

    }

    RfidDll::~RfidDll()
    {
        delete serialport;
    }

    void RfidDll::serialSlot()
    {
        QByteArray korttiid = serialport->readAll();
        qDebug() << "SerialSlot: " << korttiid;
        emit lahetaid(korttiid);    // lähettää exeen

}
