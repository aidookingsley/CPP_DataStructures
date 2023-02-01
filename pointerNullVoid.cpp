#include <iostream>
#include <string>
using namespace std;

int main()
{
    int intvar = 10;
    char c = 'A';
    void *vptr;

    int *myptr = NULL;
    cout << "NULL pointer value : " << myptr << endl;

    vptr = &c;
    char *charptr;
    charptr = (char *)vptr;
    cout << "Void pointer vptr points to: " << *charptr << endl;

    int *intptr;
    vptr = &intvar;
    intptr = (int *)vptr;
    // intptr = static_cast<int>(vptr);
    cout << "Void pointer vptr points to: " << *intptr << endl;
}