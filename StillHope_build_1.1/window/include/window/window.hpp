#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "entity/entity.hpp"
#include "player/player.hpp"
#include "world/world.hpp"

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
void mouse_callback(GLFWwindow* window, double xpos, double ypos);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);

using namespace std;
Player* gPlayer;

class Window{
public:
    Window();
    void init();
    void loop();
    Player getPlayer();
    
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
    Shader shader3D;
    Generator generator;
    Player player;
    World world;
    int currentState = 0;
    int nextState;
    int fpsCap = 60;
};

#endif 
