#include "phyEngine/phyEngine.hpp"

PhyEngine::PhyEngine(){
    cout << "PHYENGINE::PhyEngine()" << endl;
}

/*void PhyEngine::run(){
    cout << "PHYENGINE::run()" << endl;
    inThread  = new pthread_t();
    pthread_create(inThread, NULL, (THREADFUNCPTR)loop(), (void *)this);
    cout << this << "_created and launched" << endl;
}*/

void* PhyEngine::loop(){
    while(1){

    }
}