#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int size_of_array = sizeof(arr) / sizeof(arr[0]);

    int target = 12;
    int left = 0; 
    int right = size_of_array - 1;

    while (left < right) {
        if(arr[left] + arr[right] == target) {
            printf("The sum of %d and %d is %d\n", arr[left], arr[right], target);
            // the below two conditions is due to only if the above condition hits
            left++;
            right--;
        } else if(arr[left] + arr[right] > target) {
            right--;
        } else{
            left++;
        }
    }
    return 0;
}