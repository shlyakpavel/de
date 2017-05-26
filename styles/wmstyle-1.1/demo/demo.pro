TEMPLATE = app
TARGET = wmstyledemo

HEADERS   += mainwindow.h \
             ../wmstyle/windowsmodernstyle.h

SOURCES   += main.cpp \
             mainwindow.cpp \
             ../wmstyle/windowsmodernstyle.cpp

FORMS += mainwindow.ui

RESOURCES += icons.qrc

INCLUDEPATH += ..

win32|mac:!wince*:!win32-msvc:!macx-xcode:CONFIG += debug_and_release build_all

MOC_DIR = tmp
RCC_DIR = tmp
UI_DIR = tmp
CONFIG( debug, debug|release ) {
    OBJECTS_DIR = tmp/debug
    DESTDIR = debug
} else {
    OBJECTS_DIR = tmp/release
    DESTDIR = release
}

win32-msvc* {
    QMAKE_CXXFLAGS += -Fd\$(IntDir)
}
