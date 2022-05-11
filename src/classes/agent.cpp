//
//  agent.cpp
//  agent
//
//  Created by @_hrkd on 2022/05/11.
//  
//

#include "agent.hpp"

void agent::setup(){
    currentDirection = direction(rand()%9);
}

void agent::setPosition(float x, float y){
    position = ofVec2f(x, y);
}

void agent::update(){
    currentDirection = direction(rand()%9);
    switch(currentDirection){
        case TL:
            position = ofVec2f(position.x-step, position.y+step);
            break;
        case TC:
            position = ofVec2f(position.x, position.y+step);
            break;
        case TR:
            position = ofVec2f(position.x+step, position.y+step);
            break;
        case ML:
            position = ofVec2f(position.x-step, position.y);
            break;
        case MC:
            position = ofVec2f(position.x, position.y);
            break;
        case MR:
            position = ofVec2f(position.x+step, position.y);
            break;
        case BL:
            position = ofVec2f(position.x-step, position.y-step);
            break;
        case BC:
            position = ofVec2f(position.x, position.y-step);
            break;
        case BR:
            position = ofVec2f(position.x+step, position.y-step);
            break;
    }
}

void agent::draw(){
    ofDrawEllipse(position.x, position.y, 2,2);
}
