#include "AboutWindow.h"
#include "ui_AboutWindow.h"

AboutWindow::AboutWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutWindow)
{
    ui->setupUi(this);
    setLayout(ui->verticalLayout);
}

AboutWindow::~AboutWindow()
{
    delete ui;
}
