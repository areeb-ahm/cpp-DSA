// function to reverse an integer

#include <iostream>
using namespace std;

int reverseInteger(int n) {
    int reverse = 0;
    while (n > 0) {
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    }

    return reverse;
}

int main() {
    cout << reverseInteger(145) << endl;

    return 0;
}