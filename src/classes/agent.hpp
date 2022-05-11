//
//  agent.hpp
//  agent
//
//  Created by @_hrkd on 2022/05/11.
//  
//

#ifndef agent_hpp
#define agent_hpp

#include <stdio.h>
#include "ofMain.h"

enum direction {
    TL,
    TC,
    TR,
    ML,
    MC,
    MR,
    BL,
    BC,
    BR
};

class agent: public ofBaseApp {
public:
    void setup();
    void setPosition(float x, float y);
    void update();
    void draw();
    glm::vec2 position;
private:
    int step = 1;
    int currentDirection;
};
#endif /* agent_hpp */
