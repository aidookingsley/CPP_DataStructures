#include <iostream>
#include <string>
using namespace std;
// void swap(char* &str1, char * &str2) {
//     char *temp = str1;
//     str1 = str2;
//     str2 = temp;
// }
// int main() {
//     char *str1 = "references";
//     char *str2 = "pointers";
//     cout << "str1 = " << str1 << '\t' << "str2 = " << str2 << endl;
//     swap(str1,str2);
//     cout<<"After swap ....."<<endl;
//     cout << "str1 = " << str1 << '\t' << "str2 = " << str2 << endl;
// }

int myarray[] = {1, 0, 2, 3, 5};
int &setValues(int i)  //returns reference to the array
{
    return myarray[i];
}
int main()
{
    cout << "myarray before change" << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "myarray[" << i << "] = ";
        cout << myarray[i] << endl;
    }
    setValues(1) = 1;
    setValues(3) = 8;
    cout << "Value after change" << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "myarray[" << i << "] = ";
        cout << myarray[i] << endl;
    }
}