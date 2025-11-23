#include <stdio.h>

int main() {
    // --- Understanding Variable Scope and Loop Counters ---

    // Variable Scope:
    // In C, variables declared inside a 'for' loop's initialization (e.g., 'int i = 0;')
    // have 'block scope'. This means they only exist and are valid within that specific
    // 'for' loop's block { ... }. Once the loop finishes, the variable is destroyed.

    int arr[10];

    // --- When to use the SAME variable name (e.g., 'i' for both loops) ---
    // This is common and perfectly fine for SEQUENTIAL LOOPS.
    // Since the first loop finishes completely before the second one starts,
    // the 'i' from the first loop goes out of scope. The second loop then
    // declares its own independent 'i' (or 'j' in this case).

    // Input Phase: Loop using 'i'
    for(int i = 0; i <= 9; i++) {
        printf("Enter the marks of the student no. %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // At this point, 'i' from the above loop no longer exists.

    // --- When to use DIFFERENT variable names (e.g., 'i' and 'j') ---
    // This is ABSOLUTELY NECESSARY for NESTED LOOPS (a loop inside another loop).
    // If you used the same variable name for both inner and outer loops, they would conflict.
    // For sequential loops, using different names like 'j' here is also fine and
    // can sometimes improve readability for some developers, though reusing 'i' is also standard.

    // Processing Phase: Loop using 'j'
    for(int j = 0; j <= 9; j++) {
         // 'j' is an independent counter for this loop.
         // It accesses values from the 'arr' array, which was populated by the first loop.
         if(arr[j] < 35) { // Assuming 35 is the passing mark
            printf("The student with index number %d has failed.\n", j);
        }
    }
    return 0;
}