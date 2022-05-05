/********************************************************************************
** Form generated from reading UI file 'pankkimenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANKKIMENU_H
#define UI_PANKKIMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pankkimenu
{
public:
    QLineEdit *lineEdit;
    QPushButton *btnNosta;
    QPushButton *btnNayta;
    QPushButton *btnLogout;
    QPushButton *btnSelaa;
    QLabel *nimilabel;
    QLabel *saldolabel;

    void setupUi(QDialog *pankkimenu)
    {
        if (pankkimenu->objectName().isEmpty())
            pankkimenu->setObjectName(QString::fromUtf8("pankkimenu"));
        pankkimenu->resize(400, 300);
        lineEdit = new QLineEdit(pankkimenu);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 181, 31));
        btnNosta = new QPushButton(pankkimenu);
        btnNosta->setObjectName(QString::fromUtf8("btnNosta"));
        btnNosta->setGeometry(QRect(60, 100, 100, 40));
        btnNayta = new QPushButton(pankkimenu);
        btnNayta->setObjectName(QString::fromUtf8("btnNayta"));
        btnNayta->setGeometry(QRect(210, 100, 100, 40));
        btnLogout = new QPushButton(pankkimenu);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        btnLogout->setGeometry(QRect(210, 190, 100, 40));
        btnSelaa = new QPushButton(pankkimenu);
        btnSelaa->setObjectName(QString::fromUtf8("btnSelaa"));
        btnSelaa->setGeometry(QRect(59, 190, 101, 40));
        nimilabel = new QLabel(pankkimenu);
        nimilabel->setObjectName(QString::fromUtf8("nimilabel"));
        nimilabel->setGeometry(QRect(60, 60, 71, 21));
        saldolabel = new QLabel(pankkimenu);
        saldolabel->setObjectName(QString::fromUtf8("saldolabel"));
        saldolabel->setGeometry(QRect(200, 60, 71, 31));

        retranslateUi(pankkimenu);

        QMetaObject::connectSlotsByName(pankkimenu);
    } // setupUi

    void retranslateUi(QDialog *pankkimenu)
    {
        pankkimenu->setWindowTitle(QCoreApplication::translate("pankkimenu", "Dialog", nullptr));
        btnNosta->setText(QCoreApplication::translate("pankkimenu", "Nosta rahaa", nullptr));
        btnNayta->setText(QCoreApplication::translate("pankkimenu", "N\303\244yt\303\244 saldo", nullptr));
        btnLogout->setText(QCoreApplication::translate("pankkimenu", "Kirjaudu ulos", nullptr));
        btnSelaa->setText(QCoreApplication::translate("pankkimenu", "Selaa tilitapahtumia", nullptr));
        nimilabel->setText(QString());
        saldolabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pankkimenu: public Ui_pankkimenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANKKIMENU_H
