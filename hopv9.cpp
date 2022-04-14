#include <iostream>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Hopscotch
This program tests lists of numbers as valid hopscotch games*/

int main()
{
    int lists, size, x, position;
    //input # of lists to run
    cin >> lists;   
    for (int loop=0; loop<lists; loop++){
        position = 0;
        cin >> size;
        
        int activeElements[size]{0};
        bool revisitCheck[size]{false};

        //input current list
        for(int j=0; j<size; j++){
            cin >> x;
            activeElements[j] = x;
        }

        //play game
        while (1 == 1)  //intentional infinite loop, breaks when game ends
        {
            revisitCheck[position] = true;
            position += activeElements[position];
            
            
            if (position < 0)       //left bound
            {  
                cout << "invalid\n";
                break;
            }
            else if (position >= size)        //right bound
            { 
                cout << "valid\n";
                break;
            }
            else if (revisitCheck[position] == true) //infinite loop
            {   
                cout << "invalid\n";
                break;                
            }
        }
    }
}