#include <stdio.h>
// Function prototype for the maze function
int maze(int cr, int cc, int er, int ec);
int main() {
    int n;
    printf("Enter no of rows of maze : ");
    scanf("%d", &n);
    int m;
    printf("Enter no of columns of maze : ");
    scanf("%d", &m);
    int noOfways = maze(1, 1, n, m); // Start at (1,1) and go to (n,m)
    printf("Total ways to reach the end: %d\n", noOfways);
    return 0;
}
// cr = current row, cc = current col, er = end row, ec = end col
int maze(int cr, int cc, int er, int ec) {
    if (cr > er || cc > ec) { // Base case 1: If we go out of bounds, this is not a valid path.
        return 0;
    }
    if (cr == er && cc == ec) { // Base case 2: If we have reached the destination, we have found 1 valid path.
        return 1;
    }
    int rightways = maze(cr, cc + 1, er, ec); // Move right and find all possible paths
    int downways = maze(cr + 1, cc, er, ec); // Move down and find all possible paths
    int totalways = rightways + downways; // Total paths is the sum of paths from moving right and moving down.
    return totalways;
}

/*
==================================
Code Logic Explanation
==================================
The program calculates the number of unique paths from a starting point (1,1) to an ending point (n,m) in a grid. The only allowed moves are to go right or to go down.

The `maze` function is recursive and follows these core principles:

1.  **Base Cases (Termination Conditions):**
    *   If the current position (cr, cc) is outside the maze boundaries (i.e., cr > n or cc > m), it's an invalid path. The function returns 0.
    *   If the current position reaches the destination (cr == n and cc == m), it means one successful path has been found. The function returns 1.

2.  **Recursive Step:**
    *   From any given cell (cr, cc), the total number of paths to the destination is the sum of:
        a) The number of paths from the cell to the right: `maze(cr, cc + 1, er, ec)`
        b) The number of paths from the cell below: `maze(cr + 1, cc, er, ec)`
    *   The function calls itself for these two possibilities and adds their results to get the total number of ways from the current cell.

The `main` function simply takes the maze dimensions (n and m) from the user and calls the `maze` function with the starting coordinates (1,1) to begin the calculation.
*/