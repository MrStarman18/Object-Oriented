#include <iostream>
using namespace std;

int main(int argc, char*argv[])
{
    int length;
    if (argc > 1)
    {
        length = {stoi(argv[1])};
    }
    else
    {
        length = 5;
    }
    cout << "\\" << "\\";
    for (int loop{0}; loop < length; loop++)
    {
        cout << "_";
    }
    cout << "\\" << '\n' << "//";
    for (int loop{0}; loop < length; loop++)
    {
        cout << " ";
    }
    cout << "/\n";
}
