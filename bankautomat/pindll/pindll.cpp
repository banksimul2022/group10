#include "pindll.h"
#include <qdebug.h>

Pindll::Pindll(QObject *parent) : QObject(parent)
{
   pengine = new engine;

   connect(pengine, SIGNAL(pincodeFromUI()),
               this, SLOT(pincodeSlot()));

   connect(pengine, SIGNAL(resetTimerSignal()),
               this, SLOT(receiveTimerSignalFromUI()));

   connect(pengine, SIGNAL(cancelPINSignal()),
               this, SLOT(receiveCancelPin()));

   connect(this, SIGNAL(wrongPinToUI()),
               pengine, SLOT(updateScreen()));

   connect(this, SIGNAL(cardLockToUI()),
               pengine, SLOT(cardLockInfo()));
}

Pindll::~Pindll()
{
        qDebug()<<"DLL destructor";
        delete pengine;
        pengine = nullptr;
}

void Pindll::naytaPincodeUi()
{
        qDebug() << "open PinUi()";
        pengine->show();


}

void Pindll::suljePincodeUi()
{
    pengine->close();
}

void Pindll::getPincode()
{
    qDebug() << "getPincode()";
}

void Pindll::pincodeSlot()
{
      pincode = pengine->returnPincode();
      qDebug() << "pincodeSlot() in DLL" << pincode;
      emit signalPincode(pincode);
}

void Pindll::receiveTimerSignalFromUI()
{
    emit resetLoginTimerSignal();
}

void Pindll::receiveCancelPin()
{
    emit cancelPincodeLogin();
}

void Pindll::exeVaaraPin()
{
    emit wrongPinToUI();
}

void Pindll::exeKortinLukitusVaroitus()
{
    emit cardLockToUI();
}
