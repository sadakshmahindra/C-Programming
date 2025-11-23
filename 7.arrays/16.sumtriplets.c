#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("The size of the array can only be in positive integers.");
        return 1;
    }

    int arr[n];
    for(int i = 0; i < n; i++) { 
        printf("Enter the element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int x; 
    printf("Enter the sum value: ");
    scanf("%d", &x);

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == x) {
                    printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                    count++;
                }
            }
        }
    }
    printf("Total no. of triplets are: %d", count);
    return 0;
}