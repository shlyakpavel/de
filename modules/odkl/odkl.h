#ifndef ODKL_H
#define ODKL_H

#include <QMainWindow>
#include <QPoint>
#include <QMouseEvent>
#include <QSystemTrayIcon>
#include <QMenu>

namespace Ui {
class odkl;
}

class odkl : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit odkl(QWidget *parent = 0);
    ~odkl();
    
private slots:
    void logout();
    void showhide(QSystemTrayIcon::ActivationReason r = QSystemTrayIcon::Trigger)
    {
        if (r==QSystemTrayIcon::Trigger)
        if (this->isHidden()==1){show();}else{hide();};
    }

    void on_ExitPushButton_clicked();

    void on_webView_titleChanged(const QString &title);

    void on_webView_linkClicked(const QUrl &arg1);

    void on_lineEdit_returnPressed();

private:
    void trInit();
    QSystemTrayIcon *trIcon = new QSystemTrayIcon();
    QMenu *trMenu = new QMenu();
    QPoint m_ptPosition;
    Ui::odkl *ui;
    virtual void mousePressEvent(QMouseEvent* pe)
        {
            m_ptPosition = pe->pos();
        }

    virtual void mouseMoveEvent(QMouseEvent* pe)
        {
            move(pe->globalPos() - m_ptPosition);
        }
};

#endif // ODKL_H
