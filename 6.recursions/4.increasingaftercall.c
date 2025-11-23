#include <stdio.h>
void increasing(int n) {
    if(n == 0) { //base case
        return;
    }
    increasing(n - 1); // recursive call
    printf("%d\n", n); // code
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    increasing(n);
    return 0;
}
/*
### How the Recursive Calling Works

The key to understanding this is that the printf statement is *after* the recursive call. This means that the numbers are printed as the recursion "unwinds."

Let's trace the execution with an example, say n = 3:

1.  increasing(3) is called.
    *   n is not 0.
    *   It calls increasing(2).

2.  increasing(2) is called.
    *   n is not 0.
    *   It calls increasing(1).

3.  increasing(1) is called.
    *   n is not 0.
    *   It calls increasing(0).

4.  increasing(0) is called.
    *   n is 0.
    *   The function returns to where it was called from (increasing(1)).

5.  Back in increasing(1):
    *   The increasing(0) call has finished.
    *   The next line is printf("%d\n", n);, so it prints 1.
    *   The function returns to increasing(2).

6.  Back in increasing(2):
    *   The increasing(1) call has finished.
    *   The next line prints 2.
    *   The function returns to increasing(3).

7.  Back in increasing(3):
    *   The increasing(2) call has finished.
    *   The next line prints 3.
    *   The function returns to main.

This process of delaying the action (in this case, printing) until after the recursive call is what causes the output to be in increasing order.
*/