/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Implementation file for the space class.
 *********************************************************************/

#include "Space.hpp"

Space::Space(){
    top = NULL;
    bottom = NULL;
    right = NULL;
    
    //for (int i = 0; i < 10; i++)
    //    inventory[i] = '0';
    
    moveStatus = false;
}


void Space::setBottom(Space *bot){
    bottom = bot;
}

void Space::setTop(Space *tp){
    top = tp;
}

void Space::setRight(Space *rt){
    right = rt;
}

bool Space::lookAround(){
    return 0;
}

int Space::move(int){
    return 0;
}

int Space::changeSpace(){
    return 0;
}


int Space::getName(){
    return 0;
}

/*char Space::getInventory(int i){
    return inventory[i];
}

void Space::setInventory(int i, char c){
    inventory[i] = c;
}*/
