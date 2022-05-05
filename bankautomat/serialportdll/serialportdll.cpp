#include "serialportdll.h"

Serialportdll::Serialportdll()
{
    qDebug() << "DLL luotu?";
    serialport = new QSerialPort(this);
}

Serialportdll::~Serialportdll()
{
    qDebug()<< "Dll destruktori";
    delete serialport;
    serialport = nullptr;
}

void Serialportdll::ReadID()
{
    serialport->setPortName("COM3");
    serialport->open(QIODevice::ReadOnly);
    qDebug() << "Portti auki?";
    connect(serialport, SIGNAL(readyRead()), this, SLOT (receiveID()));

}

void Serialportdll::receiveID()
{
    cardID = serialport->read(16).chopped(3).remove(0,3);
    disconnect(serialport, SIGNAL(readyRead()), this, SLOT(receiveID()));
    qDebug() << "Lahetetaan cardID" << cardID;
    emit sendToMain(cardID);
}
