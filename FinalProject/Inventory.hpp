/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: Definition file for the inventory class.
 *********************************************************************/

#ifndef Inventory_hpp
#define Inventory_hpp

#include <iostream>

class Inventory
{
private:
    struct Node
    {
        char item;
        Node *next, *prev;
        Node(char item1)
        {
            item = item1;
            next = NULL;
            prev = NULL;
        }
    };
    
    Node *head, *rear;
    int count;
    
public:
    //Constructor/Destructor
    Inventory();
    ~Inventory();
    
    //Member functions
    bool isEmpty();
    void addBack(char item);
    void removeFront();
    void getInventory();
    
};

#endif /* Inventory_hpp */
