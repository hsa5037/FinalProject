/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Definition file for the purgatory class.
 *********************************************************************/

#ifndef Purgatory_hpp
#define Purgatory_hpp

#include <iostream>
#include "Space.hpp"

class Purgatory : public Space
{
protected:
    bool feltOnce, lightOn;
    
public:
    //Constructor
    Purgatory();
    
    //Methods
    int move(int);
    bool lookAround();
    int changeSpace();
    
    void setBottom(Space *bot);
    void setTop(Space *tp);
    void setRight(Space *rt);
    int getName();
};

#endif /* Purgatory_hpp */
