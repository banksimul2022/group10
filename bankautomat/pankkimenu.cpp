#include "pankkimenu.h"
#include "ui_pankkimenu.h"

pankkimenu::pankkimenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pankkimenu)
{
    ui->setupUi(this);
    pnaytasaldo = new naytasaldo;
    pselaatilitapahtumia = new selaatilitapahtumia;
    pnostarahaa = new nostarahaa;
}

pankkimenu::~pankkimenu()
{
    delete ui;
}

void pankkimenu::on_btnNosta_clicked()
{
    pnostarahaa -> exec();
}


void pankkimenu::on_btnNayta_clicked()
{
    pnaytasaldo -> exec();
}


void pankkimenu::on_btnSelaa_clicked()
{
    pselaatilitapahtumia -> exec();
}


void pankkimenu::on_btnLogout_clicked()
{
    close ();
    pnaytasaldo->close();
    pnostarahaa->close();
    pselaatilitapahtumia->close();
}

