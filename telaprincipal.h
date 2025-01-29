#ifndef TELAPRINCIPAL_H
#define TELAPRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class telaPrincipal;
}

class telaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit telaPrincipal(QWidget *parent = nullptr);
    ~telaPrincipal();

private:
    Ui::telaPrincipal *ui;
};

#endif // TELAPRINCIPAL_H
