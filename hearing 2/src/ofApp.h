#pragma once

#include "ofMain.h"
#include "button.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    //Sounds
    string soundAre = "are.mp3";
    string soundCan = "can.mp3";
    string soundDeaf = "deaf.mp3";
    string soundHard = "hard.mp3";
    string soundHear = "hear.mp3";
    string soundLip = "lip.mp3";
    string soundListen = "listen.mp3";
    string soundMe = "me.mp3";
    string soundNeed = "need.mp3";
    string soundRead = "read.mp3";
    string soundSign = "sign.mp3";
    string soundSpeak = "speak.mp3";
    string soundTo = "to.mp3";
    string soundUnderstand = "understand.mp3";
    string soundYou = "you.mp3";
    string soundEggcorn = "eggcorn.mp3";
    string soundHomophones = "homophones.mp3";
    string soundMalapropisms = "malapropism.mp3";
    string soundMondegreen = "mondegreen.mp3";
    string soundSpoonerisms = "spoonerism.mp3";
    
    
    Button play, replay;
    
    ofImage playing;
};
