#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Function to calculate GCD of two numbers
    int calculateGCD(int a, int b) {
        if (b == 0)
            return a;
        return calculateGCD(b, a % b);
    }

    // Function to find GCD of two strings
    string gcdOfStrings(string str1, string str2) {
        // If concatenating in both orders gives different results, no GCD exists
        if (str1 + str2 != str2 + str1)
            return "";

        int len1 = str1.length();
        int len2 = str2.length();

        // Find GCD of string lengths
        int gcd_length = calculateGCD(len1, len2);

        // Return substring of that GCD length
        return str1.substr(0, gcd_length);
    }
};

int main() {
    Solution sol;
    
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    string result = sol.gcdOfStrings(str1, str2);
    if (result == "")
        cout << "No common GCD string exists." << endl;
    else
        cout << "The GCD of strings is: " << result << endl;

    return 0;
}
