#include<iostream>
using namespace std;
void reverse(int arr[], int n) {
  int i, j;
  for (i = 0, j = n - 1; i < j; i++, j--) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int main() {
    int k;
  int arr[] = {1, 2, 3, 4, 5};
  for (k = 0; k < 5; k++) {
    cout << arr[k] << " ";
    cout << endl;
  }
  int n = sizeof(arr) /sizeof(arr[0]);

  reverse(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}