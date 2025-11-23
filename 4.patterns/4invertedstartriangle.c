#include <stdio.h>

int main() {
    int n; // Declare an integer variable 'n' to store the number of rows.
    printf("Enter the number of rows: "); // Prompt the user to enter the number of rows.
    scanf("%d", &n); // Read the integer input from the user and store it in 'n'.

    // The outer loop iterates from 1 to 'n' to handle each row.
    for(int i = 1; i <= n; i++) {
        // The inner loop prints the stars for the current row.
        // The number of stars decreases with each row.
        // For row 'i', it prints 'n + 1 - i' stars.
        for(int j = 1; j <= n + 1 - i; j++) {
            printf("* "); // Print a star followed by a space.
        }
        printf("\n"); // Move to the next line after printing all stars for the current row.
    }
    return 0; // Indicate successful program execution.
}

/*
Logic behind the code:
The program is designed to print an inverted right-angled triangle pattern of stars.

1.  User Input: It starts by asking the user to input an integer 'n', which determines the height (and the base width) of the triangle.

2.  Outer Loop (Rows): The outer `for` loop (`for(int i = 1; i <= n; i++)`) iterates through each row, from the first row (i=1) to the last row (i=n).

3.  Inner Loop (Columns/Stars): The inner `for` loop (`for(int j = 1; j <= n + 1 - i; j++)`) is responsible for printing the stars in each row. The number of stars printed is controlled by the loop's condition.

4.  The Pattern Logic: The core of the pattern lies in the condition `j <= n + 1 - i`. Let's break it down:
    - For the 1st row (i = 1): The condition becomes `j <= n + 1 - 1`, which is `j <= n`. The loop runs 'n' times, printing 'n' stars.
    - For the 2nd row (i = 2): The condition becomes `j <= n + 1 - 2`, which is `j <= n - 1`. The loop runs 'n-1' times, printing 'n-1' stars.
    - This pattern continues, reducing the number of stars by one for each subsequent row.
    - For the last row (i = n): The condition becomes `j <= n + 1 - n`, which is `j <= 1`. The loop runs once, printing a single star.

5.  Newline: After the inner loop finishes printing the stars for a row, `printf("\n");` is executed to move the cursor to the next line, ensuring the next set of stars prints on a new row.

This sequence of decreasing the number of stars per row creates the visual effect of an inverted triangle.
*/