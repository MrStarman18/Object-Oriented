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
        cout << "Big loop "; //test for seg fault
        Door d1 = r1.getFirstDoor();
        while(r1.isValidDoor(d1))   //repeats for all doors in a room
        {
            pathArray[pathCount] = pathArray[pathCount-1]; 
            cout << "pathCount - 1: " << pathArray[pathCount-1] << endl;
            cout << "pathCount: " << pathArray[pathCount] << endl;
            if (pathArray[pathCount].add(d1))  //recursive add to pathArray Paths
                ++pathCount; 
            cout << "pathCount itself: " << pathCount << endl;
            d1 = r1.getNextDoor(d1);
            cout << "Door add "; //test for seg fault
            cout << "second pathCount - 1: " << pathArray[pathCount-1] << endl;
            cout << "second pathCount: " << pathArray[pathCount] << endl;
        }

        while (pathCount > 0)
        {
            r1 = game.getRoom(pathArray[pathCount-1]);
            cout << "line 33: " << pathArray[pathCount-1] << endl;
            if (r1.isValidDoor(r1.getFirstDoor()))  //if there's a valid door in this new room ()
            {
                cout << "Breaking ";    //test for seg fault
                break; //return to adding-door-to-array loop
            }
            else    //can't add next door
                --pathCount;
            cout << "pathCount "; //test for seg fault
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