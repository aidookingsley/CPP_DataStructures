#include <iostream>
using namespace std;

void printvar()
{
    static int var;
    var++;
    cout << "static variable var = " << var << endl;
}
int main()
{
    cout << "printvar call 1: ";
    printvar();
    cout << "printvar call 2: ";
    printvar();
    cout << "printvar call 3: ";
    printvar();
    cout << "printvar call 4: ";
    printvar();

    return 0;
}