/********************************************************************************
** Form generated from reading UI file 'naytasaldo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAYTASALDO_H
#define UI_NAYTASALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_naytasaldo
{
public:
    QPushButton *palaaNaytasaldo;
    QLineEdit *leSaldo;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditNimi;
    QLabel *ttlabel;

    void setupUi(QDialog *naytasaldo)
    {
        if (naytasaldo->objectName().isEmpty())
            naytasaldo->setObjectName(QString::fromUtf8("naytasaldo"));
        naytasaldo->resize(1039, 579);
        QFont font;
        font.setPointSize(12);
        naytasaldo->setFont(font);
        palaaNaytasaldo = new QPushButton(naytasaldo);
        palaaNaytasaldo->setObjectName(QString::fromUtf8("palaaNaytasaldo"));
        palaaNaytasaldo->setGeometry(QRect(400, 490, 81, 31));
        leSaldo = new QLineEdit(naytasaldo);
        leSaldo->setObjectName(QString::fromUtf8("leSaldo"));
        leSaldo->setGeometry(QRect(360, 40, 281, 61));
        label = new QLabel(naytasaldo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 47, 13));
        label_2 = new QLabel(naytasaldo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(470, 10, 47, 13));
        label_3 = new QLabel(naytasaldo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 110, 111, 41));
        lineEditNimi = new QLineEdit(naytasaldo);
        lineEditNimi->setObjectName(QString::fromUtf8("lineEditNimi"));
        lineEditNimi->setGeometry(QRect(20, 40, 301, 61));
        ttlabel = new QLabel(naytasaldo);
        ttlabel->setObjectName(QString::fromUtf8("ttlabel"));
        ttlabel->setGeometry(QRect(40, 160, 861, 291));

        retranslateUi(naytasaldo);

        QMetaObject::connectSlotsByName(naytasaldo);
    } // setupUi

    void retranslateUi(QDialog *naytasaldo)
    {
        naytasaldo->setWindowTitle(QCoreApplication::translate("naytasaldo", "Dialog", nullptr));
        palaaNaytasaldo->setText(QCoreApplication::translate("naytasaldo", "Takaisin", nullptr));
        label->setText(QCoreApplication::translate("naytasaldo", "Tiedot", nullptr));
        label_2->setText(QCoreApplication::translate("naytasaldo", "Saldo", nullptr));
        label_3->setText(QCoreApplication::translate("naytasaldo", "Tilitapahtumat", nullptr));
        ttlabel->setText(QCoreApplication::translate("naytasaldo", "LABEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class naytasaldo: public Ui_naytasaldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAYTASALDO_H
