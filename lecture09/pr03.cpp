// reverse an array

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr) {
    int i = 0, j = arr.size() - 1;

    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    reverseArray(arr);

    for (int val: arr) {
        cout << val << endl;
    }

    return 0;
}