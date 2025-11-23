#include <stdio.h>
#include <limits.h>
int main() {
    int arr[7] = {7, 4, 5, 9, 8, 2, 1};
    int n = 7;
    printf("Unsortted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // selection sort
    for(int i = 0; i < n - 1; i++) { // n - 1 passes
        int min = INT_MAX;
        int mindex = -1;
        for(int j = i; j < n; j++) {
            if(min > arr[j]) {
                min = arr[j];
                mindex = j;
            }
        }
        // swap the min and first element of first sorted part
        // swap mindx and i
        int temp = arr[mindex];
        arr[mindex] = arr[i];
        arr[i] = temp;
    }

    printf("\n");
    printf("Sorted array: ");
    for(int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}