#include "mef/mef.hpp"

Mef::Mef(){
    cout << "MEF::New mef." << endl;
}

void Mef::link(){
    internalThreadH.link((void*)&Mef::run_in_mef);
}

void Mef::join(){
    internalThreadH.join();
}

void Mef::setMutex(sem_t mutex){
    internalMutex = mutex;
}

void* Mef::run_in_mef(void* obj_param){
    cout << "FCT run_in_mef TEST " << obj_param << endl;
    Mef* this_ = (Mef*)obj_param;
    for (int i = 0; i < 4; i++)
    {
        Sleep(15);
        sem_wait(&this_->internalMutex);
        cout << obj_param << " hit" << endl;
        //sem_post(&this_->internalMutex);
    }
    return nullptr;
}