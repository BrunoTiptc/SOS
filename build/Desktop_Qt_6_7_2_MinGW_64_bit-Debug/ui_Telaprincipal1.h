/********************************************************************************
** Form generated from reading UI file 'Telaprincipal1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL1_H
#define UI_TELAPRINCIPAL1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Telaprincipal1
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Telaprincipal1)
    {
        if (Telaprincipal1->objectName().isEmpty())
            Telaprincipal1->setObjectName("Telaprincipal1");
        Telaprincipal1->resize(800, 600);
        Telaprincipal1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);"));
        centralwidget = new QWidget(Telaprincipal1);
        centralwidget->setObjectName("centralwidget");
        Telaprincipal1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Telaprincipal1);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Telaprincipal1->setMenuBar(menubar);
        statusbar = new QStatusBar(Telaprincipal1);
        statusbar->setObjectName("statusbar");
        Telaprincipal1->setStatusBar(statusbar);

        retranslateUi(Telaprincipal1);

        QMetaObject::connectSlotsByName(Telaprincipal1);
    } // setupUi

    void retranslateUi(QMainWindow *Telaprincipal1)
    {
        Telaprincipal1->setWindowTitle(QCoreApplication::translate("Telaprincipal1", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Telaprincipal1: public Ui_Telaprincipal1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL1_H
