#include <stdio.h> // Includes the standard input/output library.

int main() { // The main function where the program starts.
    int a, b; // Declares two integer variables, 'a' for the base and 'b' for the exponent.
    printf("Enter the first number: "); // Asks the user to enter the base number.
    scanf("%d", &a); // Reads the user's input for the base and stores it in 'a'.
    printf("Enter the second number: "); // Asks the user to enter the exponent.
    scanf("%d", &b); // Reads the user's input for the exponent and stores it in 'b'.
    int power = 1; // Initializes the 'power' variable to 1. This will hold the final result.
    
    // This loop multiplies the base 'a' by itself 'b' times.
    for(int i = 1; i <= b; i++) {
        power = power * a; // In each iteration, multiplies the current 'power' value by 'a'.
    }
    
    printf("%d raised to the power %d is %d", a, b, power); // Prints the final calculated result.
    
    return 0; // Indicates that the program finished successfully.
}