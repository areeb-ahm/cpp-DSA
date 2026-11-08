// function to print intersection of two array

#include <iostream>
#include <vector>
using namespace std;

void printIntersection(vector<int> arr1, vector<int> arr2) {
    vector<int> printed;
    for (int i = 0; i < arr1.size(); i++) {
        bool alreadyPrinted = false;
        for (int p = 0; p < printed.size(); p++) {
            if (arr1[i] == printed[p]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted) continue;

        bool foundInArr2 = false;
        for (int j = 0; j < arr2.size(); j++) {
            if (arr1[i] == arr2[j]) {
                foundInArr2 = true;
                break;
            }
        }

        if (foundInArr2) {
            cout << arr1[i] << endl;
            printed.push_back(arr1[i]);
        }
    }
}

int main() {
    printIntersection({1, 2, 3, 4, 5}, {2, 2, 3, 6, 7});

    return 0;
}