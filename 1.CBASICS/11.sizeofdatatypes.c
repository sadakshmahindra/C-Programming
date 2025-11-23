#include <stdio.h> // Includes the Standard Input/Output library.

int main () { // The main function where program execution begins.
    // Declares a 'short' integer 'a'. 'short' typically has a range of -32,768 to 32,767.
    // The calculation 30*1000+2768 results in 32768.
    short a = 30*1000+2768;
    
    // This printf will likely display -32768 instead of 32768.
    // This is due to an integer overflow, where the value wraps around to the minimum value of the 'short' type.
    printf("%d", a);
    
    return 0; // Indicates successful program execution.
}

/*
Logic behind the code:
This program demonstrates the concept of integer overflow, specifically with the 'short' data type.

1.  Data Type 'short': A 'short' is a signed integer type that uses less storage than a standard 'int', typically 2 bytes. This gives it a limited range, commonly from -32,768 to 32,767.

2.  The Calculation: The code initializes the short 'a' with the value of `30*1000+2768`, which equals `32768`.

3.  Integer Overflow: Since 32,768 is one greater than the maximum positive value a 'short' can hold (32,767), an overflow occurs. In signed integer overflow, the behavior is technically undefined in C, but on most systems (using two's complement representation), the value wraps around from the maximum positive value to the minimum negative value.

4.  The Output: As a result of the overflow, the value stored in 'a' becomes -32,768. The `printf` function then prints this negative value to the console. The file name `sizeofdatatypes.c` is a bit misleading; the code's primary lesson is about data type limits and overflow, not the `sizeof` operator.
*/

// int a = 3;
// float a = 3.14;
// char ch = 'a';
// short a = 32; ----->  only from -32768 to 32767
// long x = 327895; 
// long long x = 3258795;