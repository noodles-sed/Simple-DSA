// Q128 - Longest Consecutive Sequence
// Approach: Use unordered_set for O(n) time complexity

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for (int num : nums) {
            // Only start counting if num is the beginning of a sequence
            if (!s.count(num - 1)) {
                int current = num;
                int streak = 1;

                while (s.count(current + 1)) {
                    current++;
                    streak++;
                }
                longest = max(longest, streak);
            }
        }
        return longest;
    }
};

// Demo main function
int main() {
    Solution sol;
    vector<int> nums = {100,4,200,1,3,2};
    cout << sol.longestConsecutive(nums) << endl; // Expected output: 4
    return 0;
}
