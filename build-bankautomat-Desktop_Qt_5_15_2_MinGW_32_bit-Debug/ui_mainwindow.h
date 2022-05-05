/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *kirjaudusisaan;
    QPushButton *logoff;
    QPushButton *nostarahaa;
    QPushButton *selaaTT;
    QPushButton *lenaytasaldo;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        kirjaudusisaan = new QPushButton(centralwidget);
        kirjaudusisaan->setObjectName(QString::fromUtf8("kirjaudusisaan"));
        kirjaudusisaan->setGeometry(QRect(170, 150, 141, 51));
        logoff = new QPushButton(centralwidget);
        logoff->setObjectName(QString::fromUtf8("logoff"));
        logoff->setGeometry(QRect(300, 370, 141, 51));
        nostarahaa = new QPushButton(centralwidget);
        nostarahaa->setObjectName(QString::fromUtf8("nostarahaa"));
        nostarahaa->setGeometry(QRect(420, 150, 141, 51));
        selaaTT = new QPushButton(centralwidget);
        selaaTT->setObjectName(QString::fromUtf8("selaaTT"));
        selaaTT->setGeometry(QRect(170, 240, 141, 51));
        lenaytasaldo = new QPushButton(centralwidget);
        lenaytasaldo->setObjectName(QString::fromUtf8("lenaytasaldo"));
        lenaytasaldo->setGeometry(QRect(420, 240, 141, 51));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(320, 40, 113, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        kirjaudusisaan->setText(QCoreApplication::translate("MainWindow", "Kirjaudu sis\303\244\303\244n", nullptr));
        logoff->setText(QCoreApplication::translate("MainWindow", "Kirjaudu ulos", nullptr));
        nostarahaa->setText(QCoreApplication::translate("MainWindow", "Nosta rahaa", nullptr));
        selaaTT->setText(QCoreApplication::translate("MainWindow", "Selaa tilitapahtumia", nullptr));
        lenaytasaldo->setText(QCoreApplication::translate("MainWindow", "N\303\244yt\303\244 Saldo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
