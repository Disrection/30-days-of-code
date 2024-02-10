#include <iostream>
using namespace std;
void bubbleSort(int *array, int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
}
int main() {
    int z;
  int array[] = {5, 3, 2, 1, 4};
  for (z= 0; z < 5; z++) {
    cout << array[z] << " ";
  } cout << endl;
  int size = sizeof(array) / sizeof(array[0]);
  bubbleSort(array, size);
   for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  return 0;
}