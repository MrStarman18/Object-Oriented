#include <iostream>
#include <iterator>
#include <string>
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
    int row = 0;
    for (int loopOne{0}; loopOne < dimension2; loopOne++)
    {
        for (int loopTwo{((loopOne*dimension1) + row)}; loopTwo < loopTwo + dimension1; loopTwo++)
        {
            std::cout << matrix[loopTwo] << " ";
        }
        cout << '\n';
        row += 1;
        cout << "row: " << row << '\n';
    }

    return 0;
}