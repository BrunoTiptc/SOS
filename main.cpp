#include "Login.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QFontDatabase>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Carrega a fonte personalizada
    int id = QFontDatabase::addApplicationFont(":/Poppins-Regular.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont poppinsFont(family);
    QApplication::setFont(poppinsFont);

    // ===== CONEXÃO COM BANCO DE DADOS =====
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    // Caminho da pasta onde o executável está
    QString appDirPath = QCoreApplication::applicationDirPath();
    db.setDatabaseName(appDirPath + "/sosentregas.db");

    if (!db.open()) {
        qDebug() << "Erro ao conectar ao banco de dados:" << db.lastError().text();
        QMessageBox::critical(nullptr, "Erro", "Erro ao conectar ao banco de dados: " + db.lastError().text());
        return -1;
    }

    qDebug() << "✅ Banco conectado com sucesso!";
    qDebug() << "Drivers disponíveis:" << QSqlDatabase::drivers();

    // Mostrar tabelas do banco
    QSqlQuery test;
    test.exec("SELECT name FROM sqlite_master WHERE type='table'");
    qDebug() << "Tabelas no banco:";
    while (test.next()) {
        qDebug() << test.value(0).toString();
    }

    // === [Versão MySQL - desativada] ===
    /*
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("SOSENTREGAS");
    db.setUserName("root");
    db.setPassword("@Bruno1518");
    */

    // Abre a janela principal (Login ou telaPrincipal)
    MainWindow w;
    w.showMaximized();

    return a.exec();
}
