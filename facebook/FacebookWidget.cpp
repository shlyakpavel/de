// Copyright (c) Anand Bose
#include "FacebookWidget.h"
#include "ui_FacebookWidget.h"
#include <QWebFrame>
#include <QDebug>
#include <QTimer>
#include <QVariant>
#include <QWebSettings>
#include <QDir>
#include <QNetworkAccessManager>
#include <QDesktopServices>

FacebookWidget::FacebookWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FacebookWidget)
{
    systemTrayIcon = new QSystemTrayIcon(QIcon(":/res/logo/Facebook-icon.png"));
    systemTrayMenu = new QMenu();
    notificationAction = new QAction(tr("Notifications"),this);
    friendRequestAction = new QAction(tr("Friend requests"),this);
    messagesAction = new QAction(tr("Messages"),this);
    quitAction = new QAction(tr("Quit"),this);
    windowVisibilityToggleAction = new QAction(tr("Hide"),this);
    aboutWindow = new AboutWindow();
    windowVisible = true;
    systemTrayMenu->addAction(windowVisibilityToggleAction);
    systemTrayMenu->addSeparator();
    systemTrayMenu->addAction(friendRequestAction);
    systemTrayMenu->addAction(messagesAction);
    systemTrayMenu->addAction(notificationAction);
    systemTrayMenu->addSeparator();
    systemTrayMenu->addAction(quitAction);
    systemTrayIcon->setContextMenu(systemTrayMenu);
    systemTrayIcon->show();
    pressed = false;
    ui->setupUi(this);
    webView = new QWebView();
    ui->mainLayout->addWidget(webView);
    webView->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);
    this->setLayout(ui->mainLayout);
    webView->setUrl(QUrl("http://www.facebook.com"));
    connect(webView,SIGNAL(loadProgress(int)),ui->progressBar,SLOT(setValue(int)));
    connect(webView,SIGNAL(loadFinished(bool)),ui->progressBar,SLOT(reset()));
    connect(ui->backButton,SIGNAL(clicked()),webView,SLOT(back()));
    connect(ui->forwardButton,SIGNAL(clicked()),webView,SLOT(forward()));
    connect(ui->closeButton,SIGNAL(clicked()),this,SLOT(toggleWindowVisibility()));
    connect(quitAction,SIGNAL(triggered()),this,SLOT(quitActionTriggered()));
    connect(systemTrayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(onSystemTrayClicked(QSystemTrayIcon::ActivationReason)));
    connect(friendRequestAction,SIGNAL(triggered()),this,SLOT(friendRequestActionTriggered()));
    connect(messagesAction,SIGNAL(triggered()),this,SLOT(messagesActionTriggered()));
    connect(notificationAction,SIGNAL(triggered()),this,SLOT(notificationActionTriggered()));
    connect(windowVisibilityToggleAction,SIGNAL(triggered()),this,SLOT(toggleWindowVisibility()));
    connect(webView->page(),SIGNAL(linkClicked(QUrl)),this,SLOT(delegateLink(QUrl)));
    connect(ui->aboutButton,SIGNAL(clicked()),aboutWindow,SLOT(show()));
    resize(1024,600);
    setWindowFlags(Qt::FramelessWindowHint);

    QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled,true);
    QDir configDir = QDir::home();
    configDir.mkpath(".config/Facebook");
    configDir.mkpath(".config/Facebook/LocalStorage/");
    configDir.mkpath(".config/Facebook/OfflineStorage/");
    configDir.mkpath(".config/Facebook/IconDatabase/");
    configDir.mkpath(".config/Facebook/OfflineWebApplicationCache/");
    configDir.cd(".config/Facebook");
    configDir.cd("OfflineStorage");
    QWebSettings::setOfflineStoragePath(configDir.absolutePath());
    configDir.cdUp();
    configDir.cd("IconDatabase");
    QWebSettings::setIconDatabasePath(configDir.absolutePath());
    configDir.cdUp();
    configDir.cd("OfflineWebApplicationCache");
    QWebSettings::setOfflineWebApplicationCachePath(configDir.absolutePath());
    configDir.cdUp();
    QWebSettings::setMaximumPagesInCache(100);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::OfflineStorageDatabaseEnabled,true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::OfflineWebApplicationCacheEnabled,true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::LocalStorageEnabled,true);
    cookieJar = new CookieJar;
    webView->page()->networkAccessManager()->setCookieJar(cookieJar);
    cookieJar->load();
    configDir.cd("LocalStorage");
    webView->page()->settings()->setLocalStoragePath(configDir.absolutePath());
    webView->page()->settings()->setAttribute(QWebSettings::LocalStorageEnabled,true);
    configDir.cdUp();

    QTimer *refreshTimer = new QTimer();
    refreshTimer->setInterval(5000);
    connect(refreshTimer,SIGNAL(timeout()),this,SLOT(getNewStatus()));
    refreshTimer->start();
}

FacebookWidget::~FacebookWidget()
{
    delete ui;
}

void FacebookWidget::mousePressEvent(QMouseEvent *event)
{
	if(event->button() & Qt::LeftButton)
		pressed = true;
	else
		pressed = false;
	lastPos = event->pos();
}
void FacebookWidget::mouseMoveEvent(QMouseEvent *)
{
	if(pressed)
	{
		move(QCursor::pos() - lastPos);
	}
}

void FacebookWidget::getNewStatus() {
    QVariant friendRequestCount = webView->page()->mainFrame()->evaluateJavaScript("parseInt(document.getElementById('requestsCountValue').innerHTML)");
    QVariant newMsgsCount = webView->page()->mainFrame()->evaluateJavaScript("parseInt(document.getElementById('mercurymessagesCountValue').innerHTML)");
    QVariant notificationCount = webView->page()->mainFrame()->evaluateJavaScript("parseInt(document.getElementById('notificationsCountValue').innerHTML)");

    if(!friendRequestCount.isNull()) {
        friendRequestAction->setEnabled(true);
        friendRequestAction->setText(tr("Friend requests: ") + friendRequestCount.toString());
    }
    else friendRequestAction->setDisabled(true);
    if(!newMsgsCount.isNull()) {
        messagesAction->setEnabled(true);
        messagesAction->setText(tr("Unread messages: ") + newMsgsCount.toString());
    } else messagesAction->setDisabled(true);
    if(!notificationCount.isNull()) {
        notificationAction->setEnabled(true);
        notificationAction->setText(tr("Notifications: ") + notificationCount.toString());
    } else notificationAction->setDisabled(true);

    if(friendRequestCount.toInt() > 0 || newMsgsCount.toInt() > 0 || notificationCount.toInt() > 0) {
        systemTrayIcon->setIcon(QIcon(":/res/logo/Facebook-icon-red.png"));
    } else {
        systemTrayIcon->setIcon(QIcon(":/res/logo/Facebook-icon.png"));
    }

}

void FacebookWidget::onSystemTrayClicked(QSystemTrayIcon::ActivationReason reason) {
    if (reason == QSystemTrayIcon::Trigger) toggleWindowVisibility();
}

void FacebookWidget::messagesActionTriggered() {
        this->show();
        this->raise();
        windowVisible = true;
        windowVisibilityToggleAction->setText(tr("Hide"));
    webView->load(QUrl("https://www.facebook.com/messages/"));
}

void FacebookWidget::friendRequestActionTriggered() {
        this->show();
        this->raise();
        windowVisible = true;
        windowVisibilityToggleAction->setText(tr("Hide"));
    webView->load(QUrl("https://www.facebook.com/friends/requests/"));
}

void FacebookWidget::notificationActionTriggered() {
        this->show();
        this->raise();
        windowVisible = true;
        windowVisibilityToggleAction->setText(tr("Hide"));
    webView->load(QUrl("https://www.facebook.com/notifications"));
}

void FacebookWidget::toggleWindowVisibility() {
    if(windowVisible) {
        this->hide();
        windowVisible = false;
        windowVisibilityToggleAction->setText(tr("Show"));
    } else {
        this->show();
        this->raise();
        windowVisible = true;
        windowVisibilityToggleAction->setText(tr("Hide"));
    }
}

void FacebookWidget::quitActionTriggered() {
    cookieJar->save();
    qApp->quit();
}

void FacebookWidget::delegateLink(QUrl url) {
    qDebug()<<url.toString();
    if(url.toString().contains("facebook.com/l.php?u=")) {
        QDesktopServices::openUrl(url);
    } else {
        webView->load(url);
    }
}
