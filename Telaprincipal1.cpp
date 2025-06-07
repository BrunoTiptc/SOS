#include "telaprincipal1.h"
#include "ui_Telaprincipal1.h"

Telaprincipal1::Telaprincipal1(QWidget *parent)
    : QMainWindow(parent)
    ,ui(new Ui:: Telaprincipal1)
{
    ui->setupUi(this);
}

Telaprincipal1::~Telaprincipal1()
{
    delete ui;
}
