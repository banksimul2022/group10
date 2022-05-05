#ifndef SERIALPORTDLL_H
#define SERIALPORTDLL_H
#include "serialportdll_global.h"
#include <QDebug>
#include <QObject>
#include <QtSerialPort>
#include <QSerialPort>


class SERIALPORTDLL_EXPORT Serialportdll : public QObject
{
        Q_OBJECT
public:
    Serialportdll();
    ~Serialportdll();
    void ReadID();

public slots:
    void receiveID();

signals:
    void sendToMain(QByteArray);

private:
    QSerialPort *serialport = nullptr;
    QByteArray cardID;






};

#endif // SERIALPORTDLL_H
