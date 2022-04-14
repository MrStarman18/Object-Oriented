#include <iostream>
using namespace std;

int main()
{
    int x;
    int s = 0;
    while (cin >> x)    //continually take inputs until ^D
        s += x;
    cout << s << endl;
}