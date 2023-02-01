#include <iostream>
#include <string>
using namespace std;
int main()
{
    // int myarray[5] = {1, 1, 2, 3, 5};
    // int *ptrvar;
    // ptrvar = myarray;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *ptrvar << '\t';
    //     ptrvar++;
    // }

    // DECLARING AN ARRAY OF POINTERS
    // int myarray[5] = {2, 4, 6, 8, 10};
    // int *ptr[5]; // array of pointers
    // for (int i = 0; i < 5; ++i)
    // {
    //     ptr[i] = &myarray[i];
    // }

    // for (int i = 0; i < 5; ++i)
    // {
    //     cout << "Value of myarray[" << i << "] = ";
    //     cout << *ptr[i] << endl;
    // }

    // POINTER OF POINTERS

    int *vptr;
    int **intptr;
    int var = 10;
    vptr = &var;
    intptr = &vptr;

    cout << "Variable var: " << var << endl;
    cout << "Pointer to Variable: " << *vptr << endl;
    cout << "Pointer to Pointer to a variable: " << **intptr;
}