// Problem: For given n, find (product of digits) - (sum of digits).
// Example: n = 234 → (2*3*4) - (2+3+4) = 24 - 9 = 15

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1, sum = 0;
        while (n) {
            int d = n % 10; // Extract last digit
            prod *= d;      // Multiply to product
            sum += d;       // Add to sum
            n /= 10;        // Remove last digit
        }
        return prod - sum;  // Return the difference
    }
};
