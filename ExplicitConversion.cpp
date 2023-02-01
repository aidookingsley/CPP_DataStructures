#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum;
    double salary = 4563.75;
    sum = (int)salary + 1000;
    cout << "Sum = " << sum << endl;

    double comp = (double)sum + 0.20;
    cout << "Comp = " << comp;
    return 0;
}