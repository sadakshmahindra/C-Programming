#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Outer loop: Picks one number at a time to check.
    for(int i = 0; i < n; i++) {
        
        // For each number we pick, we assume it's unique until we prove otherwise.
        bool found_a_match = false; 

        // Inner loop: Compares the picked number (arr[i]) against all other numbers.
        for(int j = 0; j < n; j++) {
            
            // This is the key: check for a match, but make sure we aren't just
            // comparing the number with itself (i != j).
            if(arr[i] == arr[j] && i != j) {
                found_a_match = true; // We found a duplicate for this number.
                break; // No need to check further for this number, let's move to the next.
            }
        }

        // After the inner loop, if we NEVER found a match for arr[i]...
        if(found_a_match == false) {
            // ...then arr[i] must be the unique one.
            printf("The unique value is: %d\n", arr[i]);
            break; // We found it, so we can exit the main loop.
        }
    }

    return 0;
}