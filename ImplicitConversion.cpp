#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    char ch = 'A';
    cout << "10 + 'A' = " << num + ch << endl;

    float val = num + 'a';
    cout << "float val(10 + 'a') = " << val << endl;

    short var = 1000;
    int var_int = var;
    cout << "var_int = " << var_int;
}