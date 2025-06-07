#include "cadastro.h"
#include "ui_cadastro.h"
#include <QLineEdit>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QRegularExpression>
#include <QDebug>
#include <QTextStream>
#include "Strings.h"

Cadastro::Cadastro(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cadastro)
{
    ui->setupUi(this);

    // Configurar os campos de senha para exibir bolinhas
    ui->Senha->setEchoMode(QLineEdit::Password);
    ui->confirmaSenha->setEchoMode(QLineEdit::Password);
    ui->role->setCurrentRow(0);

}

Cadastro::~Cadastro()
{
    delete ui;
}

void Cadastro::on_voltar_clicked()
{
    this->close();
}

bool Cadastro::validarSenha(const QString &senha) {
    // Verifica se a senha não está vazia
    if (senha.isEmpty()) {
        return false;
    }

    // Expressão regular para verificar se a senha contém:
    // - Pelo menos um número (\d)
    // - Pelo menos um caractere especial ([!@#$%^&*])
    // - Comprimento mínimo de 8 caracteres (.{8,})
    QRegularExpression regex("^(?=.*\\d)(?=.*[!@#$%^&*]).{8,}$");

    // Verifica se a expressão regular é válida
    if (!regex.isValid()) {
        qDebug() << "Erro na expressão regular:" << regex.errorString();
        return false;
    }

    // Verifica se a senha corresponde à expressão regular
    QRegularExpressionMatch match = regex.match(senha);
    return match.hasMatch();
}

void Cadastro::on_salvar_clicked() {
    // Obter os valores dos campos
    QString nome = ui->nome->text(); // Captura o texto do QLineEdit
    QString login = ui->login->text(); // Captura o texto do QLineEdit
    QString senha = ui->Senha->text(); // Captura o texto do QLineEdit
    QString ConfirmaSenha = ui->confirmaSenha->text(); // Captura o texto do QLineEdit
    QString role = ui->role->currentItem()->text();


    // Verificar se os campos obrigatórios estão preenchidos
    if (nome.isEmpty() || login.isEmpty() || senha.isEmpty() || ConfirmaSenha.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Todos os campos são obrigatórios.");
        return;
    }

    // Validar a senha
    if (!validarSenha(senha)) {
        QMessageBox::warning(this, "Erro", "A senha deve conter:\n"
                                           "- Pelo menos um número\n"
                                           "- Pelo menos um caractere especial\n"
                                           "- Mínimo de 8 caracteres.");
        return;
    }

    // Verificar se as senhas coincidem
    if (senha != ConfirmaSenha) {
        QMessageBox::warning(this, "Erro", "As senhas não coincidem.");
        return;
    }

    // Verificar se o usuário aceitou os termos de uso
    if (!ui->checkBox->isChecked()) {
        QMessageBox::warning(this, "Erro", "Você precisa aceitar os termos de uso.");
        return;
    }

    // Restante do código para salvar no banco de dados...
    QSqlQuery query;
    query.prepare("INSERT INTO usuarios (nome, login, senha, confirmaSenha, role) VALUES (:nome, :login, :senha, :confirmaSenha, :role)");
    query.bindValue(":nome", nome);
    query.bindValue(":login", login);
    query.bindValue(":senha", senha);
    query.bindValue(":confirmaSenha", ConfirmaSenha);
    query.bindValue(":role", role);

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

void Cadastro::on_cliqueAqui_clicked() {
    // Definição dos Termos de Uso diretamente em uma QString
    QMessageBox msgBox;
    msgBox.setWindowTitle("Termos de Uso");
    msgBox.setText("Leia atentamente os termos abaixo:");
    msgBox.setInformativeText(TERMOS_DE_USO);  // Usa a constante definida no arquivo externo
    msgBox.setTextInteractionFlags(Qt::TextSelectableByMouse);
    msgBox.setStyleSheet("QLabel{ min-width: 500px; min-height: 300px; }");

    msgBox.exec();
}


void Cadastro::on_radioButton_toggled(bool checked)
{
    if (checked) {
        ui->Senha->setEchoMode(QLineEdit::Normal);
         ui->confirmaSenha->setEchoMode(QLineEdit::Normal);
    } else {
        ui->Senha->setEchoMode(QLineEdit::Password);
         ui->confirmaSenha->setEchoMode(QLineEdit::Password);
    }
}


