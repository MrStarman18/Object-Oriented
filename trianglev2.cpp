#include <iostream>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Triangle
This program outputs triangles of an input length */

int main()
{
    int height{1};
    int height_input{};
    std::cin >> height_input;
    
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