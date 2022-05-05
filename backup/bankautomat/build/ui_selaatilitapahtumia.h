/********************************************************************************
** Form generated from reading UI file 'selaatilitapahtumia.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELAATILITAPAHTUMIA_H
#define UI_SELAATILITAPAHTUMIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_selaatilitapahtumia
{
public:
    QPushButton *btnSeuraava;
    QPushButton *btnPalaatilitapahtumat;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnEdellinen;

    void setupUi(QDialog *selaatilitapahtumia)
    {
        if (selaatilitapahtumia->objectName().isEmpty())
            selaatilitapahtumia->setObjectName(QString::fromUtf8("selaatilitapahtumia"));
        selaatilitapahtumia->resize(400, 300);
        QFont font;
        font.setPointSize(11);
        selaatilitapahtumia->setFont(font);
        btnSeuraava = new QPushButton(selaatilitapahtumia);
        btnSeuraava->setObjectName(QString::fromUtf8("btnSeuraava"));
        btnSeuraava->setGeometry(QRect(220, 210, 75, 23));
        btnPalaatilitapahtumat = new QPushButton(selaatilitapahtumia);
        btnPalaatilitapahtumat->setObjectName(QString::fromUtf8("btnPalaatilitapahtumat"));
        btnPalaatilitapahtumat->setGeometry(QRect(310, 240, 75, 23));
        lineEdit = new QLineEdit(selaatilitapahtumia);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 90, 113, 20));
        lineEdit_2 = new QLineEdit(selaatilitapahtumia);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 90, 151, 101));
        lineEdit_3 = new QLineEdit(selaatilitapahtumia);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 10, 113, 20));
        label = new QLabel(selaatilitapahtumia);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 110, 101, 51));
        label_2 = new QLabel(selaatilitapahtumia);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 91, 21));
        label_3 = new QLabel(selaatilitapahtumia);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 50, 47, 13));
        btnEdellinen = new QPushButton(selaatilitapahtumia);
        btnEdellinen->setObjectName(QString::fromUtf8("btnEdellinen"));
        btnEdellinen->setGeometry(QRect(110, 210, 75, 23));

        retranslateUi(selaatilitapahtumia);

        QMetaObject::connectSlotsByName(selaatilitapahtumia);
    } // setupUi

    void retranslateUi(QDialog *selaatilitapahtumia)
    {
        selaatilitapahtumia->setWindowTitle(QCoreApplication::translate("selaatilitapahtumia", "Dialog", nullptr));
        btnSeuraava->setText(QCoreApplication::translate("selaatilitapahtumia", "Seuraava", nullptr));
        btnPalaatilitapahtumat->setText(QCoreApplication::translate("selaatilitapahtumia", "Takaisin", nullptr));
        label->setText(QCoreApplication::translate("selaatilitapahtumia", "Tilitapahtumat", nullptr));
        label_2->setText(QCoreApplication::translate("selaatilitapahtumia", "Omat tiedot", nullptr));
        label_3->setText(QCoreApplication::translate("selaatilitapahtumia", "Saldo", nullptr));
        btnEdellinen->setText(QCoreApplication::translate("selaatilitapahtumia", "Edellinen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selaatilitapahtumia: public Ui_selaatilitapahtumia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELAATILITAPAHTUMIA_H
