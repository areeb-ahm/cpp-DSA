// pair sum

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
    int i = 0, j = arr.size() - 1;
    vector<int> ans;

    while (i < j) {
        if (target == arr[i] + arr[j]) {
            ans.push_back(i);        
            ans.push_back(j); 
            return ans;
        } else if (target > arr[i] + arr[j]) {
            i++;
        } else {
            j--;
        }
    }

    return ans;
}

int main() {
    vector<int> ans = pairSum({1, 4, 9, 11}, 12);

    for (int val : ans) {
        cout << val << endl;
    }

    return 0;
}