#include <stdio.h>
void reverse(int arr[], int a, int b) {
    for(int i = a, j = b; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main() {
    int n; 
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the no of time array needs to be rotated: ");
    scanf("%d", &k);
    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}