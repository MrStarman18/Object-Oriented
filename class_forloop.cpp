#include <iostream>
using namespace std;
int main()
{
    int i{0};
    cout << "Hi\n";
    for (i=0; i<3; i++)
        cout <<"yo\n";
    cout << i << "\n";
}

/*equivalent while loop:
i=0
while (i<3) {
    cout <<"yo\n";
    i++
} */ 