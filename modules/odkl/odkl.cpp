#include "odkl.h"
#include "ui_odkl.h"
#include <QWebView>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QWebFrame>
odkl::odkl(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::odkl)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    ui->webView->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);
    ui->webView->load(QUrl("http://m.odnoklassniki.ru/"));
    trInit();
    trIcon->show();
}

odkl::~odkl()
{
    delete ui;
}

void odkl::on_ExitPushButton_clicked()
{
    exit(0);
}

void odkl::trInit()
{
    trMenu->addAction("показать/скрыть",this,SLOT(showhide()));
    trMenu->addAction("сменить аккуант",this,SLOT(logout()));
    trMenu->addAction("выход",this,SLOT(on_ExitPushButton_clicked()));
    trIcon->setContextMenu(trMenu);
    connect(trIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(showhide(QSystemTrayIcon::ActivationReason)));
    trIcon->setIcon(QIcon("://logo.png"));
}

void odkl::on_webView_titleChanged(const QString &title)
{
    trIcon->setToolTip(title);
}

void odkl::logout()
{
    ui->webView->page()->mainFrame()->evaluateJavaScript("location.replace('/dk?st.cmd=logoff&_prevCmd=userMain&tkn=1889#js-dlg')");
}

void odkl::on_webView_linkClicked(const QUrl &arg1)
{
    ui->webView->load(arg1);
}

void odkl::on_lineEdit_returnPressed()
{
    //ui->webView->page()->mainFrame()->evaluateJavaScript("document.getElementById('field_status').value = '"+ui->lineEdit->text()+"';");
    ui->webView->load(QUrl("http://m.odnoklassniki.ru/dk?st.cmd=userAllSearch&st.search="+ui->lineEdit->text()+"&_prevCmd=userAllSearch&tkn=6323"));
}
