#ifndef TAMAGOTCHI_H
#define TAMAGOTCHI_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

namespace Ui {
class Tamagotchi;
}

const int MAX_ITEMS = 5;

class Tamagotchi : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tamagotchi(QWidget *parent = 0);
    ~Tamagotchi();

private slots:

    void on_interagirButton_clicked();

    void on_cantarButton_clicked();

    void on_alimentarButton_clicked();

    void on_dormirButton_clicked();

private:
    Ui::Tamagotchi *ui;
    QGraphicsScene * cena;
    QGraphicsPixmapItem m_itens[MAX_ITEMS];
};

#endif // TAMAGOTCHI_H
