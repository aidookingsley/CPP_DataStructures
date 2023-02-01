#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    int myarray[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    double avg;
    for (int i = 0; i < 5; ++i)
    {
        sum += myarray[i];
    }
    cout << "Sum of elements in myarray: "
         << sum;

    avg = static_cast<double>(sum) / 5;
    cout << "\nAverage of elements in myarray: "
         << avg << endl;
}