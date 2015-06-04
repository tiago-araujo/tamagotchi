#include "tamagotchi.h"
#include "ui_tamagotchi.h"
#include "qgraphicsscene.h"

Tamagotchi::Tamagotchi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tamagotchi)
{
    ui->setupUi(this);
    ui->interagirButton->setStyleSheet(QString::fromUtf8("background-image: url(:/img/btn/interagir.png); background-repeat: none;"));
    ui->interagirButton->setMinimumSize(32,32);
    ui->interagirButton->setMaximumSize(32,32);
    ui->interagirButton->resize(32,32);

    cena = new QGraphicsScene(this);
    ui->telaTama->setScene(cena);
}

Tamagotchi::~Tamagotchi()
{
    delete ui;
}



void Tamagotchi::on_interagirButton_clicked()
{

}

void Tamagotchi::on_cantarButton_clicked()
{

}

void Tamagotchi::on_alimentarButton_clicked()
{

}

void Tamagotchi::on_dormirButton_clicked()
{

}
