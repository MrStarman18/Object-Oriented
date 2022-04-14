#include <iostream>
#include <string>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Collatz Sequence
This program computes the collatz sequence of given number(s)*/
int collatz(int xNumber) //runs if argc = 2 or argc >= 3
{
    //test print
    int length;
    for (length = 1; xNumber != 1; length++)
    {
        if (xNumber % 2 == 0)   //even #
        {
            xNumber/=2;
        } 
        else                    //odd #
        {
            xNumber = 3*xNumber + 1;
        }
    }
    return length;
}

int main(int argc, char*argv[])
{
    //determine min & max from inputs
    int max, min, length;
    if (argc == 2)      //if only one number entered, assume min = 1
    {
        min = 1;
        max = stoi(argv[1]);
    }
    else if (argc >= 3) 
    {
        if ((stoi(argv[1])) > 0)    //min = 0 breaks conjecture   
        {
            min = stoi(argv[1]);
            max = stoi(argv[2]);
        }
        else                //if 2 numbers entered, but min = 0
        {
        std::cout << "usage: collatz [min] max" << '\n';
        return 0;
        }
    }
    else                //no numbers entered
    {
        std::cout << "usage: collatz [min] max" << '\n';
        return 0;
    }
    //main computation
    int maxLength = 1;
    for (int number{min}; number<=max; number++)
    {
        length = collatz(number);
        if (length > maxLength)
        {
            maxLength = length;
        }
    }
    cout << "Maximum Collatz Sequence length between "
    << min << " and " << max << " is " << maxLength << ".\n";
    return 0;
}