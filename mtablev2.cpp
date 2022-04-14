#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Multiplication Table
This program outputs a multiplication table*/

//determines what operation was input and computes that operation
int operation(int first, int second, int argc, char argv[])
{
    if (argc > 3)
    {
        std::string sign{argv[3]};
        if (sign=="+")
            {
            return first + second;
            }
        else if (sign=="-")
            {
            return first - second;
            }
        else if (sign=="x")
            {
            return first * second;
            }
        else if (sign=="/")
            {
            return first / second;
            }
        else if (sign=="%")
        {
        return first % second;
        }
    }
    else 
    {
        return first * second;
    }
    return 0;
}

int main(int argc, char*argv[])
{
    //program runs if two numbers 1-99 were input as parameters
    if (argc > 2 && stoi(argv[2]) >= 1 && stoi(argv[2]) <= 99 && stoi(argv[2]) >= 1 && stoi(argv[2]) <=99)
    {

        //table heading (numbers 1-width and underline)
        cout << std::setw(3) << "    ";
        for (int width{1}; width < stoi(argv[1]); ++width)
        {
            cout << std::setw(5) << std::right << width;
        }
        cout << "\n" << "---";
        for (int width{1}; width < stoi(argv[1]); ++width)
        {   
            cout << "-----";
        }
        cout << "\n";

        //left table side 
        for (int height{1}; height < stoi(argv[2]); ++height)
        {
            cout << std::setw(3) << std::right << height << "|";

            //computation
            for (int width{1}; width < stoi(argv[1]); ++width)
            {
                cout << std::setw(5) << std::right << operation(height, width, argc, argv[3]);
            }
            cout << "\n";
        }
        


    }
    else 
    {
        cout<<"usage: multiplication table integer-list";
    }
    return 0;
}