#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofSetColor(0, 0, 0, 5);

    for(int i = 0;i<mAgents.size();i++){
        mAgents[i].setup();
        float radius = 250;
        float degree = 360/mAgents.size() *i;
        float x = cos(degree * DEG_TO_RAD) * radius + ofGetWindowWidth()/2;
        float y = sin(degree * DEG_TO_RAD) * radius + ofGetWindowHeight()/2;
        mAgents[i].setPosition(x, y);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0;i<mAgents.size();i++){
        mAgents[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    ofSetLineWidth(1);

    ofBeginShape();

    ofCurveVertex(mAgents[mAgents.size()-1].position.x, mAgents[mAgents.size()-1].position.y);
    for(int i = 0;i<mAgents.size();i++){
        ofCurveVertex(mAgents[i].position.x, mAgents[i].position.y);
    }
    ofCurveVertex(mAgents[0].position.x, mAgents[0].position.y);
    ofCurveVertex(mAgents[1].position.x, mAgents[1].position.y);

    ofEndShape();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
