#include "cadastro.h"
#include "ui_cadastro.h"
#include "qstring.h"
#include "qsqlquery.h"
#include "QSqlError"
#include <QMessageBox>

Cadastro::Cadastro(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cadastro)
{
    ui->setupUi(this);
}

Cadastro::~Cadastro()
{
    delete ui;
}

void Cadastro::on_voltar_clicked()
{
    this->close();
}


void Cadastro::on_salvar_clicked()
{
    QString nome = ui->nome->toPlainText();
    QString login = ui->login->toPlainText();
    QString senha = ui->Senha->toPlainText();
    QString ConfirmaSenha = ui->confirma->toPlainText();

    QSqlQuery query;
    query.prepare("INSERT INTO usuarios ( nome, login, senha, confirmaSenha) VALUES (:nome, :login, :senha, :confirmaSenha)");
    query.bindValue(":nome", nome);
    query.bindValue(":login", login);
    query.bindValue(":senha", senha);
    query.bindValue(":confirmaSenha", ConfirmaSenha);


    if (query.exec()) {
        QMessageBox::information(this, "Sucesso", "Usuário registrado com sucesso!");
    } else {
        QString erroTexto = query.lastError().text(); // Obtém a mensagem de erro

        qDebug() << "Erro SQL detectado:" << erroTexto; // Exibe no console para debug

        // Tratamento de erro para entrada duplicada (MySQL)
        if (erroTexto.contains("Duplicate entry", Qt::CaseInsensitive)) {
            QMessageBox::warning(this, "Erro", "Este nome de usuário já existe. Escolha outro.");
        } else {
            // Para outros erros, mostra a mensagem original do banco
            QMessageBox::critical(this, "Erro", "Erro ao registrar usuário:\n" + erroTexto);
        }
    }

}


