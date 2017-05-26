#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextDocumentWriter>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    MainWindow::on_comboBox_currentTextChanged("cpuinfo");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    QString filename;
    if (arg1=="cpuinfo")
    {
        filename="/proc/cpuinfo";
    }
    if (arg1=="meminfo")
    {
        filename="/proc/meminfo";
    }
    if (arg1=="mounts")
    {
        filename="/proc/mounts";
    }
    if (arg1=="PID")
    {
        filename="/proc/PID";
    }
    if (arg1=="partitions")
    {
        filename="/proc/partitions";
    }
    if (arg1=="consoles")
    {
        filename="/proc/consoles";
    }
    if (arg1=="modules")
    {
        filename="/proc/modules";
    }
    proc.setFileName(filename);
    proc.open(QFile::ReadOnly);
    ui->textBrowser->setPlainText(proc.readAll());
    proc.close();
}


void MainWindow::on_pushButton_clicked()
{
    exit(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    QTextDocumentWriter writer(QFileDialog::getSaveFileName(this, "Сохранить как", "*.txt", ".txt"), "plaintext");
    writer.write(ui->textBrowser->document());
}

void MainWindow::on_pushButton_3_clicked()
{
    on_comboBox_currentTextChanged(ui->comboBox->currentText());
}
