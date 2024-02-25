#include <iostream>
using namespace std;
int arraySumRecursive(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    } else {
        return arr[size - 1] + arraySumRecursive(arr, size - 1);
    }
}
int main() {
    int z;
    int arr[] = {1, 2, 3, 4, 5};
    for (z= 0; z < 5; z++) {
    cout << arr[z] << " ";
  } cout << endl;
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = arraySumRecursive(arr, size);
    cout << "Sum of elements in the array: " << sum << endl;
    return 0;
}

