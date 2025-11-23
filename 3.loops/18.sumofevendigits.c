#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: "); // Prompt the user to enter a number
    scanf("%d", &n);            // Read the integer input from the user
    int evensum = 0;            // Initialize sum for even digits to zero
    while(n != 0) {
        int lastdigit = n % 10;   // Extract the last digit of the number
        if (lastdigit % 2 == 0) { // Check if the extracted digit is even
            evensum = evensum + lastdigit; // If even, add it to the sum
        }
        n = n / 10;               // Remove the last digit from the number
    }
    printf("The sum of the even digits is: %d\n", evensum); // Print the final sum of even digits
    return 0;                   // Indicate successful program termination
}