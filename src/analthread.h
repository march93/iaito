#ifndef ANALTHREAD_H
#define ANALTHREAD_H

#include <QThread>

class MainWindow;

class AnalThread : public QThread
{
        Q_OBJECT
public:
    explicit AnalThread(MainWindow *w, QWidget *parent = 0);
    void run();
    int level;

private:

    MainWindow *w;
};

#endif // ANALTHREAD_H
