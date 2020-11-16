#ifndef WORLDSEGMENT_HPP
#define WORLDSEGMENT_HPP

#include <iostream>
#include <vector>

using namespace std;

class WorldSegment{
public:
    void setVertices(vector<float> vertices_);
    void setIndices(vector<int> indices_);
    void setCoords(int x, int z);
    int getCoordX();
    int getCoordZ();
    vector<float> getVertices();
    vector<int> getIndices();
private:
    int coordX;
    int coordZ;
    vector<float> vertices;
    vector<int> indices;
    WorldSegment* around = (WorldSegment*)malloc(sizeof(WorldSegment) * 8);
};

#endif 
