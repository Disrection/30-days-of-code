#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}
int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    if (isPalindrome(input, 0, input.length() - 1)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
