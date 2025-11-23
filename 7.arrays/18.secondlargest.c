#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(max < arr[i]) {
            smax = max; // smax is previous max 
            max = arr[i]; // max is the new max
        }
        else if(smax < arr[i] && max != arr[i]) {
            smax = arr[i];
        }
    }
    printf("%d", smax);
    return 0;
}