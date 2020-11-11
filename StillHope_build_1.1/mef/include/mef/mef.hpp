#ifndef MEF_HPP
#define MEF_HPP

#include "threadHandler/threadHandler.hpp"

class Mef{
public:
    Mef();
    void link();
    void join();
    void setMutex(sem_t mutex);
    sem_t internalMutex;
private:
    void* run_in_mef(void* obj_param);
    
    ThreadHandler internalThreadH;
};

#endif 
