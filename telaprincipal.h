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
    void on_listWidget_currentRowChanged(int currentRow);  //conecxao listwidget com QStackedWidget



private:
    Ui::telaPrincipal *ui;
};

#endif // TELAPRINCIPAL_H





