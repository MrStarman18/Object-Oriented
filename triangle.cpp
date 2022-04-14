#include <iostream>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Triangle
This program outputs triangles of an input height/width*/

int main(int argc, char *argv[])
{
    int height{1};
    int height_input{};

    //check if number was inputted for height_input
    if (argc > 1)
    {
        height_input = std::stoi(argv[1]);
    }
    else
    {
        height_input = 8;
    }
    //triangle output
     while (height <= height_input) 
    {
        for (int loop{0}; loop < height;++loop) //counts # of *'s
            {
            std::cout <<"*";
            }
        std::cout << '\n';
        height++;               //counts # of columns
    }
    return 0;
}