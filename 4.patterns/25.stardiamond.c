#include <stdio.h>

int main() {
    int n; // Variable to store the number of rows
    printf("enter the number of rows: ");
    scanf("%d", &n);

    // A star diamond pattern requires an odd number of rows for a single center point.
    if (n % 2 == 0) {
        printf("Star diamond can only be printed for odd values.\n");
        return 1; // Exit the program if n is even
    }

    int nsp = n / 2; // nsp: number of spaces, initialized for the first row
    int nst = 1; // nst: number of stars, initialized for the first row
    int middleline = n / 2 + 1; // Calculate the row number of the middle line

    // The main loop iterates through each row of the pattern.
    for (int i = 1; i <= n; i++) {

        // This loop prints the leading spaces for the current row.
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }

        // This loop prints the stars for the current row.
        for (int k = 1; k <= nst; k++) {
            printf("*");
        }

        // This block updates the number of spaces and stars for the next row.
        if (i < middleline) {
            // For rows before the middle, decrease spaces and increase stars.
            nsp--;
            nst += 2;
        } else {
            // For rows at and after the middle, increase spaces and decrease stars.
            nsp++;
            nst -= 2;
        }

        printf("\n"); // Move to the next line after printing the row.
    }

    return 0; // Indicate successful execution.
}

/*
================================================
Logic of the Star Diamond Pattern Code
================================================

1.  **Input Validation:** The program first asks the user for an integer 'n' representing the total number of rows. It then checks if 'n' is odd. A symmetrical diamond with a single center point can only be formed with an odd number of rows. If 'n' is even, it prints an error and exits.

2.  **Variable Initialization:**
    *   `nsp` (number of spaces): It's initialized to `n / 2`. This is the number of leading spaces required for the first row to center the single star.
    *   `nst` (number of stars): It's initialized to `1`, as the first row contains only one star.
    *   `middleline`: This is calculated as `n / 2 + 1`. It represents the row number of the widest, central part of the diamond.

3.  **Pattern Generation (The Main Loop):**
    *   The code uses a single main `for` loop that runs from `i = 1` to `n` to print each row.
    *   Inside the loop, two nested `for` loops are used:
        *   The first prints `nsp` number of spaces.
        *   The second prints `nst` number of stars.

4.  **Updating for the Next Row:**
    *   After printing a row, an `if-else` statement checks if the current row `i` is before the `middleline`.
    *   **If `i < middleline` (Top Half):** We are building the top part of the diamond. For the next row, we need one less space (`nsp--`) and two more stars (`nst += 2`).
    *   **If `i >= middleline` (Bottom Half):** We are building the bottom part. The logic is reversed. For the next row, we need one more space (`nsp++`) and two fewer stars (`nst -= 2`).

5.  **Newline:** After each row is fully printed (spaces and stars), `printf("\n");` is called to move the cursor to the next line, preparing for the subsequent row.

This process continues for all 'n' rows, resulting in a complete diamond shape.
*/
