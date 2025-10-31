#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {
            // Check if current, left, and right are empty (or out of bounds)
            if (flowerbed[i] == 0 &&
                (i == 0 || flowerbed[i - 1] == 0) &&
                (i == size - 1 || flowerbed[i + 1] == 0)) {
                
                // Place a flower
                flowerbed[i] = 1;
                count++;

                // If we have placed enough flowers, return true
                if (count >= n)
                    return true;
            }
        }
        // If not enough flowers were placed
        return count >= n;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> flowerbed1 = {1, 0, 0, 0, 1};
    int n1 = 1;
    cout << "Test Case 1: " << (sol.canPlaceFlowers(flowerbed1, n1) ? "true" : "false") << endl;

    // Test Case 2
    vector<int> flowerbed2 = {1, 0, 0, 0, 1};
    int n2 = 2;
    cout << "Test Case 2: " << (sol.canPlaceFlowers(flowerbed2, n2) ? "true" : "false") << endl;

    // Test Case 3
    vector<int> flowerbed3 = {0, 0, 1, 0, 0, 0};
    int n3 = 2;
    cout << "Test Case 3: " << (sol.canPlaceFlowers(flowerbed3, n3) ? "true" : "false") << endl;

    // Test Case 4
    vector<int> flowerbed4 = {0, 0, 0, 0, 0};
    int n4 = 3;
    cout << "Test Case 4: " << (sol.canPlaceFlowers(flowerbed4, n4) ? "true" : "false") << endl;

    return 0;
}
