#include <stdio.h> // Includes the Standard Input/Output library for functions like printf.

int main() { // The main function where program execution begins.
    printf("Hello, people!\n"); // Prints the text "Hello, people!" to the console. '\n' is a newline character.
    return 0; // Indicates that the program has executed successfully.
}

/*
Logic behind the code:
This program is a fundamental example in C programming, designed to print a simple message to the console.

1.  `#include <stdio.h>`: This is a preprocessor directive that tells the compiler to include the contents of the Standard Input/Output header file. This file contains declarations for functions like `printf`.

2.  `int main()`: This is the main function. Every C program must have a `main` function, as it is the entry point for execution. The `int` indicates that the function returns an integer value.

3.  `printf("Hello, people!\n");`: This is a library function from `stdio.h` that prints formatted output to the standard output (usually the console). 
    - The string "Hello, people!" is the content to be printed.
    - `\n` is an escape sequence that represents a newline character, which moves the cursor to the beginning of the next line.

4.  `return 0;`: This statement terminates the `main` function and returns the value 0 to the operating system. A return value of 0 conventionally signifies that the program executed successfully without any errors.
*/