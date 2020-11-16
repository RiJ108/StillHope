#ifndef WORLD_HPP
#define WORLD_HPP

#include "shader/shader.hpp"
#include "generator/generator.hpp"
#include "worldSegment/worldSegment.hpp"

class World{
public:
    World();
    void genBuffers();
    void allocBuffers();
    void fillBuffers();
    void render(Shader shader);
private:
    GLuint VAO, VBO, EBO;
    GLuint VAO_, VBO_, EBO_;
    int dim = 100;
    int renderDistance = 2;
    float step = 0.5f;
    vector<int> indices;
    vector<float> vertices;
    Generator generator;
    vec3 position;

    vector<WorldSegment> segments;
    WorldSegment actual;
};

#endif 
