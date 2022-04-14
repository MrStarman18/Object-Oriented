#include <iostream>
#include <iomanip>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Multiplication Table
This program outputs a multiplication table*/


int main(int argc, char*argv[])
{
    //program runs if two numbers were input as parameters
    if (argc > 2)
    {
        //table heading (numbers 1-width and underline)
        for (int width{1}; width < stoi(argv[2]); ++width)
        {
            cout << std::setw(5) << std::right << width;
        }
        cout << "\n" << "---";
        for (int width{1}; width < stoi(argv[2]); ++width)
        {   
            cout << "-----";
        }
        cout << "\n";

        //left table side 
        for (int height{1}; height < stoi(argv[1]; ++height)
        {
            cout << std::setw(3) << std::right << height << "|";

            //computation
            for (int width{1}; width < stoi(argv[2]); ++width)
            {
                cout << std::setw(5) << std::right << height*stoi(argv[2]);
            }
        }
        


    }
    else 
    {
        cout<<"usage: multiplication table integer-list";
    }
    return 0;
}