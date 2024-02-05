#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool containsDuplicate(int* nums, int numsSize) {
    // Create a hash set to store unique elements
    bool* set = (bool*)malloc(numsSize * sizeof(bool));
    for (int i = 0; i < numsSize; i++) {
        if (set[nums[i]]) {
            // If the element is already in the set, it's a duplicate
            free(set);
            return true;
        }
        set[nums[i]] = true;
    }

    // No duplicates found
    free(set);
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 1}; // Example array with a duplicate
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    bool result = containsDuplicate(nums, numsSize);

    // Display the result
    if (result) {
        printf("The array contains duplicates.\n");
    } else {
        printf("The array does not contain duplicates.\n");
    }

    return 0;
}

