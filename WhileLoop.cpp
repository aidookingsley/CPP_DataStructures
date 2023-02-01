#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Printing 2's multiples less than 40" << endl;
    int i = 2;
    while (i <= 40)
    {
        cout << "i =  " << i << '\t';
        i += 2;
        if ('\t' == 8)
        {
            cout << endl;
        }
    }
}