// Problem: Given an array of sentences, return the maximum number of words in a single sentence.
// Example: ["I love leetcode", "This is great"] → Output: 3

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for (auto& s : sentences) {
            // Count spaces in sentence + 1 = total words
            int words = count(s.begin(), s.end(), ' ') + 1;
            ans = max(ans, words);
        }
        return ans;
    }
};
