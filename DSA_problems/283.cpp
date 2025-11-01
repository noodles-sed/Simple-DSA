#include <iostream>
using namespace std;

class Solution {
public:
    void moveZeroes(int nums[], int n) {
        int pos = 0; // position to place the next non-zero element

        // Step 1: Move all non-zero elements to the beginning
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[pos] = nums[i];
                pos++;
            }
        }

        // Step 2: Fill the remaining positions with zeros
        while (pos < n) {
            nums[pos] = 0;
            pos++;
        }
    }
};

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = sizeof(nums) / sizeof(nums[0]);

    Solution s;
    s.moveZeroes(nums, n);

    cout << "After moving zeroes: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
