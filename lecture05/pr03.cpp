#include <iostream>
using namespace std;

void nthFibonacci(int n) {
    int nextNum = 0, t1 = 0, t2 = 1;

    for (int i = 2; i < n; i++) {
        nextNum = t1 + t2;
        t1 = t2;
        t2 = nextNum;
    }

    cout << nextNum << endl;
}

int main() {
    nthFibonacci(10);

    return 0;
}