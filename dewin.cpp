#include "dewin.h"
#include "ui_dewin.h"
#include "unistd.h"
#include <QFile>
#include "QSettings"
#include <QWebFrame>
#include <QStandardItem>


dewin::dewin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dewin)
{
    ui->setupUi(this);
    ui->webView->page()->mainFrame()->setHtml("<HTML>"
                                              "<BODY LANG='ru-RU' DIR='LTR' style='background:bfdbff;'>"
                                              "<P ALIGN=CENTER><FONT COLOR='#ff0000'><FONT SIZE=6>Добро пожаловать в мою операционную систему.</FONT></FONT></P>"
                                              "<P ALIGN=LEFT><FONT SIZE=5><FONT COLOR='#000000'>Я надеюсь вам она понравится. Мой email : shlyak-pavel2011@ya.ru</FONT></FONT></FONT></P>"
                                              "</BODY></HTML>");
    ui->frame_2->setHidden(options->value("panel_hiden",1).toBool());
    if (ui->frame_2->isHidden()==0){ui->smallpanel->setHidden(1);}
    ws->setAttribute(QWebSettings::JavascriptEnabled, true);
    //ws->setAttribute(QWebSettings::PluginsEnabled, true);
    ui->webView->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);
    ui->loadHtml->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);
    setCursor (*maincursor);
    connect(ui->webView_3->page()->mainFrame(), SIGNAL(javaScriptWindowObjectCleared()),this, SLOT(addJSObject()));
    ui->frame->hide();
    ui->progressBar->hide();
    /*drivesModel = new QFileSystemModel(this);
    drivesModel->setFilter(QDir::NoDotAndDotDot | QDir::Dirs);
    drivesModel->setRootPath(sPath);
    ui->tableView->setModel(drivesModel);*/
    /*ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);
    ui->treeView->hideColumn(3);*/
   //filesModel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
   filesModel->setRootPath(sPath);
   ui->tableView->setModel(filesModel);
   logout->setWindowTitle(tr("выход"));
   logout->setStyleSheet(styleSheet());
   connect(poweroffbtn,SIGNAL(clicked()),this,SLOT(poweroff()));
   connect(rebootbtn,SIGNAL(clicked()),this,SLOT(reboot()));
   poweroffbtn->setText(tr("выключить"));
   rebootbtn->setText(tr("перезагрузить"));
   poweroffbtn->setMinimumSize(100,100);
   rebootbtn->setMinimumSize(100,100);
   logout->setLayout(logoutbtns);
   logoutbtns->setParent(logout);
   logoutbtns->addWidget(poweroffbtn);
   logoutbtns->addWidget(rebootbtn);
   ui->webView_3->load(QUrl("file://"+qApp->applicationDirPath()+"/html/menu.html"));
   ui->loadHtml->load(QUrl("file://"+qApp->applicationDirPath()+"/html/index.html"));
   connect(ui->loadHtml->page()->mainFrame(), SIGNAL(javaScriptWindowObjectCleared()),this, SLOT(addwinclass()));
   ui->webView->load(*homepage);
   //ui->tabWidget->tabBar()->removeTab(4);
}

dewin::~dewin()
{
    ui->webView->stop();
    //system("killall vlc");
    delete ui;
}


void dewin::on_vlcshow_clicked()
{
    system("cvlc -I http --http-port=8091&");
    qApp->processEvents();
    sleep(1);
    ui->vlcview->load(QUrl("http://localhost:8091/"));
}

void dewin::addwinclass()
{
    ui->loadHtml->page()->mainFrame()->addToJavaScriptWindowObject(QString("i"), this);
}

void dewin::on_vlcview_titleChanged(const QString &title)
{
    Q_UNUSED(title);
    ui->vlcshow->setHidden(1);
}

void dewin::on_trnonbtn_clicked()
{
    system("qbittorrent --no-splash --webui-port=8083 &");
    qApp->processEvents();
    sleep(1);
    qApp->processEvents();
    sleep(1);
    qApp->processEvents();
    sleep(1);
    qApp->processEvents();
    sleep(1);
    qApp->processEvents();
    ui->webView_2->setUrl(QUrl("http://localhost:8083/"));
    ui->webView_2->update();
    //ui->tableWidget->set
}

void dewin::on_webView_2_titleChanged(const QString &title)
{
    Q_UNUSED(title);
    ui->trnonbtn->setVisible(0);
}


void dewin::on_lineEdit_returnPressed()
{
    QString url_str = this->ui->lineEdit->text();
    if (!url_str.startsWith("http://")&!url_str.startsWith("file://")){
    url_str = "http://"+url_str;
    }
    this->ui->webView->load(QUrl(url_str));
}

void dewin::on_pushButton_clicked()
{
    QString url_str = this->ui->lineEdit->text();
    if (!url_str.startsWith("http://")&!url_str.startsWith("file://")){
    url_str = "http://"+url_str;
    }
    this->ui->webView->load(QUrl(url_str));
}


void dewin::on_webView_linkClicked(const QUrl &arg1)
{
    ui->webView->load(arg1);
}

void dewin::on_toolButton_2_clicked()
{
    ui->frame_2->setHidden(0);
    ui->smallpanel->setHidden(1);
    options->setValue("panel_hiden",0);
}

void dewin::on_webView_urlChanged(const QUrl &arg1)
{
    ui->lineEdit->setText(arg1.toString());
}

void dewin::on_exitbtn_clicked()
{
    exit(0);
}


int dewin::poweroff()
{
    system("poweroff");
    exit(0);
}

int dewin::reboot()
{
    system("reboot");
    exit(0);
}

void dewin::on_logoutbtn_clicked()
{
    logout->show();
}

void dewin::on_settingsbtn_clicked()
{
    system("modules/config/config");
}

/*void dewin::on_webView_linkClicked(const QUrl &arg1)
{

}*/


void dewin::on_pushButton_2_clicked()
{
    ui->frame_2->setHidden(1);
    ui->smallpanel->setHidden(0);
    QSettings options("options.ini", QSettings::IniFormat);
    options.setValue("panel_hiden",1);
}
void dewin::addJSObject() {
    ui->webView_3->page()->mainFrame()->addToJavaScriptWindowObject(QString("dewin"), this);
}
void dewin::startprog(QString prog)
{
    prog.append("&");
    system(prog.toUtf8());
}

void dewin::on_gohomebtn_clicked()
{
    ui->webView->load(*homepage);
}

void dewin::on_tableView_clicked(const QModelIndex &index)
{
   if (drivesModel->isDir(index))
    {
    ui->tableView->setRootIndex(filesModel->setRootPath(drivesModel->fileInfo(index).absoluteFilePath()));
    }
   else
   {
       system("xdg-open "+drivesModel->fileInfo(index).absoluteFilePath().toUtf8()+"&");
   }
}

void dewin::on_gohomefsbtn_clicked()
{
    ui->tableView->setRootIndex(filesModel->setRootPath(QDir::homePath()));
}

void dewin::on_gofsupbtn_clicked()
{
    ui->tableView->setRootIndex(filesModel->parent(ui->tableView->rootIndex()));
}

void dewin::on_pushButton_5_clicked()
{
    ui->tableView->setRootIndex(ui->tableView->rootIndex());
}
void dewin::makecalculator()
{
    QWebView *calculator = new QWebView;
    calculator->page()->mainFrame()->addToJavaScriptWindowObject(QString("i"), calculator);
    calculator->setMaximumSize(320,280);
    calculator->setMinimumSize(300,215);
    calculator->setWindowTitle(tr("калькулятор"));
    //calculator->setStyleSheet("background:blue;");
    calculator->setWindowFlags(Qt::Tool);
    QFile html(":/html/calculator.html");
    html.open(QIODevice::ReadOnly);
    calculator->setHtml(html.readAll());
    calculator->show();
}

void dewin::on_loadHtml_linkClicked(const QUrl &arg1)
{
    if (arg1.toString().startsWith("res://"))
    {
        QFile html(arg1.toString().replace("res://",":/"));
        html.open(QIODevice::ReadOnly);
        ui->loadHtml->setHtml(html.readAll());
    }
    else
    {
        ui->loadHtml->load(arg1);
    }
}

int dewin::dofromHtml(QString todo)
{
    if (todo=="goback")
    {
        ui->loadHtml->back();
        ui->loadHtml->forward();
    }
}

void dewin::lock()
{
    locker->load(QUrl("file://"+qApp->applicationDirPath()+"/html/lock.html"));
    locker->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);
    connect(locker,SIGNAL(linkClicked(QUrl)),this,SLOT(unlock(QUrl)));
    connect(locker->page()->mainFrame(), SIGNAL(javaScriptWindowObjectCleared()),this, SLOT(addjslocker()));
    locker->showFullScreen();
}

void dewin::unlock(QUrl url)
{
    locker->close();
}

void dewin::addjslocker()
{
    locker->page()->mainFrame()->addToJavaScriptWindowObject("locker",locker);
}

void dewin::on_mailbtn_clicked()
{
    ui->webView->load(QUrl("https://mail.yandex.ru/neo2/"));
}
