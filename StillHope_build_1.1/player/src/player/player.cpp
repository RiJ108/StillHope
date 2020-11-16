#include "player/player.hpp"

Player::Player(){
    cout << "PLAYER::New player" << endl;
    position = vec3(0.0f, 5.0f, 0.0f);
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
    return lookAt(position, position + front, up);
}

void Player::running(){
    speed_ = runningSpeed;
}

void Player::moveK(char key, float deltaT){
    vec3 delta;
    switch(key){
        case 'Z':
            delta = deltaT * 1.5f * speed_ * normalize(vec3(front.x, 0.0f, front.z));
            position += delta;
            speed_ = defaultSpeed;
            break;
        case 'S':
            delta = -deltaT * 1.0f * normalize(vec3(front.x, 0.0f, front.z));
            position += delta;
            break;
        case 'Q':
            delta = -deltaT * 1.0f * normalize(vec3(-front.z, 0.0f, front.x));
            position += delta;
            break;
        case 'D':
            delta = deltaT * 1.0f * normalize(vec3(-front.z, 0.0f, front.x));
            position += delta;
            break;
        case 'd':
            position += vec3(0.0f, -1.0f, 0.0f) * deltaT;
            break;
        case 'u':
            position += vec3(0.0f, 1.0f, 0.0f) * deltaT;
            break;
    }
}

void Player::moveM(double x, double y){
    if (firstMouse){
        lastX = x;
        lastY = y;
        firstMouse = false;
    }

    float xoffset = x - lastX;
    float yoffset = lastY - y;
    lastX = x;
    lastY = y;

    float sensitivity = 0.1f;
    xoffset *= sensitivity;
    yoffset *= sensitivity;

    yaw_   += xoffset;
    pitch_ += yoffset;

    if(pitch_ > 89.0f)
        pitch_ = 89.0f;
    if(pitch_ < -89.0f)
        pitch_ = -89.0f;
    
    front = normalize(vec3(cos(radians(yaw_)) * cos(radians(pitch_)), sin(radians(pitch_)), sin(radians(yaw_)) * cos(radians(pitch_))));
}