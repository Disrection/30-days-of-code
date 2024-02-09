#include <iostream>
using namespace std;
int main() {
    int i;
    int arr[] = {1, 2, 8, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    for (i = 0; i < n; i++) {
    if (arr[i] == x) {
      cout << "Element found at index " << i << endl;
      break;
    }
  }
  if (i == n) {
    cout << "Element not found" << endl;
  }
  return 0;
}