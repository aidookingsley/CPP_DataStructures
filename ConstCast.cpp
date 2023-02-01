#include <iostream>
using namespace std;

int printVal(int* ptr) {
    return(*ptr*10);
}

int main(void) {
    const int value = 10;
    const int *ptr = &value;
    int *ptr_cast = const_cast<int*>(ptr);
    cout<<"printVal returned = "<<printVal(ptr_cast);

    return 0;
}