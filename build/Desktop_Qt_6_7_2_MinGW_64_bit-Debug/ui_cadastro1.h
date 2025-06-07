/********************************************************************************
** Form generated from reading UI file 'cadastro1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO1_H
#define UI_CADASTRO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastro1
{
public:

    void setupUi(QWidget *cadastro1)
    {
        if (cadastro1->objectName().isEmpty())
            cadastro1->setObjectName("cadastro1");
        cadastro1->resize(400, 300);

        retranslateUi(cadastro1);

        QMetaObject::connectSlotsByName(cadastro1);
    } // setupUi

    void retranslateUi(QWidget *cadastro1)
    {
        cadastro1->setWindowTitle(QCoreApplication::translate("cadastro1", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastro1: public Ui_cadastro1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO1_H
