#ifndef PINDLL_H
#define PINDLL_H

#include <QObject>
#include "pindll_global.h"
#include "engine.h"

class PINDLL_EXPORT Pindll
{
public:
    Pindll();
   ~Pindll();
    void login();

private slots:
    void pinkoodi_slot(QString);

signals:
    void pinkoodi_signal(QString);

    engine *pengine;
};

#endif // PINDLL_H
