#include "player/player.hpp"

Player::Player(){
    cout << "PLAYER::New player" << endl;
    position = vec3(-2.0f, 0.0f, 0.0f);
    up = vec3(0.0f, 1.0f, 0.0f);
    front = vec3(1.0f, 0.0f, 0.0f);
}

vec3 Player::getPosition(){
    return position;
}

vec3 Player::getUp(){
    return up;
}

vec3 Player::getFront(){
    return front;
}

void Player::setPosition(vec3 value){
    position = value;
}

void Player::setUp(vec3 value){
    up = value;
}

void Player::setFront(vec3 value){
    front = value;
}

mat4 Player::look(){
    return lookAt(position, vec3(0.0f), up);
}

void Player::moveK(char key, float deltaT){
    vec3 delta;
    switch(key){
        case 'Z':
            delta = deltaT * 1.5f * normalize(vec3(front.x, 0.0f, front.z));
            break;
        case 'S':
            delta = -deltaT * 1.0f * normalize(vec3(front.x, 0.0f, front.z));
            break;
    }
    position += delta;
}