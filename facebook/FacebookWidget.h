#ifndef FACEBOOKWIDGET_H
#define FACEBOOKWIDGET_H

#include <QWidget>
#include <QWebView>
#include <QMouseEvent>
#include <QPoint>
#include <QSystemTrayIcon>
#include <QAction>
#include <QMenu>
#include "CookieJar.h"
#include "AboutWindow.h"
namespace Ui {
class FacebookWidget;
}

class FacebookWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit FacebookWidget(QWidget *parent = 0);
    ~FacebookWidget();

    
private:
    bool pressed;
    QPoint lastPos;
    Ui::FacebookWidget *ui;
    QWebView *webView;
    QSystemTrayIcon *systemTrayIcon;
    QMenu *systemTrayMenu;
    QAction *notificationAction;
    QAction *friendRequestAction;
    QAction *messagesAction;
    QAction *quitAction;
    QAction *windowVisibilityToggleAction;
    bool windowVisible;
    CookieJar *cookieJar;
    AboutWindow *aboutWindow;
private slots:
    void getNewStatus();
    void onSystemTrayClicked(QSystemTrayIcon::ActivationReason reason);
    void messagesActionTriggered();
    void notificationActionTriggered();
    void friendRequestActionTriggered();
    void toggleWindowVisibility();
    void quitActionTriggered();
    void delegateLink(QUrl url);
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *);
};

#endif // FACEBOOKWIDGET_H
