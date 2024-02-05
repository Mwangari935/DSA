#include <stdio.h>

void reverse(int nums[], int start, int end) {
    while (start < end) {
        // Swap elements at start and end indices
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}

void rotate(int nums[], int numsSize, int k) {
    // Normalize k to handle cases where k is greater than array size
    k = k % numsSize;

    // Reverse the entire array
    reverse(nums, 0, numsSize - 1);

    // Reverse the first k elements
    reverse(nums, 0, k - 1);

    // Reverse the remaining elements
    reverse(nums, k, numsSize - 1);
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    rotate(nums, numsSize, k);

    // Display rotated array
    printf("Rotated Array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
