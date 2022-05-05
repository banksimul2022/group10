#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QDialog>
#include "restapidll.h"

namespace Ui {
class nostarahaa;
}

class nostarahaa : public QDialog
{
    Q_OBJECT

public:
    explicit nostarahaa(QWidget *parent = nullptr);
    ~nostarahaa();

private slots:
    void on_palaaNostarahaa_clicked();

    void on_btn20Eur_clicked();

    void on_btn40Eur_clicked();

    void on_btn60Eur_clicked();

    void on_btn100Eur_clicked();

    void on_btn200Eur_clicked();

    void on_btn500Eur_clicked();

private:
    Ui::nostarahaa *ui;
};

#endif // NOSTARAHAA_H
