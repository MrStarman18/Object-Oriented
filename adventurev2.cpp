#include <iostream>
#include "adventure.h"
using namespace std;
/*Developer: Justin T. Alexander
Class: 
Project: Adventure
This program finds an escape route from a text adventure game */

int main()
{
    Adventure game;
    Path p1 = game.getStart();    //start Adventure with first path
    Room r1 = game.getRoom(p1);
    Room * currentRoom = &r1;
    Door d1 = currentRoom->getFirstDoor();
    Door * currentDoor = &d1;
    Room fullMaze[100]{};
    int doorsInRoom = 0, doorsVisited = 0;
    
    while ( currentRoom->isExit() != true)
    {
        currentDoor = &(currentRoom->getFirstDoor());
        //add up that we've visited the current room. This can impact which doors we check to visit next, 
        //prevent infinite loop in door checking loop.
        fullMaze[(*currentRoom)] = 1;

        doorsInRoom = 0; doorsVisited = 0;
        //for (first(current) door; while next door is valid; currentDoor = next door)
        for(*currentDoor; currentRoom->isValidDoor(currentRoom->getNextDoor(*currentDoor)); currentDoor = &(currentRoom->getNextDoor(*currentDoor)))
        {
            ++doorsInRoom;  //always runs
            if (fullMaze[currentRoom->getNextRoom(*currentDoor)] != 1)  //if room through door hasn't been visited
            {
                currentRoom  = &(currentRoom->getNextRoom(*currentDoor))    //doesn't make new room variable, issue w l.26?
                p1.add(*currentDoor);    //does *currentDoor return an actual door?
                break;  //currentDoor updated in big while loop
            }
            ++doorsVisited; //only runs if NextDoor = 1 / NextDoor has been visited
        }

        if (doorsInRoom == doorsVisited)    //if all doors in room have been visited, inf. loop.
        {
            std::cout << "no solution\n";
            return 0;
        }

    }
    std::ostream & operator<<(ostream &out,Path p1); //Runs if exit reached successfully
    return 0;
}
