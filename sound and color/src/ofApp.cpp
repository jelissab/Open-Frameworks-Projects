#include "ofApp.h"
#include "myboid.h"
#include "boid.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // Sets background color to black
    ofSetBackgroundColor(0, 0, 0);
    
    //places boids on the screen
    for(int i=0; i < BOIDS; i++){
        ok[i].position.x = 0.5 * i;
        ok[i].position.y = 0.5 * i;
    }
    
    //loads sounds etc. from myBoid
    for(int i=0; i < BOIDS; i++){
        ok[i].setup();
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofVec2f target;
    
    //updates the sound of the boids
    for(int i=0; i < BOIDS; i++){
        ok[i].update();
    }
    
    //updates the location of boids, expands to right of screen.
    for(int i=0; i < BOIDS; i++){
        target.x = ofGetMouseX() * (i*0.08);
        target.y = ofGetMouseY();
        ok[i].position.interpolate(target, 0.4);
        
    }

    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //draws the boids, also changes the color depending on location.
    for(int i=0; i < BOIDS; i++){
        ok[i].draw();
    }
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
