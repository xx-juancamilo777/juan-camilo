#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    // Negative numbers and multiples of 10 (except 0) are not palindromes
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int revertedNumber = 0;
    while (x > revertedNumber) {
        int digit = x % 10;           // get last digit
        revertedNumber = revertedNumber * 10 + digit;
        x /= 10;                      // remove last digit
    }

    // Check for even and odd length numbers
    return (x == revertedNumber) || (x == revertedNumber / 10);
}

int main() {
    cout << boolalpha; // print true/false instead of 1/0
    cout << isPalindrome(121) << endl;   // true
    cout << isPalindrome(-121) << endl;  // false
    cout << isPalindrome(10) << endl;    // false
    cout << isPalindrome(12321) << endl; // true
    return 0;
}
