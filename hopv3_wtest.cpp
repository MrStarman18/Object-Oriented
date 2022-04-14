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
        std::cout << "numberElements: " << numberElements[loop] << endl;
        usedElements.resize( usedElements.size() + numberElements[loop]);
        activeElements.resize( usedElements.size() );
        usedElements[loop] = usedElements[loop-1] + numberElements[loop]; //usedElements determines what # to start inputting when line 25 called
        //input elements of game, # of inputs == numberElements[loop]
        for (int loopTwo{0}; loopTwo < numberElements[loop]; loopTwo++)
        {
            std::cin >> activeElements[usedElements[loop-1] + loopTwo];
        }
        for (int loopTwo{0}; loopTwo < numberElements[loop]; loopTwo++)
        {
            std::cout << activeElements[usedElements[loop-1] + loopTwo] << " ";
        }  
        std::cout << "\n";
    }

    //play game
    int *currentNumber{new int}, nextNumber{}, position{0};
    std::vector<int> revisitCheck (activeElements.size(), 0);

    for (int loop{0}; loop < listsToInput; loop++)
    {
        currentNumber = &(activeElements[usedElements[loop]]);//good //first loop is where numberElements[0] must == 0
        nextNumber = activeElements[usedElements[loop] + *currentNumber];
        cout << "currentNumber: " << *currentNumber << '\n';
        while (1==1)    //intentional infinite loop, breaks when game ends
        {
            
            revisitCheck[position] += 1;
            if (position < usedElements[loop] )        //left bound
            {
                cout << "invalid (negative)\n";
                break;
            }
            else if (position >= usedElements[loop + 1] ) //right bound
            {
                cout << "valid\n";
                break;
            }
            else if (revisitCheck[position] > 1)  //infinite loop
            {
                cout << "invalid (infinite)\n";
                break;
            }
            nextNumber = activeElements[position + *currentNumber]; 
            cout << "nextNumber: " << nextNumber << '\n';
            position += *currentNumber;
            cout << "position: " << position << '\n';
            *currentNumber = nextNumber;
            cout << "currentNumber2: " << *currentNumber << '\n';
            cout << '\n';
        }
        std::fill(revisitCheck.begin(), revisitCheck.end(), 0);
    }
    delete currentNumber;
    currentNumber = nullptr;
}