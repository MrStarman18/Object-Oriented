// This is a demonstration
#include <iostream> //include the <iostream> until further instruction.
using namespace std;

int main()
{
    cout << "Hey\n";
    for (int name=0; name<10; name++) //name is the identifier
        cout <<"yo\n";
}

int f(int x, int y) //tells that x and y are integers
{
    return x+y*3; //mathematically: f(x,y)=3y+x
}

string g(string a, string b) //
{
    return a+b; //concatenates strings a and b
}

int q = 7; //7 is the variable initializer of q