// finding if a number is a power of 2 or not without loop

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    cout << isPowerOfTwo(32) << endl;

    return 0;
}