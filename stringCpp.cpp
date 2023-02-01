#include <iostream>
#include <string>
#include <cstring>
using namespace std;
// int main() {
//     char firstString[100];
//     cin>>firstString;
//     cout << "You entered: " << firstString;
// }

// int main()
// {
//     char firstString[100];
//     cout << "Enter your name: ";
//     cin.get(firstString, 100);
//     cout << "You entered: " << firstString;
// }

// int main()
// {
//     char firstStr[50] = "This is softwareTestingHelp.com";
//     char secStr[50] = "a testing platform";
//     // &nbsp;
//     int len = strlen(firstStr);
//     cout << "Length of firstStr : " << len;
//     strcpy(secStr, "softwareTesting");
//     cout << "\nResultant string (secStr) : " << secStr;
//     cout << "\nComparing firstStr and secStr : " << strcmp(firstStr, secStr);
//     strcat(secStr, " for you");
//     cout << "\nConcatenated secStr: " << secStr;
//     cout << "\nFirst occurence of i in firstStr at: " << strchr(firstStr, 'o');
//     return 0;
// }

int main()
{
    string str;
    cout << "Input the string\n";
    getline(cin, str);
    cout << "\nString entered is : " << str;
    int len = str.length();
    cout << "\nLength of the string str is : " << len;
    string str1 = "SoftwareTestingHelp";
    if(str.compare(str1) == 0){
        cout << "\nTwo strings are equal\n";
    }
    cout << "\nTwo strings are not equal\n";
    str1.append(".com");
    cout << "\nNew str1 : " << str1;
    str.clear();
    cout << "\n\nstr new length : " << str.length();
    return 0;
}
