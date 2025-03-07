#include "telaprincipal.h"
#include "ui_telaprincipal.h"

telaPrincipal::telaPrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::telaPrincipal)

{
    ui->setupUi(this);

    connect(ui->listWidget, &QListWidget::currentRowChanged,
            this, &::telaPrincipal::on_listWidget_currentRowChanged);
        //conecxao listwidget com QStackedWidget
}

telaPrincipal::~telaPrincipal()
{
    delete ui;
}

void telaPrincipal::on_listWidget_currentRowChanged(int currentRow)
{
    // Alterar a página exibida pelo QStackedWidget
    ui->stackedWidget->setCurrentIndex(currentRow);
}


