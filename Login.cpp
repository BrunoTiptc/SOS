#include "Login.h"
#include "qsqlerror.h"
#include "ui_Login.h"
#include "qstring.h"
#include "telaPrincipal.h"
#include "Telaprincipal1.h"
#include <QMessageBox>
#include <QLineEdit>
#include <QProgressBar>
#include <QTimer>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Configura a progress bar: define o intervalo e oculta inicialmente
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
    ui->progressBar->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showError(const QString &message) {
    QMessageBox::critical(this, "Erro", message);
}

bool MainWindow::login(const QString &login, const QString &senha) {
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
                showAdminPainel();
                return true;
            } else if (role == "motoboy" || role == "empresa") {
                showUserPainel();
                return true;
            }
        }
    } else {
        qDebug() << "Erro ao executar consulta: " << query.lastError().text();
    }
    return false;
}

void MainWindow::on_pushButton_clicked() {
    // Botão "Entrar" - inicia a animação do progress bar e valida o login
    ui->progressBar->setVisible(true);
    ui->progressBar->setValue(0);

    // Usa um QTimer para simular uma progressão (por exemplo, para validar restrições ou processar a requisição)
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [this, timer]() {
        int val = ui->progressBar->value();
        if (val < 80) {
            ui->progressBar->setValue(val + 20);
        } else {
            timer->stop();
            timer->deleteLater();

            QString userLogin = ui->login->text();
            QString userSenha = ui->senha->text();

            if (this->login(userLogin, userSenha)) {
                ui->progressBar->setValue(100);
                // Opcional: após um login bem-sucedido, você pode ocultar a progress bar
                // ui->progressBar->setVisible(false);
            } else {
                // Em caso de falha, reseta e oculta a progress bar
                ui->progressBar->setValue(0);
                ui->progressBar->setVisible(false);
                showError("Credenciais inválidas. Por favor, tente novamente.");
            }
        }
    });
    timer->start(100);
}

void MainWindow::on_pushButton_3_clicked() {
    // Botão "Registrar" - inicia a animação do progress bar e abre a tela de cadastro
    ui->progressBar->setVisible(true);
    ui->progressBar->setValue(0);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [this, timer]() {
        int val = ui->progressBar->value();
        if (val < 100) {
            ui->progressBar->setValue(val + 25);
        } else {
            timer->stop();
            timer->deleteLater();
            // Abre a janela de cadastro após a progressão completa
            Cadastro *cadastroWindow = new Cadastro(this);
            cadastroWindow->showMaximized();
            ui->progressBar->setVisible(false);
        }
    });
    timer->start(100);
}

void MainWindow::showAdminPainel() {
    telaPrincipal *telaPrincipalWindow = new telaPrincipal(this);
    telaPrincipalWindow->showMaximized();
}

void MainWindow::showUserPainel() {
    Telaprincipal1 *TelaPrincipal1 = new Telaprincipal1(this);
    TelaPrincipal1->showMaximized();
}

void MainWindow::on_checkBox_toggled(bool checked) {
    if (checked) {
        ui->senha->setEchoMode(QLineEdit::Normal);
    } else {
        ui->senha->setEchoMode(QLineEdit::Password);
    }
}
