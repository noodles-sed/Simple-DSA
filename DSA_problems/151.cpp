#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, result = "";

        // Step 1: Read each word one by one
        while (ss >> word) {
            // Step 2: Place each new word at the FRONT of the result
            if (result.empty())
                result = word;
            else
                result = word + " " + result;  // adds the word in reverse order
        }

        return result;
    }
};

int main() {
    Solution sol;

    string s1 = "the sky is blue";
    string s2 = "  hello world  ";
    string s3 = "a good   example";

    cout << "Input: \"" << s1 << "\"\n";
    cout << "Output: \"" << sol.reverseWords(s1) << "\"\n\n";

    cout << "Input: \"" << s2 << "\"\n";
    cout << "Output: \"" << sol.reverseWords(s2) << "\"\n\n";

    cout << "Input: \"" << s3 << "\"\n";
    cout << "Output: \"" << sol.reverseWords(s3) << "\"\n";

    return 0;
}
