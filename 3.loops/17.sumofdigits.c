#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: "); // Prompt the user to enter a number
    scanf("%d", &n);            // Read the integer input from the user
    
    int sum = 0;                // Initialize sum of digits to zero
    
    while(n > 0) {              // Loop as long as n is greater than 0
        int last_digit = n % 10;  // Extract the last digit of the number
        sum = sum + last_digit;   // Add the extracted digit to the sum
        n = n / 10;               // Remove the last digit from the number
    }
    
    printf("The sum of the digits is: %d\n", sum); // Print the final calculated sum
    return 0;                   // Indicate successful program termination
}

// --- Important Rules for Loops ---

// When to declare a variable OUTSIDE a loop:
// When its value needs to be REMEMBERED across all iterations (e.g., a running total like 'sum').
// This is called "maintaining state".

// When to declare a variable INSIDE a loop:
// When you need a FRESH value for each cycle (e.g., 'last_digit' is new every time).

// When to put printf() INSIDE a loop:
// When you want to see the result of every step or see the PROGRESS.

// When to put printf() OUTSIDE a loop:
// When you are only interested in the FINAL ANSWER after all work is done.
