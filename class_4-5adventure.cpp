//Dr. Towell's given for output answers in Adventure project.
Path p; //if we have a path to exit...

cout << p;  //output the path.

//Examples from Dr. Towell's demo adventure game
Room getNextRoom(string s)
{
    //"find something" loop
    for (int i=0; i < doors; i++) 
        if (exits[1].getDoorName() == s)
            return exits[i].getRoom();    
}

//forever loop
for(;;) == while(true)

//travelling between rooms
string cmd;
cin >> cmd; //expects something like north, south, east...
Room *other = currentRoom->getNextRoom(cmd);
if (other)  // or if (other != nullptr)
{
    cout << "You go" << cmd << ".\n";
    currentRoom = other;
}
else
{
    cout << "You can't do that right now. \n";
}