#include <iostream>
#include <string>
using namespace std;
void fibSeqSquare(int fibSeq[]) {
    for (int i = 0; i<5; ++i) {
        fibSeq[i] *= fibSeq[i];
    }
}

int main() {
    int fibSeq[5] = {1, 1, 2, 3, 5};
    fibSeqSquare(fibSeq);
    for (int i = 0; i < 5; ++i) {
        cout << fibSeq[i] << " ";
    }
}