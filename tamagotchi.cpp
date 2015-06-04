#include "tamagotchi.h"
#include "ui_tamagotchi.h"
#include "qgraphicsscene.h"

Tamagotchi::Tamagotchi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tamagotchi)
{
    ui->setupUi(this);
}

Tamagotchi::~Tamagotchi()
{
    delete ui;
}



void Tamagotchi::on_interagirButton_clicked()
{
    QGraphicsScene inter = new QGraphicsScene(ui->telaTama);
    inter.setSceneRect(ui->telaTama->rect());
    ui->telaTama->setScene(inter);
}

void Tamagotchi::on_cantarButton_clicked()
{
    QGraphicsScene cantar = new QGraphicsScene(ui->telaTama);
    cantar.setSceneRect(ui->telaTama->rect());
    ui->telaTama->setScene(cantar);
}

void Tamagotchi::on_alimentarButton_clicked()
{
    QGraphicsScene alimentar = new QGraphicsScene(ui->telaTama);
    alimentar.setSceneRect(ui->telaTama->rect());
    ui->telaTama->setScene(alimentar);
}

void Tamagotchi::on_dormirButton_clicked()
{
    QGraphicsScene dormir = new QGraphicsScene(ui->telaTama);
    dormir.setSceneRect(ui->telaTama->rect());
    ui->telaTama->setScene(dormir);
}
