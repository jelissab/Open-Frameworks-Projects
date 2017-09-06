#include "ofApp.h"

//--------------------------------------------------------------
    void ofApp::setup(){
    
    ofBackground(0,0,0);
    
    //loads all the videos
    video.load("oldvid.mp4");
    video2.load("oldvid2.mp4");
    video4.load("oldvid4.mp4");
    
        
    video.play();
    video.setLoopState(OF_LOOP_NONE);
        
        
    //loads all the buttons
    remember = Button(750,330,234,58);
    remember2 = Button(750,388,234,58);
    remember3 = Button(750,272,234,58);

    
    remember.onImage("rembutton.jpg");
    remember2.onImage("rembutton.jpg");
    remember3.onImage("rembutton.jpg");

    
    
    buff = Buffer(600, 400, OF_IMAGE_COLOR, 600);


}

//--------------------------------------------------------------
    void ofApp::update(){
    
    video.update();
    video2.update();
    video4.update();
        
        /*if(video2.isFrameNew()){
            buff.addFrame(video2.getPixels());
        }*/
    }

//--------------------------------------------------------------
    void ofApp::draw(){
    
    remember.draw();

    video.draw(60, 150, 600, 400);
    
     //shows the first crop of the video
    if(remember.clicked == true){
    }else{
        //buff.deleteFrame();
        //buff.drawFrame(60, 150, 600, 400);
        video2.draw(60,150,600,400);
        video2.play();
        video2.setLoopState(OF_LOOP_NONE);
        remember2.draw();
    }
        
    //shows the second crop of the video
   if(remember2.clicked == true){
    }else{
        //buff.deleteFrame();
        //buff.drawFrame(60, 150, 600, 400);
        video4.draw(60,150,600,400);
        video4.play();
        video4.setLoopState(OF_LOOP_NONE);
        remember3.draw();

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
    
    remember.update(x, y);
    remember2.update(x, y);


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
