#include <stdio.h> // Includes the Standard Input/Output library.

int main() { // The main function where program execution begins.
    int x = 10; // Declares an integer variable 'x' and initializes it with the value 10.
    printf("%d\n", x); // Prints the initial value of x (which is 10).
    
    x += 50; // Updates the value of x. This is shorthand for x = x + 50. The new value will be 10 + 50 = 60.
    
    printf("%d\n", x); // Prints the updated value of x (which is now 60).
    
    return 0; // Indicates successful program execution.
}

/*
Logic behind the code:
This program demonstrates the concept of variable updation. Variables are not fixed; their values can be changed throughout the program.

1.  `int x = 10;`: A variable `x` is declared and initialized with a starting value of 10.

2.  `printf("%d\n", x);`: The program prints the current value of `x`, which is 10.

3.  `x += 50;`: This is the update step. 
    - It takes the current value of `x` (10).
    - It adds 50 to it.
    - It assigns the result (60) back to the variable `x`.
    - `x += 50` is a common and convenient shorthand for `x = x + 50`.

4.  `printf("%d\n", x);`: The program prints the value of `x` again. Since the variable was updated in the previous step, this will now print 60.
*/
