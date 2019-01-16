/*********************************************************************
 ** Program name: Final
 ** Author: Humza Ahmed
 ** Date:   8/13/18
 ** Description: implementation file for the inventory class.
 *********************************************************************/

#include "Inventory.hpp"

//Constructor
Inventory::Inventory(){
    head = NULL;
    rear = NULL;
    count = 0;
}

//Destructor
Inventory::~Inventory(){
    Node *ptr = head;
    
    while (ptr->next != NULL){
        //std::cout << "Loop" <<std::endl;
        head = head->next;
        ptr->next = NULL;
        delete ptr;
        ptr = head;
    }
}

//Checks if Inventory is empty
bool Inventory::isEmpty(){
    if (head == NULL)
        return true;
    else
        return false;
}

//Take user inputted char create Node w/ user inputted int and appends to back of list
void Inventory::addBack(char item){
    
    //Dynamically allocates new Node with value
    Node *ptr = NULL;
    ptr = new Node(item);
    
    //If list is empty sets head to new Node. sets rear next/prev and head next/prev to Null
    if (isEmpty()){
        head = ptr;
        rear = ptr;
        rear->next = head;
        rear->prev = head;
    }
    else if (count == 5){
        std::cout << "Inventory is Full!" << std::endl;
    }
    //If list is not empty
    else {
        rear->next = ptr;
        ptr->prev = rear;
        rear = ptr;
        head->prev = rear;
        rear->next = head;
    }
}


//Remove front Node of Inventory and free memory
void Inventory::removeFront(){
    Node *ptr = NULL;
    
    //If Inventory is empty does not attempt to free memory
    if (isEmpty()){
        std::cout << "Empty Inventory." << std::endl;
        return;
    }
    //Sets ptr to head, then points head at the next node and rear at the new head node. Then deletes ptr.
    else {
        ptr = head;
        head = head->next;
        rear->next = head;
        delete ptr;
    }
}

//Travers Inventory from head using next ptrs and prints values of each Node in Inventory
void Inventory::getInventory(){
    
    if (isEmpty()){
        std::cout << "The Inventory is empty." << std::endl;
        return;
    }
    
    Node *ptr = NULL;
    
    ptr = head;
    
    //While the next pointer is not the head print the contents
    while (ptr->next != head){
        std::cout << ptr->item << " ";
        ptr = ptr->next;
    }
    std::cout << ptr->item << std::endl;     //Displays very last value of Inventory
}
