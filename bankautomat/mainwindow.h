#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pindll.h"
#include "pankkimenu.h"
#include <QObject>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_kirjaudusisaan_clicked();

public slots:
    void receiveLogin(QString);
    void receivePincode(QString);


signals:
    void wrongPinSignal();
    void cardLockWarning();
    void clientIDtoMainWindow(QString);
    void accountIDtoMainWindow(QString);



private:
    Ui::MainWindow *ui;
    Pindll *pPindll;
    pankkimenu *Ppankkimenu;
    QTimer *timer;
    QString pincode;
    QString cardLocked;
    QString cardnumber;
    short loginTries = 1;


};
#endif // MAINWINDOW_H
