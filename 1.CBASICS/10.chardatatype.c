#include <stdio.h> // Includes the Standard Input/Output library.

int main() { // The main function where program execution begins.
    char ch = 'a'; // Declares a character variable 'ch' and initializes it with the value 'a'.
    printf("%c", ch); // Prints the value of the 'ch' variable. The '%c' format specifier is used for characters.
    return 0; // Indicates successful program execution.
}

/*
Logic behind the code:
This program demonstrates the use of the 'char' data type in C.

1.  `char ch = 'a';`: It declares a variable named 'ch' of type `char`. The `char` data type is used to store a single character (like a letter, number, or symbol). The variable is initialized with the character literal 'a'.

2.  `printf("%c", ch);`: The `printf` function is used to print the character stored in the `ch` variable.
    - The `"%c"` is a format specifier that tells `printf` to interpret the corresponding variable (`ch`) as a character.
*/