/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Definition file for the Game class.
 *********************************************************************/

#ifndef Game_hpp
#define Game_hpp
#include "Present.hpp"
#include "Past.hpp"
#include "Future.hpp"
#include "Purgatory.hpp"
#include "Space.hpp"
#include "Inventory.hpp"
#include <iostream>

class Game : public Space
{
private:
    Space *past, *present, *future, *purgatory, *player;
    int timeLeft, invCount;
    Inventory *inventory;
    bool playerDead, playerWon;
    
    
public:
    //Constructor
    Game();
    ~Game();

    //Methods
    int getTimeLeft();
    bool getDead();
    bool getWon();
    void gamePlay();
};

#endif /* Game_hpp */
