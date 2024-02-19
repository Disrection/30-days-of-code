#include <iostream>
using namespace std;
int main() {
  char inputString[100];
  cout << "Enter a string: ";
  cin >> inputString;
  int charCount[256] = {0};
  for (int i = 0; inputString[i] != '\0'; i++) {
    charCount[(unsigned char)(inputString[i])]++;
  }
  for (int i = 0; inputString[i] != '\0'; i++) {
    if (charCount[(unsigned char)(inputString[i])] == 1) {
      cout << "The first non-repeating character is: " << inputString[i]  <<  " and its index is: " << i << endl;
      return 0;
    }
  }
  cout << "No non-repeating character found" << endl;
  return -1;
}

