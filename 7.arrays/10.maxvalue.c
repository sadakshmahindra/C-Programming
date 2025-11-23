#include <stdio.h>

int main() {
    int n; 
    printf("Enter the size of array : "); 
    scanf("%d", &n);
    if(n <= 0) {
        printf("The array can be only of size of positive integers.");
        return 1;
    }
    int arr[n];
    for(int i = 0; i <= n - 1; i++) {
        printf("Enter the element no %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("The greatest value of an element in the array is : %d", max);
    return 0;
}