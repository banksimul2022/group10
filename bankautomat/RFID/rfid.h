#ifndef RFID_H
#define RFID_H

#include <QSerialPort>
#include "rfid_global.h"
#include <QObject>
#include <QString>

class RFID_EXPORT Rfid : public QObject
{
        Q_OBJECT

public:
    Rfid(QObject *parent);
    ~Rfid();
    void readID();

signals:

    void korttiIdSignal(QByteArray);

private slots:

    //void serialSlot(void);

public slots:

    void receiveCardID();
private:
    QSerialPort *serialPort;
    QByteArray ID;

};

#endif // RFID_H
