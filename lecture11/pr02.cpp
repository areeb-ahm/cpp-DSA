// majority element - leetcode 169

// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans;

        for (int val : nums) {
            if (freq == 0) {
                ans = val;
            }
            if (val == ans) {
                freq++;
            } else {
                freq--;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << sol.majorityElement(nums) << endl;

    return 0;
}