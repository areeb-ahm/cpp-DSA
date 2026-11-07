// function to swap max and min of an array

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void swapMinMax(vector<int> &arr) {
    if (arr.size() <= 1) return;

    int min = INT_MAX;
    int max = INT_MIN;
    int x = -1;
    int y = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < min) min = arr[i], x = i;
        if (arr[i] > max) max = arr[i], y = i;
    }

    swap(arr[x], arr[y]);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    swapMinMax(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }

    return 0;
}