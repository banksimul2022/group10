#ifndef SELAATILITAPAHTUMIA_H
#define SELAATILITAPAHTUMIA_H

#include <QDialog>
#include <qstring.h>

namespace Ui {
class selaatilitapahtumia;
}

class selaatilitapahtumia : public QDialog
{
    Q_OBJECT

public:
    explicit selaatilitapahtumia(QWidget *parent = nullptr);
    ~selaatilitapahtumia();

private slots:
    void on_btnPalaatilitapahtumat_clicked();

    void on_btnSeuraava_clicked();

    void on_btnEdellinen_clicked();

private:
    Ui::selaatilitapahtumia *ui;
};

#endif // SELAATILITAPAHTUMIA_H
