// Q2654 - Minimum Number of Operations to Make All Array Elements Equal to 1
// Approach: Check for existing 1s, else find shortest subarray with GCD = 1

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ones = count(nums.begin(), nums.end(), 1);
        if (ones > 0) return n - ones;

        int min_len = INT_MAX;
        for (int i = 0; i < n; i++) {
            int g = nums[i];
            for (int j = i; j < n; j++) {
                g = gcd(g, nums[j]);
                if (g == 1) {
                    min_len = min(min_len, j - i + 1);
                    break;
                }
            }
        }
        if (min_len == INT_MAX) return -1;
        return (min_len - 1) + (n - 1);
    }
};

// Demo main function
int main() {
    vector<int> nums = {2,6,3,4};
    Solution sol;
    cout << sol.minOperations(nums) << endl; // Expected output: 4
    return 0;
}
