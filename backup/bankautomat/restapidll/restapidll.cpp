#include "restapidll.h"

Restapidll::Restapidll(QObject *parent) : QObject(parent)
{

}

Restapidll::~Restapidll()
{

}

void Restapidll::getSaldo(QString tilinumero)
{
    QString site_url="http://localhost:3000/tili/"+tilinumero;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QByteArray MyToken="Bearer "+response_data;
    request.setRawHeader(QByteArray("Authorization"),(MyToken));

    getSaldoManager = new QNetworkAccessManager(this);
    connect(getSaldoManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(getSaldoSlot(QNetworkReply*)));
    reply = getSaldoManager->get(request);
}


void Restapidll::getSaldoSlot(QNetworkReply* reply)
{

    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString Saldo;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        Saldo+=QString::number(json_obj["Saldo"].toInt())+"\r";
        emit saldoToExe(Saldo);
    }

    qDebug()<<"getSaldoSlot"+Saldo;
    reply->deleteLater();
    getSaldoManager->deleteLater();
}

void Restapidll::login(QString KortinNumero, QString PIN)
{
        qDebug()<<"login() in DLL";
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
        qDebug()<<"loginSlot() in DLL";
        response_data=reply->readAll();
        qDebug()<<response_data;
        if(response_data == "true"){
            response_data = "Kirjautuminen onnistui";
        }
        else if(response_data =="false"){
            response_data = "PIN-koodi vaarin";
        }
        emit loginSignal(response_data);
        qDebug()<<response_data;
        reply->deleteLater();
        loginManager->deleteLater();
}

void Restapidll::getNimi(QString)
{
    QString site_url="http://localhost:3000/asiakas/nimi/1";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //QByteArray MyToken="Bearer "+token;
    request.setRawHeader(QByteArray("Authorization"),(token));
    getNimiManager = new QNetworkAccessManager(this);
    connect(getNimiManager, SIGNAL(finished(QNetworkReply)),this, SLOT(getNimiSlot(QNetworkReply)));
    reply = getNimiManager->get(request);
}

void Restapidll::setToken(QByteArray wtoken)
{
    token = wtoken;
}

void Restapidll::getNimiSlot(QNetworkReply *reply)
{
    qDebug()<<"olemme getnimislotissa";
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString Nimi;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        Nimi+=json_obj["nimi"].toString()+"\r";
        emit nimiToExe(Nimi);
    }

    qDebug()<<Nimi;
    reply->deleteLater();
    getNimiManager->deleteLater();
}
void Restapidll::nosto(QString Summa)
{
    QJsonObject jsonObj;
    jsonObj.insert("Saldo", Summa);
    QString site_url="http://localhost:3000/tili/1";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    nostoManager = new QNetworkAccessManager(this);
    connect(nostoManager, SIGNAL(finished (QNetworkReply)), this, SLOT(nostoSlot(QNetworkReply)));
    reply = nostoManager->post(request, QJsonDocument(jsonObj).toJson());
}

void Restapidll::nostoSlot(QNetworkReply *reply)
{
    emit summaToExe(response_data);
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    nostoManager->deleteLater();
}
void Restapidll::getTT10(QString)
{
    QString site_url="http://localhost:3000/tilitapahtumat/1";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //QByteArray MyToken="Bearer "+response_data;
    request.setRawHeader(QByteArray("Authorization"),(token));

    getTT10Manager = new QNetworkAccessManager(this);
    connect(getTT10Manager, SIGNAL(finished(QNetworkReply)),this, SLOT(getTT10Slot(QNetworkReply)));
    reply = getTT10Manager->get(request);
}


void Restapidll::getTT10Slot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString tilitapahtumat;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        tilitapahtumat+=QString::number(json_obj["idTilitapahtumat"].toInt())+","+json_obj["tilinumero"].toString()+","+json_obj["KortinNumero"].toString()+","+json_obj["PVM"].toString()+","+json_obj["Tapahtuma"].toString()+","+QString::number(json_obj["Summa"].toInt())+","+QString::number(json_obj["idKortti"].toInt())+","+QString::number(json_obj["idTili"].toInt())+"\r";
        emit TT10ToExe(tilitapahtumat);
    }

    qDebug()<<tilitapahtumat;
    reply->deleteLater();
    getTT10Manager->deleteLater();
}

void Restapidll::getTT5(QString)
{
    QString site_url="http://localhost:3000/tilitapahtumat/5tapahtumaa/1";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //QByteArray MyToken="Bearer "+response_data;
    request.setRawHeader(QByteArray("Authorization"),(token));

    getTT5Manager = new QNetworkAccessManager(this);
    connect(getTT5Manager, SIGNAL(finished(QNetworkReply)),this, SLOT(getTT5Slot(QNetworkReply)));
    reply = getTT5Manager->get(request);
}


void Restapidll::getTT5Slot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString tilitapahtumat5;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        tilitapahtumat5+=QString::number(json_obj["idTilitapahtumat"].toInt())+","+json_obj["tilinumero"].toString()+","+json_obj["KortinNumero"].toString()+","+json_obj["PVM"].toString()+","+json_obj["Tapahtuma"].toString()+","+QString::number(json_obj["Summa"].toInt())+","+QString::number(json_obj["idKortti"].toInt())+","+QString::number(json_obj["idTili"].toInt())+"\r";
        emit TT5ToExe(tilitapahtumat5);
    }

    qDebug()<<tilitapahtumat5;
    reply->deleteLater();
    getTT5Manager->deleteLater();
}

void Restapidll::getTT5eka(QString)
{
    QString site_url="http://localhost:3000/tilitapahtumat/5Ekaatapahtumaa/1";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //QByteArray MyToken="Bearer "+response_data;
    request.setRawHeader(QByteArray("Authorization"),(token));

    getTT5EkaManager = new QNetworkAccessManager(this);
    connect(getTT5EkaManager, SIGNAL(finished(QNetworkReply)),this, SLOT(getTT5ekaSlot(QNetworkReply)));
    reply = getTT5EkaManager->get(request);
}

void Restapidll::getTT5ekaSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString tilitapahtumat5ekaa;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        tilitapahtumat5ekaa+=QString::number(json_obj["idTilitapahtumat"].toInt())+","+json_obj["tilinumero"].toString()+","+json_obj["KortinNumero"].toString()+","+json_obj["PVM"].toString()+","+json_obj["Tapahtuma"].toString()+","+QString::number(json_obj["Summa"].toInt())+","+QString::number(json_obj["idKortti"].toInt())+","+QString::number(json_obj["idTili"].toInt())+"\r";
        emit TT5ekaToExe(tilitapahtumat5ekaa);
    }

    qDebug()<<tilitapahtumat5ekaa;
    reply->deleteLater();
    getTT5EkaManager->deleteLater();
}



