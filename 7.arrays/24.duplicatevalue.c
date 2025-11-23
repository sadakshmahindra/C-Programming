#include <stdio.h>
// To use the 'bool' type (which stores true or false), you must include the stdbool.h library.
#include <stdbool.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the element no %d: ",i + 1);
        scanf("%d", &arr[i]);
    }

    // --- When to use a bool ---
    // A 'bool' is perfect for situations where you need to track a simple "yes/no" or "true/false" state.
    // Here, we use it as a "flag" to remember if we have found a duplicate during our search.
    // We start by assuming we haven't found one, so we set it to 'false'.
    bool duplicate = false; 
    int duplicate_value;    

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                duplicate = true;         // As soon as we find a duplicate, we raise our "flag" by setting it to true. 
                duplicate_value = arr[i]; 
                break;
            }
        }
        if(duplicate) {
            break;
        }
    }

    // After the loops are finished, we check the status of our flag.
    // This allows us to decide what to do at the end.
    if(duplicate) {
        printf("The duplicate value is: %d\n", duplicate_value);
    } else {
        printf("No duplicate was found in the array.\n");
    }

    return 0;
}
