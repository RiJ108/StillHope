#ifndef MEF_HPP
#define MEF_HPP

#include "window/window.hpp"

class Mef{
public:
    Mef();
    GLFWwindow* window_ = nullptr;
    void init();
    void loop();
protected:
private:
    int currentState;
    int nextState;
    void processInput();
};

#endif 
