#include "FacebookWidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/res/logo/Facebook-icon.png"));
    FacebookWidget w;
    w.show();
    
    return a.exec();
}
