#include <iostream>
#include <string>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Day of Week
This program determines the day of an input date based on Gregorian calendar*/

//compute day of week (final answer)
int dayofweek(int month,int day,int year)
{ 
    //"year" = x variable from main
    return int (day + year + ((31*month)/12) ) % 7;
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
        
        int day = dayofweek(month, stoi(argv[2]), x);
        std::cout << monthInput << '/' << argv[2] << '/' << yearInput << " ";
        if (day == 0)
        {
            std::cout << "falls on Sunday.";
        }
        else if (day == 1)
        {
            std::cout << "falls on Monday.";
        }
        else if (day == 2)
        {
            std::cout << "falls on Tuesday.";
        }
        else if (day == 3)
        {
            std::cout << "falls on Wednesday.";
        }
        else if (day == 4)
        {
            std::cout << "falls on Thursday.";
        }
        else if (day == 5)
        {
            std::cout << "falls on Friday.";
        }
        else if (day == 6)
        {
            std::cout << "falls on Saturday.";
        }
    }
    else
    {
        std::cout << "please input date (m/d/y)";
    }
    return 0;
}