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
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnEdellinen;
    QLabel *leTT5;

    void setupUi(QDialog *selaatilitapahtumia)
    {
        if (selaatilitapahtumia->objectName().isEmpty())
            selaatilitapahtumia->setObjectName(QString::fromUtf8("selaatilitapahtumia"));
        selaatilitapahtumia->resize(766, 541);
        QFont font;
        font.setPointSize(11);
        selaatilitapahtumia->setFont(font);
        btnSeuraava = new QPushButton(selaatilitapahtumia);
        btnSeuraava->setObjectName(QString::fromUtf8("btnSeuraava"));
        btnSeuraava->setGeometry(QRect(520, 380, 101, 41));
        btnPalaatilitapahtumat = new QPushButton(selaatilitapahtumia);
        btnPalaatilitapahtumat->setObjectName(QString::fromUtf8("btnPalaatilitapahtumat"));
        btnPalaatilitapahtumat->setGeometry(QRect(630, 480, 75, 23));
        lineEdit_3 = new QLineEdit(selaatilitapahtumia);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 10, 231, 20));
        label = new QLabel(selaatilitapahtumia);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 110, 101, 51));
        label_2 = new QLabel(selaatilitapahtumia);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 91, 21));
        btnEdellinen = new QPushButton(selaatilitapahtumia);
        btnEdellinen->setObjectName(QString::fromUtf8("btnEdellinen"));
        btnEdellinen->setGeometry(QRect(240, 380, 101, 41));
        leTT5 = new QLabel(selaatilitapahtumia);
        leTT5->setObjectName(QString::fromUtf8("leTT5"));
        leTT5->setGeometry(QRect(170, 110, 531, 221));

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
        btnEdellinen->setText(QCoreApplication::translate("selaatilitapahtumia", "Edellinen", nullptr));
        leTT5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class selaatilitapahtumia: public Ui_selaatilitapahtumia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELAATILITAPAHTUMIA_H
