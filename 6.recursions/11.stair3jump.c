#include <stdio.h>

int stair(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    return stair(n - 1) + stair(n - 2) + stair(n - 3);
}

int main() {
    int n;
    printf("Enter the number of stairs : ");
    scanf("%d", &n);
    printf("The number of ways to climb %d stairs with upto 3 jumps at a time: %d\n", n , stair(n));
    return 0;
}

/*
 * ## Logic Explanation
 *
 * This program calculates the number of distinct ways to climb a staircase of 'n' steps,
 * given that you can take a jump of 1, 2, or 3 steps at a time.
 *
 * ### The Recurrence Relation
 *
 * The core idea is to break the problem down into smaller, identical sub-problems.
 * To reach the N-th step, you must have come from one of three possible previous steps:
 * 1. Step (n-1), by taking a 1-step jump.
 * 2. Step (n-2), by taking a 2-step jump.
 * 3. Step (n-3), by taking a 3-step jump.
 *
 * Therefore, the total number of ways to reach step 'n' is the sum of the ways to reach
 * each of these preceding steps. This gives us the recurrence relation:
 *
 *   ways(n) = ways(n-1) + ways(n-2) + ways(n-3)
 *
 * ### The Base Cases
 *
 * The recursion needs stopping conditions, which are the base cases:
 *
 * 1. `if (n < 0)`: It's impossible to climb a negative number of stairs. So, there are 0 ways.
 *    This case prevents infinite recursion downwards.
 *
 * 2. `if (n == 0)`: If you are at step 0, you have successfully "climbed" the stairs. There is exactly
 *    1 way to do this: by not moving at all. This might seem counter-intuitive, but it's a crucial
 *    base case that makes the recurrence work. For example, to calculate `stair(3)`, the formula
 *    `stair(2) + stair(1) + stair(0)` needs a value for `stair(0)`.
 *
 * ### Example Trace: stair(3)
 *
 * - stair(3) = stair(2) + stair(1) + stair(0)
 *   - stair(2) = stair(1) + stair(0) + stair(-1)
 *     - stair(1) = stair(0) + stair(-1) + stair(-2) -> 1 + 0 + 0 = 1
 *     - stair(0) = 1
 *     - stair(-1) = 0
 *     => stair(2) = 1 + 1 + 0 = 2
 *   - stair(1) = 1 (as calculated above)
 *   - stair(0) = 1
 * => stair(3) = 2 + 1 + 1 = 4
 *
 */
