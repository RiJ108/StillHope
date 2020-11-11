#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <iostream>
#include <vector>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "shader/shader.hpp"
#include "threadHandler/threadHandler.hpp"

using namespace std;

class Window{
public:
    Window();
    void init();
    void loop();
    void* loop_(void* obj_param);
    void link();
    void join();
    GLFWwindow* getWindow();
private:

    void processInputs(GLFWwindow* window);

    GLFWwindow* window;
    string title = "StillHope";
    string build = "build_1.1 dev";
    float FOV = 120.0f;
    int SCR_WIDTH = 1280;
    int SCR_HEIGHT = 720;
    float deltaTime = 0.0f;
    float lastFrame = 0.0f;
    float currentFrame = 0.0f;
    //ThreadHandler threadH;
    vector<Shader> shaders;
};

#endif 
