/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Definition file for the past class.
 *********************************************************************/

#ifndef Past_hpp
#define Past_hpp

#include <iostream>
#include "Space.hpp"

class Past : public Space
{
protected:
    bool tusk, gun;
    int moveChoice;
    
public:
    //Constructor
    Past();
    
    //Methods
    int move(int invCount);
    bool lookAround();
    int changeSpace();
    
    void setBottom(Space *bot);
    void setTop(Space *tp);
    void setRight(Space *rt);
    int getName();
};
#endif /* Past_hpp */
