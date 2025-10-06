#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;        // extract last digit
        reversed = reversed * 10 + digit; 
        num /= 10;                   // remove last digit
    }
    return reversed;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;

    int result = reverseNumber(number);

    cout << "Reversed number: " << result << endl;

    return 0;
}
