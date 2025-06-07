#ifndef CADASTRO1_H
#define CADASTRO1_H

#include <QWidget>

namespace Ui {
class cadastro1;
}

class cadastro1 : public QWidget
{
    Q_OBJECT

public:
    explicit cadastro1(QWidget *parent = nullptr);
    ~cadastro1();

private:
    Ui::cadastro1 *ui;
};

#endif // CADASTRO1_H
