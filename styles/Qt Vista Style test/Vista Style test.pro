TEMPLATE = app
TARGET = Vista Style test
DESTDIR = .
CONFIG += release
INCLUDEPATH += ./GeneratedFiles \
    ./GeneratedFiles/Release \
    .
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/release
OBJECTS_DIR += release
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles

#Include file(s)
include(Vista Style test.pri)
