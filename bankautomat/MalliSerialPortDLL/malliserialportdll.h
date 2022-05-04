#ifndef MALLISERIALPORTDLL_H
#define MALLISERIALPORTDLL_H
#include <QSerialPort>
#include "MalliSerialPortDLL_global.h"
#include <QObject>
class MALLISERIALPORTDLL_EXPORT MalliSerialPortDLL : public QObject
{
    Q_OBJECT

public:
    MalliSerialPortDLL(QObject *parent);
    ~MalliSerialPortDLL();
signals:
    void lahetaid(QByteArray);
private slots:
    void serialSlot(void);
private:
    QSerialPort * serialPort;
};

#endif // MALLISERIALPORTDLL_H
