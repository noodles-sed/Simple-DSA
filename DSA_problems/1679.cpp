#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxOperations(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end()); // Step 1: Sort the array
    int left = 0;                   // Start pointer
    int right = nums.size() - 1;    // End pointer
    int count = 0;                  // Count of valid pairs

    // Step 2: Use two pointers to find pairs
    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == k) {
            count++;        // Found a valid pair
            left++;         // Move both pointers
            right--;
        }
        else if (sum < k) {
            left++;         // Need a larger sum → move left pointer forward
        }
        else {
            right--;        // Need a smaller sum → move right pointer backward
        }
    }
    return count;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    int k1 = 5;
    cout << "Example 1 Output: " << maxOperations(nums1, k1) << endl; // Output: 2

    vector<int> nums2 = {3, 1, 3, 4, 3};
    int k2 = 6;
    cout << "Example 2 Output: " << maxOperations(nums2, k2) << endl; // Output: 1

    return 0;
}
