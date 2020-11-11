#include "generator/generator.hpp"

Generator::Generator(){
    cout << "GENERATOR::New generator." << endl;
}

void Generator::init(){
    sem_init(&genMutex, 0, 0);
    sem_init(&loadMutex, 0, 0);
    pthread_create(&genThread, NULL, genThreadRun, this);
    pthread_create(&loadThread, NULL, loadThreadRun, this);
    isInit_ = true;
}

void* genThreadRun(void* obj_param){
    cout << obj_param << "<-genThreadRun()" << endl;
    Generator* internal = (Generator*) obj_param; 
    while(true){
        cout << "GENTHREAD::Ask for mutex" << endl;
        sem_wait(internal->getMutex(0));
        cout << "GENTHREAD::Got the mutex" << endl;
        Sleep(1000);
        cout << "GENTHREAD::Finished, loader flaged" << endl;
        sem_post(internal->getMutex(0));
    }
    return NULL;
}

void* loadThreadRun(void* obj_param){
    cout << obj_param << "<-loadThreadRun()" << endl;
    Generator* internal = (Generator*) obj_param; 
    while(true){
        cout << "LOADTHREAD::Ask for mutex" << endl;
        sem_wait(internal->getMutex(1));
        cout << "LOADTHREAD::Got the mutex" << endl;
        Sleep(500);
        sem_post(internal->getMutex(1));
    }
    return NULL;
}

bool Generator::isInit(){
    return isInit_;
}

sem_t* Generator::getMutex(int who){ //0 is gen and 1 is load
    if(who)
        return &loadMutex;
    return &genMutex;
}

void Generator::setNeedGen(bool state){
    needGen = state;
}

bool Generator::getNeedGen(){
    return needGen;
}