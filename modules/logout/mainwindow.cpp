#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/img/turn_off.png").scaled(130,130,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label_2->setPixmap(QPixmap(":/img/reboot.png").scaled(60,60,Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

MainWindow::~MainWindow()
{
    delete ui;
}
