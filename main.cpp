#include <QApplication>
#include <QWebHistory>
#include <QFile>
#include "dewin.h"
#include "QTranslator"
#include "QSettings"
#include <QSplashScreen>
#include <QLabel>
#include "unistd.h"
#include "clockthread.h"
#include <QStyle>
#include <QPixmap>
#include <QString>
QString getthemefilename(QSettings *sets)
{
    if (sets->value("theme").toString()=="")
    {
        return "none";
    }
    else
    {
        if (QFile::exists(sets->value("theme").toString()))
        {
           return sets->value("theme").toString();
        }
        else
        {
           return "none";
        };
    };
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //a.setStyle();
    //a.setPalette(QApplication::style()->standardPalette());
    QPixmap splashimage;
    QString splashadress = a.applicationDirPath()+"reboot.png";
    splashimage.load(splashadress);
    QSplashScreen splash(splashimage);
    splash.setMinimumSize(200,200);
    splash.show();
    a.setApplicationName("yandex os de");
    QSettings options("options.ini", QSettings::IniFormat);
    sleep(3);
    QTranslator detr;
    if (options.value("lang","ru").toString()!="ru")
    {
        detr.load(options.value("lang").toString());
        a.installTranslator(&detr);
    }
    dewin w;
    if (getthemefilename(&options)!="none"){
        QFile qss(getthemefilename(&options));
        qss.open(QFile::ReadOnly);
        w.setStyleSheet(qss.readAll());
        qss.close();
    }
    //a.alert(&w);
    splash.hide();
    w.showFullScreen();
    return a.exec();
}
