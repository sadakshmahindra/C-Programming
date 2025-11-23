#include <stdio.h>

int main() {
    int n;                                  // Variable to store the number of rows
    printf("Enter the number of rows: ");   // Prompting user for input
    scanf("%d", &n);                        // Reading the input value for n

    for (int i = 1; i <= n; i++) {          // Outer loop iterates from 1 to n (for rows)
        for (int j = 1; j <= i; j++) {      // Inner loop iterates from 1 to i (for columns in each row)
            if ((i + j) % 2 == 0) {         // Check if the sum of row and column index is even
                printf("1 ");               // If even, print 1
            } else {
                printf("0 ");               // If odd, print 0
            }
        }
        printf("\n");                       // Move to the next line after each row is printed
    }

    return 0;                               // Return 0 to indicate successful execution
}
