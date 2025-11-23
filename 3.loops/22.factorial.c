#include <stdio.h> // Get the standard library for input/output functions like printf and scanf.

int main() { // This is the main function where the program starts.
    int n; // Create an integer variable named 'n' to hold the user's number.
    printf("Enter a number: "); // Show a message asking the user for a number.
    scanf("%d", &n); // Read the number the user types and store it in the 'n' variable.
    
    int factorial = 1; // Create a variable 'fact' to store the factorial and start it at 1.
    
    // This loop calculates the factorial. It runs from 1 up to the user's number 'n'.
    for (int i = 1; i <= n; i++) { 
        factorial = factorial * i; // Multiply the current 'fact' value by the loop number 'i' and update 'fact'.
    }
    
    printf("The factorial is: %d", factorial); // Display the final factorial result.
    
    return 0; // Tell the operating system that the program finished successfully.
}

/*
--- A Simple Guide to Initializing Variables ---

What is a variable?
Think of a variable as a labeled box where you can store information. When you create a variable, you give it a name (a label) and specify what type of information it will hold (like a number).

What does "initializing" mean?
Initializing a variable simply means putting a starting value into the box right when you create it.

How do you initialize a variable?
It's easy! You just set the value when you declare the variable.
The pattern is: type name = value;
For example: int my_number = 10;

Why is this so important?
There are two main reasons:

1.  To Avoid Random "Garbage" Values:
    If you create a variable (a box) but don't put anything in it, it's not actually empty. It contains a random, leftover value from whatever was in that memory spot before. This is often called a "garbage value."
    If you try to do calculations with this random value, your program will produce strange, unpredictable results. It's a common source of bugs! In our factorial code, if we didn't set 'fact' to 1, it would start with a garbage value, and the final factorial would be completely wrong.

2.  To Get the Right Starting Point for Your Logic:
    Many tasks in programming need a clean start.
    -   If you are adding a list of numbers, you would start your 'sum' variable at 0.
    -   If you are multiplying a list of numbers (like in our factorial example), you must start your 'product' variable at 1. Why 1? Because multiplying any number by 1 doesn't change it. If you started with 0, your final answer would always be 0.

In this program, we use `int fact = 1;`. We do this so our calculation has the correct starting point for multiplication.
*/
