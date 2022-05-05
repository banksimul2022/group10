#ifndef RESTAPIDLL_H
#define RESTAPIDLL_H

#include "restapidll_global.h"
#include <QDebug>
#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>

class RESTAPIDLL_EXPORT Restapidll : public QObject
{
    Q_OBJECT
public:
    Restapidll(QObject * parent = nullptr);
    ~Restapidll();
    void getSaldo(QString tilinumero);
    void login(QString KortinNumero, QString PIN);
    void nosto(QString Summa);
    void getTT10(QString tilinum);
    void getTT5(QString);
    void getTT5eka(QString);
    void getNimi(QString id);
    void setToken(QByteArray);
    void getAsiakas();

signals:
    void saldoToExe(QString);
    void loginSignal(QString);
    void summaToExe(QString); //uusi
    void TT10ToExe(QString); //uusi
    void TT5ToExe(QString); //uusi
    void TT5ekaToExe(QString); //uusi
    void nimiToExe(QString); //uusi
    void sendAsiakas(QString);

private slots:
    void getSaldoSlot(QNetworkReply *reply);
    void loginSlot(QNetworkReply *reply);
    void nostoSlot(QNetworkReply *reply);
    void getTT10Slot(QNetworkReply *reply);
    void getTT5Slot(QNetworkReply *reply); //uusi
    void getTT5ekaSlot(QNetworkReply *reply); //uusi
    void getNimiSlot(QNetworkReply *reply); //uusi

private:
    QNetworkAccessManager *getSaldoManager;
    QNetworkAccessManager *loginManager;
    QNetworkAccessManager *nostoManager;
    QNetworkAccessManager *getTT10Manager;
    QNetworkAccessManager *getTT5Manager; //uusi
    QNetworkAccessManager *getTT5EkaManager; //uusi
    QNetworkAccessManager *getNimiManager; //uusi
    QNetworkReply *reply;
    QByteArray response_data;
    QByteArray token;


};

#endif // RESTAPIDLL_H
