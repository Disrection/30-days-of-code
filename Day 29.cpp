#include <iostream>
using namespace std;
bool ValidParentheses(const string& s) {
    int stackDepth = 0;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stackDepth++;
        } else if (c == ')' && stackDepth > 0) {
            stackDepth--;
        } else if (c == '}' && stackDepth > 0) {
            stackDepth--;
        } else if (c == ']' && stackDepth > 0) {
            stackDepth--;
        } else {
            return false;
        }
    }

    return stackDepth == 0;
}

int main() {
    string input;
    cout << "Enter a string of parentheses: ";
    cin >> input;

    if (ValidParentheses(input)) {
        cout << "Valid parentheses.\n";
    } else {
        cout << "Invalid parentheses.\n";
    }

    return 0;
}
