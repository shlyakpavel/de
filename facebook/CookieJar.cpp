#include "CookieJar.h"
#include <QDir>
#include <QFile>
#include <QDataStream>
#include <QByteArray>
#include <QList>
#include <QNetworkCookie>
#include <QDebug>

CookieJar::CookieJar(QObject *parent) :
    QNetworkCookieJar(parent)
{
}

void CookieJar::save() {
    QList<QNetworkCookie> cookieList = allCookies();
    if(cookieList.isEmpty()) return;
    QDir configDir = QDir::home();
    if(!configDir.cd(".config/Facebook")) {
        qDebug()<<"Making path "<<QDir::cleanPath(".config/Facebook");
        configDir.mkpath(QDir::cleanPath(".config/Facebook"));
        configDir.cd(".config/Facebook");
    }
    QFile *cookieFile = new QFile(configDir.absoluteFilePath("Cookies.dat"));//You have to change the path before release
    if(!cookieFile->open(QIODevice::WriteOnly)) qDebug()<<"Cookies.dat open for write failed";
    QDataStream cookieStream(cookieFile);
    QNetworkCookie cookie;
    int count = cookieList.count();
    cookieStream << count;
    for(int i = 0; i< count; i++) {
        cookie = allCookies().at(i);
        if(!cookie.isSessionCookie()) cookieStream<<cookie.toRawForm();
    }
    cookieFile->close();
}

void CookieJar::load() {
    QList<QNetworkCookie> restoredCookies;
    QDir configDir = QDir::home();
    if(!configDir.cd(".config/Facebook")) {
        qDebug()<<"Making path "<<QDir::cleanPath(".config/Facebook");
        configDir.mkpath(QDir::cleanPath(".config/Facebook"));
        configDir.cd(".config/Facebook");
    }
    QFile *cookieFile = new QFile(configDir.absoluteFilePath("Cookies.dat"));
    if(!cookieFile->open(QIODevice::ReadOnly)) {
        qDebug()<<"Cookies.dat open for read failed";
        return;
    }
    int count;
    QDataStream cookieStream(cookieFile);
    cookieStream>>count;
    for(int i = 0; i<count; i++) {
        QByteArray cookieData;
        cookieStream >> cookieData;
        const QList<QNetworkCookie> &cookieList = QNetworkCookie::parseCookies(cookieData);
        if(cookieList.isEmpty()) continue;
        const QNetworkCookie &cookie = cookieList.at(0);
        restoredCookies.append(cookie);
    }

    setAllCookies(restoredCookies);
    cookieFile->close();
}
