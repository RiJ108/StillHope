#ifndef MEF_HPP
#define MEF_HPP

#include <pthread.h>
#include <semaphore.h>
#include <iostream>
#include <unistd.h>

using namespace std;
typedef void * (*THREADFUNCPTR)(void *);

class Mef{
public:
    Mef();
    void init();
    void loop();
    void* run0(void* obj_param);
    void* run1(void* obj_param);
protected:
private:
    sem_t csl;
    int currentState;
    int nextState;
    void processInput();
};

#endif 
