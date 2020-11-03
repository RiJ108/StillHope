#include "thread/thread.hpp"

Thread::Thread(){

}

void Thread::set(){
    shouldTerminate = false;
    terminated = false;
    in_thread = (pthread_t*)malloc(sizeof(pthread_t));
    pthread_create(in_thread, NULL, (THREADFUNCPTR)&run, (void *)this);
    cout << this << "_created" << endl;
}

void Thread::create(void *run){
    shouldTerminate = false;
    terminated = false;
    in_thread = (pthread_t*)malloc(sizeof(pthread_t));
    pthread_create(in_thread, NULL, (THREADFUNCPTR)&run, (void *)this);
    cout << this << "_created" << endl;
}

void Thread::join(){
    pthread_join(*in_thread, (void**)NULL);
}

void Thread::terminate(){
    shouldTerminate = true;
}

bool Thread::isTerminated(){
    return terminated;
}

void Thread::init(void *obj_param){

}

void Thread::exe(void *obj_param){
    cout << "THREAD::exe()" << endl;
}

void Thread::run(void *obj_param){
    cout << "THREAD::run()" << endl;
    Thread *this_ = (Thread*)obj_param;
    this_->terminated = false;
    this_->shouldTerminate = false;
    init(obj_param);
    while(!this_->shouldTerminate){
        exe(obj_param);
        cout << this_ << "_running..." << endl;
        Sleep(1000);
    }
    this_->terminated = true;
    cout << this_ << "_terminated" << endl;
}