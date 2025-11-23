#include <stdio.h>

int main() {
    int n; 
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int brr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        brr[i] =  arr[(n-1) - i];
    }
    for(int i = 0; i < n; i++) {
        printf("%d", brr[i]);
    }
    return 0;
}