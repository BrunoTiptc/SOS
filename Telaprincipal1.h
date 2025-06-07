#ifndef TELAPRINCIPAL1_H
#define TELAPRINCIPAL1_H

#include <QMainWindow>

namespace Ui {
class Telaprincipal1;
}

class Telaprincipal1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Telaprincipal1(QWidget *parent = nullptr);
    ~Telaprincipal1();

private:
    Ui::Telaprincipal1 *ui;
};

#endif // TELAPRINCIPAL1_H
