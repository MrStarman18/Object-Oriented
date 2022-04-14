#include <iostream>
//The given interface to be utilized in the Adventure assignment.

// an "opaque" data type used to label an exit from a room, imagine its a string
class Door;

// a data type which represents a location in an adventure game, typically it
// would includes a name, description, and some items; allows door enumeration
class Room {
public:
    Door getFirstDoor();         // get any door (possibly invalid)
    bool isValidDoor(Door d);    // check if a door is valid
    Door getNextDoor(Door d);    // get another/next door (possibly invalid)

    Room getNextRoom(Door d);    // get connecting room, for a specific door
    bool isExit();               // check if this room is the end of the adventure
};

class Path {
public:
    bool add(Door r);            // add a door to this path, if possible

    friend ostream & operator<<(ostream &out,Path p);   //meaans that "cout << path" should work
};

class Adventure {
public: 
    Path getStart();             // get a path that starts the adventure
    Room getRoom(Path);          // get the room a path ends at
};