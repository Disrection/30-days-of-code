#include <iostream>
using namespace std;
int LongestSubstring(string s) {
    int n = s.length();
    int maxLength = 0, i = 0, j = 0;
    bool charSet[128] = {false};

    while (j < n) {
        if (!charSet[(int)s[j]]) {
            charSet[(int)s[j]] = true;
            maxLength = max(maxLength, j - i + 1);
            j++;
        } else {
            charSet[(int)s[i]] = false;
            i++;
        }
    }
    return maxLength;
}

int main() {
    string input = "adegbcabcbb";
    int result = LongestSubstring(input);
    cout << "Length of the longest substring without repeating characters: " << result << endl;

    return 0;
}
