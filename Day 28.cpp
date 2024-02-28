#include <iostream>
using namespace std;
int romanToInt(string s) {
    int result = 0;
    int prevValue = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        int currValue = 0;
        switch (s[i]) {
            case 'I': currValue = 1; break;
            case 'V': currValue = 5; break;
            case 'X': currValue = 10; break;
            case 'L': currValue = 50; break;
            case 'C': currValue = 100; break;
            case 'D': currValue = 500; break;
            case 'M': currValue = 1000; break;
        }
        if (currValue < prevValue) {
            result -= currValue;
        } else {
            result += currValue;
        }
        prevValue = currValue;
    }

    return result;
}

int main() {
    string romanNumeral;
    
    cout << "Enter a Roman numeral: ";
    cin >> romanNumeral;

    int result = romanToInt(romanNumeral);

    cout << "The integer equivalent is: " << result << endl;

    return 0;
}
