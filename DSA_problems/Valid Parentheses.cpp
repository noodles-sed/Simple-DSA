#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool isBalanced(string expr) {
    stack<char> s;
    for (char ch : expr) {
        if (ch == '(' || ch == '{' || ch == '[')
            s.push(ch);
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) return false;
            char top = s.top(); s.pop();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
                return false;
        }
    }
    return s.empty();
}

int main() {
    vector<string> expressions = {"{[()]}", "{[(])}", "((()))"};
    for (string exp : expressions)
        cout << exp << " -> " << (isBalanced(exp) ? "Balanced" : "Not Balanced") << endl;
}
