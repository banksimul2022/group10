/********************************************************************************
** Form generated from reading UI file 'engine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENGINE_H
#define UI_ENGINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_engine
{
public:
    QLineEdit *lineEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *a1;
    QPushButton *a8;
    QPushButton *enter;
    QPushButton *clear;
    QPushButton *a3;
    QPushButton *a2;
    QPushButton *a9;
    QPushButton *a5;
    QPushButton *a4;
    QPushButton *a7;
    QPushButton *a0;
    QPushButton *a6;
    QPushButton *cancel;

    void setupUi(QDialog *engine)
    {
        if (engine->objectName().isEmpty())
            engine->setObjectName(QString::fromUtf8("engine"));
        engine->resize(606, 462);
        lineEdit = new QLineEdit(engine);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(210, 120, 113, 20));
        gridLayoutWidget = new QWidget(engine);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(130, 160, 281, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        a1 = new QPushButton(gridLayoutWidget);
        a1->setObjectName(QString::fromUtf8("a1"));

        gridLayout->addWidget(a1, 0, 0, 1, 1);

        a8 = new QPushButton(gridLayoutWidget);
        a8->setObjectName(QString::fromUtf8("a8"));

        gridLayout->addWidget(a8, 3, 1, 1, 1);

        enter = new QPushButton(gridLayoutWidget);
        enter->setObjectName(QString::fromUtf8("enter"));

        gridLayout->addWidget(enter, 4, 2, 1, 1);

        clear = new QPushButton(gridLayoutWidget);
        clear->setObjectName(QString::fromUtf8("clear"));

        gridLayout->addWidget(clear, 4, 0, 1, 1);

        a3 = new QPushButton(gridLayoutWidget);
        a3->setObjectName(QString::fromUtf8("a3"));

        gridLayout->addWidget(a3, 0, 2, 1, 1);

        a2 = new QPushButton(gridLayoutWidget);
        a2->setObjectName(QString::fromUtf8("a2"));

        gridLayout->addWidget(a2, 0, 1, 1, 1);

        a9 = new QPushButton(gridLayoutWidget);
        a9->setObjectName(QString::fromUtf8("a9"));

        gridLayout->addWidget(a9, 3, 2, 1, 1);

        a5 = new QPushButton(gridLayoutWidget);
        a5->setObjectName(QString::fromUtf8("a5"));

        gridLayout->addWidget(a5, 1, 1, 1, 1);

        a4 = new QPushButton(gridLayoutWidget);
        a4->setObjectName(QString::fromUtf8("a4"));

        gridLayout->addWidget(a4, 1, 0, 1, 1);

        a7 = new QPushButton(gridLayoutWidget);
        a7->setObjectName(QString::fromUtf8("a7"));

        gridLayout->addWidget(a7, 3, 0, 1, 1);

        a0 = new QPushButton(gridLayoutWidget);
        a0->setObjectName(QString::fromUtf8("a0"));

        gridLayout->addWidget(a0, 4, 1, 1, 1);

        a6 = new QPushButton(gridLayoutWidget);
        a6->setObjectName(QString::fromUtf8("a6"));

        gridLayout->addWidget(a6, 1, 2, 1, 1);

        cancel = new QPushButton(engine);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(20, 280, 75, 23));

        retranslateUi(engine);

        QMetaObject::connectSlotsByName(engine);
    } // setupUi

    void retranslateUi(QDialog *engine)
    {
        engine->setWindowTitle(QCoreApplication::translate("engine", "Dialog", nullptr));
        a1->setText(QCoreApplication::translate("engine", "1", nullptr));
        a8->setText(QCoreApplication::translate("engine", "8", nullptr));
        enter->setText(QCoreApplication::translate("engine", "ok", nullptr));
        clear->setText(QCoreApplication::translate("engine", "clear", nullptr));
        a3->setText(QCoreApplication::translate("engine", "3", nullptr));
        a2->setText(QCoreApplication::translate("engine", "2", nullptr));
        a9->setText(QCoreApplication::translate("engine", "9", nullptr));
        a5->setText(QCoreApplication::translate("engine", "5", nullptr));
        a4->setText(QCoreApplication::translate("engine", "4", nullptr));
        a7->setText(QCoreApplication::translate("engine", "7", nullptr));
        a0->setText(QCoreApplication::translate("engine", "0", nullptr));
        a6->setText(QCoreApplication::translate("engine", "6", nullptr));
        cancel->setText(QCoreApplication::translate("engine", "Peruuta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class engine: public Ui_engine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENGINE_H
