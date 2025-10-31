// Problem: Check if the sentence uses every English letter at least once.
// Example: "thequickbrownfoxjumpsoverthelazydog" → true

class Solution {
public:
    bool checkIfPangram(string s) {
        // Use a set to store unique characters
        unordered_set<char> st(s.begin(), s.end());
        // Pangram if we have all 26 lowercase letters
        return st.size() == 26;
    }
};
