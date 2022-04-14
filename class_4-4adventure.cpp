#include <iostream>

class Door 
{
private:
    std::string description;
    Room * newRoom; //Door leads to Room, doesn't make its own Room
    bool locked;
};

class Room
{


    Item * inventory;   //Items can be moved from Room to Room, so Room doesn't own the Item

};

