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
#define INVALID_BUTTON -1
// This is the object to place on the host computer. It will talk to the client
// computer

//This is the sender app

//ofxOscReceiver receiver;
//ofxOscMessage receivedMessage;

ofxOscSender sender;
//ofxOscReceiver receiver;
ofxOscMessage messageToSend;
//ofxOscMessage receivedMessage;


vector<Button*> buttons;

//--------------------------------------------------------------
void ofApp::setup(){
    
    // Setup the receiver to know what port to talk on
    //receiver.setup(PORT);
    // Setup the sender to know what port to talk on and where to send message
    sender.setup(IP, PORT);
    // When you want to send information, create a new message object and upate
    // its parameters with INTS
    // DON'T BE A HERO. DON'T SEND OBJECTS. DON'T SEND FILES
    
    //messageToSend.addInt32Arg(42);
    
    ofSetBackgroundColor(255, 255, 255);
    
    //sets up all the buttons
    buttons.push_back( new Button(94,257,200,68));
    buttons.push_back( new Button(314,257,200,68));
    buttons.push_back( new  Button(534,257,200,68));
    buttons.push_back( new  Button(754,257,200,68));
    buttons.push_back( new  Button(94,343,200,68));
    buttons.push_back( new  Button(314,343,200,68));
    buttons.push_back( new  Button(534,343,200,68));
    buttons.push_back( new  Button(754,343,200,68));
    buttons.push_back( new  Button(94,429,200,68));
    buttons.push_back( new  Button(314,429,200,68));
    buttons.push_back( new  Button(534,429,200,68));
    buttons.push_back( new  Button(754,429,200,68));
    buttons.push_back( new  Button(94,515,200,68));
    buttons.push_back( new  Button(314,515,200,68));
    buttons.push_back( new  Button(534,515,200,68));
    buttons.push_back( new  Button(754,515,200,68));
    buttons.push_back( new  Button(94,601,200,68));
    buttons.push_back( new  Button(314,601,200,68));
    buttons.push_back( new  Button(534,601,200,68));
    buttons.push_back( new  Button(754,601,200,68));
    
    //loads an image for each button
    buttons[0]->onImage("are.png");
    buttons[1]->onImage("can.png");
    buttons[2]->onImage("deaf.png");
    buttons[3]->onImage("hard.png");
    buttons[4]->onImage("hear.png");
    buttons[5]->onImage("lips.png");
    buttons[6]->onImage("listen.png");
    buttons[7]->onImage("me.png");
    buttons[8]->onImage("need.png");
    buttons[9]->onImage("read.png");
    buttons[10]->onImage("sign.png");
    buttons[11]->onImage("speak.png");
    buttons[12]->onImage("to.png");
    buttons[13]->onImage("understand.png");
    buttons[14]->onImage("you.png");
    buttons[15]->onImage("eggcorn.png");
    buttons[16]->onImage("homophones.png");
    buttons[17]->onImage("malapropisms.png");
    buttons[18]->onImage("mondegreens.png");
    buttons[19]->onImage("spoonerism.png");


    for( int i = 1; i <= buttons.size(); i++ ) {
        buttons[i-1]->soundValue = i;
    }
    
    whatsay.load("whatsay.png");
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    /*
    // You will need to check on your receiver if you have any new messages
    if (receiver.hasWaitingMessages()) {
        // If you do, then get the next message.
        // -- THIS FUNCTION DOES NOT RETURN THE MESSAGE --
        // THIS FUNCTION STORES THE MESSAGE IN THE MESSAGE OBJECT YOU PASS TO IT
        receiver.getNextMessage(receivedMessage);
        // cout prints to console
        // System.out.println("foo") == cout << "foo"
        // System.out.println("foo" + "bar") == cout << "foo" << "bar"
        cout << "Recieved msg: ";
        cout << receivedMessage.getArgAsInt32(0) << endl;
    }
    // Call this when you actually want to send a message
    
*/
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //if((mouseX > ))
    for( auto itr = buttons.begin(); itr != buttons.end(); itr++ )
        (*itr)->draw();
    whatsay.draw(293, 90, 510, 75);
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
    
    
    int buttonPressed = INVALID_BUTTON;
    for( auto itr = buttons.begin(); itr != buttons.end(); itr++ ) {
        int currPress = (*itr)->update(x,y);
        if( currPress != INVALID_BUTTON )
            buttonPressed = currPress;
    }
    if( buttonPressed != INVALID_BUTTON ) {
        ofxOscMessage msg;
        msg.addInt32Arg(buttonPressed);
        sender.sendMessage(msg);
        
    }
    
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
