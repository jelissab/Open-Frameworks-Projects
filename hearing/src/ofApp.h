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
    
    
    //Order of words (left to right top to bottom)
    // 5 rows 4 columns
    // are, can, deaf, hard
    // hear, lips, listen, me
    // need, read, sign, speak
    // to, understand, you, eggcorn
    //homophones, malapropisms, mondegreens, spoonerisms
    
    //Background Assets
    //ofImage backgroundPicture; //Image Object
    //string picBack = "bin\\data\\FileName.png"; //This needs to be updated
    //int bx = 0; //x coordinate
    //int by = 0; //y coordinate
    
    //First Button
    ofImage buttonAre;
    string picOne = "bin\\data\\are.png";
    int areVal = 1;
    int areX = 94;
    int areY = 257;
    
		
    Button b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20;
    
    ofImage whatsay;
};
