// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans ^= val;
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 3, 3, 1, 4, 5, 6, 6, 5};
    cout << s.singleNumber(nums) << endl;

    return 0;
}