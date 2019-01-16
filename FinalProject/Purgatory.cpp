/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Implementation file for the purgatory class.
 *********************************************************************/

#include "Purgatory.hpp"

Purgatory::Purgatory(){
    Space::top = NULL;
    Space::right = NULL;
    Space::bottom = NULL;
    
    feltOnce = false;
    lightOn = false;
    
}

void Purgatory::setBottom(Space *bot){
    Space::bottom = bot;
}

void Purgatory::setTop(Space *tp){
    Space::top = tp;
}

void Purgatory::setRight(Space *rt){
    Space::right = rt;
}

int Purgatory::move(int invCount){
    //int invCount = 0;
    int menuSelection = 0;
    std::string str;;
    
    //Increments invCount based on if they have the flashlight and book in their possession
    /*for (int i = 0; i < 10; i++){
        if (ptr->getInventory(i) == 'f')
            invCount++;
    }*/
    
    if (invCount >= 1){
        std::cout << "You are in the heart of darkness." << std::endl;
        std::cout << "How do you proceed?" << std::endl;
        
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Look Around" << std::endl;
            std::cout << "2. Feel Around For the Chasm" << std::endl;
            std::cout << "3. Shine the flashlight" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2 && menuSelection != 3)){
                std::cout << "Error: Invalid Entry! Please enter a number between 1 or 2." << std::endl;
                menuSelection = 0;
            }
        }
        
        //Call function based on selection
        if (menuSelection == 1){
            if (this->lookAround())
                return 5;
        }
        else if (menuSelection == 2){
            //this->changeSpace();
            return 2;
        }
        else if (menuSelection == 3){
            lightOn = true;
            if (this->lookAround())
                return 5;
        }
    }
    else {
        std::cout << "You awaken in a panic." << std::endl;
        std::cout << "Surrounded by darkness." << std::endl;
        std::cout << "You cannot remember anything." << std::endl;
        std::cout << "What do you do?" << std::endl;
        
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Look Around" << std::endl;
            std::cout << "2. Feel Around" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2)){
                std::cout << "Error: Invalid Entry! Please enter a number between 1 or 2." << std::endl;
                menuSelection = 0;
            }
        }
        
        //Call function based on selection
        if (menuSelection == 1){
            if (this->lookAround())
                return 5;
        }
        else if (menuSelection == 2){
            //this->changeSpace();
            return 2;
        }
    }
    return 0;
}

//Function for the look around option (mostly just text)
bool Purgatory::lookAround(){
    if (lightOn){
        std::cout << "You shine your flashlight into the darkness..." << std::endl;
        std::cout << "Out of the corner of your eye you catch a glimpse of a small leather bound book." << std::endl;
        std::cout << "The cover reads 'The Journal of Joseph Lynch'" << std::endl;
        std::cout << "As you read through the pages of the journal, many of your memories come flooding back to you." << std::endl;
        std::cout << "You are almost certain that you were this Joseph Lynch" << std::endl;
        std::cout << "The book also talks of a scientist that lives in the lands of glass buildings" << std::endl;
        std::cout << "Maybe this scientist can answer some of your questions?" << std::endl;
        //ptr->setInventory(1,'f');
        return true;
    }
    else
        std::cout << "It is pitch black. You cannot see a thing." << std::endl;
    
    return false;
}

//Function for the feelAround option. This option allows you to move to the future space
int Purgatory::changeSpace(){
    if (feltOnce){
        std::cout << "You feel around for the chasm and enter." << std::endl;
        //ptr = bottom;
    }
    else {
        std::cout << "You feel around in the darkness." << std::endl;
        std::cout << "As you are feeling around in the darkness you the ground starts to get warmer" << std::endl;
        std::cout << "You follow the warmth and the ground gives out beneath you." << std::endl;
        std::cout << "You find yourself in a free fall" << std::endl;
        feltOnce = true;
        //ptr = bottom;
    }
    return 0;
}


int Purgatory::getName(){
    return 1;
}









