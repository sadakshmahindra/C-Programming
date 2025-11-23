#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: "); // Prompt the user for input
    scanf("%d", &n);            // Read the integer from the user

    // Save the original number because 'n' will be changed by the loop.
    int original_number = n; 

    int reverse = 0;            // Initialize a variable to store the reversed number.
    
    // Loop until all digits of the number have been processed.
    while(n != 0) {
        int lastdigit = n % 10;   // Extract the last digit of the current number.
        reverse = (reverse * 10) + lastdigit; // Append the last digit to build the reverse.
        n = n / 10;               // Remove the last digit from the number.
    }

    // Calculate the sum using the saved original number and the final reversed number.
    int sum = original_number + reverse;

    // Print the original number, its reverse, and their sum.
    printf("The sum of %d and its reverse %d is: %d\n", original_number, reverse, sum);
    
    return 0;                   // Indicate successful program termination.
}
