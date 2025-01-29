#include "telaprincipal.h"
#include "ui_telaprincipal.h"

telaPrincipal::telaPrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::telaPrincipal)
{
    ui->setupUi(this);
}

telaPrincipal::~telaPrincipal()
{
    delete ui;
}
