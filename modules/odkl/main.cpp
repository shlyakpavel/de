#include "odkl.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    odkl w;
    w.show();
    
    return a.exec();
}
