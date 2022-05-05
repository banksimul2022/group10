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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_naytasaldo
{
public:
    QPushButton *palaaNaytasaldo;
    QLineEdit *leSaldo;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;

    void setupUi(QDialog *naytasaldo)
    {
        if (naytasaldo->objectName().isEmpty())
            naytasaldo->setObjectName(QString::fromUtf8("naytasaldo"));
        naytasaldo->resize(666, 483);
        QFont font;
        font.setPointSize(12);
        naytasaldo->setFont(font);
        palaaNaytasaldo = new QPushButton(naytasaldo);
        palaaNaytasaldo->setObjectName(QString::fromUtf8("palaaNaytasaldo"));
        palaaNaytasaldo->setGeometry(QRect(280, 440, 81, 31));
        leSaldo = new QLineEdit(naytasaldo);
        leSaldo->setObjectName(QString::fromUtf8("leSaldo"));
        leSaldo->setGeometry(QRect(230, 350, 281, 41));
        label = new QLabel(naytasaldo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 80, 47, 13));
        label_2 = new QLabel(naytasaldo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 370, 47, 13));
        label_3 = new QLabel(naytasaldo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 230, 111, 41));
        textEdit = new QTextEdit(naytasaldo);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(230, 20, 281, 131));
        textEdit_2 = new QTextEdit(naytasaldo);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(230, 170, 281, 171));

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
    } // retranslateUi

};

namespace Ui {
    class naytasaldo: public Ui_naytasaldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAYTASALDO_H
