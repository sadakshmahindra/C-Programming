#include <stdio.h> // Includes the Standard Input/Output library.

int main() { // The main function where program execution begins.
    int p, q; // Declare two integer variables.
    
    printf("Enter the values of p and q "); // Prompt the user to enter two integer values.
    
    // Read two integers from the user's input.
    // scanf will read the first number into 'p', skip any whitespace (space, tab, newline), and then read the second number into 'q'.
    scanf("%d%d", &p, &q);
    
    // Print the values that were read from the user to confirm they were stored correctly.
    printf("p = %d q = %d", p, q);
    
    return 0; // Indicates successful program execution.
}

/*
Logic behind the code:
The program is named "predict the output" because it demonstrates how `scanf` reads multiple values from a single input line.

1.  `scanf("%d%d", &p, &q);`: This is the key line.
    - It tells the program to look for two integers in the user's input.
    - The `%d` format specifiers are placed together, but `scanf` is smart about whitespace (spaces, tabs, newlines). When looking for a number, it will automatically skip any leading whitespace characters.
    - **How it works:** When the user types, for example, `10 20` and hits Enter:
        a. `scanf` looks for the first `%d`. It finds `10` and stores it in `p`.
        b. `scanf` then looks for the second `%d`. It sees the space, skips it, finds `20`, and stores it in `q`.
    - The user could also type `10`, hit Enter, then type `20`, and hit Enter again. `scanf` would wait for both numbers before the program continues.

2.  `printf("p = %d q = %d", p, q);`: This line simply prints the values that were successfully read into `p` and `q`, demonstrating that the `scanf` operation worked as expected.
*/