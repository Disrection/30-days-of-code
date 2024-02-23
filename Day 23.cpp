#include <iostream>
using namespace std;
int sumOfDigits(int n) {
  if (n == 0) {
    return 0;
  } else {
    return n % 10 + sumOfDigits(n / 10);
  }
}
int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << "The sum of the digits of " << n << " is " << sumOfDigits(n) << endl;
  return 0;
}