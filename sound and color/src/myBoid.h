//
//  myBoid.h
//  midterm
//
//  Created by Jelissa Bueza on 4/5/16.
//
//

#ifndef myBoid_h
#define myBoid_h
#define BOIDS 32

#include "boid.h"


class myBoid : public Boid {

public:
    
    ofSoundPlayer sound1, sound2, sound3, sound4, sound5, sound6;
    
    
    void setup() {
        //loads the sounds for each color
        sound1.load("red.mp3");
        sound2.load("orange.mp3");
        sound3.load("yellow.mp3");
        sound4.load("green.mp3");
        sound5.load("blue.mp3");
        sound6.load("purple.mp3");
        
        //set initial volume to lowest non-zero setting
        sound1.setVolume(0.1);
        sound2.setVolume(0.1);
        sound3.setVolume(0.1);
        sound4.setVolume(0.1);
        sound5.setVolume(0.1);
        sound6.setVolume(0.1);
    }
    
    void update() {
        
        //Changes the sound that plays depending on where on the screen the boid is
        if(position.y > 100 && position.y < 200){
            sound1.play();
        } else if(position.y > 201 && position.y < 300){
            sound1.stop();
            sound2.play();
        }else if(position.y > 301 && position.y < 400){
            sound1.stop();
            sound2.stop();
            sound3.play();
        }else if(position.y > 401 && position.y < 500){
            sound1.stop();
            sound2.stop();
            sound3.stop();
            sound4.play();
        }else if(position.y > 501 && position.y < 600){
            sound1.stop();
            sound2.stop();
            sound3.stop();
            sound4.stop();
            sound5.play();
        }else if (position.y > 601 && position.y < 700){
            sound1.stop();
            sound2.stop();
            sound3.stop();
            sound4.stop();
            sound5.stop();
            sound6.play();
        }
        
        //adjusts the volume depending on the location of the mouse
        if( (ofGetMouseX()> 100) && (ofGetMouseX() < 200)){
            sound1.setVolume(0.1);
            sound2.setVolume(0.1);
            sound3.setVolume(0.1);
            sound4.setVolume(0.1);
            sound5.setVolume(0.1);
            sound6.setVolume(0.1);
        }else if( (ofGetMouseX() > 201) && (ofGetMouseX() < 300)){
            sound1.setVolume(0.2);
            sound2.setVolume(0.2);
            sound3.setVolume(0.2);
            sound4.setVolume(0.2);
            sound5.setVolume(0.2);
            sound6.setVolume(0.2);
        }else if( (ofGetMouseX() > 301) && (ofGetMouseX() < 400)){
            sound1.setVolume(0.3);
            sound2.setVolume(0.3);
            sound3.setVolume(0.3);
            sound4.setVolume(0.3);
            sound5.setVolume(0.3);
            sound6.setVolume(0.3);
        }else if( (ofGetMouseX() > 401) && (ofGetMouseX() < 500)){
            sound1.setVolume(0.4);
            sound2.setVolume(0.4);
            sound3.setVolume(0.4);
            sound4.setVolume(0.4);
            sound5.setVolume(0.4);
            sound6.setVolume(0.4);
        }else if( (ofGetMouseX()> 501) && (ofGetMouseX() < 600)){
            sound1.setVolume(0.5);
            sound2.setVolume(0.5);
            sound3.setVolume(0.5);
            sound4.setVolume(0.5);
            sound5.setVolume(0.5);
            sound6.setVolume(0.5);
        }else if( (ofGetMouseX() > 601) && (ofGetMouseX() < 700)){
            sound1.setVolume(0.6);
            sound2.setVolume(0.6);
            sound3.setVolume(0.6);
            sound4.setVolume(0.6);
            sound5.setVolume(0.6);
            sound6.setVolume(0.6);
        }else if( (ofGetMouseX()> 701) && (ofGetMouseX() < 800)){
            sound1.setVolume(0.7);
            sound2.setVolume(0.7);
            sound3.setVolume(0.7);
            sound4.setVolume(0.7);
            sound5.setVolume(0.7);
            sound6.setVolume(0.7);
        }else if( (ofGetMouseX() > 801) && (ofGetMouseX()< 900)){
            sound1.setVolume(0.8);
            sound2.setVolume(0.8);
            sound3.setVolume(0.8);
            sound4.setVolume(0.8);
            sound5.setVolume(0.8);
            sound6.setVolume(0.8);
        }else if( (ofGetMouseX() > 901) && (ofGetMouseX() < 1000)){
            sound1.setVolume(0.9);
            sound2.setVolume(0.9);
            sound3.setVolume(0.9);
            sound4.setVolume(0.9);
            sound5.setVolume(0.9);
            sound6.setVolume(0.9);
        }else if( (ofGetMouseX()> 1001) && (ofGetMouseX() < 1100)){
            sound1.setVolume(1);
            sound2.setVolume(1);
            sound3.setVolume(1);
            sound4.setVolume(1);
            sound5.setVolume(1);
            sound6.setVolume(1);
        }
    }
    
    void draw() {
        //draws the rectangle shape
        ofDrawRectangle(position.x,position.y,10,60);
        
        //changes the color of the boids depending on y location. rainbow colors.
        if(position.y < 100){
            ofSetColor(220,20,60);
        }else if(position.y >101 && position.y < 201){
            ofSetColor(255,99,71);
        }else if(position.y > 202 && position.y < 302){
            ofSetColor(240,230,140);
        }else if(position.y > 303 && position.y < 403){
            ofSetColor(144,238,144);
        }else if(position.y > 404 && position.y < 504){
            ofSetColor(135,206,250);
        }else if(position.y > 505 && position.y < 600){
            ofSetColor(147,112,219);
        }
    }
};

#endif /* myBoid_h */
