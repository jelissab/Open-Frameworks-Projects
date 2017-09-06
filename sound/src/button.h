//
//  button.h
//  button
//
//  Created by Jelissa Bueza on 01/30/16
//
//

#ifndef button_button_h
#define button_button_h

class Button{
    
    ofImage button;

public:
    
    int w, h, x, y;
    bool clicked = true;
    
    Button(){};
    
    Button(int xCoord, int yCoord, int width, int height){
        w=width;
        h=height;
        x=xCoord;
        y=yCoord;
    }
    
        void update(int mouseX, int mouseY){
        if(mouseX > x && mouseX < x+w){
            if(mouseY > y && mouseY < y+h && clicked == true){
                clicked = false;
            } else if (clicked == false) {
                clicked = true;
            }
        }
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
