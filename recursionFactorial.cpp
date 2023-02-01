#include <iostream>
#include <string>
using namespace std;

// long double factorial(long double n)
// {
//     if (n <= 1)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }
// int main()
// {
//    long  double num, result;
//     cout << "Enter the number whose factorial is to be calculated: ";
//     cin >> num;
//     result = factorial(num);
//     cout << num << "! = " << result;
// }

int factorial_b(int);
int factorial_a(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial_b(n - 1);
}
int factorial_b(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial_a(n - 1);
}

int main()
{
    int num, result;
    cout << "Enter the number whose factorial is to be calculated: ";
    cin >> num;
    result = factorial_a(num);
    cout << num << "! = " << result;
}