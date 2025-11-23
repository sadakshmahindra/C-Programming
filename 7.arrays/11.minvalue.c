#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("The size of an array can only exist in positive integers.");
        return 1;
    }

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the element no %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for(int i = 1; i <= n - 1; i++) {
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("The minimum value in the array is %d", min);
    return 0;
}