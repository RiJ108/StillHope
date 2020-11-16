#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "shader/shader.hpp"

class Player{
public:
    Player();
    vec3 getPosition();
    vec3 getUp();
    vec3 getFront();
    void setPosition(vec3 value);
    void setUp(vec3 value);
    void setFront(vec3 value);
    mat4 look();
    void running();
    void moveK(char key, float deltaT);
    void moveM(double x, double y);
private:
    vec3 position;
    vec3 up;
    vec3 front;

    bool firstMouse = true;
    float yaw_   = 0.0f;
    float pitch_ =  0.0f;
    float lastX = (2.0f*1280.0f)/2.0f;
    float lastY = (1.5f*720.0f)/2.0f;
    float speed_ = 1.0f;
    float defaultSpeed = 1.0f;
    float runningSpeed = 2.0f;
};

#endif 
