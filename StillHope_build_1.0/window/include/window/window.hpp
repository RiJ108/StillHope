#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "thread/thread.hpp"
#include <iostream>

using namespace std;

class Window: public Thread{
public:
    Window();
    void set();
    void init(void *obj_param);
    void exe(void *obj_param);
    void* run(void *obj_param);
    GLFWwindow* getWindow();
protected:
private:
    GLFWwindow* window;
    string title = "StillHope";
    string build = "build_1.0";
    float FOV = 120.0f;
    int SCR_WIDTH = 1280;
    int SCR_HEIGHT = 720;
    float deltaTime = 0.0f;
    float lastFrame = 0.0f;
    float currentFrame = 0.0f;
};

#endif 