#ifndef FUNCTIONS_CPP
#define FUNCTIONS_CPP
#include <QWebView>
void runprogram(const char comand[20])// запуск программ из меню
{
    QString comandtmp;
    comandtmp=(comand);
    comandtmp.append("&");
    system(comandtmp.toUtf8());
}

void loadwebpage(QString url_str,QWebView *web) //операция загрузки страницы
{
    if (url_str.startsWith("yandex-os::"))
    {
        if (url_str=="yandex-os::home"){url_str="http://www.yandex.ru";};
    }
    else
    {if (!url_str.startsWith("http://")&!url_str.startsWith("file://")){
    url_str = "http://"+url_str;
        }}
    QUrl url(url_str);
    web->load(url);
}
void loadfunk(QString name)
{
    Q_UNUSED(name)
}

#endif
