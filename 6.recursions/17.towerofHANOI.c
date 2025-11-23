#include <stdio.h>
// User's tower function
void tower(int n, char source, char helper, char destination) {
    if(n == 0) { // Base case: if there are no disks, do nothing.
        return;
    }
    // Recursive call 1. NOTE: This call attempts to move n-1 disks from source to destination.
    // This differs from the standard algorithm where they are moved to the helper rod.
    tower(n - 1, source, destination, helper);

    // Prints the move of a disk from the source to the destination rod.
    // Note: This does not specify which disk is being moved.
    printf("%c to %c\n", source , destination);

    // Recursive call 2. NOTE: This call attempts to move n-1 disks from helper to destination.
    // This also differs from the standard algorithm.
    tower(n - 1, helper, source, destination);

    return; // Return from the function call
}

int main() {
    int n; // Variable to store the number of disks
    printf("Enter the no of disks : "); // Prompt user for input
    scanf("%d", &n); // Read integer from user

    // Initial call to the tower function. Per this call:
    // source = 'A', helper = 'B', destination = 'C'
    tower(n, 'A', 'B', 'C');

    return 0; // End of main
}

/*
==================================
Code Logic Explanation (As Written)
==================================
This section explains the logic of the code exactly as it is in the file. Please note that this logic is different from the standard Tower of Hanoi solution and will not produce the correct sequence of moves.

1.  **Base Case:** If `n` is 0, the function does nothing.

2.  **First Recursive Call:** `tower(n - 1, source, destination, helper)`
    - This recursively calls the function to move `n-1` disks.
    - It attempts to move them from the initial `source` to the initial `destination`.
    - It passes the initial `helper` rod to be the new destination in the next frame.

3.  **Print Statement:** `printf("%c to %c\n", source, destination)`
    - This prints a move from the `source` of the current frame to the `destination` of the current frame.

4.  **Second Recursive Call:** `tower(n - 1, helper, source, destination)`
    - This makes a second recursive call for `n-1` disks.
    - It attempts to move them from the initial `helper` rod to the initial `destination` rod.

==================================
Dry Run of YOUR Code for n = 3
==================================
Initial Call: `tower(3, 'A', 'B', 'C')`

1. `tower(3, A, B, C)`
   - Calls `tower(2, A, C, B)`
     1. `tower(2, A, C, B)`
        - Calls `tower(1, A, B, C)`
          - Calls `tower(0, ...)` -> returns.
          - **Prints: A to B**
          - Calls `tower(0, ...)` -> returns.
        - **Prints: A to C**
        - Calls `tower(1, B, A, C)`
          - Calls `tower(0, ...)` -> returns.
          - **Prints: B to A**
          - Calls `tower(0, ...)` -> returns.
   - **Prints: A to B**
   - Calls `tower(2, B, A, C)`
     1. `tower(2, B, A, C)`
        - Calls `tower(1, B, C, A)`
          - Calls `tower(0, ...)` -> returns.
          - **Prints: B to C**
          - Calls `tower(0, ...)` -> returns.
        - **Prints: B to A**
        - Calls `tower(1, C, B, A)`
          - Calls `tower(0, ...)` -> returns.
          - **Prints: C to B**
          - Calls `tower(0, ...)` -> returns.

----------------------------------
Final Output of Your Code for n = 3:
----------------------------------
A to B
A to C
B to A
A to B
B to C
B to A
C to B

======================================================
For Your Reference: Correct Tower of Hanoi Logic
======================================================
The standard, correct algorithm for Tower of Hanoi is:

1.  `tower(n - 1, source, helper, destination)`  // Move n-1 from source to helper
2.  `printf(...)`                               // Move disk n from source to destination
3.  `tower(n - 1, helper, destination, source)`  // Move n-1 from helper to destination

This would produce the following correct output for n=3:
A to C
A to B
C to B
A to C
B to A
B to C
A to C
*/
