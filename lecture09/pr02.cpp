// linear search on array

#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) return i;
    }

    return -1;
}

int main() {
    cout << linearSearch({2, 4, 1, 5, 2, 5}, 5) << endl;

    return 0;
}