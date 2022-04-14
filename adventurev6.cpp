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
    Path pathway = game.getStart();
    Path p1 = pathway;
    Room r1 = game.getRoom(pathway);
    //Door doorArray[100]{}; int doorCount = 0;
    Path pathArray[100]{}; int pathCount = 0;
    while (r1.isExit() == false)
    {
        Door d1 = r1.getFirstDoor();
        while(r1.isValidDoor(d1))   //repeats for all doors in a room
        {
            pathArray[pathCount+1] = pathArray[pathCount].add(d1);  //recursive add to pathArray Paths
            ++pathCount;
            d1 = r1.getNextDoor(d1);
        }

        while (pathCount > 0)
        {
            if (pathArray[pathCount-1]) //Needs to be finished. If Path valid/next Door can be added. 
            {
                r1 = game.getRoom(pathArray[pathCount-1]);
                break; //return to adding-door-to-array loop
            }
            else if (r1.isValidDoor(r1.getFirstDoor()) == false)   //can't add next door
                --pathCount;
        } 
        if (pathCount == 0 && r1.isExit() == false)  //runs if previous loop not broken
        {
            cout << "no solution\n";
            return 0;
        }
    }
    cout << pathArray[pathCount-1];    //runs if while loop ends (exit is found)
    return 0;
}