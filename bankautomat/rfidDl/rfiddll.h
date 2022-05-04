#ifndef RFIDDLL_H
#define RFIDDLL_H

#include "rfidDll_global.h"
#include <QSerialPort>
#include <QObject>


class RFIDDLL_EXPORT RfidDll : public QObject
{
    Q_OBJECT

public:
    RfidDll(QObject *parent);
    ~RfidDll();

signals:
    void lahetaid(QByteArray);

private slots:
    void serialSlot(void);

private:
    QSerialPort *serialport;

};


#endif // RFIDDLL_H
