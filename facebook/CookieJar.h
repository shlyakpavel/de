#ifndef COOKIEJAR_H
#define COOKIEJAR_H

#include <QNetworkCookieJar>

class CookieJar : public QNetworkCookieJar
{
    Q_OBJECT
public:
    explicit CookieJar(QObject *parent = 0);
    void load();
    void save();
    
signals:
    
public slots:
    
};

#endif // COOKIEJAR_H
