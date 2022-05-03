#include "restapidll.h"

Restapidll::Restapidll(QObject *parent) : QObject(parent)
{

}

Restapidll::~Restapidll()
{

}

void Restapidll::getSaldo(QString id)
{
    QString site_url="http://localhost:3000/saldo/" + id + "/";
    QNetworkRequest request((site_url));

    getSaldoManager = new QNetworkAccessManager(this);

    connect(getSaldoManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getSaldoSlot(QNetworkReply*)));

    reply = getSaldoManager->get(request);
}


void Restapidll::getSaldoSlot(QNetworkReply* reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString saldo;
    foreach (const QJsonValue &value, json_array) {
       QJsonObject json_obj = value.toObject();
       saldo+=QString::number(json_obj["Saldo"].toInt());
    }
    reply->deleteLater();
    getSaldoManager->deleteLater();
}

void Restapidll::login(QString KortinNumero, QString PIN)
{
        QJsonObject jsonObj;
        jsonObj.insert("KortinNumero", KortinNumero);
        jsonObj.insert("PIN", PIN);
        QString site_url="http://localhost:3000/login";
        QNetworkRequest request((site_url));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        loginManager = new QNetworkAccessManager(this);
        connect(loginManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(loginSlot(QNetworkReply*)));
        reply = loginManager->post(request, QJsonDocument(jsonObj).toJson());
}

void Restapidll::loginSlot(QNetworkReply *reply)
{
        response_data=reply->readAll();
        if(response_data == "true"){
            response_data = "Kirjautuminen onnistui";
        }
        else if(response_data =="false"){
            response_data = "PIN-koodi väärin";
        }
        emit loginSignal(response_data);
        qDebug()<<response_data;
        reply->deleteLater();
        loginManager->deleteLater();
}

void Restapidll::nostoSlot(QNetworkReply *reply)
{

}

void Restapidll::getTT10Slot(QNetworkReply *reply)
{

}


