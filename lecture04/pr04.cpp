#include <iostream>
using namespace std;

int main() {
    int n = 4;
    
    for (int i = 0; i < n; i++) {
        char letter = 'A';
        for (int j = 0; j <= i; j++) {
            cout << char(letter + i - j);
        }
        cout << endl;
    }

    return 0;
}