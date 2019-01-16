/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Implementation file for the game class.
 *********************************************************************/

#include "Game.hpp"

Game::Game(){
    purgatory = new Purgatory;
    future = new Future;
    past = new Past;
    present = new Present;
    //player = new Space;
    inventory = new Inventory;
    
    
    //Sets the board for the story/game
    //player = purgatory;
    purgatory->setBottom(future);
    future->setTop(purgatory);
    future->setRight(past);
    past->setRight(present);
    player = purgatory;
    
    //Set Time Left to 24 hours
    timeLeft = 20;
    invCount = 0;
    playerDead = false;
    playerWon = false;
}

void Game::gamePlay(){
    int name = 0, playerMove = 0;
    
    playerMove = player->move(invCount);
    
    if (playerMove == 2){
        name = player->getName();
        int space = player->changeSpace();
        
        if (name == 1){
            player = future;
        }
        else if (name == 2 && space == 1){
            player = purgatory;
        }
        else if (name == 2 && space == 2){
            player = past;
        }
        else if (name == 3 && space == 1)
            player = present;
        else if (name == 3 && space == 2)
            player = future;
        else if (name == 4)
            player = present;
    }
    
    if (playerMove == 5){
        inventory->addBack('x');
        invCount++;
    }
    
    if (playerMove == 10){
        playerDead = true;
    }
    
    if (playerMove == 15){
        playerWon = true;
    }
    
    timeLeft--;
    if (playerDead == false && playerWon == false){
        std::cout << "An hour has passed." << std::endl;
        std::cout << "You feel your strength starting to fade. You may have as little as " << timeLeft << " hours left until you fade out of existence." << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    }
}

int Game::getTimeLeft(){
    return timeLeft;
}

bool Game::getDead(){
    return playerDead;
}

bool Game::getWon(){
    return playerWon;
}

Game::~Game(){
    delete purgatory;
    delete future;
    delete past;
    delete present;
    delete inventory;
}
