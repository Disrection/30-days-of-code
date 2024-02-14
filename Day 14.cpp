#include <iostream>
using namespace std;
int countOccurrences(int arr[], int n, int x) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      count++;
    }
  }
  return count;
}
int main() {
  int arr[] = {1, 4, 6, 8, 6, 1, 2, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 6;
  int count = countOccurrences(arr, n, x);
  cout << "The number of occurrences of " << x << " in the array is " << count << endl;
  return 0;
}