#ifndef THREAD_HPP
#define THREAD_HPP

#include <pthread.h>
#include <semaphore.h>
#include <iostream>

using namespace std;

typedef void * (*THREADFUNCPTR)(void *);

class Thread{
public:
    Thread();
    void set();
    void create(void *run);
    void join();
    void terminate();
    bool isTerminated();
    pthread_t *in_thread = nullptr;
    bool shouldTerminate;
    bool terminated;
protected:
private:  
    void init(void *obj_param);
    void exe(void *obj_param);
    void run(void *obj_param);
};

#endif 
