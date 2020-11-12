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
    void moveK(char key, float deltaT);
private:
    vec3 position;
    vec3 up;
    vec3 front;
};

#endif 
