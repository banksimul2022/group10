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
    void paivitaLeClient(QString);

private slots:
    void on_btnPalaatilitapahtumat_clicked();

    void on_btnSeuraava_clicked();

    void on_btnEdellinen_clicked();

    void slotClient(QString);

private:
    Ui::selaatilitapahtumia *ui;
    QString client;
};

#endif // SELAATILITAPAHTUMIA_H
