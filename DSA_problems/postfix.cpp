#include <iostream>
#include <stack>
#include <string>
using namespace std;

int evaluatePostfix(string exp) {
    stack<int> s;
    for (char c : exp) {
        if (isdigit(c))
            s.push(c - '0');
        else {
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();
            switch (c) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val1 / val2); break;
            }
        }
    }
    return s.top();
}

int main() {
    string exp = "231*+9-";
    cout << "Result: " << evaluatePostfix(exp);
}
