#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include <iostream>
#include <vector>
#include "shader/shader.hpp"
#include "perlinNoise/perlinNoise.hpp"

using namespace std;
/*typedef void * (*THREADFUNCPTR)(void *);
void* genThreadRun(void* obj_param);
void* loadThreadRun(void* obj_param);*/

class Generator{
public:
    Generator();
    void generate(vector<float>* vertices, vector<int>* indices, int coordX, int coordZ, int dim, float step);
    vector<float> generateVertices(int coordX, int coordZ, int dim, float step);
    void generateIndices(int dim);
    vector<int> getIndicesRef();
    int getDimOfCircle(int r);
private:
    unsigned int seed;
    PerlinNoise perlinNoise;
    vector<int> indices;
};

#endif 
