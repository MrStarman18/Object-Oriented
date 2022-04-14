#include <iostream>
#include <string>
#include <iterator>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Mirror, Mirror
This program simulates a laser in a reflective grid*/
//didn't include dynamic variables, and thus reached segmentation fault.

int main(int argc, char*argv[])
{
    if (argc > 2)
    {
        int gridHeight = stoi(argv[1]), gridWidth = stoi(argv[2]), cells, reflections;
        int laserGrid[gridWidth][gridHeight]{ };
        int xHeight = 0, xWidth = 0;
        bool goingDown = true, goingRight = true;

        for (cells = 0, reflections = 0; laserGrid[xWidth][xHeight] < 1; cells++)
        {
            laserGrid[xWidth][xHeight] += 1;
            
            //vertical laser move
            if (goingDown)
            ++xHeight;
            else
            --xHeight;
            //horizontal laser move
            if (goingRight)
            ++xWidth;
            else
            --xWidth;   

            //reflect?
            if (xHeight == gridHeight)
            {
                goingDown = !goingDown;
                xHeight -= 2;
                ++reflections;
            }
            else if (xHeight < 0)
            {
                goingDown = !goingDown;
                xHeight += 2;
                ++reflections;

            }
            if (xWidth == gridWidth)
            {
                goingRight = !goingRight;
                xWidth -=2;
                ++reflections;
            }
            else if (xWidth < 0)
            {
                goingRight = !goingRight;
                xWidth +=2;
                ++reflections;
            }
        
        }

        cout << cells << " cells, " << reflections << " reflections\n";
    }

    else
    {
        cout << "usage: laser simulation (input grid dimensions)\n";
    }
}
