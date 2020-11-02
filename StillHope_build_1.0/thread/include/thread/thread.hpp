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
    void terminate();
    bool isTerminated();
protected:
private:
    pthread_t *in_thread;
    bool shouldTerminate;
    bool terminated;
    void run(void *obj_param);
    void loop(void *obj_param);
};

#endif 
