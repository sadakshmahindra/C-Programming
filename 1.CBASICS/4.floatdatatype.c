#include <stdio.h> // Includes the Standard Input/Output library.

int main() { // The main function where program execution begins.
    float pi = 3.14; // Declares a float variable 'pi' to store a decimal number.
    float e = 2.71; // Declares another float variable 'e'.
    
    float z = pi / e; // Divides the two float numbers and stores the result in a new float variable 'z'.
    
    // Prints the value of 'z'. The '%f' format specifier is used for printing float and double types.
    printf("%f", z); 
    
    return 0; // Indicates successful program execution.
}

/*
Logic behind the code:
This program demonstrates the declaration, arithmetic, and printing of the 'float' data type.

1.  `float pi = 3.14;`: It declares a variable named `pi` of type `float`. The `float` data type is used to store numbers that have a fractional part (decimal numbers).

2.  `float z = pi / e;`: This line shows that arithmetic operations like division can be performed on float variables. The result of the division is also a float, which is stored in the `z` variable.

3.  `printf("%f", z);`: The `printf` function is used to print the result.
    - The `"%f"` is the format specifier required to correctly print a `float` (or `double`) value. If `%d` were used, the output would be incorrect as the computer would interpret the variable's memory as an integer.
*/