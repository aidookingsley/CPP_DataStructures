#include <iostream>
using namespace std;

// void swap(int a, int b) {
//     b = a + b;
//     a = b - a;
//     b = b - a;
//     cout << "\nAfter swapping: ";
//     cout << "a = " << a;
//     cout << "\tb = " << b;
//     return;
// }
// int main() {
//     int a, b;
//     cout << "Enter the two numbers to be swapped: ";
//     cin >> a >> b;

//     cout << "a = " << a;
//     cout << "\tb = " << b;
//     swap(a, b);
// }

// PASS BY REFERENCE
//  void swap(int &a, int &b)
//  {
//      int temp = a;
//      a = b;
//      b = temp;
//  }

// int main()
// {
//     int a, b;
//     cout << "Enter the two numbers to be swapped: ";
//     cin >> a >> b;
//     cout << "a = " << a;
//     cout << "\tb = " << b;
//     swap(a, b);
//     cout << "\nAfter swapping inside Main:\n ";
//     cout << "a = " << a;
//     cout << "\tb = " << b;
// }

// PASS BY POINTER
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter the two numbers to be swapped: ";
//     cin >> a >> b;
//     cout << "a = " << a;
//     cout << "\tb = " << b;
//     swap(a, b);
//     cout << "\nAfter swapping inside Main:\n ";
//     cout << "a = " << a;
//     cout << "\tb = " << b;
// }

// DEFAULT PARAMETERS
// int mathoperation(int a, int b = 3, int c = 2)
// {
//     return ((a * b) / c);
// }
// int main()
// {
//     int a, b, c;

//     cout << "Enter values for a,b and c: ";
//     cin >> a >> b >> c;
//     cout << endl;
//     cout << "Call to mathoperation with 1 arg : " << mathoperation(a) << endl;
//     cout << "Call to mathoperation with 2 arg : " << mathoperation(a, b) << endl;
//     cout << "Call to mathoperation with 3 arg : " << mathoperation(a, b, c) << endl;
// }

struct PersonInfo
{
    int age;
    char name[50];
    double salary;
};

void printStructInfo(PersonInfo p)
{
    cout << "PersonInfo Structure: ";
    cout << "\nAge: " << p.age;
    cout << "\nName: " << p.name;
    cout << "\nSalary: " << p.salary;
}
int main()
{
    PersonInfo p;
    cout << "Enter name: ";
    cin.get(p.name, 50);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;

    printStructInfo(p);
}