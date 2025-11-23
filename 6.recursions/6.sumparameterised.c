#include <stdio.h>
void sum(int n, int s) {
    if (n == 0) {
        printf("%d", s);
        return;
    }
    sum(n - 1, s + n);
    return;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum(n , 0);
    return 0;
}
/*
### How the Recursive Calling Works

This code calculates the sum of numbers from 1 to `n` using a parameterized recursive function.

#### Logic Behind the Code

1.  **Base Case**: The `sum` function takes two arguments: `n`, the current number, and `s`, the accumulated sum. The recursion stops when `n` becomes 0. At this point, it prints the final sum `s`.

2.  **Recursive Step**: If `n` is not 0, the function calls itself with `n - 1` and `s + n`. This means it decrements the number `n` and adds the current value of `n` to the sum `s` for the next recursive call.

#### How the Recursive Calling Works

Let's trace the execution with `n = 3`. The initial call from `main` is `sum(3, 0)`.

1.  `sum(3, 0)` is called.
    *   `n` is 3, not 0.
    *   It calls `sum(3 - 1, 0 + 3)`, which is `sum(2, 3)`.

2.  `sum(2, 3)` is called.
    *   `n` is 2, not 0.
    *   It calls `sum(2 - 1, 3 + 2)`, which is `sum(1, 5)`.

3.  `sum(1, 5)` is called.
    *   `n` is 1, not 0.
    *   It calls `sum(1 - 1, 5 + 1)`, which is `sum(0, 6)`.

4.  `sum(0, 6)` is called.
    *   `n` is 0. This is the base case.
    *   It prints the value of `s`, which is `6`.
    *   The function returns.

The calls then unwind without any further action. The final sum is calculated and passed down through each recursive call via the `s` parameter.
*/