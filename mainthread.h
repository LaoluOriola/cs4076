#ifndef MAINTHREAD_H
#define MAINTHREAD_H

#include <QThread>
#include <QProgressBar>
class MainThread : public QThread
{
public:
    long time = 10*60*1000;
     const long fulTime = 10*60*1000;
    bool gameOver = false;
    explicit MainThread(QObject* parent = 0);
    void run();
    void stop();

public slots:
//signals:
//    void progress(double);
};

#endif // MAINTHREAD_H
