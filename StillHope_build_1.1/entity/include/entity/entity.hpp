#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <glad/glad.h>
#include "shader/shader.hpp"

class Entity{
public:
    Entity();
    void fillBuffers();
    void render(Shader shader);
    vec3 getPosition();
    void setPosition(vec3 position);
    vec3 getFront();
    void setFront(vec3 front);
private:
    vec3 position = vec3(0.0f);
    vec3 front = vec3(1.0f, 0.0f, 0.0f);
    vec3 up = vec3(0.0f, 1.0f, 0.0f);
    GLuint VAO, VBO;
    float vertices[216] = {
        /*Front*/   -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,   0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,    0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,    0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,    -0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,   -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
        /*Back*/    -0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,    0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,     0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,     0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,     -0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,    -0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
        /*Left*/    -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,   -0.5f,  0.5f, -0.5f, -1.0f,  0.0f,  0.0f,   -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,   -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,   -0.5f, -0.5f,  0.5f, -1.0f,  0.0f,  0.0f,   -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,
        /*Right*/   0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,    0.5f,  0.5f, -0.5f,  1.0f,  0.0f,  0.0f,    0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,    0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,    0.5f, -0.5f,  0.5f,  1.0f,  0.0f,  0.0f,    0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,
        /*Down*/    -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,   0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,    0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,    0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,    -0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,   -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,
        /*Up*/      -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,   0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,    0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,    0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,    -0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,   -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f
    };
};

#endif 
