/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEditar;
    QAction *actionAbrir_projetos_recents;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *login;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_9;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_15;
    QLineEdit *senha;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 850);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 500));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(13);
        font.setWeight(QFont::Black);
        font.setUnderline(false);
        font.setStrikeOut(false);
        MainWindow->setFont(font);
        MainWindow->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        MainWindow->setToolTipDuration(0);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Imagens/Gemini_Generated_Image_k1xqgjk1xqgjk1xq.png);"));
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionEditar = new QAction(MainWindow);
        actionEditar->setObjectName("actionEditar");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ink Free")});
        font1.setPointSize(18);
        actionEditar->setFont(font1);
        actionAbrir_projetos_recents = new QAction(MainWindow);
        actionAbrir_projetos_recents->setObjectName("actionAbrir_projetos_recents");
        QFont font2;
        font2.setPointSize(18);
        actionAbrir_projetos_recents->setFont(font2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(500, 500));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(100, 80));
        label_4->setMaximumSize(QSize(800, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("SimSun")});
        font3.setPointSize(88);
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_4, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(verticalSpacer_4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(16);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(150, 35));
        pushButton_3->setMaximumSize(QSize(150, 35));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font4.setPointSize(12);
        font4.setBold(false);
        pushButton_3->setFont(font4);
        pushButton_3->setAcceptDrops(false);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
""));

        gridLayout_3->addWidget(pushButton_3, 7, 2, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 1, 3, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_14, 6, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 6, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 4, 1, 1, 1);

        login = new QLineEdit(centralwidget);
        login->setObjectName("login");
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        login->setMinimumSize(QSize(150, 35));
        login->setMaximumSize(QSize(150, 35));
        login->setBaseSize(QSize(0, 0));
        login->setFont(font4);
        login->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        login->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));
        login->setMaxLength(500);
        login->setFrame(true);
        login->setCursorPosition(1);
        login->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(login, 1, 2, 1, 1, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 4, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 1, 1, 1, 1);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setToolTipDuration(1);
        progressBar->setValue(0);

        gridLayout_3->addWidget(progressBar, 11, 1, 1, 3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 6, 3, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font5;
        font5.setKerning(true);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_3->addWidget(label, 6, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 7, 3, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_11, 1, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_13, 4, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 2, 1, 1);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setMaximumSize(QSize(145, 20));
        QFont font6;
        font6.setPointSize(9);
        checkBox->setFont(font6);
        checkBox->setTabletTracking(false);
        checkBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(checkBox, 3, 2, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 4, 3, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_12, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 10, 2, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_15, 7, 0, 1, 1);

        senha = new QLineEdit(centralwidget);
        senha->setObjectName("senha");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(senha->sizePolicy().hasHeightForWidth());
        senha->setSizePolicy(sizePolicy2);
        senha->setMinimumSize(QSize(150, 35));
        senha->setMaximumSize(QSize(150, 35));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Segoe UI")});
        font7.setPointSize(12);
        font7.setKerning(true);
        senha->setFont(font7);
        senha->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        senha->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        senha->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));
        senha->setMaxLength(200);
        senha->setEchoMode(QLineEdit::EchoMode::Password);
        senha->setCursorPosition(2);
        senha->setAlignment(Qt::AlignmentFlag::AlignCenter);
        senha->setDragEnabled(false);
        senha->setCursorMoveStyle(Qt::CursorMoveStyle::LogicalMoveStyle);

        gridLayout_3->addWidget(senha, 2, 2, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(150, 35));
        pushButton->setMaximumSize(QSize(150, 35));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font8.setPointSize(12);
        font8.setBold(false);
        font8.setKerning(false);
        pushButton->setFont(font8);
        pushButton->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));
        pushButton->setIconSize(QSize(16, 16));

        gridLayout_3->addWidget(pushButton, 4, 2, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 8, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setProperty("azul.jfif", QVariant(QPixmap(QString::fromUtf8("../background.jpg"))));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEditar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionAbrir_projetos_recents->setText(QCoreApplication::translate("MainWindow", "Abrir projetos recentes .. ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "SOS ENTREGAS", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "REGISTRAR", nullptr));
#if QT_CONFIG(tooltip)
        login->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        login->setText(QCoreApplication::translate("MainWindow", "USUARIO", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ainda n\303\243o tem uma conta? Clique aqui", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "MostrarCaracteres", nullptr));
        senha->setText(QCoreApplication::translate("MainWindow", "SENHA", nullptr));
#if QT_CONFIG(statustip)
        pushButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
