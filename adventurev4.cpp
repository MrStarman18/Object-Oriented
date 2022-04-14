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
    Room r1 = game.getRoom(pathway);
    Door doorArray[100]{}; int doorCount = 0;
    //Path pathArray[100]{}; int pathCount = 0;
    while (r1.isExit() == false)
    {
        Door d1 = r1.getFirstDoor();
        while(r1.isValidDoor(d1))   //repeats for all doors in a room
        {
            doorArray[doorCount] = d1; ++doorCount;
            d1 = r1.getNextDoor(d1);
        }

        while (doorCount > 0)
        {
            if (pathway.add(doorArray[doorCount-1]))
            {
                r1 = r1.getNextRoom(doorArray[doorCount-1]);
                break; //return to adding-door-to-array loop
            }
            else    //can't add next door
                --doorCount;
        }
        if (doorCount == 0 && r1.isExit() == false)  //runs if previous loop not broken
        {
            cout << "no solution\n";
            return 0;
        }
    }
    cout << pathway;    //runs if while loop ends (exit is found)
    return 0;
}