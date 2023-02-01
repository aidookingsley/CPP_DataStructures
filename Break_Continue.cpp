#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Printing 2's multiples less than 40" << endl;
    int i = 0;
    while (1)
    {
        if (i == 0)
        {
            i += 2;
            continue;
        }
        cout << "i = " << i << "\t";
        i += 2;
        if (i > 40)
            break;
    }
}