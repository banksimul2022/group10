#ifndef NAYTASALDO_H
#define NAYTASALDO_H

#include <QDialog>
#include "restapidll.h"

namespace Ui {
class naytasaldo;
}

class naytasaldo : public QDialog
{
    Q_OBJECT

public:
    explicit naytasaldo(QWidget *parent = nullptr);
    ~naytasaldo();

    void getAsiakas();

    void getSaldo();

    void getTilitapahtumat();

    void paivitaLeSaldo(QString);

    void paivitaLeClient1(QString);

    void paivitaLeTT10(QString);

private slots:
    void on_palaaNaytasaldo_clicked();

    void slotAsiakas(QString);

    void slotSaldo(QString);

    void slotTilitapahtumat(QString);

    void slotClient1(QString);

    //void on_naytaTT10_clicked();

private:
    Ui::naytasaldo *ui;
    Restapidll * pRestapidll;
    QString Asiakas;
    QString Saldo;
    QString tt10;
    QString client1;
};

#endif // NAYTASALDO_H
