#include <iostream>
using namespace std;

int main() {
  string str;
  cout <<"Enter a string: ";
  cin >> str;

  for (int i = 0; i<(int)str.length(); i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + 32; // convert to lowercase
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 32; // convert to uppercase
    }
  }
  
  cout << "The toggled string is: " << str << endl;

  return 0;
}