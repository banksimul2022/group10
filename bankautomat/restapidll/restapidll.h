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
    void getSaldo(QString id);
    void login(QString PIN);

signals:
    void loginSignal(QString);
private slots:
    void getSaldoSlot(QNetworkReply *reply);
    void loginSlot(QNetworkReply *reply);
private:
    QNetworkAccessManager *getSaldoManager;
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;
    QByteArray response_data;


};

#endif // RESTAPIDLL_H
