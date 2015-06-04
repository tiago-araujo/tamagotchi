#ifndef TAMAGOTCHI_H
#define TAMAGOTCHI_H

#include <QMainWindow>

namespace Ui {
class Tamagotchi;
}

class Tamagotchi : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tamagotchi(QWidget *parent = 0);
    ~Tamagotchi();

private slots:
    void on_pushButton_clicked();

    void on_interagirButton_clicked();

    void on_cantarButton_clicked();

    void on_alimentarButton_clicked();

    void on_dormirButton_clicked();

private:
    Ui::Tamagotchi *ui;
};

#endif // TAMAGOTCHI_H
