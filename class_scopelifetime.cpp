#include <iostream>
using namespace std;

int f(int y) //when function is called, x is still alive
{
    cout << x; //won't work; x is out of scope
    return ++y;
}

int main (int , char*argv[]) 
{
    int x = stoi(argv[1]);
    cout << f(x) << " " << x << '\n';
    return 0;
}