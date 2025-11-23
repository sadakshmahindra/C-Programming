#include <stdio.h>

int main() {
    int n; 
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n - 1];
    for(int i = 0; i < n - 1; i++) {
        printf("Enter the value of element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum2 = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n - 1; i++) {
        sum = sum + arr[i];
    }
    int missing;
    missing = sum2 - sum;
    printf("The missing value is: %d", missing);
    return 0;
}