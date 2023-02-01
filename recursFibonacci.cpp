#include <iostream>
using namespace std;

void fibSeries(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        fibSeries(n - 1);
    }
}
int main()
{
    int num;
    cout << "Enter the number of elements for Fibonacci series: ";
    cin >> num;
    cout << "Fibonacci Series for " << num << " numbers: ";
    cout << "0 "
         << "1 ";
    fibSeries(num - 2);
    return 0;
}