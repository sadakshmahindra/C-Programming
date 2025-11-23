#include <stdio.h> // Get the standard library for input/output functions like printf and scanf.

int main() { // This is the main function where the program starts.
    int n; // Create an integer variable named 'n' to hold the user's number.
    printf("Enter a number: "); // Show a message asking the user for a number.
    scanf("%d", &n); // Read the number the user types and store it in the 'n' variable.
    
    int factorial = 1; // Create a variable 'factorial' to store the factorial value and start it at 1.
    
    // This loop calculates and prints the factorial for each number from 1 to 'n'.
    for (int i = 1; i <= n; i++) { 
        factorial = factorial * i; // Calculate the factorial of the current number 'i'.
        printf("The factorial of %d is: %d\n", i, factorial); // Print the factorial for the current number 'i'.
    }
    
    return 0; // Tell the operating system that the program finished successfully.
}
