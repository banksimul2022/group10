#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pindll.h"
#include <QObject>
#include <QTimer>
#include "restapidll.h"
#include "naytasaldo.h"
#include "selaatilitapahtumia.h"
#include "nostarahaa.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void haenimi(QString);
    void haesaldo(QString);
    void haeTT10(QString);
    void haeNosto(QString); //uusi
    void haeTT5(QString);


private slots:
    void on_kirjaudusisaan_clicked();
    void pinkoodi_slot(QString);
    void login_slot(QByteArray);
    void RFID_slot(QByteArray);
    void startTimer();
    void tiliValittuSlot(QString);
    void getAsiakasSlot(QString);
    void trueFalse();
    void wrongPinSignal();

    void on_lenaytasaldo_clicked();

    void on_nostarahaa_clicked();

    void on_logoff_clicked();

    void on_selaaTT_clicked();

signals:
    void asiakasSignal(QString);


private:
    Ui::MainWindow *ui;
    Pindll *pPindll;

    QTimer *timer;
    QString asiakas;
    QString valinta;
    Restapidll* pRestapidll;
    naytasaldo *Pnaytasaldo;
    selaatilitapahtumia *Pselaatilitapahtumia;
    nostarahaa *Pnostarahaa;





};
#endif // MAINWINDOW_H
