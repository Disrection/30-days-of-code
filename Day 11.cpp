#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main() {
    int z;
  int arr[] = {5, 8, 2, 1, 4};
  for (z= 0; z < 5; z++) {
    cout << arr[z] << " ";
  } cout << endl;
  int n = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, n);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Binary search
  int target = 8;
  int low = 0;
  int high = n - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == target) {
      cout << "Target found at index " << mid << endl;
      return 0;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  cout << "Target not found" << endl;

  return 0;
}