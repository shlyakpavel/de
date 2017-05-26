#-------------------------------------------------
#
# Project created by QtCreator 2013-01-15T11:13:20
#
#-------------------------------------------------

QT       += core gui webkit network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets webkitwidgets
TARGET = Facebook
TEMPLATE = app


SOURCES += main.cpp\
        FacebookWidget.cpp \
    CookieJar.cpp \
    AboutWindow.cpp

HEADERS  += FacebookWidget.h \
    CookieJar.h \
    AboutWindow.h

FORMS    += FacebookWidget.ui \
    AboutWindow.ui

RESOURCES += \
    Resources.qrc
