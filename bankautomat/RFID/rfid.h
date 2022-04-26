#ifndef RFID_H
#define RFID_H

#include "RFID_global.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QObject>
#include <QDebug>

class RFID_EXPORT RFID : public QObject
 {
        Q_OBJECT

public:
    RFID(QObject * parent = nullptr);
    ~RFID();
    void kortinID();

signals:

    void SendToExe(QByteArray);

public slots:

    void RcvID();
private slots:
    void serialSlot(void);

private:

    QSerialPort * port;
    QByteArray ID;
    QByteArray korttiid;
};

#endif // RFID_H
