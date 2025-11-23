#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("The size of an array can only be positive.");
        return 1;
    }
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int diffofsums;
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            sum1 = sum1 + arr[i];
        }else {
            sum2 = sum2 + arr[i];
        }
    }
    diffofsums = sum1 - sum2;
    printf("The difference between sums of elements at odd indices and even indices is: %d", diffofsums);
    return 0;
}