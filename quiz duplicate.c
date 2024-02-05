#include <stdio.h>

int removeDuplicates(int nums[], int numsSize) {
    if (numsSize <= 1) {
        return numsSize;
    }

    int i = 0;
    for (int j = 1; j < numsSize; j++) {
        if (nums[i] != nums[j]) {
            nums[++i] = nums[j];
        }
    }

    return i + 1;
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeDuplicates(nums, numsSize);

    printf("Modified Array: ");
    for (int k = 0; k < newLength; k++) {
        printf("%d ", nums[k]);
    }
    printf("\nNew Length: %d\n", newLength);

    return 0;
}

