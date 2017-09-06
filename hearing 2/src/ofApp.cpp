#include "ofApp.h"
// INCLUDE THIS LIBRARY
// DONT FORGET IT
// OR THIS TEXT WONT BE THE ONLY THING SCREAMING AT YOU
#include "ofxOSC.h"
// You define a port so the two computers know where they can "talk" to
// eachother. You can think of it as the personal communication line that
// your program will talk over.
// Ports under 1024 are normally reserved for system use. DO NOT USE.
// Try 9000+ range
#define PORT 9001
// The IP Address is like the mailing address to send information between
// computers. DO NOT TRY SENDING INFORMATION OVER THE INTERNET. You will
// only face pain and suffering. Use your local IP. Google is your friend.
// This is the client's IP
#define IP "127.0.0.1"

// This is the object to place on the host computer. It will talk to the client
// computer

//This is the receiver app

//ofxOscSender sender;
//ofxOscMessage messageToSend;

ofxOscReceiver receiver;
ofxOscMessage receivedMessage;
ofSoundPlayer player;

vector<Button*> buttons;
unordered_map<int, string> intToSoundStr;

//--------------------------------------------------------------
void ofApp::setup(){

    
    // Setup the receiver to know what port to talk on
    receiver.setup(PORT);
    // Setup the sender to know what port to talk on and where to send message
    // sender.setup(IP, PORT);
    // When you want to send information, create a new message object and upate
    // its parameters with INTS
    // DON'T BE A HERO. DON'T SEND OBJECTS. DON'T SEND FILES
    // messageToSend.addInt32Arg(42);
    
    ofSetBackgroundColor(255, 255, 255);
    
    //sets up all the buttons
    //buttons.push_back( new Button(172,123,740,448));
    
    play = Button(172, 123, 740, 448);
    
    /*
    play = Button(172,123,740,448);
    replay = Button(172,123,740,448);
    */
    
    //loads an image for each button
    
    play.onImage("play.png");
    intToSoundStr[1] = soundAre;
    intToSoundStr[2] = soundCan;
    intToSoundStr[3] = soundDeaf;
    intToSoundStr[4] = soundHard;
    intToSoundStr[5] = soundHear;
    intToSoundStr[6] = soundLip;
    intToSoundStr[7] = soundListen;
    intToSoundStr[8] = soundMe;
    intToSoundStr[9] = soundNeed;
    intToSoundStr[10] = soundRead;
    intToSoundStr[11] = soundSign;
    intToSoundStr[12] = soundSpeak;
    intToSoundStr[13] = soundTo;
    intToSoundStr[14] = soundUnderstand;
    intToSoundStr[15] = soundYou;
    intToSoundStr[16] = soundEggcorn;
    intToSoundStr[17] = soundHomophones;
    intToSoundStr[18] = soundMalapropisms;
    intToSoundStr[19] = soundMondegreen;
    intToSoundStr[20] = soundSpoonerisms;
}

//--------------------------------------------------------------
void ofApp::update(){

    if(receiver.hasWaitingMessages()) {
        receiver.getNextMessage(receivedMessage);
        player.load(intToSoundStr[receivedMessage.getArgAsInt32(0)]);
        player.play();
        cout << "Received msg: ";
        cout << receivedMessage.getArgAsInt32(0) << endl;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
  
    play.draw();
    //replay.draw();
   // playing.draw(172,123,740,448);
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
