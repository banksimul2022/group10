/********************************************************************************
** Form generated from reading UI file 'nostarahaa.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTARAHAA_H
#define UI_NOSTARAHAA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_nostarahaa
{
public:
    QLabel *label_11;
    QPushButton *btn100Eur;
    QPushButton *btn200Eur;
    QPushButton *btn500Eur;
    QPushButton *btn20Eur;
    QPushButton *btn40Eur;
    QPushButton *btn60Eur;
    QPushButton *palaaNostarahaa;
    QLabel *nostolabel;

    void setupUi(QDialog *nostarahaa)
    {
        if (nostarahaa->objectName().isEmpty())
            nostarahaa->setObjectName(QString::fromUtf8("nostarahaa"));
        nostarahaa->resize(400, 300);
        label_11 = new QLabel(nostarahaa);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 10, 221, 51));
        QFont font;
        font.setPointSize(14);
        label_11->setFont(font);
        btn100Eur = new QPushButton(nostarahaa);
        btn100Eur->setObjectName(QString::fromUtf8("btn100Eur"));
        btn100Eur->setGeometry(QRect(140, 70, 91, 41));
        btn200Eur = new QPushButton(nostarahaa);
        btn200Eur->setObjectName(QString::fromUtf8("btn200Eur"));
        btn200Eur->setGeometry(QRect(140, 130, 91, 41));
        btn500Eur = new QPushButton(nostarahaa);
        btn500Eur->setObjectName(QString::fromUtf8("btn500Eur"));
        btn500Eur->setGeometry(QRect(140, 190, 91, 41));
        btn20Eur = new QPushButton(nostarahaa);
        btn20Eur->setObjectName(QString::fromUtf8("btn20Eur"));
        btn20Eur->setGeometry(QRect(10, 70, 91, 41));
        btn40Eur = new QPushButton(nostarahaa);
        btn40Eur->setObjectName(QString::fromUtf8("btn40Eur"));
        btn40Eur->setGeometry(QRect(10, 130, 91, 41));
        btn60Eur = new QPushButton(nostarahaa);
        btn60Eur->setObjectName(QString::fromUtf8("btn60Eur"));
        btn60Eur->setGeometry(QRect(10, 190, 91, 41));
        palaaNostarahaa = new QPushButton(nostarahaa);
        palaaNostarahaa->setObjectName(QString::fromUtf8("palaaNostarahaa"));
        palaaNostarahaa->setGeometry(QRect(304, 242, 81, 31));
        nostolabel = new QLabel(nostarahaa);
        nostolabel->setObjectName(QString::fromUtf8("nostolabel"));
        nostolabel->setGeometry(QRect(50, 250, 111, 21));

        retranslateUi(nostarahaa);

        QMetaObject::connectSlotsByName(nostarahaa);
    } // setupUi

    void retranslateUi(QDialog *nostarahaa)
    {
        nostarahaa->setWindowTitle(QCoreApplication::translate("nostarahaa", "Dialog", nullptr));
        label_11->setText(QCoreApplication::translate("nostarahaa", "Valitse nostettava summa", nullptr));
        btn100Eur->setText(QCoreApplication::translate("nostarahaa", "100 euroa", nullptr));
        btn200Eur->setText(QCoreApplication::translate("nostarahaa", "200 euroa", nullptr));
        btn500Eur->setText(QCoreApplication::translate("nostarahaa", "500 euroa", nullptr));
        btn20Eur->setText(QCoreApplication::translate("nostarahaa", "20 euroa", nullptr));
        btn40Eur->setText(QCoreApplication::translate("nostarahaa", "40 euroa", nullptr));
        btn60Eur->setText(QCoreApplication::translate("nostarahaa", "60 euroa", nullptr));
        palaaNostarahaa->setText(QCoreApplication::translate("nostarahaa", "Takaisin", nullptr));
        nostolabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class nostarahaa: public Ui_nostarahaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTARAHAA_H
