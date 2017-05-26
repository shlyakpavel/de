#ifndef DEWIN_H
#define DEWIN_H
#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDialog>
#include <QWebView>
#include <QUrl>
#include <QFileSystemModel>
#include <QSettings>
#include <QString>


namespace Ui {
class dewin;
class web;
}
class dewin : public QMainWindow
{
    Q_OBJECT
    
public:
    QFileSystemModel *drivesModel = new QFileSystemModel(this);
    QFileSystemModel *filesModel = new QFileSystemModel(this);
    QUrl *homepage = new QUrl("http://www.ya.ru");;
    QCursor* maincursor = new QCursor(QPixmap("cursors/arrow.png").scaled(30,30,Qt::KeepAspectRatio,Qt::SmoothTransformation), 1, 1);
    QCursor* waitcursor = new QCursor(QPixmap("cursors/wait.png").scaled(30,30,Qt::KeepAspectRatio,Qt::SmoothTransformation), 1, 1);
    explicit dewin(QWidget *parent = 0);
    ~dewin();
    void logout_init();
public slots:
    void lock();
    int dofromHtml(QString todo);
    void makecalculator();
    void startprog(QString prog);
private slots:
    void addjslocker();

    void unlock(QUrl url);

    void addwinclass();

    void addJSObject();

    void on_vlcshow_clicked();

    void on_vlcview_titleChanged(const QString &title);

    void on_trnonbtn_clicked();

    void on_webView_2_titleChanged(const QString &title);

    void on_lineEdit_returnPressed();

    void on_pushButton_clicked();

    void on_toolButton_2_clicked();

    void on_webView_urlChanged(const QUrl &arg1);

    void on_exitbtn_clicked();

    void on_logoutbtn_clicked();
    int poweroff();
    int reboot();

    void on_settingsbtn_clicked();

    void on_webView_linkClicked(const QUrl &arg1);

    void on_pushButton_2_clicked();

    void on_gohomebtn_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_gohomefsbtn_clicked();

    void on_gofsupbtn_clicked();

    void on_pushButton_5_clicked();

    void on_loadHtml_linkClicked(const QUrl &arg1);

    void on_mailbtn_clicked();

private:
    void makenewtab(QUrl adress, QString name);
    QDialog *logout = new QDialog;
    QHBoxLayout *logoutbtns = new QHBoxLayout;
    QPushButton *poweroffbtn= new QPushButton;
    QPushButton *rebootbtn= new QPushButton;
    Ui::dewin *ui;
    QSettings *options = new QSettings("options.ini", QSettings::IniFormat);
    QWebSettings *ws = QWebSettings::globalSettings();
    QString sPath = QDir::homePath();
    QWebView *locker = new QWebView;
};
#endif // DEWIN_H
