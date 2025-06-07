#include "telaPrincipal.h"
#include "qsqlerror.h"
#include "qsqlquery.h"
#include "ui_telaPrincipal.h"
#include <QMessageBox>
#include <QDebug>
#include <QLabel>
#include <QFrame>
#include <QVBoxLayout>

telaPrincipal::telaPrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::telaPrincipal)
{
    ui->setupUi(this);

    carregarMotoboys();
    carregarEmpresas();

    connect(ui->listWidget, &QListWidget::currentRowChanged,
        this, &telaPrincipal::on_listWidget_currentRowChanged);

    // Exemplo de validador, se quiser ativar
    // ui->preco->setValidator(new QDoubleValidator(0, 999999.99, 2, this));
}

telaPrincipal::~telaPrincipal()
{
    delete ui;
}

void telaPrincipal::carregarMotoboys()
{
    ui->listMotoboys->clear();
    QSqlQuery query("SELECT id, nome FROM motoboy");
    while (query.next()) {
        QListWidgetItem *item = new QListWidgetItem(query.value(1).toString());
        item->setData(Qt::UserRole, query.value(0).toInt());
        ui->listMotoboys->addItem(item);
    }
}

void telaPrincipal::carregarEmpresas()
{
    ui->listEmpresas->clear();
    QSqlQuery query("SELECT id, cliente FROM empresas");
    while (query.next()) {
        QListWidgetItem *item = new QListWidgetItem(query.value(1).toString());
        item->setData(Qt::UserRole, query.value(0).toInt());
        ui->listEmpresas->addItem(item);
    }
}

void telaPrincipal::on_listWidget_currentRowChanged(int currentRow)
{
    ui->stackedWidget->setCurrentIndex(currentRow);
}

void telaPrincipal::on_salvar1_clicked()
{
    double preco = ui->preco->text().toDouble();
    QString origem = ui->origem->text();
    QString destino = ui->destino->text();
    int id = ui->id->value();
    QDateTime dataHora = ui->datahora->dateTime();

    QListWidgetItem *itemSelecionado = ui->listMotoboys->currentItem();
    QListWidgetItem *empresaSelecionada = ui->listEmpresas->currentItem();

    if (!itemSelecionado || !empresaSelecionada) {
        QMessageBox::warning(this, "Erro", "Selecione um motoboy e uma empresa!");
        return;
    }

    int motoboy_id = itemSelecionado->data(Qt::UserRole).toInt();
    int cliente_id = empresaSelecionada->data(Qt::UserRole).toInt();

    QSqlQuery query;
    query.prepare("INSERT INTO corridas (motoboy_id, cliente_id, preco, origem, destino, id, datahora) "
                  "VALUES (:motoboy_id, :cliente_id, :preco, :origem, :destino, :id, :datahora)");
    query.bindValue(":motoboy_id", motoboy_id);
    query.bindValue(":cliente_id", cliente_id);
    query.bindValue(":preco", preco);
    query.bindValue(":origem", origem);
    query.bindValue(":destino", destino);
    query.bindValue(":id", id);
    query.bindValue(":datahora", dataHora);

    if (query.exec()) {
        QMessageBox::information(this, "Sucesso", "Corrida registrada com sucesso!");

        // Criar o card visual e adicionar na UI (humilde Optimus style: direto, claro e funcional)
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->layoutcorridas->layout());
        if (layout) {
            QFrame* card = new QFrame();
            card->setFrameShape(QFrame::Box);
            card->setStyleSheet("background-color: white; border: 1px solid gray; margin: 5px; padding: 5px;");

            QVBoxLayout* cardLayout = new QVBoxLayout(card);

            cardLayout->addWidget(new QLabel("Origem: " + origem));
            cardLayout->addWidget(new QLabel("Destino: " + destino));
            cardLayout->addWidget(new QLabel("Preço: R$ " + QString::number(preco, 'f', 2)));

            layout->addWidget(card);
        } else {
            qDebug() << "Layout de corridas não encontrado!";
        }
    } else {
        qDebug() << "Erro ao salvar corrida:" << query.lastError().text();
        QMessageBox::critical(this, "Erro", "Falha ao registrar a corrida!");
    }
}

void telaPrincipal::on_btnSalvarEmpresa_clicked()
{
    int id = ui->empresa_id->value();
    QString nome = ui->empresa_nome->text();
    QString endereco = ui->empresa_endereco->text();
    QString telefone = ui->empresa_telefone->text();

    if (nome.isEmpty() || endereco.isEmpty() || telefone.isEmpty()) {
        QMessageBox::warning(this, "Campos vazios", "Por favor, preencha todos os campos!");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO empresas (id, cliente, endereco, telefone) "
                  "VALUES (:id, :cliente, :endereco, :telefone)");
    query.bindValue(":id", id);
    query.bindValue(":cliente", nome);
    query.bindValue(":endereco", endereco);
    query.bindValue(":telefone", telefone);

    if (query.exec()) {
        QMessageBox::information(this, "Sucesso", "Empresa cadastrada com sucesso!");
        ui->empresa_id->setValue(0);
        ui->empresa_nome->clear();
        ui->empresa_endereco->clear();
        ui->empresa_telefone->clear();

        carregarEmpresas();
    } else {
        qDebug() << "Erro ao cadastrar empresa:" << query.lastError().text();
        QMessageBox::critical(this, "Erro", "Erro ao cadastrar empresa!");
    }
}

void telaPrincipal::on_btnSalvarMotoboy_clicked()
{
    int id = ui->motoboy_id->value();
    QString nome = ui->motoboy_nome->text();
    QString telefone = ui->motoboy_telefone->text();
    QString placa = ui->motoboy_placa->text();

    if (nome.isEmpty() || telefone.isEmpty() || placa.isEmpty()) {
        QMessageBox::warning(this, "Campos vazios", "Preencha todos os campos!");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO motoboy (id, nome, telefone, placa) "
                  "VALUES (:id, :nome, :telefone, :placa)");
    query.bindValue(":id", id);
    query.bindValue(":nome", nome);
    query.bindValue(":telefone", telefone);
    query.bindValue(":placa", placa);

    if (query.exec()) {
        QMessageBox::information(this, "Sucesso", "Motoboy cadastrado com sucesso!");
        ui->motoboy_id->setValue(0);
        ui->motoboy_nome->clear();
        ui->motoboy_telefone->clear();
        ui->motoboy_placa->clear();

        carregarMotoboys();
    } else {
        qDebug() << "Erro ao cadastrar motoboy:" << query.lastError().text();
        QMessageBox::critical(this, "Erro", "Erro ao cadastrar motoboy!");
    }
}
