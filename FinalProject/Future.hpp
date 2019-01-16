/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Definition file for the future class.
 *********************************************************************/

#ifndef Future_hpp
#define Future_hpp

#include <iostream>
#include "Space.hpp"

class Future : public Space
{
protected:
    bool flashLight;
    int moveChoice;
    
public:
    //Constructor
    Future();
    
    //Methods
    int move(int invCount);
    bool lookAround();
    int changeSpace();
    
    void setBottom(Space *bot);
    void setTop(Space *tp);
    void setRight(Space *rt);
    int getName();
};

#endif /* Future_hpp */
