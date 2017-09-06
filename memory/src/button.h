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
    
    int x, y, w, h;
    bool clicked;
    
    
    Button(){};
    
    Button(int xCoord, int yCoord, int width, int height){
        w=width;
        h=height;
        x=xCoord;
        y=yCoord;
        clicked=true;
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
    
    void draw(){
        button.draw(x,y,w,h);
    }
    
    void onImage(string s){
        button.load(s);
    }
   
        
    };

#endif
