#include <stdio.h>

int maze2(int n, int m) {
    if (n < 1 || m < 1) {
        return 0;
    }
    if (n == 1 && m == 1) {
        return 1;
    }
    int rightways = maze2(n, m - 1);
    int downways = maze2(n - 1, m);
    int totalways = rightways + downways;
    return totalways;
}

int main() {
    int n;
    printf("Enter no of rows of maze : ");
    scanf("%d", &n);
    int m;
    printf("Enter no of columns of maze : ");
    scanf("%d", &m);
    int noOfways = maze2(n, m); 
    printf("Total ways to reach the end: %d\n", noOfways);
    return 0;
}

/*
==================================
Code Logic Explanation
==================================
This program calculates the number of unique paths to travel from the bottom-right corner (n,m) of a grid to the top-left corner (1,1). The only allowed moves are one step up or one step left.

This is a different perspective on the maze problem compared to going from (1,1) to (n,m).

The `maze2` function is recursive and works as follows:

1.  **Function Signature:** `int maze2(int n, int m)` takes the dimensions of the current sub-grid as input.

2.  **Base Cases (Termination Conditions):**
    *   `if (n < 1 || m < 1)`: If either dimension is less than 1, it means we are "out of bounds" of the valid grid. This is an invalid path, so the function returns 0. This is a crucial safety check.
    *   `if (n == 1 && m == 1)`: If we are at the (1,1) cell, we have successfully reached the destination. This counts as one valid path, so the function returns 1.

3.  **Recursive Step:**
    *   From any given cell (n,m), the total number of paths to reach (1,1) is the sum of:
        a) The number of paths by moving left: `maze2(n, m - 1)`
        b) The number of paths by moving up: `maze2(n - 1, m)`
    *   The function calls itself for these two possibilities and adds their results to get the total number of ways from the current cell.

The `main` function takes the total grid dimensions (n and m) from the user and calls `maze2(n, m)` to start the calculation from the bottom-right corner.
*/