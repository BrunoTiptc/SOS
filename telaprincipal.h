#ifndef TELAPRINCIPAL_H
#define TELAPRINCIPAL_H

#include <QMainWindow>
#include <QListWidget>
#include <QStackedWidget>

namespace Ui {
class telaPrincipal;
}

class telaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit telaPrincipal(QWidget *parent = nullptr);
    ~telaPrincipal();

private slots:
    void on_listWidget_currentRowChanged(int currentRow);
    void on_salvar1_clicked();
    void on_btnSalvarEmpresa_clicked();
    void on_btnSalvarMotoboy_clicked();
    void carregarMotoboys();
    void carregarEmpresas();
    int gerarProximoID(const QString& tabela, const QString& coluna);
    void limparLayout(QLayout *layout);


private:
    Ui::telaPrincipal *ui;
};

#endif // TELAPRINCIPAL_H





