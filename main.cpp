//#include "Login.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <telaPrincipal.h>
#include <QMessageBox>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Verifique os drivers disponíveis
    //qDebug() << "Drivers disponíveis:" << QSqlDatabase::drivers();

    void connectToDatabase();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("SOSENTREGAS"); // Nome do banco de dados
    db.setUserName("root"); // Nome de usuário do banco de dados
    db.setPassword("@Bruno1518"); // Senha do banco de dados



    if (!db.open()) {
        qDebug() << "Erro ao conectar ao banco de dados:" << db.lastError().text();
        QMessageBox::critical(nullptr, "Erro", "Erro ao conectar ao banco de dados: " + db.lastError().text());
        return -1;
    }

    //MainWindow w;
    telaPrincipal w;
    w.showMaximized();
    return a.exec();
}
