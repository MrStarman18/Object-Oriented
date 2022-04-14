#include <iostream>
#include <vector>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Hopscotch
This program tests lists of numbers as valid hopscotch games*/

int main()
{
    int listsToInput{};
    std::cin >> listsToInput;
    std::vector<int> activeElements (1, 0);
    std::vector<int> numberElements (listsToInput, 0);
    std::vector<int> usedElements (1, 0);

    //input # of elements in each game
    for (int loop{1}; loop <= listsToInput; loop++) //start at 1 so numberElements[0] == 0 && usedElements[0] == 0
    {
        std::cin >> numberElements[loop];
        usedElements.resize( usedElements.size() + numberElements[loop]);
        activeElements.resize( usedElements.size() );
        usedElements[loop] = usedElements[loop-1] + numberElements[loop]; //usedElements determines what # to start inputting when line 25 called
        //input elements of game, # of inputs == numberElements[loop]
        for (int loopTwo{0}; loopTwo < numberElements[loop]; loopTwo++)
        {
            std::cin >> activeElements[usedElements[loop-1] + loopTwo];
        }  
    }

    //play game
    int *currentNumber{new int}, nextNumber{};
    std::vector<int> revisitCheck (activeElements.size(), 0);

    for (int loop{0}; loop < listsToInput; loop++)
    {
        *currentNumber = activeElements[numberElements[loop]];//good //first loop is where numberElements[0] must == 0
        cout << "currentNumber: " << *currentNumber << '\n';
        while (1==1)    //intentional infinite loop, breaks when game ends
        {
            nextNumber = activeElements[numberElements[loop] + *currentNumber];
            cout << "nextNumber: " << nextNumber << '\n';
            revisitCheck[*currentNumber] += 1;
            if (nextNumber < usedElements[loop])        //left bound
            {
                cout << "invalid (negative)\n";
                break;
            }
            else if (nextNumber > usedElements[loop+1]) //right bound
            {
                cout << "valid\n";
                break;
            }
            else if (revisitCheck[*currentNumber] >= 1)  //infinite loop
            {
                cout << "invalid (infinite)\n";
                break;
            }
            *currentNumber = activeElements[(loop + numberElements[loop]) + nextNumber];
            cout << "currentNumber2: " << *currentNumber << '\n';
        }
    }
}