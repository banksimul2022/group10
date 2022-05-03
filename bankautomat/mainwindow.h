#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
<<<<<<< HEAD
#include "kirjaudusisaan.h"
#include "rfid.h"
=======
#include "pindll.h"
#include "pankkimenu.h"
#include <QObject>
#include <QTimer>


>>>>>>> 478b26c537a8bacbe2f1c144f34841a530b94df7
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
    void korttiIdSlot(QByteArray);

signals:

    void korttiIdSignal(QByteArray);

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
<<<<<<< HEAD
    kirjaudusisaan * pKirjaudusisaan;
    Rfid *serialPort;
=======
    Pindll *pPindll;
    pankkimenu *Ppankkimenu;
    QTimer *timer;
    QString pincode;
    QString cardLocked;
    QString cardnumber;
    short loginTries = 1;

>>>>>>> 478b26c537a8bacbe2f1c144f34841a530b94df7

};
#endif // MAINWINDOW_H
