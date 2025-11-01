#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);  // start with 1s

    // Step 1: Calculate left products
    int leftProduct = 1;
    for (int i = 0; i < n; i++) {
        result[i] = leftProduct;
        leftProduct *= nums[i];
    }

    // Step 2: Calculate right products and multiply with result
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return result;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> ans1 = productExceptSelf(nums1);
    cout << "Output for [1,2,3,4]: ";
    for (int x : ans1) cout << x << " ";
    cout << endl;

    vector<int> nums2 = {-1, 1, 0, -3, 3};
    vector<int> ans2 = productExceptSelf(nums2);
    cout << "Output for [-1,1,0,-3,3]: ";
    for (int x : ans2) cout << x << " ";
    cout << endl;

    return 0;
}
