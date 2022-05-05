#ifndef SELAATILITAPAHTUMIA_H
#define SELAATILITAPAHTUMIA_H

#include <QDialog>
#include <qstring.h>
#include "restapidll.h"

namespace Ui {
class selaatilitapahtumia;
}

class selaatilitapahtumia : public QDialog
{
    Q_OBJECT

public:
    explicit selaatilitapahtumia(QWidget *parent = nullptr);
    ~selaatilitapahtumia();

    Restapidll *pRestapidll; //uus
    void paivitaLeClient(QString);

    void on_btnSeuraava_clicked();

    void on_btnEdellinen_clicked();

    void paivitaTT5(QString); //uus

private slots:
    void on_btnPalaatilitapahtumat_clicked();

    void slotClient(QString);

    void slotTT5(QString); //uus
private:
    Ui::selaatilitapahtumia *ui;
    QString client;
    QString tt5; //uus
};

#endif // SELAATILITAPAHTUMIA_H
