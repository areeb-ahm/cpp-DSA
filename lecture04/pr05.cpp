#include <iostream>
using namespace std;

int main() {
    int n = 4, m = 4;
    char letter = 'A';

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        for (int j = 0; j < i; j++) {
            cout << letter;
            m--;
        }
        letter += 1;
        cout << endl;
    }

    return 0;
}