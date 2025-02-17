#include "Login.h"
#include "ui_Login.h"
#include "qstring.h"
#include "telaprincipal.h"
#include "Telaprincipal1.h"
#include <QMessageBox>
#include <QLineEdit>
#include <QRadioButton>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    testDatabaseQuery();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::testDatabaseQuery() {
    QSqlQuery query;
    if (!query.exec("SELECT * FROM motoboy")) { // Nome de tabela incorreto para teste
        showError("Erro ao executar a consulta: " + query.lastError().text());
    } else {
        while (query.next()) {
            qDebug() << query.value(0).toString(); // Exemplo de como acessar os dados retornados
        }
    }
}




void MainWindow::showError(const QString &message) {
    QMessageBox::critical(this, "Erro", message);
}

// Implementação da função de login
bool MainWindow::login(const QString &login, const QString &senha) {
    // Verifique se login e senha não estão vazios
    if (login.isEmpty() || senha.isEmpty()) {
        showError("Por favor, preencha ambos os campos de login e senha.");
        return false;
    }

    QSqlQuery query;
    query.prepare("SELECT role FROM usuarios WHERE login = :login AND senha = :senha");
    query.bindValue(":login", login);
    query.bindValue(":senha", senha);

    if (query.exec()) {
        if (query.next()) {
            QString role = query.value(0).toString();
            if (role == "admin") {
                // Mostra painel admin
                showAdminPainel();
                return true;
            } else if (role == "motoboy") {
                // Mostra painel usuário
                showUserPainel();
                return true;
            }  else if (role == "empresa") {
                // Mostra painel usuário
                showUserPainel();
                return true;
            }

        }
    } else {
        qDebug() << "Erro ao executar consulta: " << query.lastError().text();
    }
    return false;
}

void MainWindow::on_pushButton_3_clicked() {
    Cadastro *cadastroWindow = new Cadastro(this);
    cadastroWindow->showMaximized();
}

void MainWindow::on_pushButton_clicked() {
    // Obtendo as entradas do usuário corretamente
    QString login = ui->login->text();
    QString senha = ui->senha->text();

    if (this->login(login, senha)) {
        // Login bem-sucedido, redireciona para a tela principal
        // Aqui você pode chamar a função para mostrar o painel do admin ou do usuário
    } else {
        showError("Credenciais inválidas. Por favor, tente novamente.");
    }
}
// Função para mostrar a tela principal do admin
void MainWindow::showAdminPainel() {
    telaPrincipal *telaPrincipal = new class telaPrincipal(this); // Corrigido para usar a classe correta
    telaPrincipal->showMaximized(); // Abre a tela principal do admin
}

// Função para mostrar a tela principal do usuário
void MainWindow::showUserPainel() {
    Telaprincipal1 *TelaPrincipal1 = new class Telaprincipal1(this); // Corrigido para usar a classe correta
    TelaPrincipal1->showMaximized(); // Abre a tela principal para usuário
}

void MainWindow::on_botao_toggled(bool checked)
{
    if (checked) {
        ui->senha->setEchoMode(QLineEdit::Normal);
    } else {
        ui->senha->setEchoMode(QLineEdit::Password);
    }
}

