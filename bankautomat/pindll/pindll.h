#ifndef PINDLL_H
#define PINDLL_H

#include <QObject>
#include "pindll_global.h"
#include "engine.h"


class PINDLL_EXPORT Pindll  : public QObject
{
   Q_OBJECT

public:
    Pindll(QObject *parent = nullptr);
    ~Pindll();
    void naytaPincodeUi(); // open pinUi
    void suljePincodeUi(); // close pinUi
    void getPincode();     // nouda pinkoodi
    QString pincode;


public slots:
        void pincodeSlot();
        void receiveTimerSignalFromUI();
        void receiveCancelPin();
        void exeVaaraPin();
        void exeKortinLukitusVaroitus();

signals:
        void signalPincode(QString);
        void resetLoginTimerSignal();
        void cancelPincodeLogin();
        void wrongPinToUI();
        void cardLockToUI();

private:
    engine *pengine;
};

#endif // PINDLL_H
