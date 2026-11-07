// function to calculate sum and product in an array

#include <iostream>
#include <vector>
using namespace std;

void sumAndProduct(const vector<int> &arr, int &sum, int &product) {
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        product *= arr[i];
    }
}

int main() {
    int sum = 0, product = 1;

    sumAndProduct({1, 2, 4, 5}, sum, product);

    cout << "Sum: " << sum << ", Product: " << product << endl;

    return 0;
}