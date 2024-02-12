#include <iostream>
using namespace std;
int getMissingNo(int a[], int n) {
    int N = n + 1;
    int sum = (N) * (N + 1) / 2;
    for (int i = 0; i < n; i++)
        sum -= a[i];
    return sum;
}
int main() {
    int z;
    int arr[] = {1, 2, 3, 5, 4};
    for (z= 0; z < 5; z++) {
    cout << arr[z] << " ";
  } cout << endl;
    int N = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, N);
    cout << miss;
    return 0;
}
