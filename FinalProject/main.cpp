/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Main file for the final project.
 *********************************************************************/

#include <iostream>
#include "Game.hpp"

int main() {
    std::cout << "A slowly revealed text based game where a man that has waken up with no memory is on the hunt for anything that can remind him of his past." << std::endl;
    
    Game game;
    
    while (game.getTimeLeft() > 0 && game.getDead() == false && game.getWon() == false){
        game.gamePlay();
    }
    
    if (game.getDead() || game.getTimeLeft() <= 0)
        std::cout << "You have lost the game." << std::endl;
    else
        std::cout << "You have won the game! Thanks for playing!" << std::endl;
    
    return 0;
}
