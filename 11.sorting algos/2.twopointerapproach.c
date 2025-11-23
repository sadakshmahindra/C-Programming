#include <stdio.h>
#include <stdbool.h> // For using a boolean flag

int main() {
    int target = 8;
    int arr[]  = {1, 3, 4, 5, 7}; // An array with multiple pairs that sum to 8

    int size_of_array = sizeof(arr) / sizeof(arr[0]);
    
    int left = 0; 
    int right = size_of_array - 1; 
    bool pair_found = false; // A flag to check if we found at least one pair

    // The loop should run as long as the left pointer is to the left of the right pointer.
    // This is the core of the two-pointer approach.
    while (left < right) {
        int current_sum = arr[left] + arr[right];

        if (current_sum == target) {
            printf("The pair %d and %d sums to %d\n", arr[left], arr[right], target);
            pair_found = true;
            // To find other pairs, we must move both pointers.
            // If we only move one, we'll never find another sum that equals the target.
            left++;
            right--;
        }
        else if (current_sum > target) {
            // The sum is too big, so we need a smaller number. Move the right pointer left.
            right--;
        }
        else {
            // The sum is too small, so we need a bigger number. Move the left pointer right.
            left++;
        }
    }

    // After the loop, if our flag is still false, it means no pairs were ever found.
    if (!pair_found) {
        printf("No pair found that sums to %d\n", target);
    }
    return 0;
}
