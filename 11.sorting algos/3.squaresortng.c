#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {-7, -5, -3, -1, 0, 2, 4, 6};

    int size_of_array = sizeof(arr) / sizeof(arr[0]); // getting the size of the array

    // creating a new array to get the sorted squared values in this 
    int result[size_of_array];
    
    // creating two pointers
    int left = 0; // starting from left index 0
    int right = size_of_array - 1; // the right most array needs to be one less than the size of array as we start index count at 0
    
    int k = size_of_array - 1; // for new array the greatest values will be kept from the back
    // The loop must be 'left <= right' to include the last element when the pointers meet.
    while(left <= right) { // using while loop as we dont know how many iterations or operations are going to take place 
        if(abs(arr[left]) > abs(arr[right])) {
            result[k] = arr[left] * arr[left];
            left++;
        } else {
            result[k] = arr[right] * arr[right]; 
            right--;
        }
        // After placing a value, you must move the 'k' pointer to the left.
        k--;
    }

    printf("The new sorted squared array is:\n");
    // The simplest way to print the result is a standard for loop from 0 to size-1.
    for(int i = 0; i < size_of_array; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}