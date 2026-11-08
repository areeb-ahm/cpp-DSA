// function to print all unique values in an array

#include <iostream>
#include <vector>
using namespace std;

void printUnique(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        bool isDuplicate = false;
        for (int j = 0; j < arr.size(); j++) {
            if (j == i) continue;
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << arr[i] << endl;
        }
    }
}

int main() {
    printUnique({4, 1, 2, 1, 2, 3, 4, 5});

    return 0;
}