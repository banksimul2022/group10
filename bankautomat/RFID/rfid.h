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


signals:

    void korttiIdSignal(QByteArray);

private slots:

    void serialSlot(void);


private:
    QSerialPort *serialPort;
   // QByteArray korttiID;

};

#endif // RFID_H
