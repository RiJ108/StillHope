#include "mef/mef.hpp"

Mef::Mef(){
    cout << "MEF::Mef()" << endl;
    sem_init(&csl, 0, 1);
    pthread_t thread0;
    pthread_t thread1;
    pthread_create(&thread0, NULL, (THREADFUNCPTR)run0((void*)&thread0), (void*)&thread0);
    Sleep(2);
    pthread_create(&thread1, NULL, (THREADFUNCPTR)run1((void*)&thread1), (void*)&thread1);
    pthread_join(thread0, NULL);
    pthread_join(thread1, NULL);
}

void* Mef::run0(void* obj_param){
    for(int i=0 ; i < 3 ; i++){
        Sleep(1);
        sem_wait(&csl);
        cout << obj_param << "run0" << endl;
        sem_post(&csl);
    }
}

void* Mef::run1(void* obj_param){
    for(int i=0 ; i < 10 ; i++){
        sem_wait(&csl);
        cout << obj_param << "run1" << endl;
        sem_post(&csl);
    }
}