#include <stdio.h>

// This version of Pascal's Triangle is more efficient.
// It calculates each new number in a row based on the previous number,
// avoiding the slow and repetitive factorial calculations from the nCr method.
int main() {
    int n;
    printf("Enter no of rows: ");
    scanf("%d", &n);

    // The outer loop controls the current row number, from 0 to n.
    for (int i = 0; i <= n; i++) {
        // This loop prints the leading spaces to create the pyramid shape.
        // The number of spaces decreases for each row.
        for (int s = 0; s < n - i; s++) {
            printf("  "); // Use two spaces for better alignment.
        }
        // 'term' holds the current number to be printed in the row.
        // It starts at 1 for the first element of any row.
        // Using long long to handle larger numbers in the triangle without overflow.
        long long term = 1;
        // The inner loop calculates and prints each term for the current row.
        for (int j = 0; j <= i; j++) {
            // For the very first element of a row (j=0), the term is always 1.
            if (j == 0) {
                term = 1;
            } else {
                // Calculate the next term based on the previous term.
                // Formula: C(n, k) = C(n, k-1) * (n - k + 1) / k
                // In our loop variables: term = term * (i - j + 1) / j
                term = term * (i - j + 1) / j;
            }
            // Print the current term with formatting for alignment.
            printf("%4lld", term);
        }
        // Move to the next line for the next row.
        printf("\n");
    }
    return 0;
}