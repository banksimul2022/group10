#ifndef ENGINE_H
#define ENGINE_H

#include <QDialog>
#include <QString>

namespace Ui {
class engine;
}

class engine : public QDialog
{
    Q_OBJECT

public:
    explicit engine(QWidget *parent = nullptr);
    ~engine();

signals:
    void pinkoodi_signal(QString);

private slots:
    void on_pushButton_clicked();
    void on_a1_clicked();
    void on_a2_clicked();
    void on_a3_clicked();
    void on_a4_clicked();
    void on_a5_clicked();
    void on_a6_clicked();
    void on_a7_clicked();
    void on_a8_clicked();
    void on_a9_clicked();
    void on_a0_clicked();
    void on_clear_clicked();
    void on_enter_clicked();

private:
    Ui::engine *ui;
    QString pinkoodi;
};

#endif // ENGINE_H
