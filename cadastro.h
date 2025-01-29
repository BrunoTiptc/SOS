#ifndef CADASTRO_H
#define CADASTRO_H

#include <QMainWindow>

namespace Ui {
class Cadastro;
}

class Cadastro : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();

private slots:
    void on_voltar_clicked();
private slots:
    void on_salvar_clicked();


private:
    Ui::Cadastro *ui;
};

#endif // CADASTRO_H
