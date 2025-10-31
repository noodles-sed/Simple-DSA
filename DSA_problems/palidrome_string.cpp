#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    string str = "madam";
    if (isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
