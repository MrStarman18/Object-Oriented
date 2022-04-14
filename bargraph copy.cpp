#include <iostream>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Horizontal Bar Graph
This program outputs bargraphs based on given command line parameters*/

int main(int argc, char*argv[])
{
    //check if numbers were input as parameters
    if (argc > 1)
    {
        //loop for each inputted number
        for (int inputTracker{1}; inputTracker < argc; ++inputTracker)
        { 
            std::cout<< argv[inputTracker] << "|";

            //output #'s
            for (int graph{0}; graph < stoi(argv[inputTracker]); ++graph)
            {
                std::cout<< "#"; 
            }
            cout<< "\n";
        }
    }
    else    //no numbers input as parameters
    {
        std::cout<<"usage: bargraph integer-list" << "\n";
    }
}