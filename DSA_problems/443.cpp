#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;  // To place the result in chars
        int i = 0;      // To traverse the array

        while (i < chars.size()) {
            char currentChar = chars[i];
            int count = 0;

            // Count how many times the current character repeats
            while (i < chars.size() && chars[i] == currentChar) {
                i++;
                count++;
            }

            // Store the character
            chars[index++] = currentChar;

            // If count > 1, store its digits one by one
            if (count > 1) {
                string countStr = to_string(count);  // Convert number to string
                for (char c : countStr) {
                    chars[index++] = c;  // Place digits in chars
                }
            }
        }

        return index;  // New length of compressed array
    }
};

int main() {
    Solution s;

    // Example 1
    vector<char> chars1 = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength1 = s.compress(chars1);
    cout << "New length: " << newLength1 << endl;
    cout << "Compressed array: ";
    for (int i = 0; i < newLength1; i++) cout << chars1[i] << " ";
    cout << endl;

    // Example 2
    vector<char> chars2 = {'a'};
    int newLength2 = s.compress(chars2);
    cout << "New length: " << newLength2 << endl;
    cout << "Compressed array: ";
    for (int i = 0; i < newLength2; i++) cout << chars2[i] << " ";
    cout << endl;

    // Example 3
    vector<char> chars3 = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    int newLength3 = s.compress(chars3);
    cout << "New length: " << newLength3 << endl;
    cout << "Compressed array: ";
    for (int i = 0; i < newLength3; i++) cout << chars3[i] << " ";
    cout << endl;

    return 0;
}
