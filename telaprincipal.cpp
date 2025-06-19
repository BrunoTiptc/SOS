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
    ui->datahora->setDateTime(QDateTime::currentDateTime());
    carregarMotoboys();
    carregarEmpresas();
    ui->id->setValue(gerarProximoID("corridas", "id"));
    ui->motoboy_id->setValue(gerarProximoID("motoboy", "id"));
    ui->empresa_id->setValue(gerarProximoID("empresas", "id"));
    connect(ui->listWidget, &QListWidget::currentRowChanged,
        this, &telaPrincipal::on_listWidget_currentRowChanged);
}
telaPrincipal::~telaPrincipal()
{
    delete ui;
}
void telaPrincipal::limparLayout(QLayout *layout)
{
    if (!layout)
        return;

    while (QLayoutItem* item = layout->takeAt(0)) {
        if (QWidget* widget = item->widget()) {
            widget->setParent(nullptr);
            delete widget;
        }
        delete item;
    }
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
    QDateTime dataHora = ui->datahora->dateTime();
    ui->preco->setValidator(new QDoubleValidator(0, 9999.99, 2, this));

    QListWidgetItem *itemSelecionado = ui->listMotoboys->currentItem();
    QListWidgetItem *empresaSelecionada = ui->listEmpresas->currentItem();

    QString motoboyNome = itemSelecionado ? itemSelecionado->text() : "Desconhecido";
    int motoboyId = itemSelecionado ? itemSelecionado->data(Qt::UserRole).toInt() : 0;

    QString clienteNome = empresaSelecionada ? empresaSelecionada->text() : "Desconhecido";
    int clienteId = empresaSelecionada ? empresaSelecionada->data(Qt::UserRole).toInt() : 0;
    // Geração de ID automático
    QSqlQuery getIdQuery;
    getIdQuery.exec("SELECT MAX(id) FROM corridas");
    int id = 1;
    if (getIdQuery.next()) {
        id = getIdQuery.value(0).toInt() + 1;
    }
    ui->id->setValue(id);
    // Inserir no banco com IDs, não nomes
    QSqlQuery query;
    query.prepare("INSERT INTO corridas (id, origem, destino, preco, datahora, motoboy_id, cliente_id) "
                  "VALUES (:id, :origem, :destino, :preco, :datahora, :motoboy_id, :cliente_id)");
    query.bindValue(":id", id);
    query.bindValue(":origem", origem);
    query.bindValue(":destino", destino);
    query.bindValue(":preco", preco);
    query.bindValue(":datahora", dataHora);
    query.bindValue(":motoboy_id", motoboyId);
    query.bindValue(":cliente_id", clienteId);
    if (query.exec()) {
        QMessageBox::information(this, "Sucesso", "Corrida registrada com sucesso!");

        // Exibir card visual com nomes para usuário
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->layoutcorridas->layout());
        if (layout) {
             limparLayout(layout);
            QFrame* card = new QFrame();
            card->setFrameShape(QFrame::StyledPanel);
            card->setStyleSheet("background-color: #f9f9f9; border: 1px solid #ccc; border-radius: 8px; padding: 10px;");

            QVBoxLayout* cardLayout = new QVBoxLayout(card);

            cardLayout->addWidget(new QLabel("🚚 Motoboy: " + motoboyNome));
            cardLayout->addWidget(new QLabel("🏢 Cliente: " + clienteNome));
            cardLayout->addWidget(new QLabel("📍 Origem: " + origem));
            cardLayout->addWidget(new QLabel("🎯 Destino: " + destino));
            cardLayout->addWidget(new QLabel("💰 Preço: R$ " + QString::number(preco, 'f', 2)));
            cardLayout->addWidget(new QLabel("⏰ Data/Hora: " + dataHora.toString("dd/MM/yyyy HH:mm")));

            layout->addWidget(card);
        }
        ui->listaCorridas->addItem("Corrida #" + QString::number(id) + " - " + origem + " → " + destino + " | R$ " + QString::number(preco, 'f', 2));
    } else {
        qDebug() << "Erro ao salvar corrida:" << query.lastError().text();
        QMessageBox::critical(this, "Erro", "Falha ao registrar a corrida!");
    }
}
int telaPrincipal::gerarProximoID(const QString& tabela, const QString& coluna)
{
    QSqlQuery query;
    query.exec(QString("SELECT MAX(%1) FROM %2").arg(coluna, tabela));
    if (query.next()) {
        return query.value(0).toInt() + 1;
    }
    return 1;
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

    // Verifica se já existe
         QSqlQuery verifica;
    verifica.prepare("SELECT COUNT(*) FROM empresas WHERE id = :id");
    verifica.bindValue(":id", id);
    verifica.exec();
    verifica.next();
    bool existe = verifica.value(0).toInt() > 0;
        QSqlQuery query;
      if (existe) {
        // UPDATE
        query.prepare("UPDATE empresas SET cliente = :cliente, endereco = :endereco, telefone = :telefone WHERE id = :id");
    } else {
        // INSERT
        id = gerarProximoID("empresas", "id");
        ui->empresa_id->setValue(id);
        query.prepare("INSERT INTO empresas (id, cliente, endereco, telefone) VALUES (:id, :cliente, :endereco, :telefone)");
    }

    query.bindValue(":id", id);
    query.bindValue(":cliente", nome);
    query.bindValue(":endereco", endereco);
    query.bindValue(":telefone", telefone);

    if (query.exec()) {
        QMessageBox::information(this, "Sucesso", existe ? "Empresa atualizada!" : "Empresa cadastrada!");
        ui->empresa_id->setValue(0);
        ui->empresa_nome->clear();
        ui->empresa_endereco->clear();
        ui->empresa_telefone->clear();

        carregarEmpresas();
    } else {
        qDebug() << "Erro ao salvar empresa:" << query.lastError().text();
        QMessageBox::critical(this, "Erro", "Erro ao salvar empresa!");
    }
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->layoutEmpresas->layout());
    if (layout) {
        limparLayout(layout);

        QFrame* card = new QFrame();
        card->setFrameShape(QFrame::StyledPanel);
        card->setStyleSheet("background-color: #fffbea; border: 1px solid #ccc; border-radius: 8px; padding: 10px;");

        QVBoxLayout* cardLayout = new QVBoxLayout(card);
        cardLayout->addWidget(new QLabel("🏢 Nome: " + nome));
        cardLayout->addWidget(new QLabel("📍 Endereço: " + endereco));
        cardLayout->addWidget(new QLabel("📞 Telefone: " + telefone));

        layout->addWidget(card);
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

    // Verifica se já existe
    QSqlQuery verifica;
    verifica.prepare("SELECT COUNT(*) FROM motoboy WHERE id = :id");
    verifica.bindValue(":id", id);
    verifica.exec();
    verifica.next();
    bool existe = verifica.value(0).toInt() > 0;

    QSqlQuery query;

    if (existe) {
        // Atualiza
        query.prepare("UPDATE motoboy SET nome = :nome, telefone = :telefone, placa = :placa WHERE id = :id");
    } else {
        // Gera ID se for novo
        id = gerarProximoID("motoboy", "id");
        ui->motoboy_id->setValue(id);
        query.prepare("INSERT INTO motoboy (id, nome, telefone, placa) VALUES (:id, :nome, :telefone, :placa)");
    }
    query.bindValue(":id", id);
    query.bindValue(":nome", nome);
    query.bindValue(":telefone", telefone);
    query.bindValue(":placa", placa);

    if (query.exec()) {
        QMessageBox::information(this, "Sucesso", existe ? "Motoboy atualizado!" : "Motoboy cadastrado!");
        ui->motoboy_nome->clear();
        ui->motoboy_telefone->clear();
        ui->motoboy_placa->clear();
        ui->motoboy_id->setValue(0);
        carregarMotoboys();
    } else {
        qDebug() << "Erro ao salvar motoboy:" << query.lastError().text();
        QMessageBox::critical(this, "Erro", "Erro ao salvar motoboy!");
    }
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->layoutMotoboys->layout());
    if (layout) {
        limparLayout(layout);

        QFrame* card = new QFrame();
        card->setFrameShape(QFrame::StyledPanel);
        card->setStyleSheet("background-color: #f0f8ff; border: 1px solid #ccc; border-radius: 8px; padding: 10px;");

        QVBoxLayout* cardLayout = new QVBoxLayout(card);
        cardLayout->addWidget(new QLabel("🛵 Nome: " + nome));
        cardLayout->addWidget(new QLabel("📞 Telefone: " + telefone));
        cardLayout->addWidget(new QLabel("🔢 Placa: " + placa));

        layout->addWidget(card);
    }
}
