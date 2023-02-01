#include <iostream>
#include <string>
using namespace std;

// int *funcArray()
// {
//     int *arr = new int[3];
//     arr[0] = 1;
//     arr[1] = 2;
//     arr[2] = 3;

//     return arr;
// }
// int main()
// {
//     int *aryPtr = funcArray();
//     cout << aryPtr[0] << " " << aryPtr[1] << " " << aryPtr[2];
//     return 0;
// }

int *funcArray()
{
    static int arr[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    return arr;
}
int main()
{
    int *aryPtr = funcArray();
    cout << aryPtr[0] << " " << aryPtr[1] << " " << aryPtr[2];
    return 0;
}