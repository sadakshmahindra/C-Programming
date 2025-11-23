#include <stdio.h>
int stair(int n) {
    if (n == 1) {
        return 1;
    } if(n == 2) {
        return 2;
    }
    return stair(n - 1) + stair(n - 2) ;
}
int main() {
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);
    printf("The number of ways to climb %d chairs is %d", n, stair(n));
    return 0;
}
/*
### Logic Behind the Code

This program solves the classic "climbing stairs" problem using recursion. The problem is: given `n` stairs, how many distinct ways can you climb to the top if you can only take steps of size 1 or 2?

This problem is a direct application of the Fibonacci sequence.

#### How it Works:

1.  **Base Cases**: We need to define the simplest scenarios that don't require further recursion.
    *   `if (n == 1) return 1;`: If there is only one stair, there is only one way to climb it: take one step.
    *   `if (n == 2) return 2;`: If there are two stairs, there are two ways: take two separate 1-step jumps (1+1) or take a single 2-step jump (2).

2.  **Recursive Step**: For any number of stairs `n` greater than 2, we can figure out the number of ways by thinking about the very last step taken.
    *   The last step could have been a single step from stair `n-1`.
    *   Or, the last step could have been a double step from stair `n-2`.
    *   Therefore, the total number of ways to reach stair `n` is the sum of the number of ways to reach `n-1` and the number of ways to reach `n-2`.
    *   This gives us the recursive formula: `stair(n) = stair(n - 1) + stair(n - 2)`.

#### Trace with `stair(4)`:

1.  `stair(4)` is called.
    *   It returns `stair(3) + stair(2)`.

2.  `stair(3)` is called.
    *   It returns `stair(2) + stair(1)`.
    *   `stair(2)` is a base case and returns `2`.
    *   `stair(1)` is a base case and returns `1`.
    *   So, `stair(3)` returns `2 + 1 = 3`.

3.  `stair(2)` is called.
    *   This is a base case and returns `2`.

4.  Finally, the original call to `stair(4)` gets its values:
    *   The result from `stair(3)` is `3`.
    *   The result from `stair(2)` is `2`.
    *   It returns `3 + 2 = 5`.

The 5 ways to climb 4 stairs are: (1,1,1,1), (1,1,2), (1,2,1), (2,1,1), (2,2).
*/