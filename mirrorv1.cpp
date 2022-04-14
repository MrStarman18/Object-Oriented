#include <iostream>
#include <string>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Mirror, Mirror
This program simulates a laser in a reflective grid*/

// void arrayOutput(int height, int width) //test code, delete before submission
// {
//     for (int loopOne{0}; loopOne < height; loopOne++)
//     {
//         for (int loopTwo{0}; loopTwo < width; loopTwo++)
//         {
//             cout << width + height;
//         }
//         cout << '\n';
//     }
// }

int main(int argc, char*argv[])
{
    if (argc > 2)
    {
        int gridHeight = stoi(argv[1]), gridWidth = stoi(argv[2]), cells, reflections;
        int laserGrid[gridHeight][gridWidth]{ };
        int xHeight = 0, xWidth = 0;
        bool goingDown = true, goingRight = true;

        for (cells = 0, reflections = 0; laserGrid[xHeight][xWidth] < 1; cells++)
        {
            laserGrid[xHeight][xWidth] += 1;
            
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
                reflections++;
            }
            if (xWidth == gridWidth)
            {
                goingRight = !goingRight;
                reflections++;
            }
        }

        cout << cells << " cells, " << reflections << " reflections\n";
    }

    else
    {
        cout << "usage: laser simulation (input grid dimensions)\n";
    }
}
