#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    proc->open(QFile::ReadOnly);
    ui->textBrowser->setPlainText(proc->readAll());
    ui->themeselector->setText(options->value("theme").toString());
    proc->close();
    connect(ui->saveas,SIGNAL(triggered()),this,SLOT(saveas()));
}

MainWindow::~MainWindow()
{
    proc->close();
    delete ui;
}

void MainWindow::changeEvent(QEvent *e){
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_comboBox_currentIndexChanged(int index){
    ui->statusBar->showMessage("требуется перезагрузка");
    if (index==1){options->setValue("lang","en.qm");};
    if (index==0){options->setValue("lang","");};
    on_settingschanged();
}

void MainWindow::on_themeselector_editingFinished(){
    ui->statusBar->showMessage("требуется перезагрузка");
    options->setValue("theme",ui->themeselector->text());
    on_settingschanged();
}

void MainWindow::on_themeselector_returnPressed(){
    MainWindow::on_themeselector_editingFinished();
}

void MainWindow::on_settingschanged(){
    proc->open(QFile::ReadOnly);
    ui->textBrowser->setPlainText(proc->readAll());
    proc->close();
}

void MainWindow::on_pushButton_clicked()
{
    proc->open(QFile::WriteOnly);
    QTextStream out(proc);//поток для записи текста
    out << ui->textBrowser->toPlainText();
    proc->close();
    ui->themeselector->setText(options->value("theme","").toString());
}
void MainWindow::saveas(){
    QString filename = QFileDialog::getSaveFileName(this,"сохранить в файл","","*.ini");
    if (!filename.endsWith(".ini")){filename.append(".ini");};
    proc->copy("options.ini",filename);
}
