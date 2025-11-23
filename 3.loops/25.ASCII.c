#include <stdio.h> // Includes the standard input/output library.

int main() { // The main function where the program starts.
    //what is typecasting
    
    // This loop iterates through the ASCII values for uppercase letters 'A' through 'Z'.
    for(int i = 65; i <= 90;i++) { // The loop runs from integer 65 (ASCII for 'A') to 90 (ASCII for 'Z').
        printf("%d -->", i); // Prints the integer ASCII value.
        
        // This is an example of explicit typecasting.
        char ch = (char)i; // The integer 'i' is explicitly converted to a character 'ch'.
        
        printf(" %c\n", ch); // Prints the character that corresponds to the ASCII value.
    }
    return 0; // Indicates that the program finished successfully.
}

/*
--- Code Alternative ---

Instead of using integer ASCII values (65 to 90) in the loop, you can work with the characters directly. This often makes the code more readable because you don't have to memorize the ASCII table.

In C, characters are internally treated as small integers, so you can perform arithmetic on them.

Alternative Example:

#include <stdio.h>

int main() {
    // Loop from character 'A' to character 'Z'.
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        // Print the character and its corresponding integer ASCII value.
        // Here, '%c' prints the character and '%d' prints its underlying integer value.
        printf("%c --> %d\n", ch, ch);
    }
    return 0;
}

This version is generally preferred because it's clearer to other programmers what the code is doing ('A' to 'Z') without needing to look up what ASCII values 65 and 90 represent.
*/

/*
--- What is Typecasting? ---

Typecasting (or type conversion) is a way to explicitly tell the compiler to convert a value from one data type to another. In C, you do this by putting the new data type in parentheses before the variable or value you want to convert.

Syntax: (new_type)value;

There are two main types of conversion:

1.  Implicit Conversion (Automatic):
    The compiler automatically converts data types when it makes sense. For example, if you assign an `int` to a `long`, the compiler handles it for you.
    Example:
    int my_int = 10;
    long my_long = my_int; // Implicitly converted from int to long.

2.  Explicit Conversion (Typecasting):
    This is when you *force* a conversion. This is what your code does. You are telling the compiler, "I know `i` is an integer, but I want you to treat it as a `char` for this operation."

    Example from your code:
    char ch = (char)i;

    - `i` is an `int` (e.g., 65).
    - `(char)` is the typecast operator, telling the compiler to convert the value of `i` into a character.
    - The compiler takes the integer 65 and looks up the corresponding character in the ASCII table, which is 'A'.
    - The character 'A' is then assigned to the `ch` variable.

Another Common Example: Integer and Floating-Point Division

Imagine you want to divide two integers but need a precise decimal answer.

int a = 10;
int b = 4;
float result;

// Incorrect - Integer Division:
result = a / b; // This performs integer division. 10 / 4 = 2. `result` will be 2.0.

// Correct - Using Typecasting:
result = (float)a / b; // `a` is temporarily treated as a float (10.0).
                       // Because one number is a float, the division becomes floating-point division.
                       // 10.0 / 4 = 2.5. `result` will be 2.5.

Why is it useful?
- To perform correct arithmetic between different data types (like the division example).
- To convert between character and integer representations (like your ASCII example).
- To work with functions that require a specific data type.

It's a powerful tool, but it requires care. You are telling the compiler you know what you're doing, so it's your responsibility to ensure the conversion is safe and makes sense.
*/