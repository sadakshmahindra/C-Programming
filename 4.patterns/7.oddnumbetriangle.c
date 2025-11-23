#include <stdio.h>

int main() {
    int n; // Declare an integer 'n' for the number of rows.
    printf("Enter the number of rows: "); // Prompt the user for input.
    scanf("%d", &n); // Read the user's input into 'n'.

    // This outer loop iterates through each row from 1 to n.
    for(int i = 1; i <= n; i++) {
        // This inner loop prints the numbers for the current row.
        // It runs 'i' times, because the i-th row has 'i' numbers.
        for(int j = 1; j <= i; j++) {
            // To get the j-th odd number, we use the formula (2*j - 1).
            // e.g., j=1 -> (2*1-1)=1; j=2 -> (2*2-1)=3; j=3 -> (2*3-1)=5
            printf("%d ", 2*j - 1);
        }
        printf("\n"); // After printing all numbers in a row, move to the next line.
    }
    return 0; // Indicate successful execution.
}
