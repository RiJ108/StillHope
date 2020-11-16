#include "world/world.hpp"

World::World(){
    cout << "WORLD::New world" << endl;
    cout << "Dim = " << generator.getDimOfCircle(3) << endl;
    generator.generateIndices(dim);
    actual.setCoords(0, 0);
    actual.setVertices(generator.generateVertices(actual.getCoordX(), actual.getCoordZ(), dim, step));
    actual.setIndices(generator.getIndicesRef());

    vertices = actual.getVertices();
    indices = actual.getIndices();
}

void World::genBuffers(){
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glGenBuffers(1, &EBO);

    glGenVertexArrays(1, &VAO_);
    glGenBuffers(1, &VBO_);
    glGenBuffers(1, &EBO_);
}

void World::allocBuffers(){

}

void World::fillBuffers(){
    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float)*vertices.size(), &vertices[0], GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(int)*indices.size(), &indices[0], GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));

    glEnableVertexAttribArray(0); 
}

void World::render(Shader shader){
    shader.use();
    glBindVertexArray(VAO);
    glDrawElements(GL_TRIANGLES, indices.size(), GL_UNSIGNED_INT, 0);
    glBindVertexArray(0);
}