#include "thread/thread.hpp"

Thread::Thread(){

}

void Thread::set(){
    shouldTerminate = false;
    terminated = false;
    cout << this << "_created" << endl;
    pthread_create(in_thread, NULL, (THREADFUNCPTR)&run, (void *)this);
}

void Thread::terminate(){
    shouldTerminate = true;
}

bool Thread::isTerminated(){
    return terminated;
}

void Thread::run(void *obj_param){
    Thread *this_ = (Thread*)obj_param;
    this_->terminated = false;
    this_->shouldTerminate = false;
    while(!this_->shouldTerminate){
        loop(obj_param);
        cout << this_ << "_running..." << endl;
        Sleep(1000);
    }
    this_->terminated = true;
    cout << this_ << "_terminated" << endl;
}

void Thread::loop(void *obj_param){

}