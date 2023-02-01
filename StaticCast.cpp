#include <iostream>
using namespace std;
int main() {
    double df = 3.5 * 3.5 * 3.5;
    cout << "Before casting: df = " << df << endl;

    int total = static_cast<int>(df);
    cout << "After static_cast:total = " << total;
}