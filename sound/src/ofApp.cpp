#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //sets up all the buttons
    a1 = Button(10,10,150,190);
    a2 = Button(811,411,150,190);
    b1 = Button(491,10,150,190);
    b2 = Button(10,611,150,190);
    c1 = Button(971,211,150,190);
    c2 = Button(10,411,150,190);
    d1 = Button(1131,611,150,190);
    d2 = Button(811,10,150,190);
    e1 = Button(651,611,150,190);
    e2 = Button(171,211,150,190);
    f1 = Button(971,10,150,190);
    f2 = Button(651,211,150,190);
    g1 = Button(331,10,150,190);
    g2 = Button(971,411,150,190);
    h1 = Button(171,10,150,190);
    h2 = Button(971,611,150,190);
    i1 = Button(10,211,150,190);
    i2 = Button(491,211,150,190);
    j1 = Button(171,611,150,190);
    j2 = Button(651,411,150,190);
    k1 = Button(331,611,150,190);
    k2 = Button(1131,10,150,190);
    l1 = Button(651,10,150,190);
    l2 = Button(491,411,150,190);
    m1 = Button(331,211,150,190);
    m2 = Button(491,611,150,190);
    n1 = Button(811,611,150,190);
    n2 = Button(1131,411,150,190);
    o1 = Button(171,411,150,190);
    o2 = Button(811,211,150,190);
    p1 = Button(331,411,150,190);
    p2 = Button(1131,211,150,190);
    
    //loads an image for each button/song
    a1.onImage("a1.jpg");
    a2.onImage("a2.jpg");
    b1.onImage("b1.jpg");
    b2.onImage("b2.jpg");
    c1.onImage("c1.jpg");
    c2.onImage("c2.jpg");
    d1.onImage("d1.jpg");
    d2.onImage("d2.jpg");
    e1.onImage("e1.jpg");
    e2.onImage("e2.jpg");
    f1.onImage("f1.jpg");
    f2.onImage("f2.jpg");
    g1.onImage("g1.jpg");
    g2.onImage("g2.jpg");
    h1.onImage("h1.jpg");
    h2.onImage("h2.jpg");
    i1.onImage("i1.jpg");
    i2.onImage("i2.jpg");
    j1.onImage("j1.jpg");
    j2.onImage("j2.jpg");
    k1.onImage("k1.jpg");
    k2.onImage("k2.jpg");
    l1.onImage("l1.jpg");
    l2.onImage("l2.jpg");
    m1.onImage("m1.jpg");
    m2.onImage("m2.jpg");
    n1.onImage("n1.jpg");
    n2.onImage("n2.jpg");
    o1.onImage("o1.jpg");
    o2.onImage("o2.jpg");
    p1.onImage("p1.jpg");
    p2.onImage("p2.jpg");
    
    //applies the opposite/similar song onto the button
    a1.setSound("a2.mp3");
    a2.setSound("a1.mp3");
    b1.setSound("b2.mp3");
    b2.setSound("b1.mp3");
    c1.setSound("c2.mp3");
    c2.setSound("c1.mp3");
    d1.setSound("d2.mp3");
    d2.setSound("d1.mp3");
    e1.setSound("e2.mp3");
    e2.setSound("e1.mp3");
    f1.setSound("f2.mp3");
    f2.setSound("f1.mp3");
    g1.setSound("g2.mp3");
    g2.setSound("g1.mp3");
    h1.setSound("h2.mp3");
    h2.setSound("h1.mp3");
    i1.setSound("i2.mp3");
    i2.setSound("i1.mp3");
    j1.setSound("j2.mp3");
    j2.setSound("j1.mp3");
    k1.setSound("k2.mp3");
    k2.setSound("k1.mp3");
    l1.setSound("l2.mp3");
    l2.setSound("l1.mp3");
    m1.setSound("m2.mp3");
    m2.setSound("m1.mp3");
    n1.setSound("n2.mp3");
    n2.setSound("n1.mp3");
    o1.setSound("o2.mp3");
    o2.setSound("o1.mp3");
    p1.setSound("p2.mp3");
    p2.setSound("p1.mp3");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    a1.draw();
    a2.draw();
    b1.draw();
    b2.draw();
    c1.draw();
    c2.draw();
    d1.draw();
    d2.draw();
    e1.draw();
    e2.draw();
    f1.draw();
    f2.draw();
    g1.draw();
    g2.draw();
    h1.draw();
    h2.draw();
    i1.draw();
    i2.draw();
    j1.draw();
    j2.draw();
    k1.draw();
    k2.draw();
    l1.draw();
    l2.draw();
    m1.draw();
    m2.draw();
    n1.draw();
    n2.draw();
    o1.draw();
    o2.draw();
    p1.draw();
    p2.draw();
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
    
    //each if statement switches the cover to the original song
    
    a1.update(x,y);
    if(x>= 10 && x <= 160 && y <= 200 && y>= 11){
        a1.onImage("a2.jpg");
        a2.onImage("a1.jpg");
    }

    
    a2.update(x,y);
    if(x <= 960 && x>=811 && y <=600 && y >= 411){
        a1.onImage("a2.jpg");
        a2.onImage("a1.jpg");
    }
    
    b1.update(x,y);
    if(x <= 640 && x>=491 && y <=200 && y>= 11){
        b1.onImage("b2.jpg");
        b2.onImage("b1.jpg");
    }
    
    b2.update(x,y);
    if(x >= 10 && x <= 160 && y <=800 && y >= 611){
        b1.onImage("b2.jpg");
        b2.onImage("b1.jpg");
    }
    
    c1.update(x,y);
    if(x <= 1120 && x>= 971 && y <= 400 && y >= 211){
        c1.onImage("c2.jpg");
        c2.onImage("c1.jpg");
    }
    
    c2.update(x,y);
    if(x>= 10 && x <= 160 && y <=600 && y >= 411){
        c1.onImage("c2.jpg");
        c2.onImage("c1.jpg");
    }
    
    d1.update(x,y);
    if(x <= 1280 && x>= 1131 && y <= 800 && y >= 611){
        d1.onImage("d2.jpg");
        d2.onImage("d1.jpg");
    }
    
    d2.update(x,y);
    if(x <= 960 && x>=811 && y <=200 && y >= 10){
        d1.onImage("d2.jpg");
        d2.onImage("d1.jpg");
    }
    
    e1.update(x,y);
    if(x <= 800 && x>=651 && y <=800 && y >= 611){
        e1.onImage("e2.jpg");
        e2.onImage("e1.jpg");
    }
    
    e2.update(x,y);
    if(x <= 320 && x>=171 && y <=400 && y >= 211){
        e1.onImage("e2.jpg");
        e2.onImage("e1.jpg");
    }
    
    f1.update(x,y);
    if(x <= 1120 && x>= 971 && y <= 200 && y >=10){
        f1.onImage("f2.jpg");
        f2.onImage("f1.jpg");
    }
    
    f2.update(x,y);
    if(x <= 800 && x>= 651 && y <= 400 && y >= 211){
        f1.onImage("f2.jpg");
        f2.onImage("f1.jpg");
    }
    
    g1.update(x,y);
    if(x <= 480 && x>= 331 && y <= 200 && y >= 10){
        g1.onImage("g2.jpg");
        g2.onImage("g1.jpg");
    }
    
    g2.update(x,y);
    if(x <= 1120 && x>= 971 && y <= 600 && y >= 411){
        g1.onImage("g2.jpg");
        g2.onImage("g1.jpg");
    }
    
    h1.update(x,y);
    if(x <= 320 && x>= 171 && y <= 200 && y >= 10){
        h1.onImage("h2.jpg");
        h2.onImage("h1.jpg");
    }
    
    h2.update(x,y);
    if(x <= 1120 && x>= 971 && y <= 800 && y >= 611){
        h1.onImage("h2.jpg");
        h2.onImage("h1.jpg");
    }
    
    i1.update(x,y);
    if(x <= 160 && x >= 10 && y <= 400 && y >= 211){
        i1.onImage("i2.jpg");
        i2.onImage("i1.jpg");
    }
    
    i2.update(x,y);
    if(x <= 640 && x>= 491 && y <= 400 && y >= 211){
        i1.onImage("i2.jpg");
        i2.onImage("i1.jpg");
    }
    
    j1.update(x,y);
    if(x <= 320 && x>= 171 && y <= 800 && y >= 611){
        j1.onImage("j2.jpg");
        j2.onImage("j1.jpg");
    }
    
    j2.update(x,y);
    if(x <= 800 && x>= 651 && y <= 600 && y >= 411){
        j1.onImage("j2.jpg");
        j2.onImage("j1.jpg");
    }
    
    k1.update(x,y);
    if((x <= 480 && x>= 331 && y <= 800 && y >= 611)){
        k1.onImage("k2.jpg");
        k2.onImage("k1.jpg");
    }
    
    k2.update(x,y);
    if(x <= 1280 && x>= 1131 && y <= 200 && y >= 10){
        k1.onImage("k2.jpg");
        k2.onImage("k1.jpg");
    }
    
    l1.update(x,y);
    if(x <= 800 && x>= 651 && y <= 200 && y >= 10){
        l1.onImage("l2.jpg");
        l2.onImage("l1.jpg");
    }
    
    l2.update(x,y);
    if(x <= 640 && x>= 491 && y <= 600 && y >= 411){
        l1.onImage("l2.jpg");
        l2.onImage("l1.jpg");
    }
    
    m1.update(x,y);
    if(x <= 480 && x>= 331 && y <= 400 && y >= 211){
        m1.onImage("m2.jpg");
        m2.onImage("m1.jpg");
    }
    
    m2.update(x,y);
    if(x <= 640 && x>= 491 && y <= 800 && y >= 611){
        m1.onImage("m2.jpg");
        m2.onImage("m1.jpg");
    }
    
    n1.update(x,y);
    if(x <= 960 && x>= 811 && y <= 800 && y >= 611){
        n1.onImage("n2.jpg");
        n2.onImage("n1.jpg");
    }
    
    n2.update(x,y);
    if(x <= 1280 && x>= 1131 && y <= 600 && y >= 411){
        n1.onImage("n2.jpg");
        n2.onImage("n1.jpg");
    }
    
    o1.update(x,y);
    if(x <= 320 && x>= 171 && y <= 600 && y >= 411){
        o1.onImage("o2.jpg");
        o2.onImage("o1.jpg");
    }
    
    o2.update(x,y);
    if(x <= 960 && x>= 811 && y <= 400 && y >= 211){
        o1.onImage("o2.jpg");
        o2.onImage("o1.jpg");
    }
    
    p1.update(x,y);
    if(x <= 480 && x>= 331 && y <= 600 && y >= 411){
        p1.onImage("p2.jpg");
        p2.onImage("p1.jpg");
    }
    
    p2.update(x,y);
    if(x <= 1280 && x>= 1131 && y <= 400 && y >= 211){
        p1.onImage("p2.jpg");
        p2.onImage("p1.jpg");
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
