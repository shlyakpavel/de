#ifndef CLOCKTHREAD_H
#define CLOCKTHREAD_H
#include <QThread>

class clockthread : public QThread
{
public:
    void run()
    {
        //m1:
        //system("echo work");
        //goto m1;
    };
};

#endif // CLOCKTHREAD_H
