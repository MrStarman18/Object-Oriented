#include <iostream>
using namespace std;
//demonstrates undefined array values.

int main()
{
    int a[10];
    int j = 3;

    a[0] = 5;
    a[9] = 3;
    a[j] = 2;
    a[j-1] = 7;

    for (int i=0; i<10; i++)
        cout << i << ": " << a[i] << '\n';
}