#include <iostream>
using namespace std;

void swap(int &a, int &b)   //pass-by references, or aliases of x & y
{
    int t = a;
    a = b;
    b = t;
}   //despite no return statement, x & y's values change when a & b's change

int main(int, char*argv[])
{
    int x = stoi(argv[1]);
    int y = stoi(argv[2]);
    swap(x,y);
    cout << x << " " << y << "\n";
    return 0;
}