#include <iostream>
using namespace std;

int* twoSum(int* nums, int numsSize, int target) {
    int* result = new int[2];
    for (int i = 0; i < numsSize; ++i) {
        int complement = target - nums[i];
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[j] == complement) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return nullptr;
}

int main() {
    int nums[] = {2, 10, 11, 15, 79};
    int target = 26;
    
    int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target);

    if (result != nullptr) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
        delete[] result;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
