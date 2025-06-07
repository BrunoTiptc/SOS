#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <QSqlQuery>
#include <QMessageBox>
#include "Cadastro.h"
#include "Telaprincipal1.h"
#include "telaPrincipal.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void loginSuccessful();


private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_checkBox_toggled(bool checked);

    void on_pushButton_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    void showError(const QString &message);
    bool login(const QString &login, const QString &senha);
    void showAdminPainel();
    void showUserPainel();

};

#endif // MAINWINDOW_H

