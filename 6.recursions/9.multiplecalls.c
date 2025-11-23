#include <stdio.h>
int fibonacci(int n) {
    if(n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    printf("The %dth fibonacci term is %d", n, fibonacci(n));
    return 0;
}
/*
### Logic Behind the Code

This code calculates the nth term of the Fibonacci sequence using a recursive function that calls itself multiple times.

#### How it Works:

1.  **Base Case**: The function `fibonacci(n)` first checks if `n` is 1 or 2. If it is, the function returns 1. This is the anchor of the recursion, providing a fixed value for the first two terms in the sequence.

2.  **Recursive Step**: If `n` is greater than 2, the function returns the sum of `fibonacci(n - 1)` and `fibonacci(n - 2)`. This is the recursive definition of a Fibonacci number (F(n) = F(n-1) + F(n-2)).

#### Trace with `fibonacci(4)`:

The calculation unfolds like a tree:

1.  `fibonacci(4)` is called.
    *   It needs to compute `fibonacci(3) + fibonacci(2)`.

2.  To do that, it first calls `fibonacci(3)`.
    *   `fibonacci(3)` needs to compute `fibonacci(2) + fibonacci(1)`.
    *   It calls `fibonacci(2)`. This hits the base case and returns `1`.
    *   It calls `fibonacci(1)`. This also hits the base case and returns `1`.
    *   `fibonacci(3)` returns `1 + 1 = 2`.

3.  Next, the original call to `fibonacci(4)` calls `fibonacci(2)`.
    *   `fibonacci(2)` hits the base case and returns `1`.

4.  Finally, `fibonacci(4)` can compute its result:
    *   The value from `fibonacci(3)` is `2`.
    *   The value from `fibonacci(2)` is `1`.
    *   It returns `2 + 1 = 3`.

So, the 4th Fibonacci term is 3.

**Note on Efficiency:** This recursive implementation is conceptually simple but highly inefficient for larger values of `n` because it re-computes the same Fibonacci numbers many times. For example, `fibonacci(5)` calculates `fibonacci(3)` twice. An iterative (loop-based) solution is much more efficient.
*/