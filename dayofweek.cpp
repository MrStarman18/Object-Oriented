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
    int monthMath = month + 12*(int ((14-month)/12)) - 2;
    int yearMath = year - (int ((14-month)/12));
    int x = yearMath + int (yearMath/4) - int (yearMath/100) + int (yearMath/400);
    int dayMath = (day + x + ((31*monthMath)/12) ) % 7;
    return dayMath;
}

int main(int argc, char*argv[])
{
    if (argc > 2)
    {
        int day = dayofweek(stoi(argv[1]), stoi(argv[2]), stoi(argv[3]));
        std::cout << argv[1] << '/' << argv[2] << '/' << argv[3] << " ";
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