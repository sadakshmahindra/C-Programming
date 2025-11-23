#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the sum value : ");
    scanf("%d", &x);
    
    int paircount = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) { // Start j from i + 1
            if(arr[i] + arr[j] == x) {
                printf("(%d , %d)", arr[i], arr[j]);
                paircount++;
            }
        }
    }
    return 0;
}

/*
### The Logic Explained: ###

1.  **Initialization:**
    *   First, we get the array of numbers and the target value `x` from the user.
    *   We create a counter variable, `paircount`, and initialize it to `0`. This variable will keep track of how many pairs we find.

2.  **The Outer Loop (`for i`):**
    *   The first `for` loop starts at the beginning of the array (`i = 0`) and picks one number, `arr[i]`.
    *   Think of this loop as picking the **first number** of a potential pair.

3.  **The Inner Loop (`for j`):**
    *   The second `for` loop is the most important part. It starts from `j = i + 1`.
    *   This means it only looks at the elements that come **after** the element `arr[i]`.
    *   This is the key to preventing errors:
        *   It ensures you don't pair an element with itself.
        *   It prevents finding the same pair twice (e.g., finding `(2, 8)` and later `(8, 2)`). We will only find `(2, 8)` because `j` is always ahead of `i`.
    *   Think of this loop as picking the **second number** of the pair.

4.  **The Check (`if` statement):**
    *   Inside the loops, `if (arr[i] + arr[j] == x)` checks if our two chosen numbers add up to the target `x`.
    *   If they do, we increment our counter: `paircount++`.

5.  **Final Output:**
    *   After both loops have finished checking every possible unique pair, we look at our `paircount` variable.
    *   If `paircount` is still `0`, it means we never found a matching pair, so we print the "No pairs found" message.
    *   If `paircount` is greater than `0`, we print the final count.
*/