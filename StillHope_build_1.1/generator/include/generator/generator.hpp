#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include <iostream>
#include <pthread.h>
#include <semaphore.h>
//#include <unistd.h>

using namespace std;
typedef void * (*THREADFUNCPTR)(void *);
void* genThreadRun(void* obj_param);
void* loadThreadRun(void* obj_param);

class Generator{
public:
    Generator();
    void init();
    bool isInit();
    sem_t* getMutex(int who); //0 is gen and 1 is load
    void setNeedGen(bool state);
    bool getNeedGen();
private:
    unsigned int seed;
    bool isInit_ = false;
    bool needGen = false;
    pthread_t genThread;
    pthread_t loadThread;
    sem_t genMutex;
    sem_t loadMutex;
};

#endif 
