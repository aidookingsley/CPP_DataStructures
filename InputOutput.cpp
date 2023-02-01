#include <iostream>
#include <fstream>
using namespace std;

// use of clog
//  int main()
//  {
//      char filename[] = "data.txt";
//      ifstream infile(filename);

//     if (infile)
//         cout << infile.rdbuf();
//     else
//         clog << "Error while opening file " << filename << endl;
// }

// use of cerrr
int main()
{
    char filename[] = "data.txt";
    ifstream infile(filename);

    if (infile)
        cout << infile.rdbuf();
    else
        cerr << "Cannot open file " << filename << endl;
}