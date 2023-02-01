#include <iostream>
#include <string>
using namespace std;

class base
{
public:
    virtual void print() {}
};
class derived : public base
{
};

int main()
{
    base *b = new derived;
    derived *d = dynamic_cast<derived *>(b);
    if (d != NULL)
        cout << "Dynamic_cast done successfully";
    else
        cout << "Dynamic_cast not successful";
}