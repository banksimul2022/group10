/********************************************************************************
** Form generated from reading UI file 'kirjaudusisaan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIRJAUDUSISAAN_H
#define UI_KIRJAUDUSISAAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_kirjaudusisaan
{
public:
    QLineEdit *lePinkoodi;
    QPushButton *btnKirjaudu;
    QLabel *label_2;

    void setupUi(QDialog *kirjaudusisaan)
    {
        if (kirjaudusisaan->objectName().isEmpty())
            kirjaudusisaan->setObjectName(QString::fromUtf8("kirjaudusisaan"));
        kirjaudusisaan->resize(400, 300);
        QFont font;
        font.setPointSize(13);
        kirjaudusisaan->setFont(font);
        lePinkoodi = new QLineEdit(kirjaudusisaan);
        lePinkoodi->setObjectName(QString::fromUtf8("lePinkoodi"));
        lePinkoodi->setGeometry(QRect(140, 100, 131, 40));
        btnKirjaudu = new QPushButton(kirjaudusisaan);
        btnKirjaudu->setObjectName(QString::fromUtf8("btnKirjaudu"));
        btnKirjaudu->setGeometry(QRect(150, 160, 120, 50));
        label_2 = new QLabel(kirjaudusisaan);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 110, 81, 20));
        label_2->setFont(font);

        retranslateUi(kirjaudusisaan);

        QMetaObject::connectSlotsByName(kirjaudusisaan);
    } // setupUi

    void retranslateUi(QDialog *kirjaudusisaan)
    {
        kirjaudusisaan->setWindowTitle(QCoreApplication::translate("kirjaudusisaan", "Dialog", nullptr));
        btnKirjaudu->setText(QCoreApplication::translate("kirjaudusisaan", "Kirjaudu", nullptr));
        label_2->setText(QCoreApplication::translate("kirjaudusisaan", "Pin-koodi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kirjaudusisaan: public Ui_kirjaudusisaan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIRJAUDUSISAAN_H
