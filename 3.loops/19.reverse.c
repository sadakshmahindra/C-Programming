#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: "); // Prompt the user for input
    scanf("%d", &n);            // Read the integer from the user
    int reverse = 0;            // Initialize the variable to store the reversed number
    while(n != 0) {
        int lastdigit = n % 10;   // Extract the last digit of the current number
        reverse = (reverse * 10) + lastdigit; // Shift existing reversed digits left and add the new last digit
        n = n / 10;               // Remove the last digit from the original number
    }
    printf("The reverse of the number is: %d\n", reverse); // Print the final reversed number
    return 0;                   // Indicate successful program termination
}