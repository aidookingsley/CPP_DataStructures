#include <iostream>
#include <string>
using namespace std;
// int main()
// {
//     auto sum = [](int a, int b)
//     {
//         return a + b;
//     };
//     cout << "Sum of two integers: " << sum(5, 6) << endl;
//     return 0;
// }


int main() {
    // generalized lambda
    auto sum = [](auto a, auto b)
    {
        return a + b;
    };
    cout << "Sum(5,6) = " << sum(5, 6) << endl; //sum of two integers
    cout << "Sum(2.0,6.5) = " << sum(2.0, 6.5) << endl;  //sum of two floats
    cout << "Sum((string(\"SoftwareTesting\"), string(\"help.com\"))= " << sum(string("SoftwareTesting"), string("help.com")) << endl; //sum of two strings
}