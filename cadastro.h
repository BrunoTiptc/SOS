#ifndef CADASTRO_H
#define CADASTRO_H

#include <QMainWindow>
#include <QWidget>
#include <QMessageBox>
#include <QTextStream>

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
    void on_salvar_clicked();
    void on_cliqueAqui_clicked();       //vai ser usado nos termos de uso
    void on_radioButton_toggled(bool checked);

private:
    Ui::Cadastro *ui;
    bool validarSenha(const QString &senha); // Declaração da função
};

#endif // CADASTRO_H
