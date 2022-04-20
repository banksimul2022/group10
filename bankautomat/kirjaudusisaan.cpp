#include "kirjaudusisaan.h"
#include "ui_kirjaudusisaan.h"
#include <QDebug>

kirjaudusisaan::kirjaudusisaan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kirjaudusisaan)
{
    ui->setupUi(this);
    pPankkimenu = new pankkimenu;
}

kirjaudusisaan::~kirjaudusisaan()
{
    delete ui;
}

void kirjaudusisaan::on_btnKirjaudu_clicked()
{
    pPankkimenu -> exec();
}

