/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cadastro
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QFormLayout *formLayout;
    QLabel *Nome;
    QLineEdit *nome;
    QLabel *Login;
    QLineEdit *login;
    QLabel *Senha_2;
    QLineEdit *Senha;
    QLabel *ConfirmaSenha;
    QLineEdit *confirmaSenha;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QRadioButton *radioButton;
    QLabel *label;
    QListWidget *role;
    QPushButton *cliqueAqui;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *voltar;
    QPushButton *salvar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cadastro)
    {
        if (Cadastro->objectName().isEmpty())
            Cadastro->setObjectName("Cadastro");
        Cadastro->resize(900, 800);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Cadastro->sizePolicy().hasHeightForWidth());
        Cadastro->setSizePolicy(sizePolicy);
        Cadastro->setMinimumSize(QSize(650, 650));
        Cadastro->setTabletTracking(false);
        Cadastro->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Imagens/Gemini_Generated_Image_k1xqgjk1xqgjk1xq.png);"));
        centralwidget = new QWidget(Cadastro);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMaximumSize(QSize(1280, 1024));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(250, 100));
        label_2->setMaximumSize(QSize(1000, 1000));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font.setPointSize(70);
        font.setBold(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse);

        verticalLayout->addWidget(label_2, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::ExpandingFieldsGrow);
        formLayout->setFormAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);
        Nome = new QLabel(centralwidget);
        Nome->setObjectName("Nome");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Nome->sizePolicy().hasHeightForWidth());
        Nome->setSizePolicy(sizePolicy1);
        Nome->setMaximumSize(QSize(200, 100));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        Nome->setFont(font1);
        Nome->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagens/fundo background cor.png);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        formLayout->setWidget(1, QFormLayout::LabelRole, Nome);

        nome = new QLineEdit(centralwidget);
        nome->setObjectName("nome");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nome->sizePolicy().hasHeightForWidth());
        nome->setSizePolicy(sizePolicy2);
        nome->setMaximumSize(QSize(400, 25));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font2.setPointSize(12);
        font2.setBold(false);
        nome->setFont(font2);
        nome->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        nome->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        nome->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nome);

        Login = new QLabel(centralwidget);
        Login->setObjectName("Login");
        Login->setMaximumSize(QSize(200, 100));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font3.setPointSize(16);
        font3.setBold(false);
        Login->setFont(font3);
        Login->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagens/fundo background cor.png);\n"
""));

        formLayout->setWidget(2, QFormLayout::LabelRole, Login);

        login = new QLineEdit(centralwidget);
        login->setObjectName("login");
        login->setMaximumSize(QSize(400, 25));
        login->setFont(font2);
        login->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));
        login->setCursorPosition(0);

        formLayout->setWidget(2, QFormLayout::FieldRole, login);

        Senha_2 = new QLabel(centralwidget);
        Senha_2->setObjectName("Senha_2");
        Senha_2->setMaximumSize(QSize(200, 100));
        Senha_2->setFont(font3);
        Senha_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagens/fundo background cor.png);\n"
""));

        formLayout->setWidget(3, QFormLayout::LabelRole, Senha_2);

        Senha = new QLineEdit(centralwidget);
        Senha->setObjectName("Senha");
        Senha->setMaximumSize(QSize(400, 25));
        Senha->setFont(font2);
        Senha->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, Senha);

        ConfirmaSenha = new QLabel(centralwidget);
        ConfirmaSenha->setObjectName("ConfirmaSenha");
        ConfirmaSenha->setMaximumSize(QSize(200, 100));
        ConfirmaSenha->setFont(font3);
        ConfirmaSenha->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagens/fundo background cor.png);\n"
""));

        formLayout->setWidget(4, QFormLayout::LabelRole, ConfirmaSenha);

        confirmaSenha = new QLineEdit(centralwidget);
        confirmaSenha->setObjectName("confirmaSenha");
        confirmaSenha->setMaximumSize(QSize(400, 25));
        confirmaSenha->setFont(font2);
        confirmaSenha->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, confirmaSenha);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(200, 30));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagens/fundo background cor.png);\n"
""));

        horizontalLayout_2->addWidget(label_5, 0, Qt::AlignmentFlag::AlignRight);

        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font4.setBold(false);
        radioButton->setFont(font4);

        horizontalLayout_2->addWidget(radioButton, 0, Qt::AlignmentFlag::AlignLeft);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(400, 150));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font5.setPointSize(20);
        font5.setBold(false);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/Imagens/fundo background cor.png);"));

        verticalLayout->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignBottom);

        role = new QListWidget(centralwidget);
        new QListWidgetItem(role);
        new QListWidgetItem(role);
        new QListWidgetItem(role);
        role->setObjectName("role");
        role->setMaximumSize(QSize(200, 35));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font6.setPointSize(15);
        font6.setBold(false);
        font6.setKerning(false);
        font6.setHintingPreference(QFont::PreferVerticalHinting);
        role->setFont(font6);
        role->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        role->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        verticalLayout->addWidget(role, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        cliqueAqui = new QPushButton(centralwidget);
        cliqueAqui->setObjectName("cliqueAqui");
        cliqueAqui->setEnabled(true);
        cliqueAqui->setMaximumSize(QSize(300, 30));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 170, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(127, 127, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(170, 170, 170, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(0, 0, 0, 127));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(127, 127, 127, 127));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        cliqueAqui->setPalette(palette);
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font7.setPointSize(12);
        font7.setBold(false);
        font7.setKerning(true);
        font7.setHintingPreference(QFont::PreferVerticalHinting);
        cliqueAqui->setFont(font7);
        cliqueAqui->setMouseTracking(false);
        cliqueAqui->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        cliqueAqui->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        cliqueAqui->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagens/fundo background cor.png);\n"
""));
        cliqueAqui->setIconSize(QSize(2, 16));
        cliqueAqui->setAutoDefault(false);
        cliqueAqui->setFlat(true);

        verticalLayout->addWidget(cliqueAqui, 0, Qt::AlignmentFlag::AlignHCenter);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(300, 30));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font8.setPointSize(12);
        font8.setBold(false);
        font8.setHintingPreference(QFont::PreferVerticalHinting);
        label_3->setFont(font8);
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagens/fundo background cor.png);\n"
""));

        verticalLayout->addWidget(label_3, 0, Qt::AlignmentFlag::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");

        verticalLayout->addLayout(horizontalLayout);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setFont(font8);
        checkBox->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagens/fundo background cor.png);\n"
"\n"
""));

        verticalLayout->addWidget(checkBox, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        voltar = new QPushButton(centralwidget);
        voltar->setObjectName("voltar");
        voltar->setMaximumSize(QSize(200, 35));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font9.setPointSize(15);
        font9.setBold(false);
        font9.setHintingPreference(QFont::PreferVerticalHinting);
        voltar->setFont(font9);
        voltar->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));
        voltar->setAutoDefault(false);

        horizontalLayout_6->addWidget(voltar);

        salvar = new QPushButton(centralwidget);
        salvar->setObjectName("salvar");
        salvar->setMaximumSize(QSize(175, 35));
        salvar->setFont(font9);
        salvar->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));
        salvar->setAutoDefault(false);

        horizontalLayout_6->addWidget(salvar);


        verticalLayout->addLayout(horizontalLayout_6);

        Cadastro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cadastro);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 22));
        Cadastro->setMenuBar(menubar);
        statusbar = new QStatusBar(Cadastro);
        statusbar->setObjectName("statusbar");
        Cadastro->setStatusBar(statusbar);

        retranslateUi(Cadastro);

        cliqueAqui->setDefault(false);


        QMetaObject::connectSlotsByName(Cadastro);
    } // setupUi

    void retranslateUi(QMainWindow *Cadastro)
    {
        Cadastro->setWindowTitle(QCoreApplication::translate("Cadastro", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("Cadastro", "  Area de Cadastro   ", nullptr));
        Nome->setText(QCoreApplication::translate("Cadastro", "NOME", nullptr));
#if QT_CONFIG(tooltip)
        nome->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        nome->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        Login->setText(QCoreApplication::translate("Cadastro", "LOGIN", nullptr));
        Senha_2->setText(QCoreApplication::translate("Cadastro", "SENHA", nullptr));
        Senha->setText(QCoreApplication::translate("Cadastro", "DIGITE SUA SENHA", nullptr));
        ConfirmaSenha->setText(QCoreApplication::translate("Cadastro", "CONFIRMA", nullptr));
        confirmaSenha->setText(QCoreApplication::translate("Cadastro", "CONFIRMA SENHA", nullptr));
        label_5->setText(QCoreApplication::translate("Cadastro", "MOSTRAR CARACTERES", nullptr));
        radioButton->setText(QString());
        label->setText(QCoreApplication::translate("Cadastro", "ESCOLHA O TIPO DA SUA CONTA", nullptr));

        const bool __sortingEnabled = role->isSortingEnabled();
        role->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = role->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Cadastro", "admin", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = role->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Cadastro", "motoboy_2", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = role->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Cadastro", "empresa", nullptr));
        role->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(tooltip)
        cliqueAqui->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cliqueAqui->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        cliqueAqui->setText(QCoreApplication::translate("Cadastro", "clique aqui ", nullptr));
        label_3->setText(QCoreApplication::translate("Cadastro", "PARA VIZUALIZAR OS TERMOS DE USUARIO", nullptr));
        checkBox->setText(QCoreApplication::translate("Cadastro", "EU LI, E ACEITO OS TERMOS DE US\303\232ARIO", nullptr));
        voltar->setText(QCoreApplication::translate("Cadastro", "VOLTAR", nullptr));
        salvar->setText(QCoreApplication::translate("Cadastro", "SALVAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cadastro: public Ui_Cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
