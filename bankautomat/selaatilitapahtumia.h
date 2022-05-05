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

    void on_btnSeuraava_clicked(QString);

    void on_btnEdellinen_clicked();

    void paivitaTT5(QString);





private slots:
    void on_btnPalaatilitapahtumat_clicked();

    void slotClient(QString);

    void slotTT5(QString);



private:
    Ui::selaatilitapahtumia *ui;
    QString client;
    QString tt5;
    Restapidll *pRestapidll;
};

#endif // SELAATILITAPAHTUMIA_H
