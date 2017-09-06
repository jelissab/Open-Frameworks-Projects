#include "ofApp.h"

// Face Tracker that connects music to the emotions expressed by Jelissa Bueza
// Credits to Kyle McdDonald for the ofxFaceTracker.
// Link to the git hub is: https://github.com/kylemcdonald/ofxFaceTracker
// All music credited to http://freesound.org


using namespace ofxCv;
using namespace cv;



void ofApp::setup() {
	ofSetVerticalSync(true);
	cam.initGrabber(640, 480);
	
	tracker.setup();
	tracker.setRescale(.5);
    
    
    // Loads all the sounds for each expression
    zero.load("0.mp3");
    one.load("1.mp3");
    two.load("2.mp3");
    three.load("3.mp3");
    
    // Sets the sound on a continous loop
    zero.setLoop(true);
    one.setLoop(true);
    two.setLoop(true);
    three.setLoop(true);
    
    // Plays the sound
    zero.play();
    one.play();
    two.play();
    three.play();
}

void ofApp::update() {
	cam.update();
	if(cam.isFrameNew()) {
		if(tracker.update(toCv(cam))) {
			classifier.classify(tracker);
		}		
	}
    
    int primary = classifier.getPrimaryExpression();
    
    
    // Checks the variables and the current expression then sets the volume
    // of the current expression's sound to 100% and the other sounds
    // set to the other expressions to a volume of zero
    switch (primary) {
        case 0:
            zero.setVolume(1);
            one.setVolume(0);
            two.setVolume(0);
            three.setVolume(0);
            break;
        case 1:
            zero.setVolume(0);
            one.setVolume(1);
            two.setVolume(0);
            three.setVolume(0);
            break;
        case 2:
            zero.setVolume(0);
            one.setVolume(0);
            two.setVolume(1);
            three.setVolume(0);
            break;
        case 3:
            zero.setVolume(0);
            one.setVolume(0);
            two.setVolume(0);
            three.setVolume(1);
            break;
        default:
            break;
    }
    
}

void ofApp::draw() {
	ofSetColor(255);
	cam.draw(0, 0);
	tracker.draw();
	
	int w = 100, h = 12;
	ofPushStyle();
	ofPushMatrix();
	ofTranslate(5, 10);
	int n = classifier.size();
	int primary = classifier.getPrimaryExpression();
  for(int i = 0; i < n; i++){
		ofSetColor(i == primary ? ofColor::red : ofColor::black);
		ofDrawRectangle(0, 0, w * classifier.getProbability(i) + .5, h);
		ofSetColor(255);
		ofDrawBitmapString(classifier.getDescription(i), 5, 9);
		ofTranslate(0, h + 5);
      
      
  }
    
	ofPopMatrix();
	ofPopStyle();
	
	ofDrawBitmapString(ofToString((int) ofGetFrameRate()), ofGetWidth() - 20, ofGetHeight() - 10);
	ofDrawBitmapStringHighlight(
		string() +
		"r - reset\n" +
		"e - add expression\n" +
		"a - add sample\n" +
		"s - save expressions\n"
		"l - load expressions",
		14, ofGetHeight() - 7 * 12);
}

void ofApp::keyPressed(int key) {
	if(key == 'r') {
		tracker.reset();
		classifier.reset();
	}
	if(key == 'e') {
		classifier.addExpression();
	}
	if(key == 'a') {
		classifier.addSample(tracker);
	}
	if(key == 's') {
		classifier.save("expressions");
	}
	if(key == 'l') {
		classifier.load("expressions");
	}
}
