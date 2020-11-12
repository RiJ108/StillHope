#include "entity/entity.hpp"

Entity::Entity(){
    cout << "ENTITY::New entity." << endl;
}

void Entity::fillBuffers(){
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);

    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
    glBindVertexArray(0);
}

vec3 Entity::getPosition(){
    return position;
}

void Entity::setPosition(vec3 position){
    this->position = position;
}

vec3 Entity::getFront(){
    return front;
}

void Entity::setFront(vec3 front){
    this->front = front;
}

void Entity::render(Shader shader){
    shader.use();
    mat4 model = translate(mat4(1.0f), getPosition());
    vec3 front = getFront();
    float angle = orientedAngle(vec3(1.0f, 0.0f, 0.0f), normalize(vec3(front.x, 0.0f, front.z)), vec3(0.0f, 1.0f, 0.0f));
    model = rotate(model, angle, vec3(0.0f, 1.0f, 0.0f));
    shader.setMat4("model", model);
    glBindVertexArray(VAO);
    glDrawArrays(GL_TRIANGLES, 0, 36);
    glBindVertexArray(0);
}