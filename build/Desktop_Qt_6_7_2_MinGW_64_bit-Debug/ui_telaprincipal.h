/********************************************************************************
** Form generated from reading UI file 'telaPrincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL_H
#define UI_TELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaPrincipal
{
public:
    QAction *actionSalvar;
    QAction *actionImprimir;
    QAction *actionAbrir_Arquivo;
    QAction *actionDuvidas;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *corridas;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *adicionar;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QListWidget *listEmpresas;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QDateTimeEdit *datahora;
    QLineEdit *preco;
    QSpinBox *id;
    QLabel *label_3;
    QLineEdit *origem;
    QPushButton *salvar1;
    QListWidget *listMotoboys;
    QLineEdit *destino;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QScrollArea *scrollArea;
    QWidget *layoutcorridas;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QWidget *pesquisar;
    QWidget *editar;
    QLabel *label_2;
    QWidget *excluir;
    QWidget *empresa;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLineEdit *empresa_nome;
    QLabel *label_8;
    QLineEdit *empresa_endereco;
    QLabel *label_10;
    QLineEdit *empresa_telefone;
    QLabel *label_9;
    QSpinBox *empresa_id;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btnSalvarEmpresa;
    QWidget *page_2;
    QWidget *motoboy;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWidget_3;
    QStackedWidget *stackedWidget_3;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_11;
    QLineEdit *motoboy_nome;
    QLabel *label_12;
    QLineEdit *motoboy_telefone;
    QLabel *label_13;
    QLineEdit *motoboy_placa;
    QLabel *label_14;
    QSpinBox *motoboy_id;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btnSalvarMotoboy;
    QWidget *page_4;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuAjuda;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *telaPrincipal)
    {
        if (telaPrincipal->objectName().isEmpty())
            telaPrincipal->setObjectName("telaPrincipal");
        telaPrincipal->resize(1094, 872);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(telaPrincipal->sizePolicy().hasHeightForWidth());
        telaPrincipal->setSizePolicy(sizePolicy);
        telaPrincipal->setMinimumSize(QSize(700, 680));
        telaPrincipal->setMaximumSize(QSize(16777215, 16777215));
        telaPrincipal->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Imagens/Gemini_Generated_Image_k1xqgjk1xqgjk1xq.png);"));
        actionSalvar = new QAction(telaPrincipal);
        actionSalvar->setObjectName("actionSalvar");
        actionImprimir = new QAction(telaPrincipal);
        actionImprimir->setObjectName("actionImprimir");
        actionAbrir_Arquivo = new QAction(telaPrincipal);
        actionAbrir_Arquivo->setObjectName("actionAbrir_Arquivo");
        actionDuvidas = new QAction(telaPrincipal);
        actionDuvidas->setObjectName("actionDuvidas");
        centralwidget = new QWidget(telaPrincipal);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(700, 700));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(20);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        corridas = new QWidget();
        corridas->setObjectName("corridas");
        corridas->setMaximumSize(QSize(1326, 1133));
        horizontalLayout = new QHBoxLayout(corridas);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(corridas);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem->setForeground(brush);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::MailMessageNew));
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem3->setIcon(icon3);
        listWidget->setObjectName("listWidget");
        listWidget->setMinimumSize(QSize(0, 0));
        listWidget->setMaximumSize(QSize(200, 250));
        QPalette palette;
        QBrush brush1(QColor(0, 0, 0, 120));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        listWidget->setPalette(palette);
        QFont font1;
        font1.setPointSize(15);
        listWidget->setFont(font1);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: rgba(0, 0, 0, 120); /* fundo mais escuro para os itens */\n"
"\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    background-color: rgba(255, 255, 255, 30); /* branco claro */\n"
"    padding: 6px;\n"
"    border: none;\n"
"    color: black;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: rgba(100, 100, 255, 100); /* azul suave ao passar o mouse */\n"
"    color: white;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: #0078D7; /* azul forte ao selecionar */\n"
"    color: white;\n"
"    border: none;\n"
"}\n"
""));
        listWidget->setFrameShape(QFrame::Shape::Box);
        listWidget->setSelectionMode(QAbstractItemView::SelectionMode::MultiSelection);
        listWidget->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerItem);
        listWidget->setResizeMode(QListView::ResizeMode::Adjust);
        listWidget->setSpacing(7);
        listWidget->setViewMode(QListView::ViewMode::ListMode);

        horizontalLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(corridas);
        stackedWidget->setObjectName("stackedWidget");
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(300, 500));
        stackedWidget->setMaximumSize(QSize(900, 800));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->setFrameShape(QFrame::Shape::WinPanel);
        adicionar = new QWidget();
        adicionar->setObjectName("adicionar");
        gridLayout = new QGridLayout(adicionar);
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        gridLayout_2->setContentsMargins(0, 8, 0, 7);
        lineEdit = new QLineEdit(adicionar);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaximumSize(QSize(400, 30));

        gridLayout_2->addWidget(lineEdit, 10, 0, 1, 1);

        label = new QLabel(adicionar);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(400, 0));
        label->setMaximumSize(QSize(400, 30));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:1, stop:0 rgba(18, 179, 172, 0), stop:1 rgba(255, 255, 255, 255));"));
        label->setFrameShape(QFrame::Shape::Box);
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse);

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        listEmpresas = new QListWidget(adicionar);
        listEmpresas->setObjectName("listEmpresas");
        listEmpresas->setMinimumSize(QSize(400, 30));
        listEmpresas->setMaximumSize(QSize(400, 30));
        QFont font2;
        font2.setPointSize(12);
        listEmpresas->setFont(font2);
        listEmpresas->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        gridLayout_2->addWidget(listEmpresas, 5, 0, 1, 1);

        label_4 = new QLabel(adicionar);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(400, 30));
        label_4->setMaximumSize(QSize(400, 30));
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::Shape::Box);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_4, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        label_5 = new QLabel(adicionar);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(400, 30));
        label_5->setMaximumSize(QSize(400, 35));
        label_5->setFont(font1);
        label_5->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_5->setAcceptDrops(false);
        label_5->setFrameShape(QFrame::Shape::Box);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_5, 8, 0, 1, 1);

        datahora = new QDateTimeEdit(adicionar);
        datahora->setObjectName("datahora");
        sizePolicy.setHeightForWidth(datahora->sizePolicy().hasHeightForWidth());
        datahora->setSizePolicy(sizePolicy);
        datahora->setMinimumSize(QSize(150, 30));
        datahora->setMaximumSize(QSize(150, 30));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        datahora->setFont(font3);
        datahora->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(datahora, 15, 0, 1, 1);

        preco = new QLineEdit(adicionar);
        preco->setObjectName("preco");
        sizePolicy.setHeightForWidth(preco->sizePolicy().hasHeightForWidth());
        preco->setSizePolicy(sizePolicy);
        preco->setMinimumSize(QSize(400, 30));
        preco->setMaximumSize(QSize(400, 30));
        QFont font4;
        font4.setPointSize(11);
        preco->setFont(font4);
        preco->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/Imagens/branco de fundo.png);"));

        gridLayout_2->addWidget(preco, 7, 0, 1, 1);

        id = new QSpinBox(adicionar);
        id->setObjectName("id");
        sizePolicy.setHeightForWidth(id->sizePolicy().hasHeightForWidth());
        id->setSizePolicy(sizePolicy);
        id->setMinimumSize(QSize(60, 30));
        id->setMaximumSize(QSize(60, 40));
        id->setBaseSize(QSize(0, 0));
        QFont font5;
        font5.setPointSize(11);
        font5.setKerning(true);
        id->setFont(font5);
        id->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        id->setAutoFillBackground(false);
        id->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        id->setWrapping(false);
        id->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::UpDownArrows);
        id->setMaximum(500000);
        id->setValue(1);
        id->setDisplayIntegerBase(12);

        gridLayout_2->addWidget(id, 14, 0, 1, 1);

        label_3 = new QLabel(adicionar);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(400, 30));
        label_3->setMaximumSize(QSize(400, 30));
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::Shape::Box);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        origem = new QLineEdit(adicionar);
        origem->setObjectName("origem");
        sizePolicy.setHeightForWidth(origem->sizePolicy().hasHeightForWidth());
        origem->setSizePolicy(sizePolicy);
        origem->setMinimumSize(QSize(400, 30));
        origem->setMaximumSize(QSize(400, 30));
        origem->setFont(font4);
        origem->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/Imagens/branco de fundo.png);"));

        gridLayout_2->addWidget(origem, 9, 0, 1, 1);

        salvar1 = new QPushButton(adicionar);
        salvar1->setObjectName("salvar1");
        sizePolicy.setHeightForWidth(salvar1->sizePolicy().hasHeightForWidth());
        salvar1->setSizePolicy(sizePolicy);
        salvar1->setMinimumSize(QSize(100, 35));
        salvar1->setMaximumSize(QSize(100, 35));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
        font6.setPointSize(13);
        font6.setBold(false);
        salvar1->setFont(font6);
        salvar1->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        salvar1->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));
        salvar1->setIconSize(QSize(16, 16));

        gridLayout_2->addWidget(salvar1, 16, 0, 1, 1);

        listMotoboys = new QListWidget(adicionar);
        listMotoboys->setObjectName("listMotoboys");
        sizePolicy.setHeightForWidth(listMotoboys->sizePolicy().hasHeightForWidth());
        listMotoboys->setSizePolicy(sizePolicy);
        listMotoboys->setMinimumSize(QSize(400, 30));
        listMotoboys->setMaximumSize(QSize(400, 30));
        listMotoboys->setFont(font2);
        listMotoboys->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));
        listMotoboys->setFrameShape(QFrame::Shape::HLine);

        gridLayout_2->addWidget(listMotoboys, 3, 0, 1, 1);

        destino = new QLineEdit(adicionar);
        destino->setObjectName("destino");
        destino->setMaximumSize(QSize(400, 30));

        gridLayout_2->addWidget(destino, 11, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 17, 0, 1, 1);

        label_6 = new QLabel(adicionar);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(400, 35));
        label_6->setMaximumSize(QSize(400, 35));
        label_6->setFont(font1);
        label_6->setFrameShape(QFrame::Shape::Box);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_6, 13, 0, 1, 1);

        scrollArea = new QScrollArea(adicionar);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        layoutcorridas = new QWidget();
        layoutcorridas->setObjectName("layoutcorridas");
        layoutcorridas->setGeometry(QRect(0, 0, 414, 136));
        verticalLayout_2 = new QVBoxLayout(layoutcorridas);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        verticalLayout_2->addLayout(verticalLayout);

        frame = new QFrame(layoutcorridas);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_2->addWidget(frame);

        scrollArea->setWidget(layoutcorridas);

        gridLayout_2->addWidget(scrollArea, 4, 1, 4, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        stackedWidget->addWidget(adicionar);
        pesquisar = new QWidget();
        pesquisar->setObjectName("pesquisar");
        stackedWidget->addWidget(pesquisar);
        editar = new QWidget();
        editar->setObjectName("editar");
        label_2 = new QLabel(editar);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 40, 49, 16));
        stackedWidget->addWidget(editar);
        excluir = new QWidget();
        excluir->setObjectName("excluir");
        stackedWidget->addWidget(excluir);

        horizontalLayout->addWidget(stackedWidget);

        tabWidget->addTab(corridas, QString());
        empresa = new QWidget();
        empresa->setObjectName("empresa");
        empresa->setMinimumSize(QSize(600, 600));
        horizontalLayout_3 = new QHBoxLayout(empresa);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        listWidget_2 = new QListWidget(empresa);
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::ContactNew));
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem4->setFont(font2);
        __qlistwidgetitem4->setIcon(icon4);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem5->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem5->setFont(font2);
        __qlistwidgetitem5->setIcon(icon1);
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditCut));
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem6->setFont(font2);
        __qlistwidgetitem6->setIcon(icon5);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem7->setFont(font2);
        __qlistwidgetitem7->setIcon(icon3);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setMaximumSize(QSize(200, 200));
        QFont font7;
        font7.setPointSize(15);
        font7.setStrikeOut(false);
        listWidget_2->setFont(font7);
        listWidget_2->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        listWidget_2->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: rgba(0, 0, 0, 120); /* fundo mais escuro para os itens */\n"
"\n"
"}\n"
"\n"
"QListWidget::item {\n"
"\n"
"    padding: 11px;\n"
"border: none;\n"
"    color: black;\n"
"}\n"
""));
        listWidget_2->setFrameShape(QFrame::Shape::Panel);
        listWidget_2->setFrameShadow(QFrame::Shadow::Sunken);
        listWidget_2->setAutoScrollMargin(16);
        listWidget_2->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectItems);

        horizontalLayout_3->addWidget(listWidget_2);

        stackedWidget_2 = new QStackedWidget(empresa);
        stackedWidget_2->setObjectName("stackedWidget_2");
        sizePolicy.setHeightForWidth(stackedWidget_2->sizePolicy().hasHeightForWidth());
        stackedWidget_2->setSizePolicy(sizePolicy);
        stackedWidget_2->setMinimumSize(QSize(500, 400));
        stackedWidget_2->setMaximumSize(QSize(400, 300));
        stackedWidget_2->setFrameShape(QFrame::Shape::WinPanel);
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);
        label_7->setFrameShape(QFrame::Shape::Box);

        verticalLayout_4->addWidget(label_7, 0, Qt::AlignmentFlag::AlignHCenter);

        empresa_nome = new QLineEdit(page);
        empresa_nome->setObjectName("empresa_nome");
        empresa_nome->setFont(font2);
        empresa_nome->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        verticalLayout_4->addWidget(empresa_nome);

        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);
        label_8->setFrameShape(QFrame::Shape::Box);

        verticalLayout_4->addWidget(label_8, 0, Qt::AlignmentFlag::AlignHCenter);

        empresa_endereco = new QLineEdit(page);
        empresa_endereco->setObjectName("empresa_endereco");
        empresa_endereco->setFont(font2);
        empresa_endereco->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        verticalLayout_4->addWidget(empresa_endereco);

        label_10 = new QLabel(page);
        label_10->setObjectName("label_10");
        label_10->setFont(font2);
        label_10->setFrameShape(QFrame::Shape::Box);

        verticalLayout_4->addWidget(label_10, 0, Qt::AlignmentFlag::AlignHCenter);

        empresa_telefone = new QLineEdit(page);
        empresa_telefone->setObjectName("empresa_telefone");
        empresa_telefone->setFont(font2);
        empresa_telefone->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        verticalLayout_4->addWidget(empresa_telefone);

        label_9 = new QLabel(page);
        label_9->setObjectName("label_9");
        label_9->setMaximumSize(QSize(30, 25));
        label_9->setFont(font2);
        label_9->setFrameShape(QFrame::Shape::Box);

        verticalLayout_4->addWidget(label_9, 0, Qt::AlignmentFlag::AlignHCenter);

        empresa_id = new QSpinBox(page);
        empresa_id->setObjectName("empresa_id");
        empresa_id->setMaximumSize(QSize(60, 30));
        empresa_id->setFont(font2);
        empresa_id->setMaximum(1000);

        verticalLayout_4->addWidget(empresa_id, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_4);

        btnSalvarEmpresa = new QPushButton(page);
        btnSalvarEmpresa->setObjectName("btnSalvarEmpresa");
        btnSalvarEmpresa->setFont(font2);
        btnSalvarEmpresa->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        verticalLayout_4->addWidget(btnSalvarEmpresa, 0, Qt::AlignmentFlag::AlignHCenter);


        verticalLayout_5->addLayout(verticalLayout_4);

        stackedWidget_2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget_2->addWidget(page_2);

        horizontalLayout_3->addWidget(stackedWidget_2, 0, Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        tabWidget->addTab(empresa, QString());
        motoboy = new QWidget();
        motoboy->setObjectName("motoboy");
        horizontalLayout_4 = new QHBoxLayout(motoboy);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        listWidget_3 = new QListWidget(motoboy);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem8->setFont(font2);
        __qlistwidgetitem8->setBackground(brush5);
        __qlistwidgetitem8->setForeground(brush);
        __qlistwidgetitem8->setIcon(icon4);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem9->setFont(font2);
        __qlistwidgetitem9->setIcon(icon1);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem10->setFont(font2);
        __qlistwidgetitem10->setIcon(icon5);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem11->setFont(font2);
        __qlistwidgetitem11->setIcon(icon3);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setMaximumSize(QSize(200, 200));
        listWidget_3->setFont(font1);
        listWidget_3->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: rgba(0, 0, 0, 120); /* fundo mais escuro para os itens */\n"
"\n"
"}\n"
"\n"
"QListWidget::item {\n"
"\n"
"    padding: 11px;\n"
"    border: none;\n"
"   \n"
"}\n"
""));
        listWidget_3->setFrameShape(QFrame::Shape::WinPanel);
        listWidget_3->setAutoScrollMargin(16);

        horizontalLayout_4->addWidget(listWidget_3, 0, Qt::AlignmentFlag::AlignLeft);

        stackedWidget_3 = new QStackedWidget(motoboy);
        stackedWidget_3->setObjectName("stackedWidget_3");
        sizePolicy.setHeightForWidth(stackedWidget_3->sizePolicy().hasHeightForWidth());
        stackedWidget_3->setSizePolicy(sizePolicy);
        stackedWidget_3->setMinimumSize(QSize(500, 400));
        stackedWidget_3->setMaximumSize(QSize(500, 400));
        stackedWidget_3->setFrameShape(QFrame::Shape::WinPanel);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout_7 = new QVBoxLayout(page_3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        label_11->setFont(font2);
        label_11->setFrameShape(QFrame::Shape::Box);

        verticalLayout_6->addWidget(label_11, 0, Qt::AlignmentFlag::AlignHCenter);

        motoboy_nome = new QLineEdit(page_3);
        motoboy_nome->setObjectName("motoboy_nome");
        motoboy_nome->setFont(font2);
        motoboy_nome->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        verticalLayout_6->addWidget(motoboy_nome);

        label_12 = new QLabel(page_3);
        label_12->setObjectName("label_12");
        label_12->setFont(font2);
        label_12->setFrameShape(QFrame::Shape::Box);

        verticalLayout_6->addWidget(label_12, 0, Qt::AlignmentFlag::AlignHCenter);

        motoboy_telefone = new QLineEdit(page_3);
        motoboy_telefone->setObjectName("motoboy_telefone");
        motoboy_telefone->setFont(font2);
        motoboy_telefone->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        verticalLayout_6->addWidget(motoboy_telefone);

        label_13 = new QLabel(page_3);
        label_13->setObjectName("label_13");
        label_13->setFont(font2);
        label_13->setFrameShape(QFrame::Shape::Box);

        verticalLayout_6->addWidget(label_13, 0, Qt::AlignmentFlag::AlignHCenter);

        motoboy_placa = new QLineEdit(page_3);
        motoboy_placa->setObjectName("motoboy_placa");
        motoboy_placa->setFont(font2);
        motoboy_placa->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        verticalLayout_6->addWidget(motoboy_placa);

        label_14 = new QLabel(page_3);
        label_14->setObjectName("label_14");
        label_14->setMaximumSize(QSize(30, 25));
        label_14->setFont(font2);
        label_14->setFrameShape(QFrame::Shape::Box);

        verticalLayout_6->addWidget(label_14, 0, Qt::AlignmentFlag::AlignHCenter);

        motoboy_id = new QSpinBox(page_3);
        motoboy_id->setObjectName("motoboy_id");
        motoboy_id->setMaximumSize(QSize(60, 30));
        motoboy_id->setFont(font2);
        motoboy_id->setMaximum(1000);

        verticalLayout_6->addWidget(motoboy_id, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_6->addItem(verticalSpacer_3);

        btnSalvarMotoboy = new QPushButton(page_3);
        btnSalvarMotoboy->setObjectName("btnSalvarMotoboy");
        btnSalvarMotoboy->setFont(font2);
        btnSalvarMotoboy->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagens/branco de fundo.png);"));

        verticalLayout_6->addWidget(btnSalvarMotoboy, 0, Qt::AlignmentFlag::AlignHCenter);


        verticalLayout_7->addLayout(verticalLayout_6);

        stackedWidget_3->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        stackedWidget_3->addWidget(page_4);

        horizontalLayout_4->addWidget(stackedWidget_3, 0, Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        tabWidget->addTab(motoboy, QString());

        verticalLayout_3->addWidget(tabWidget);

        telaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(telaPrincipal);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1094, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName("menuArquivo");
        menuAjuda = new QMenu(menubar);
        menuAjuda->setObjectName("menuAjuda");
        telaPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(telaPrincipal);
        statusbar->setObjectName("statusbar");
        telaPrincipal->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuAjuda->menuAction());
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionImprimir);
        menuArquivo->addAction(actionAbrir_Arquivo);
        menuAjuda->addAction(actionDuvidas);

        retranslateUi(telaPrincipal);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(telaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *telaPrincipal)
    {
        telaPrincipal->setWindowTitle(QCoreApplication::translate("telaPrincipal", "MainWindow", nullptr));
        actionSalvar->setText(QCoreApplication::translate("telaPrincipal", "Salvar", nullptr));
        actionImprimir->setText(QCoreApplication::translate("telaPrincipal", "Imprimir", nullptr));
        actionAbrir_Arquivo->setText(QCoreApplication::translate("telaPrincipal", "Abrir Arquivo", nullptr));
        actionDuvidas->setText(QCoreApplication::translate("telaPrincipal", "Duvidas", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("telaPrincipal", "ADICIONAR", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("telaPrincipal", "PESQUISAR", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("telaPrincipal", "EDITAR", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("telaPrincipal", "EXCLUIR", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        lineEdit->setText(QCoreApplication::translate("telaPrincipal", "DESTINO", nullptr));
        label->setText(QCoreApplication::translate("telaPrincipal", "MOTOBOY", nullptr));
        label_4->setText(QCoreApplication::translate("telaPrincipal", "PRE\303\207O", nullptr));
        label_5->setText(QCoreApplication::translate("telaPrincipal", "ORIGEM", nullptr));
        label_3->setText(QCoreApplication::translate("telaPrincipal", "EMPRESA OU CLIENTE", nullptr));
        salvar1->setText(QCoreApplication::translate("telaPrincipal", "SALVAR", nullptr));
        label_6->setText(QCoreApplication::translate("telaPrincipal", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("telaPrincipal", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(corridas), QCoreApplication::translate("telaPrincipal", "Corridas", nullptr));

        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem4 = listWidget_2->item(0);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("telaPrincipal", "ADICIONAR", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_2->item(1);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("telaPrincipal", "PESQUISAR", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_2->item(2);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("telaPrincipal", "EDITAR", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_2->item(3);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("telaPrincipal", "EXCLUIR", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

        label_7->setText(QCoreApplication::translate("telaPrincipal", "CLIENTE", nullptr));
        label_8->setText(QCoreApplication::translate("telaPrincipal", "ENDERECO", nullptr));
        label_10->setText(QCoreApplication::translate("telaPrincipal", "TELEFONE", nullptr));
        label_9->setText(QCoreApplication::translate("telaPrincipal", "ID", nullptr));
        btnSalvarEmpresa->setText(QCoreApplication::translate("telaPrincipal", "SALVAR", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(empresa), QCoreApplication::translate("telaPrincipal", "Cadastrar Empresas", nullptr));

        const bool __sortingEnabled2 = listWidget_3->isSortingEnabled();
        listWidget_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem8 = listWidget_3->item(0);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("telaPrincipal", "ADICIONAR", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_3->item(1);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("telaPrincipal", "PESQUISAR", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget_3->item(2);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("telaPrincipal", "EDITAR", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_3->item(3);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("telaPrincipal", "EXCLUIR", nullptr));
        listWidget_3->setSortingEnabled(__sortingEnabled2);

        label_11->setText(QCoreApplication::translate("telaPrincipal", "NOME", nullptr));
        label_12->setText(QCoreApplication::translate("telaPrincipal", "TELEFONE", nullptr));
        label_13->setText(QCoreApplication::translate("telaPrincipal", "PLACA", nullptr));
        label_14->setText(QCoreApplication::translate("telaPrincipal", "ID", nullptr));
        btnSalvarMotoboy->setText(QCoreApplication::translate("telaPrincipal", "SALVAR", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(motoboy), QCoreApplication::translate("telaPrincipal", "Cadastrar Motoboys", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("telaPrincipal", "Arquivo", nullptr));
        menuAjuda->setTitle(QCoreApplication::translate("telaPrincipal", "Ajuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaPrincipal: public Ui_telaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H
