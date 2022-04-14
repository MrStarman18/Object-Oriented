#include <iostream>
#include <string>
#include <iterator>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Mirror, Mirror
This program simulates a laser in a reflective grid*/


int main(int argc, char*argv[])
{
    if (argc > 2)
    {
        int *gridHeight{new int{stoi(argv[1])}}, *gridWidth{new int{stoi(argv[2])}};
        int *cells{new int{}}, *reflections{new int{}};
        int *laserGridW{new int[*gridWidth]{ }};
        int *laserGridH{new int[*gridHeight]{ }};
        int *xHeight{new int{0}}, *xWidth{new int{0}};
        bool goingDown = true, goingRight = true;

        for (cells = 0, reflections = 0; laserGridW[*xWidth] < 1 && laserGridH[*xHeight] < 1; cells++)
        {
            laserGridW[*xWidth] += 1;
            laserGridH[*xHeight] += 1;
            
            //vertical laser move
            if (goingDown)
            ++*xHeight;
            else
            --*xHeight;
            //horizontal laser move
            if (goingRight)
            ++*xWidth;
            else
            --*xWidth;   

            //reflect?
            if (*xHeight == *gridHeight)
            {
                goingDown = !goingDown;
                *xHeight -= 2;
                ++*reflections;
            }
            else if (*xHeight < 0)
            {
                goingDown = !goingDown;
                *xHeight += 2;
                ++*reflections;

            }
            if (*xWidth == *gridWidth)
            {
                goingRight = !goingRight;
                *xWidth -=2;
                ++*reflections;
            }
            else if (*xWidth < 0)
            {
                goingRight = !goingRight;
                *xWidth +=2;
                ++*reflections;
            }
        
        }

        cout << cells << " cells, " << reflections << " reflections\n";
    }

    else
    {
        cout << "usage: laser simulation (input grid dimensions)\n";
    }
    
    delete cells; delete reflections; delete [] laserGridH; delete [] laserGridW;
    delete xHeight; delete xWidth; delete gridHeight; delete gridWidth;
    cells = nullptr;
    reflections = nullptr;
    laserGridH = nullptr;
    laserGridW = nullptr;
    xHeight = nullptr;
    xWidth = nullptr;
    gridHeight = nullptr;
    gridWidth = nullptr;
}
