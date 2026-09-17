// ABC
// DEF
// GHI

#include <iostream>
using namespace std;

int main() {
    int n = 3;
    char letter = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << letter;
            letter += 1;
        }

        cout << endl;
    }

    return 0;
}