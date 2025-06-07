#include "cadastro1.h"
#include "ui_cadastro1.h"


cadastro1::cadastro1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cadastro1)
{
    ui->setupUi(this);
}

cadastro1::~cadastro1()
{
    delete ui;
}

