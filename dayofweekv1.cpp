#include <iostream>
#include <string>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Day of Week
This program determines the day of an input date based on Gregorian calendar*/

//put computation into English and print
int dayofweek(int month,int day,int year)
{ 
    std::cout << month << '/' << day << '/' << year << " ";
    int dayofweek = int (dayInput + x + ((31*month)/12) ) % 7;
    if dayofweek = 0
    {
        std::cout << "falls on Sunday."
    }
    else if (dayofweek == 1)
    {
        std::cout << "falls on Monday."
    }
    else if (dayofweek == 2)
    {
        std::cout << "falls on Tuesday."
    }
    else if (dayofweek == 3)
    {
        std::cout << "falls on Wednesday."
    }
    else if (dayofweek == 4)
    {
        std::cout << "falls on Thursday."
    }
    else if (dayofweek == 5)
    {
        std::cout << "falls on Friday."
    }
    else if (dayofweek == 6)
    {
        std::cout << "falls on Saturday."
    }
}


int main(int argc, char*argv[])
{
    if (argc > 2)
    {
        //compute month
        int monthInput = stoi(argv[1]);
        int month = monthInput + 12*(int ((14-monthInput)/12)) - 2;
        //compute year
        int yearInput = stoi(argv[3]);
        int year = yearInput - (int ((14-monthInput)/12));
        //compute x
        int x = year + int (year/4) - int (year/100) + int (year/400);
        
        dayofweek(monthInput, stoi(argv[2]), yearInput)
    }
    else
    {
        std::cout << "please input date (m/d/y)";
    }
    return 0;
}