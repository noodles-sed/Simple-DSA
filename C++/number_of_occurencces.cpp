// Problem: Return true if the number of occurrences of each value in the array is unique.
// Example: arr = [1,2,2,1,1,3] → true (1 occurs 3 times, 2 occurs 2 times, 3 occurs 1 time)

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq; // Stores frequency of each number
        for (int x : arr) freq[x]++;

        unordered_set<int> seen; // To store all frequencies
        for (auto [num, count] : freq) {
            if (!seen.insert(count).second) // If frequency already seen
                return false;
        }
        return true;
    }
};
