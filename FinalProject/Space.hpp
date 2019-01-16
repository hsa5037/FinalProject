/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Definition file for the space class.
 *********************************************************************/

#ifndef Space_hpp
#define Space_hpp

#include <iostream>
#include <string>
#include <sstream>
#include "Inventory.hpp"

class Space
{
protected:
    Space *top, *right, *left = NULL, *bottom;
    //char inventory[10];
    bool moveStatus;
    
public:
    //Constructor
    Space();
    
    //Methods
    virtual bool lookAround();
    virtual int move(int);
    virtual int changeSpace();
    virtual void setBottom(Space *bot);
    virtual void setTop(Space *tp);
    virtual void setRight(Space *rt);
    virtual int getName();
    Space getBottom();
    Space getRight();
    Space getTop();
    //char getInventory(int i);
    //void setInventory(int i, char c);
    
};

#endif /* Space_hpp */
