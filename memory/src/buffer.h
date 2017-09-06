//
//  buffer.h
//  jbueza Production Assignment 2
//
//  Created by Jelissa Bueza on 2/20/16.
//
//

#ifndef buffer_h
#define buffer_h

class Buffer{
    
public:
    
    int head, tail, length, w, h;
    bool init;
    ofImageType type;
    
    vector<ofImage> buff;
    
    Buffer(){}
    
    Buffer(int width, int height, ofImageType imgType, int size){
        
        head = 0;
        
        w = width;
        h = height;
        
        init = false;
        type = imgType;
        
        length = size;
        
        //creates vector
        for(int i = 0; i< length; i++){
            buff.push_back(ofImage());
            buff[i].allocate(w,h,type);
        }
    }
    
    //adds frames to the vector
    void addFrame(ofPixels p){
        buff[head].setFromPixels(p);
        
        head = (head + 1)%length;
        
        if (head == length - 1 && init == false){
            init = true;
        }
    }
    
    //removes ten frames from the vector
    void deleteFrame(){
        buff.erase(buff.begin()+10, buff.begin()+20);
    }
    
    //draws the vector onto the screen
    void drawFrame(int x, int y, int width, int height){
        if(init){
            buff[head].draw(x, y, width, height);
            head = (head + 1)%length;
            }
    }
};

#endif /* buffer_h */
