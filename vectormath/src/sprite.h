//
//  sprite.h
//  vectormath
//
//  Created by Jelissa Bueza on 3/29/16.
//
//

#ifndef sprite_h

class Sprite{
    
public:
    
    ofVec2f square0; //two dimensional vector
    ofVec2f square1;
    ofVec2f square2;
    ofVec2f square3;
    ofVec2f square4;
    ofVec2f square5;
    
    ofVec2f mouseP;

    Sprite(){}
    
    void setup(){
        
    }
    
    void update(){
        mouseP.x = 100;
        mouseP.y = 100;
        
        square0.interpolate(mouseP*0.6, 0.3);
        square1.interpolate(mouseP*0.5,0.3);
        square2.interpolate(mouseP*0.4,0.3);
        square3.interpolate(mouseP*0.3,0.3);
        square4.interpolate(mouseP*0.2,0.3);
        square5.interpolate(mouseP*0.1,0.3);
 

        
    }
    
    void draw(){
        ofSetColor(220,20,60);
        ofDrawRectangle(10,10,100,100);
        
        ofSetColor(255,99,71);
        ofDrawRectangle(10,10,100,100);
        
        ofSetColor(240,230,140);
        ofDrawRectangle(10,10,100,100);
        
        ofSetColor(144,238,144);
        ofDrawRectangle(10,10,100,100);
        
        ofSetColor(135,206,250);
        ofDrawRectangle(10, 10,100,100);
        
        ofSetColor(147,112,219);
        ofDrawRectangle(10,10,100,100);
        
    }
    
};



#define sprite_h


#endif /* sprite_h */
