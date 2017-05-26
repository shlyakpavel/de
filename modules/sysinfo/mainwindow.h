#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QMouseEvent>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    QPoint  m_ptPosition;
    QFile proc;
    Ui::MainWindow *ui;
protected:
    virtual void mousePressEvent(QMouseEvent* pe)
        {
            m_ptPosition = pe->pos();
        }

    virtual void mouseMoveEvent(QMouseEvent* pe)
        {
            move(pe->globalPos() - m_ptPosition);
        }
};

#endif // MAINWINDOW_H
