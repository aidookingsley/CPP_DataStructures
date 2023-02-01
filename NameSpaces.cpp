// #include <iostream>
// #include <string>

// namespace test_space{
//     int var = 10;
// }
// int main() {
//     double var = 20.53;
//     std::cout<<"local var = "<<var<<std::endl;
//     std::cout << "test_space::var = " << test_space::var;
// }

// THE USING DIRECTIVE
#include <iostream>
#include <string>
// namespace test_space{
//     int var = 10;
// }
// using namespace std;
// using namespace test_space;
// int main() {
//     double var = 20.53;
//     cout << "local var = " << var << endl;
//     cout << "test_space::var = " << ::var;

//     return 0;
// }

// // THE NESTED DIRECTIVE
// #include <iostream>
// #include <string>
// namespace first
// {
//     int var = 10;
//     namespace second
//     {
//         int secVar = 20;
//     }
// }
// using namespace std;
// using namespace first;
// using namespace first::second;

// int main()
// {
//     double var = 20.53;
//     cout << "local var = " << var << endl;
//     cout << "first::var = " << ::var << endl;
//     cout << "second::var = " << secVar;

//     return 0;
// }

// THE NESTED DIRECTIVE
#include <iostream>
// #include <string>
// namespace first
// {
//     int var = 10;
//     namespace second
//     {
//         int secVar = 20;
//     }
// }
// using namespace std;
// using namespace first;
// namespace nested = first::second;

// int main()
// {
//     double var = 20.53;
//     cout << "local var = " << var << endl;
//     cout << "first::var = " << ::var << endl;
//     cout << "second::var = " << nested::secVar;

//     return 0;
// }

//EXTERNAL NAMESPACES
// #include<iostream>
// #include "ns.h"
// using namespace std;
// int main(){
//     cout << first::var;
// }


#include <iostream>
#include  <string>
namespace first{
    int var = 10;
}
namespace first{
    namespace second{
        int secVar = 20;
    }
}
using namespace std;
using namespace first;
namespace nested = first::second;
int main(){
    double var = 20.53;
    cout << "local var = " << var << endl;
    cout << "first::var = " << ::var << endl;
    cout << "second::var = " << nested::secVar;

    return 0;
}