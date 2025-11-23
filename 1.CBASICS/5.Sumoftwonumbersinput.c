#include <stdio.h> // Includes the Standard Input/Output library for functions like printf and scanf.

int main() { // The main function where program execution begins.
    int num1, num2, sum; // Declare three integer variables to hold the two numbers and their sum.
    
    printf("please enter the first number: "); // Prompt the user to enter a number.
    scanf("%d", &num1); // Read the integer entered by the user and store it in the 'num1' variable.
    
    printf("Please enter the second number: "); // Prompt the user for the second number.
    scanf("%d", &num2); // Read the second integer and store it in the 'num2' variable.
    
    sum = num1 + num2; // Calculate the sum of the two numbers.
    
    printf("The sum of the two numbers is: %d\n", sum); // Print the final calculated sum.
    
    return 0; // Indicates successful program execution.
}

/*
Logic behind the code:
This program demonstrates how to take input from the user, perform a calculation, and display the result.

1.  `#include <stdio.h>`: This is necessary for both `printf` (for output) and `scanf` (for input).

2.  `int num1, num2, sum;`: Three integer variables are declared. It's common to declare multiple variables of the same type on a single line.

3.  `printf(...)`: This function is used to display a message to the user, prompting them for input. This is crucial for making interactive programs.

4.  `scanf("%d", &num1);`: This is the core of the input logic.
    - `scanf` is a function that reads formatted input from the standard input (usually the keyboard).
    - `"%d"` is the format specifier that tells `scanf` to expect an integer.
    - `&num1` is the memory address of the `num1` variable. The `&` (address-of) operator is critical here. It tells `scanf` *where* in memory to store the integer it reads. Forgetting the `&` is a very common bug in C.

5.  `sum = num1 + num2;`: A standard arithmetic operation is performed on the values that the user provided.

6.  `printf("... %d\n", sum);`: The final result is displayed to the user, embedding the value of the `sum` variable into the output string.
*/
