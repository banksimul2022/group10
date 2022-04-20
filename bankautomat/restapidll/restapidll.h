#ifndef RESTAPIDLL_H
#define RESTAPIDLL_H

#include "restapidll_global.h"
#include <QDebug>
#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>

class RESTAPIDLL_EXPORT Restapidll
{
    Q_OBJECT
public:
    Restapidll(QObject * parent = nullptr);
    ~Restapidll();
    void getSaldo(QString saldo);

signals:
private slots:
    void getSaldoSlot(QNetworkReply *reply);
private:

};

#endif // RESTAPIDLL_H
