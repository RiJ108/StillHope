#include "mef/mef.hpp"

Mef::Mef(){
    cout << "MEF::Mef()" << endl;
}

void Mef::init(){
    Window window;
    window_ = window.getWindow();
    window.create(window.run((void *)&window));
    cout << "After" << endl;
}

void Mef::loop(){

}

void Mef::processInput(){
    
}