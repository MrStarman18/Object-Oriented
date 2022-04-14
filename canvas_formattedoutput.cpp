#include <iostream>
#include <iomanip> //must be included for setw to work
using namespace std;
//examples of formatting spaces in output
int main()
{
    int x = 1234;
    std::string a = "abcd";
    std::cout << "[123456]\n";
    std::cout << "[" << std::setw(6) << std::left  << x << "]\n";
    std::cout << "[" << std::setw(6) << std::right << a << "]\n";
    std::cout << "[" << std::setw(2) << std::right << x << "]\n";
    std::cout << "[" << std::setw(2) << std::left  << a << "]\n";
}
//see canvas post for other examples