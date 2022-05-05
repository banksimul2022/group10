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

private slots:
    void on_palaaNaytasaldo_clicked();

    void slotAsiakas(QString);

    void slotSaldo(QString);

    void slotTilitapahtumat(QString);

private:
    Ui::naytasaldo *ui;
    Restapidll * pRestapidll;
    QString Asiakas;
    QString Saldo;
    QString Tilitapahtumat;

};

#endif // NAYTASALDO_H
