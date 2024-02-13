#include <iostream>
using namespace std;
int main() {
    int z;
  int arr[] = {1, 2, 3, 4, 5};
  for (z= 0; z < 5; z++) {
    cout << arr[z] << " ";
  } cout << endl;
  int size = sizeof(arr) / sizeof(arr[0]);
  int max = arr[0];
  int min = arr[0];
  int sum = 0;
  float average = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
    sum += arr[i];
  }
  average = sum / size;
  cout << "Maximum: " << max << endl;
  cout << "Minimum: " << min << endl;
  cout << "Sum: " << sum << endl;
  cout << "Average: " << average << endl;
  return 0;
}