#include <iostream>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Triangle
This program outputs triangles of an input length */

int main()
{
    int height_input{8};
    std::cin >> height_input;

    for (int height{0}; height < height_input; height++) {
        for (int loop{0}; loop < height;loop++) //counts # of *'s
            {
            std::cout <<"*";
            }
        std::cout << '\n';             //height counts # of columns
    }
    return 0;
} 