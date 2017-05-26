#ifndef WEB_H
#define WEB_H

#include <QWebView>
#include <dewin.h>
namespace Ui {
class dewin;
//class web;
}
class web : public QWebView
{
    Q_OBJECT
public:
    void makenewtab(QUrl adress, QString name);
    QTabWidget *tabs;
    explicit web(QWidget *parent = 0);
    QWebView *createWindow (QWebPage::WebWindowType type)
    {
    }
signals:

public slots:
    
};

#endif // WEB_H
