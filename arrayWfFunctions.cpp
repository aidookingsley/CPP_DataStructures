#include <iostream>
#include <string>
using namespace std;
int main()
{
    int fibSeq[5] = {1, 1, 2, 3, 5};
    int *fibPtr;
    fibPtr = fibSeq;
    cout << "\nfibSeq points to :" << *fibSeq;
    cout << "\nfibSeq[0]: " << *fibPtr;
    cout << "\nfibSeq[1]: " << *(fibPtr + 1);
    cout << "\nfibSeq[2]: " << *(fibPtr + 2);
    cout << "\nfibSeq[3]: " << *(fibPtr + 3);
    cout << "\nfibSeq[4]: " << *(fibPtr + 4);
}