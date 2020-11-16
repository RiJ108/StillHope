#include "worldSegment/worldSegment.hpp"

void WorldSegment::setVertices(vector<float> vertices_){
    vertices = vertices_;
}

void WorldSegment::setIndices(vector<int> indices_){
    indices = indices_;
}

vector<float> WorldSegment::getVertices(){
    return vertices;
}

vector<int> WorldSegment::getIndices(){
    return indices;
}

void WorldSegment::setCoords(int x, int z){
    coordX = x;
    coordZ = z;
}

int WorldSegment::getCoordX(){
    return coordX;
}

int WorldSegment::getCoordZ(){
    return coordZ;
}