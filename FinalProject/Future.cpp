/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Implementation file for the future class.
 *********************************************************************/

#include "Future.hpp"

Future::Future(){
    top = NULL;
    right = NULL;
    bottom = NULL;
    flashLight = false;
    moveChoice = 0;
}

void Future::setBottom(Space *bot){
    bottom = bot;
}

void Future::setTop(Space *tp){
    top = tp;
}

void Future::setRight(Space *rt){
    right = rt;
}

int Future::move(int invCount){
    //int invCount = 0;
    int menuSelection = 0;
    std::string str;
    
    //Increments invCount based on if they have the flashlight and book in their possession
    /*for (int i = 0; i < 10; i++){
        if (ptr->getInventory(i) == 'f' || ptr->getInventory(i) == 'b')
            invCount++;
    }*/
    
    if (invCount >= 2){
        std::cout << "You are back in this land of glass houses. You see strange machines flying overhead. They cannot hear or see you. Or they just don't care." << std::endl;
        std::cout << "How do you proceed?" << std::endl;
        
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Look Around" << std::endl;
            std::cout << "2. Visit the Scientist" << std::endl;
            std::cout << "3. Head back to the darkness" << std::endl;
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
            moveChoice = 2;
            //this->changeSpace(*ptr);
            return 2;
        }
        else{
            moveChoice = 1;
            //this->changeSpace(*ptr);
            return 2;
        }
    }
    else if (invCount == 1) {
        std::cout << "You are in the lands of glass and neon lights." << std::endl;
        std::cout << "How do you proceed?" << std::endl;
        
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Look Around" << std::endl;
            std::cout << "2. Head back into the shadows" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection !=2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or a 2" << std::endl;
                menuSelection = 0;
            }
        }
        
        //Call function based on selection
        if (menuSelection == 1){
            if (this->lookAround())
                return 5;
        }
        else if (menuSelection == 2){
            moveChoice = 1;
            return 2;
        }
    }
    else {
        std::cout << "You awaken on a perfectly pristine world. Glass houses and neons lights blind you after you emerged from the utter darkness." << std::endl;
        std::cout << "As your eyes adjust to the bright lights. You hear buzzing overhead" << std::endl;
        std::cout << "Machines fly overhead and don't seem to acknowledge your pleas for help" << std::endl;
        std::cout << "How do you proceed?" << std::endl;
        
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Look Around" << std::endl;
            std::cout << "2. Head back into the shadows" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection !=2)){
                std::cout << "Error: Invalid Entry! Please enter a 1" << std::endl;
                menuSelection = 0;
            }
        }
        if (menuSelection == 1){
            if (this->lookAround())
                return 5;
        }
        else if (menuSelection == 2){
            moveChoice = 1;
            return 2;
        }
    }
    return 0;
}

bool Future::lookAround(){
    if (flashLight == true){
        std::cout << "You can't seem to find anything else that will help you on the journey." << std::endl;
    }
    else {
        std::cout << "You look around this new world and find that there is not much around to give you any hope" << std::endl;
        std::cout << "Eventually though you stumble upon what appears to be an old flashlight" << std::endl;
        std::cout << "How do you proceed?" << std::endl;
        
        int menuSelection = 0;
        std::string str;
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Pick it up" << std::endl;
            std::cout << "2. Leave it be" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1" << std::endl;
                menuSelection = 0;
            }
        }
        
        if (menuSelection == 1) {
            std::cout << "You pick up the flashlight and place it in your pack" << std::endl;
            flashLight = true;
            return true;
            //ptr->setInventory(0,'f');
        }
        else
            std::cout << "You leave the flashlight be and head back." << std::endl;
    }
    return false;
}

int Future::changeSpace(){
    if (moveChoice == 2) {
        std::cout << "You follow the directions in the journal to the scientists house." << std::endl;
        std::cout << "He answers the door and it becomes apparent that he has seen you before." << std::endl;
        std::cout << "Aware of your obvious amnesia he tells you of your attempts to head back in time using his most recent invention" << std::endl;
        std::cout << "'Perhaps you can find out truth if you test out my machine' he tells you. " << std::endl;
        std::cout << "How do you proceed?" << std::endl;
        
        int menuSelection = 0;
        std::string str;
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Jump into the machine" << std::endl;
            std::cout << "2. Leave the scientist alone" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                menuSelection = 0;
            }
        }
        
        if (menuSelection == 1){
            std::cout << "You hop into the machine. As the machines door locks and the machines starts to run you hear him laughing maniacally." << std::endl;
            std::cout << "You are sent to the past." << std::endl;
            //ptr = this->right;
            return moveChoice;
        }
        else {
            std::cout << "You leave the scientist and head back." << std::endl;
            return 0;
        }
    }
    else {
        std::cout << "You head back into the shadowy abyss that you came from." << std::endl;
        return moveChoice;
        //ptr = this->top;
    }
}

int Future::getName(){
    return 2;
}

