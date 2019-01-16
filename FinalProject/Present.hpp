/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Definition file for the present class.
 *********************************************************************/

#ifndef Present_hpp
#define Present_hpp

#include <iostream>
#include "Space.hpp"

class Present : public Space
{
protected:
    
public:
    //Constructor
    Present();
    
    //Methods
    int move(int invCount);
    
    void setBottom(Space *bot);
    void setTop(Space *tp);
    void setRight(Space *rt);
    int getName();
};

#endif /* Present_hpp */
