#include "restapidll.h"

Restapidll::Restapidll(QObject *parent) : QObject(parent)
{

}

Restapidll::~Restapidll()
{

}

void Restapidll::getSaldo(QString saldo)
{

}

void Restapidll::getSaldoSlot(QNetworkReply *reply)
{

}

void Restapidll::login(QString PIN)
{
    QJsonObject jsonObj;
    jsonObj.insert("PIN", PIN);

    QString site_url="http://localhost:3000/login";
    QNetworkRequest request((site_url));

    postManager = new QNetworkAccessManager(this);
    connect(postManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(addBookSlot(QNetworkReply*)));

    reply = postManager->post(request, QJsonDocument(jsonObj).toJson());
}


void Restapidll::loginSlot(QNetworkReply *reply)
{

}
