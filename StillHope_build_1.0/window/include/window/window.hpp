#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;

class Window{
public:
    Window();
    void run();
    void join();
    GLFWwindow* getWindow();
protected:
private:
    void init();
    void* loop();
    void processInputs();

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