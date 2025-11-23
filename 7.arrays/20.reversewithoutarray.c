#include <stdio.h>

// Function signature changed to void
void reverse(int arr[], int n) {
    int i = 0; 
    int j = n - 1;
    while(i < j) {
        // Correct swap logic
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        i++;
        j--;
    }
    // No return statement needed
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

    // Function call remains the same
    reverse(arr, n);

    // Correct printing loop
    printf("\nThe reversed array is:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
