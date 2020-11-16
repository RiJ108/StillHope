#include "generator/generator.hpp"

Generator::Generator(){
    cout << "GENERATOR::New generator." << endl;
}

void Generator::generate(vector<float>* vertices, vector<int>* indices, int coordX, int coordZ, int dim, float step){
    int index = 0 ;
    float x, z;
    for(int i = 0 ; i <= dim ; i++){
        for(int j = 0 ; j <= dim ; j++){
            //Adding the vertices of the triangles
            x = (float)i*step - (dim*step)/2.0f;
            z = (float)j*step - (dim*step)/2.0f;

            vertices->push_back(x);
            vertices->push_back(0.0f);
            vertices->push_back(z);

            vertices->push_back(0.0f);
            vertices->push_back(1.0f);
            vertices->push_back(0.0f);

            if(i != dim && j != dim){
                indices->push_back( index );
                indices->push_back( index + 1 );
                indices->push_back( index + dim + 1);

                indices->push_back( index + 1);
                indices->push_back( index + dim + 2);
                indices->push_back( index + dim + 1);
            }
            index++;
        }
    }
}

vector<float> Generator::generateVertices(int coordX, int coordZ, int dim, float step){
    vector<float> vertices;
    int index = 0 ;
    float x, z;
    for(int i = 0 ; i <= dim ; i++){
        for(int j = 0 ; j <= dim ; j++){
            x = (float)i*step - (dim*step)/2.0f;
            z = (float)j*step - (dim*step)/2.0f;

            vertices.push_back(x);
            vertices.push_back(10.0f * perlinNoise.noise(x/25.0, z/25.0, 0.0f) + 5.0f * perlinNoise.noise(x/10.0, z/10.0, 0.0f));
            vertices.push_back(z);

            vertices.push_back(0.0f);
            vertices.push_back(1.0f);
            vertices.push_back(0.0f);
            index++;
        }
    }
    return vertices;
}

vector<float> shiftVertices(vector<float> origin, float x, float z, int dim, float step){
    for(int i = 0 ; i < origin.size() ; i++){

    }
    return origin;
}

void Generator::generateIndices(int dim){
    int index = 0 ;
    for(int i = 0 ; i <= dim ; i++){
        for(int j = 0 ; j <= dim ; j++){
            if(i != dim && j != dim){
                indices.push_back( index );
                indices.push_back( index + 1 );
                indices.push_back( index + dim + 1);

                indices.push_back( index + 1);
                indices.push_back( index + dim + 2);
                indices.push_back( index + dim + 1);
            }
            index++;
        }
    }
}

vector<int> Generator::getIndicesRef(){
    return indices;
}

int Generator::getDimOfCircle(int r){
    int dim = 0;
    for(int i = -r ; i <= r ; i++){
        for(int j = -r ; j <= r ; j++){
            if(((i*i) + (j*j)) <= (r*r))
                dim++;
        }
    }
    return dim;
}