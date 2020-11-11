#include "threadHandler/threadHandler.hpp"

ThreadHandler::ThreadHandler(){
    cout << "THREADHANDLER::New threadHandler." << endl;
}

ThreadHandler::link(void *run){
    pthread_create(&internal, NULL, (THREADFUNCPTR)run, this);
}

ThreadHandler::link(void *run, void* ptr){
    pthread_create(&internal, NULL, (THREADFUNCPTR)run, ptr);
}

ThreadHandler::join(){
    pthread_join(internal, NULL);
}

void* run_in_threadHandler(void* obj_param){
    cout << "FCT run_in_threadH TEST " << obj_param << endl;
    for (int i = 0; i < 4; i++)
    {
        Sleep(20);
        cout << obj_param << " hit" << endl;
    }
    return nullptr;
}