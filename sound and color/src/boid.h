//
//  boid.h
//
//  Created by NATHANWADE on 3/23/16.
//

//
// NOTE:
// This is a polymorphic class that you will derive your simulation's boid(s) from.
// Don't modify this header in any way.
//

#ifndef boid_h
#define boid_h

class Boid{
    
public:
    
    ofVec2f position, target;
    bool alive;
    vector<Boid *> neighbors;
    
    //
    // these pure virtual functions must be overridden in the derived class
    //
    virtual void setup() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
    
    virtual void link(Boid *ref){
        // push a pointer onto the neighbors vector
        neighbors.push_back(ref);
    }
};

#endif