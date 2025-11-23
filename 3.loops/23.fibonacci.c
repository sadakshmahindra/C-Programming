#include <stdio.h> // Includes the standard input/output library.

int main() { // The main function where the program starts.
    int n; // Declares an integer 'n' for the desired term number.
    printf("Enter the term number: "); // Asks the user for the term number.
    scanf("%d", &n); // Reads the user's input into 'n'.

    int a = 1; // Initializes a variable 'a' to 1.
    int b = 1; // Initializes a variable 'b' to 1.
    int sum = 1; // Declares and initializes 'sum' to 1.
    { // An opening curly brace starts a new block of code.
        // This loop is set to run n-2 times.
        for (int i = 1; i <= n - 2; i++) { 
            sum = a + b; // Calculates the sum of 'a' and 'b' and stores it in 'sum'.
            a = b; // Assigns the value of 'b' to 'a'.
            b = sum; // Assigns the new value of 'sum' to 'b'.
        }
      printf("The  %dth Fibonacci term is: %d\n",  n, sum); // Prints the final value that was stored in 'sum'.
      return 0; // Indicates that the program finished successfully.
    }
} // A closing curly brace ends the block of code.

/*
--- How This Program Works ---

This program calculates a number based on the Fibonacci sequence.

1.  Initialization:
    -   It starts by setting three integer variables: `a = 1`, `b = 1`, and `sum = 0`.
    -   `a` and `b` are used as the base for the calculation, starting with the values 1 and 1.

2.  The Calculation Loop:
    -   The program then enters a `for` loop that is set to run `n - 2` times.
    -   Inside the loop, it repeatedly calculates a new `sum` by adding `a` and `b`.
    -   It then updates `a` to be the old value of `b`, and `b` to be the new `sum`.
    -   This process continues, calculating a new value for `sum` in each iteration. For example, if n=5, the loop runs 3 times. The final value in `sum` would be the 5th term in a sequence starting from 1, 1.

3.  Printing the Result:
    -   After the loop is finished, the program prints the very last value that was stored in the `sum` variable.
*/
