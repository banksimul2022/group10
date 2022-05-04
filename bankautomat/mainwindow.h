#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pindll.h"
#include <QObject>
#include <QTimer>
#include "restapidll.h"
#include "rfiddll.h"

#include "pankkimenu.h"


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

signals:
    void asiakasSignal(QString);


private:
    Ui::MainWindow *ui;
    Pindll *pPindll;
    pankkimenu *Ppankkimenu;
    QTimer *timer;
    QString asiakas;
    QString valinta;
    Restapidll* pRestapidll;


};
#endif // MAINWINDOW_H
