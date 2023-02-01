#include <iostream>
using namespace std;

int reverse_digits(int n, int temp)
{
    if (n == 0)
        return temp;
    temp = (temp * 10) + (n % 10);
    return reverse_digits(n / 10, temp);
}

int main()
{
    int num;
    cout << "Enter the number to check palindrome: ";
    cin >> num;
    int result = reverse_digits(num, 0);

    if (result == num)
        cout << "Number " << num << " is a palindrome" << endl;

    else
        cout << "Number " << num << " is not a palindrome" << endl;

    return 0;
}