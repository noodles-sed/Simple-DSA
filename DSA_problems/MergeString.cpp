#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0, j = 0;

        // Merge characters alternately
        while (i < word1.length() && j < word2.length()) {
            result += word1[i++];
            result += word2[j++];
        }

        // Append remaining characters (if any)
        while (i < word1.length()) {
            result += word1[i++];
        }

        while (j < word2.length()) {
            result += word2[j++];
        }

        return result;
    }
};

int main() {
    Solution s;
    string word1, word2;

    cout << "Enter first word: ";
    cin >> word1;

    cout << "Enter second word: ";
    cin >> word2;

    string merged = s.mergeAlternately(word1, word2);
    cout << "\nMerged String: " << merged << endl;

    return 0;
}
