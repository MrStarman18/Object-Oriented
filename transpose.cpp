#include <iostream>
#include <iterator>
#include <string>
#include <cmath>
using namespace std;
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Transpose
This program transposes a given matrix. */

int main()
{
    int dimension1, dimension2;
    std::cin >> dimension1 >> dimension2; //d1 is height, d2 is width
    int length = dimension1 * dimension2;
    int matrix[length]{ };

    //input matrix
    for (int loop{0}; loop < (length); loop++)
        {
            std::cin >> matrix[loop];
        }

    //compute & output transposition
    cout << dimension2 << " " << dimension1 << '\n';
    for (int loopOne{0}; loopOne < dimension2; loopOne++)
    {
        for (int loopTwo{loopOne}; loopTwo < length; loopTwo+= dimension2)
        {
        std::cout << matrix[loopTwo] << " ";
        } 
        cout << '\n';
    }

    return 0;
}