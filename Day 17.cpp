#include<iostream>
using namespace std;

string removeDuplicateLetters(string s, int n) {
  string ans = "";
  for (int i = 0; i < n; i++) {
    if (ans.find(s[i]) == string::npos) {
      ans += s[i];
    }
  }
  return ans;
}

int main() {
  string str;
  cout << "Original String: ";
  cin >> str;

  int n = str.length();
  cout << "After removing duplicates: " << removeDuplicateLetters(str, n) << endl;

  return 0;
}
