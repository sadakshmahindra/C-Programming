#include <stdio.h>

int main() {
    int arr[5];
    for(int i = 0; i <= 4; i++) {
        printf("Enter the element no %d of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i <= 4; i++) {
        sum = sum + arr[i];
    }
    printf("The sum of all elements of array is : %d", sum);
    return 0;
}