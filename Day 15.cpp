#include<iostream>
#include<algorithm>
using namespace std;
int main();
void rotateArray(int arr[], int n, int k) {
  reverse(arr, arr + n);
  reverse(arr, arr + k);
  reverse(arr + k, arr + n);
}
int main() {
    int z;
  int arr[] = {1, 9, 3, 4, 8, 6, 7};
  for (z= 0; z < 7; z++) {
    cout << arr[z] << " ";
  } cout << endl;
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 3;
  rotateArray(arr, n, k);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}