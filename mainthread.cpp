#include "mainthread.h"

MainThread::MainThread(QObject* parent):QThread(parent){

}
void MainThread::run(){
    while(!this->gameOver){
        this->time-=1000;
        if(this->time <=0){
            this->gameOver=true;
        }
        //emit MainUIThread::progress((double)(this->time/this->fulTime));

        this->msleep(1000);
    }
}

void MainThread::stop(){
    this->gameOver = true;
}
