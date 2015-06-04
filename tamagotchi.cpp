#include "tamagotchi.h"
#include "ui_tamagotchi.h"

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
