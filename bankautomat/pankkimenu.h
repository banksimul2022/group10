#ifndef PANKKIMENU_H
#define PANKKIMENU_H

#include <QDialog>
#include "naytasaldo.h"
#include "selaatilitapahtumia.h"
#include "nostarahaa.h"


namespace Ui {
class pankkimenu;
}

class pankkimenu : public QDialog
{
    Q_OBJECT

public:
    explicit pankkimenu(QWidget *parent = nullptr);
    ~pankkimenu();

private slots:
    void on_btnNosta_clicked();

    void on_btnNayta_clicked();

    void on_btnSelaa_clicked();

    void on_btnLogout_clicked();

private:
    Ui::pankkimenu *ui;
    naytasaldo * pnaytasaldo;
    selaatilitapahtumia *pselaatilitapahtumia;
    nostarahaa * pnostarahaa;


};

#endif // PANKKIMENU_H
