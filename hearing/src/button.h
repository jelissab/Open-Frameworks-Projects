//
//  button.h
//  button
//
//  Created by Jelissa Bueza and Gavin Badillo
//
//

#ifndef button_button_h
#define button_button_h
#define INVALID_BUTTON -1

class Button{
    
    ofImage button;

public:
    
    int w, h, x, y;
    bool clicked = true;
    int soundValue;
    
    Button(){};
    
    Button(int xCoord, int yCoord, int width, int height){
        w=width;
        h=height;
        x=xCoord;
        y=yCoord;
    }
    
        int update(int mouseX, int mouseY){
        if(mouseX > x && mouseX < x+w){
            if(mouseY > y && mouseY < y+h){                return soundValue;
            }
        }
            return INVALID_BUTTON;
    }
    
    
    
    //sets the image for the button
    void onImage(string s){
        button.load(s);
    }
    
    void draw(){
        button.draw(x,y,w,h);
    }
    
        
    };

#endif
