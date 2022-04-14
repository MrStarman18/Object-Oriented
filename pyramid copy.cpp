#include <iostream>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Pyramid
This program outputs pyramids of an input height/width */
//partial program, completes left 1/2 of pyramid
int main(int argc, char *argv[])
{
    int height{1};
    int height_input{};
    int row{1};

    //check if number was inputted for height_input
    if (argc > 1)
    {
        height_input = std::stoi(argv[1]);
    }
    else
    {
        height_input = 5;
    }
    //pyramid output
     while (height <= height_input) 
    {
        int spaces_needed = height_input - row;    //counts # of spaces
        for (int spaces{0}; spaces < spaces_needed; ++spaces)
        {
            std::cout << " ";
        }
        for (int loop{0}; loop < height*2;loop+=2)        //counts # of *'s
            {
            std::cout <<"*";
            }

        std::cout << '\n';
        height++;    
        row++;        //counts # of columns
    }
    return 0;
}