#include <iostream>

int main()
{
    int x = 19;
    int y = (x & 1);    //binary & operator, y == 1

    //the type of (x & 1) is an int
    
    if (x & 1)  //(x & 1) != 0, so treated as true
}

/*  binary & arithmetic (lines 6 and 10):
    10011
&   00001
---------
    00001