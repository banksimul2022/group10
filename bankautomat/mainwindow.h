#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "kirjaudusisaan.h"
#include "rfid.h"
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

private:
    Ui::MainWindow *ui;
    kirjaudusisaan * pKirjaudusisaan;
    Rfid *serialPort;

};
#endif // MAINWINDOW_H
