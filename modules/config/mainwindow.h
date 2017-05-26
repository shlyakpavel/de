#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QSettings>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
protected:
    void changeEvent(QEvent *e);
    
private slots:
    void saveas();

    void on_settingschanged();

    void on_comboBox_currentIndexChanged(int index);

    void on_themeselector_editingFinished();

    void on_themeselector_returnPressed();

    void on_pushButton_clicked();

private:
    QSettings *options= new QSettings("options.ini", QSettings::IniFormat);
    QFile *proc = new QFile("options.ini");
    Ui::MainWindow *ui;
signals:
    void settingschanged();
};

#endif // MAINWINDOW_H
