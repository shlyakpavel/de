#include "web.h"
#include <QWebView>
#include <QDebug>
#include <dewin.h>
#include <QTabBar>
web::web(QWidget *parent) :
    QWebView(0)
{
    tabs=new QTabWidget(parent);
    tabs->show();
}
void web::makenewtab(QUrl adress, QString name)
{
    QWebView *webview = new QWebView;
    //webview->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);
    //webview->setHtml(tr("<html><body><center><h1>добро пожаловать в браузер ос от Яндекс</h1><center></body></html>"));
    webview->load(adress);
    webview->show();
    tabs->addTab(webview,name);
}
//QWebView* web::createWindow(QWebPage::WebWindowType type)

