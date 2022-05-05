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




public slots:
        void pinkoodi_slot(QString);
        void pinkoodi_vaarin();


signals:
        void pinkoodi_signal(QString);
        void wrongPinToUi();

private:
    engine *pengine;
};

#endif // PINDLL_H
