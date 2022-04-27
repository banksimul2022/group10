#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pindll.h"
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

private slots:
    void on_kirjaudusisaan_clicked();
    void loginSlot(QString);
    void pinkoodiSlot(QString);

private:
    Ui::MainWindow *ui;
    Pindll *pPindll;
    pankkimenu *Ppankkimenu;

};
#endif // MAINWINDOW_H
