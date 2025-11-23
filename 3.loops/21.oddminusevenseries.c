// This program calculates the sum of the series: 1 - 2 + 3 - 4 + ... up to a given number 'n'.
// For example, if n = 5, the series is 1 - 2 + 3 - 4 + 5, and the sum is 3.
// If n = 6, the series is 1 - 2 + 3 - 4 + 5 - 6, and the sum is -3.

// Include the standard input/output library for functions like printf and scanf.
#include <stdio.h>

// The main function where the program execution begins.
int main() {
    // Declare an integer variable 'n' to store the user's input.
    int n;

    // Prompt the user to enter a number.
    printf("Enter a number: ");

    // Read the integer input from the user and store it in the variable 'n'.
    scanf("%d", &n);

    // Declare an integer variable 'sum' to store the result of the series.
    int sum = 0;

    // The logic calculates the sum based on whether 'n' is even or odd.
    // This is a more efficient way than using a loop.

    // Check if the number 'n' is even.
    if (n % 2 == 0) {
        // If 'n' is even, the series can be grouped into pairs: (1-2) + (3-4) + ... + ((n-1)-n).
        // Each pair evaluates to -1.
        // There are n/2 such pairs.
        // So, the total sum is (n/2) * -1, which simplifies to -n/2.
        sum = -(n / 2);
    } else {
        // If 'n' is odd, the series can be grouped like this: (1-2) + (3-4) + ... + ((n-2)-(n-1)) + n.
        // The sum of the pairs is -((n-1)/2). In integer arithmetic, (n-1)/2 is the same as n/2.
        // So, the sum of the pairs is -(n/2).
        // The total sum is the sum of the pairs plus the last number, 'n'.
        // sum = -(n / 2) + n;
        sum = -(n / 2) + n;
    }

    // Print the final calculated sum to the console.
    printf("The sum is: %d", sum);

    // Return 0 to indicate that the program executed successfully.
    return 0;
}
