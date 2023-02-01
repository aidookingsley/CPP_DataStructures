// READING FROM A FILE
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    char data[100];

    // opening a file in write mode.
    ofstream myfile;
    myfile.open("myfile.txt");

    cout << "Writing to the file" << endl;
    cout << "Writing your name: ";
    // cin.getline(data, 100);
    cin >> data;

    myfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    // cin.ignore();

    myfile << data << endl;

    // close the opened file
    myfile.close();

    // opening a file in read mode
    ifstream infile;
    infile.open("myfile.txt");

    cout << "Reading from a file" << endl;
    infile >> data;

    cout << data << endl;
    infile >> data;
    cout << data << endl;

    infile.close();

    return 0;
}

// int main()
// {
//     fstream myfile;
//     myfile.open("myfile.txt", ios::out);
//     if (!myfile)
//     {
//         cout << "Cannot create file ...";
//     }
//     else
//     {
//         cout << "New file created" << endl;
//         myfile << "This iss file input tutorial";

//         cout << "Initial File Pointer Position at: " << myfile.tellp() << endl;

//         myfile.seekp(-1, ios::cur);

//         cout << "After seekp(-1, ios::ucr), File Pointer Position at: " << myfile.tellp() << endl;

//         myfile.close();
//     }
//     myfile.open("myfile.txt", ios::in);
//     if (!myfile)
//     {
//         cout << "Cannot open File...No such fiule";
//     }
//     else
//     {
//         char ch;
//         myfile.seekg(5, ios::beg);
//         cout << "After seekg(5, ios::beg), File Pointer at: " << myfile.tellg() << endl;
//         cout << endl;

//         myfile.seekg(1, ios::cur);

//         cout << "After seekg(1, ios::cur), File Pointer at: " << myfile.tellg() << endl;
//         myfile.close();
//     }
//     return 0;
// }