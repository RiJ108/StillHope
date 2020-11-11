#ifndef THREADHANDLER_HPP
#define THREADHANDLER_HPP

#include <iostream>
#include <pthread.h>
#include <semaphore.h>

using namespace std;
typedef void * (*THREADFUNCPTR)(void *);
void* run_in_threadHandler(void* obj_param);

class ThreadHandler{
public:
    ThreadHandler();
    link(void *run);
    link(void *run, void* ptr);
    join();
private:
    pthread_t internal;
};

#endif 
