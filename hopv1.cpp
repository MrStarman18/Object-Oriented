#include <iostream>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Hopscotch
This program tests lists of numbers as valid hopscotch games*/

// void playGame()
// {
//     if (//less than starting place in activeElements or currentNumber is already used)
//     {
//         cout << "invalid\n";
//         break;
//     }

//     //or after the loop, if it finishes without breaking
//     cout << "valid\n";
// }

int main()
{
    int listsToInput{}, *activeElements{new int[]{}}, *numberElements{new int[]{}}, *usedElements{new int[]{}};
    std::cin >> listsToInput;
    //input # of elements in each game
    for (int loop{1}; loop <= listsToInput; loop++) //start at 1 so numberElements[0] == 0
    {
        std::cin >> numberElements[loop];
        //input elements of game, # of inputs == numberElements[loop]
        for (int loopTwo{0}; loopTwo < numberElements[loop]; loopTwo++)
        {
            std::cin >> activeElements[usedElements[loop] + loopTwo];
        }
        usedElements[loop] = (usedElements[loop-1] + numberElements[loop]);   //usedElements determines what # to start inputting when line 31 called
    }

    //play game
    int *currentNumber, nextNumber;
    for (int loop{0}; loop < listsToInput; loop++)
    {
        while (nextNumber <= usedElements[loop+1])
        {
            *currentNumber = activeElements[loop + numberElements[loop]]; //first loop is where numberElements[0] must == 0
            nextNumber = *(currentNumber + *currentNumber);
            if (nextNumber < usedElements[loop])
            {
                cout << "invalid\n";
                break;
            }
        }
        cout << "valid\n";

    }
    // //test output
    //     for (int loopOne{ 0 }; loopOne < height; ++loopOne) // step through the rows in the array
    //     {
    //         for (int loopTwo{ 0 }; loopTwo < numberElements[loopOne]; ++loopTwo) // step through each element in the row
    //         {
    //             std::cout  << activeElements << " ";
    //         }
    //         cout << '\n';
    //         cout << "usedElements: " << usedElements[loop] << '\n';
    //     }

    delete[] activeElements;
    activeElements = nullptr;
    delete[] numberElements;
    numberElements = nullptr;
    delete[] usedElements;
    usedElements = nullptr;
}