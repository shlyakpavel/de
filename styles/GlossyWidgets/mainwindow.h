#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtGui>
#include <QWindow>



namespace Ui {
    class MainWindow;
}

class MainWindow : public QWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
