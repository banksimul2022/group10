#include "pindll.h"
#include <qdebug.h>

Pindll::Pindll(QObject *parent) : QObject(parent)
{
   pengine = new engine;

   connect(pengine, SIGNAL(pinkoodi_signal(QString)),
               this, SLOT(pinkoodi_slot(QString)));


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

void Pindll::pinkoodi_vaarin()
{
    qDebug() << "pinkoodi vaarin";
    pengine->pinkoodi_vaarin();
}

void Pindll::pinkoodi_slot(QString pinkoodi)
{
      emit pinkoodi_signal(pinkoodi);
}


