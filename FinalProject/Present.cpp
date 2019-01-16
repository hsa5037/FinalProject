/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Implementation file for the present class.
 *********************************************************************/

#include "Present.hpp"

Present::Present(){
    top = NULL;
    right = NULL;
    bottom = NULL;
}

void Present::setBottom(Space *bot){
    bottom = bot;
}

void Present::setTop(Space *tp){
    top = tp;
}

void Present::setRight(Space *rt){
    right = rt;
}

int Present::move(int invCount){
    int menuSelection = 0;
    std::string str;
    
    if (invCount >= 5){
        std::cout << "You have broken free from the ice and you are now on your old property." << std::endl;
        std::cout << "In the corner of your eye you spot yourself!" << std::endl;
        std::cout << "How do you proceed?" << std::endl;
        
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Kill the man before he can kill your grandfather!" << std::endl;
            std::cout << "2. Don't do anything" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2)){
                std::cout << "Error: Invalid Entry! Please enter a number between 1 or 2." << std::endl;
                menuSelection = 0;
            }
        }
        
        //Call function based on selection
        if (menuSelection == 1){
            std::cout << "You reach for your gun to kill the man but you are out of ammo!" << std::endl;
            std::cout << "As a last ditch effort you take the tusk from off you back and lunge at the other version of yourself" << std::endl;
            std::cout << "You take the tusk and lunge it through his heart." << std::endl;
            std::cout << "As he takes his last breath, he sees who you really are." << std::endl;
            std::cout << "With a confused look on his face, he draws his last breath." << std::endl;
            std::cout << "He awakens in a panic." << std::endl;
            std::cout << "Surrounded by darkness" << std::endl;
            std::cout << "He cannot remember anything." << std::endl;
            std::cout << "What does he do?" << std::endl;
            return 15;
        }
        else if (menuSelection == 2){
            std::cout << "As you wait the man hops in a that old ratty time machine that the Scientist originally used to contact you." << std::endl;
            std::cout << "As the machine disappears. Everything goes black." << std::endl;
            std::cout << "You awaken in a panic." << std::endl;
            std::cout << "Surrounded by darkness" << std::endl;
            std::cout << "You cannot remember anything." << std::endl;
            std::cout << "What do you do?" << std::endl;
            return 10;
        }
    }
    else {
        std::cout << "Millions of years have go rushing by in the blink of an eye." << std::endl;
        std::cout << "A streak of sun hits you in the face." << std::endl;
        std::cout << "Groggily you open your eyes to get a glimpse of the world around you." << std::endl;
        std::cout << "Slowly at first, but then all at once the memories all come rushing back to you" << std::endl;
        std::cout << "You are on you own property. Your property from before all of this." << std::endl;
        std::cout << "As the memories come you remember the plot you had to go to the past to kill your own grandfather" << std::endl;
        std::cout << "All just to prove to little Billy Baskins down the street that time travel paradoxes aren't real." << std::endl;
        std::cout << "As these memories come back you realize you are still frozen in the ice." << std::endl;
        std::cout << "How do you proceed?" << std::endl;
    
        //Menu with input validation
        while (menuSelection == 0){
            std::cout << "1. Attempt to break free" << std::endl;
            std::cout << "2. Sit and Wait for the sun to melt you" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2)){
                std::cout << "Error: Invalid Entry! Please enter a number between 1 or 2." << std::endl;
                menuSelection = 0;
            }
        }
        
        //Call function based on selection
        if (menuSelection == 1){
            std::cout << "You struggle with all of your might and break free from the ice!" << std::endl;
            return 5;
        }
        else if (menuSelection == 2){
            std::cout << "As you sit and wait the cold of the ice around you becomes biting" << std::endl;
            std::cout << "You slowly begin to lose feeling in your arms and legs." << std::endl;
            std::cout << "You are dying of hypothermia!" << std::endl;
            return 10;
        }
    }
    return 0;
}

int Present::getName(){
    return 4;
}
