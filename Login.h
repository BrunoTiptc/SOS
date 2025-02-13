#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "cadastro.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();

private:
    void testDatabaseQuery();
    void showError(const QString &message);
    bool login(const QString &login, const QString &senha);
    void showAdminPainel();
    void showUserPainel();

private:
    Ui::MainWindow *ui;
};

#endif // LOGIN_H
