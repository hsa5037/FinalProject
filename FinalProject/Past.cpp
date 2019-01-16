/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Implementation file for the past class.
 *********************************************************************/

#include "Past.hpp"

Past::Past(){
    top = NULL;
    right = NULL;
    bottom = NULL;
    tusk = false;
    gun = false;
    moveChoice = 0;
}

void Past::setBottom(Space *bot){
    bottom = bot;
}

void Past::setTop(Space *tp){
    top = tp;
}

void Past::setRight(Space *rt){
    right = rt;
}

int Past::move(int invCount){
    int menuSelection = 0;
    std::string str;
    
    if (invCount >= 4){
        std::cout << "You are in the frozen tundras of millions of years ago." << std::endl;
        std::cout << "How do you proceed?" << std::endl;
        
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Look Around" << std::endl;
            std::cout << "2. Sit and Wait" << std::endl;
            std::cout << "3. Use the ivory in the tusk to fix the time machine." << std::endl;
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
            moveChoice = 1;
            return 2;
        }
        else if (menuSelection == 3){
            moveChoice = 2;
            std::cout << "You successfully fixed the time machine!" << std::endl;
            std::cout << "It starts up and something goes immediately wrong!" << std::endl;
            return 2;
        }
    }
    else if (gun){
        std::cout << "You are in the frozen tundras of the last Ice Age." << std::endl;
        std::cout << "How will you proceed?" << std::endl;
        
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Look Around Outside" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                menuSelection = 0;
            }
        }
        if (menuSelection == 1){
            if (this->lookAround())
                return 5;
            else
                return 10;
        }
    }
    else {
        std::cout << "Your time machine has gone too far back in time!" << std::endl;
        std::cout << "The time dial states that you are 2 Million years in the past!" << std::endl;
        std::cout << "The frozen tundra of the Pleistocene Ice Age awaits you outside." << std::endl;
        std::cout << "Inside your time machine you spy a gun." << std::endl;
        std::cout << "How do you proceed?" << std::endl;
        
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Look Around Outside" << std::endl;
            std::cout << "2. Take the gun" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                menuSelection = 0;
            }
        }
        if (menuSelection == 1){
            if (this->lookAround())
                return 5;
            else
                return 10;
        }
        else if (menuSelection == 2){
            gun = true;
            return 5;
        }
    }
    return 0;
}

bool Past::lookAround(){
    if (tusk == true){
        std::cout << "You can't seem to find anything else that will help you on the journey." << std::endl;
    }
    else {
        std::cout << "You look around the snowy wasteland and find that there is not much around to give you any hope" << std::endl;
        std::cout << "As you are walking a mammoth comes charging at you." << std::endl;
        std::cout << "How do you proceed?" << std::endl;
        
        int menuSelection = 0;
        std::string str;
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Kill it" << std::endl;
            std::cout << "2. Run" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1" << std::endl;
                menuSelection = 0;
            }
        }
        
        if (menuSelection == 1 && gun == true) {
            std::cout << "You shoot the mammoth right between the eyes with you futuristic weapon" << std::endl;
            std::cout << "The mammoth is instantly killed" << std::endl;
            std::cout << "You remove and pick up one of it's tusks. You may need this later." << std::endl;
            tusk = true;
            return true;
            //ptr->setInventory(0,'f');
        }
        else if (menuSelection == 1 && gun == false) {
            std::cout << "You attempt to kill the beast but this is was a foolhearted mistake. You should have brought the gun" << std::endl;
            std::cout << "The mammoth is much too strong. It easily pierces your chest with one of it's tusks and leaves you for dead." << std::endl;
            return false;
        }
        else {
            std::cout << "You attempt to run but slip on a patch of ice. The Mammoth tramples over your body leaving you for the wolves" << std::endl;
            return false;
        }
    }
    return false;
}

int Past::changeSpace(){
    if (moveChoice == 1){
        std::cout << "As you sit and wait the batteries on your Time Machine start to die." << std::endl;
        std::cout << "Once the machine is out of power you have no choice but to embrace the bitter cold." << std::endl;
        std::cout << "Your breathing becomes slower, you lose feeling in your limbs." << std::endl;
        std::cout << "You are freezing alive!" << std::endl;
        return moveChoice;
    }
    else
        return moveChoice;
}

int Past::getName(){
    return 3;
}
