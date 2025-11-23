#include <stdio.h>
void  PreInPost(int n) {
    if(n == 0) {
        return;
    }
    printf("Pre %d\n", n);
    PreInPost(n - 1);
    printf("In %d\n", n);
    PreInPost(n - 1);
    printf("Post %d\n", n);
    return;
}
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    PreInPost(n);
    return 0;
}

/*
==================================
Code Logic Explanation
==================================
This program is a classic recursion example that demonstrates the order of execution in a manner similar to tree traversals (Pre-order, In-order, and Post-order).

The function `PreInPost(n)` behaves as if it's a node in a binary tree, and its two children are both `PreInPost(n-1)`.

1.  **"Pre" (Pre-order):** The line `printf("Pre %d\n", n);` is executed *before* any of the recursive calls for `n-1`. This is analogous to visiting the root node first in a tree traversal.

2.  **"In" (In-order):** The line `printf("In %d\n", n);` is executed *in between* the two recursive calls. This is analogous to visiting the root node after the left subtree has been fully explored but before the right subtree is explored.

3.  **"Post" (Post-order):** The line `printf("Post %d\n", n);` is executed *after* both recursive calls have fully completed. This is analogous to visiting the root node last, after both its children's subtrees have been explored.

==================================
Dry Run for n = 2
==================================
The execution flow for `PreInPost(2)` is as follows:

1.  **`PreInPost(2)` starts.**
    - Prints "Pre 2".
    - Calls `PreInPost(1)` (the 'left' child).
        1.  **`PreInPost(1)` starts.**
            - Prints "Pre 1".
            - Calls `PreInPost(0)`.
                - `n` is 0, returns immediately.
            - Prints "In 1".
            - Calls `PreInPost(0)`.
                - `n` is 0, returns immediately.
            - Prints "Post 1".
            - **`PreInPost(1)` finishes and returns.**
    - Prints "In 2".
    - Calls `PreInPost(1)` again (the 'right' child).
        1.  **`PreInPost(1)` starts.**
            - Prints "Pre 1".
            - Calls `PreInPost(0)`.
                - `n` is 0, returns immediately.
            - Prints "In 1".
            - Calls `PreInPost(0)`.
                - `n` is 0, returns immediately.
            - Prints "Post 1".
            - **`PreInPost(1)` finishes and returns.**
    - Prints "Post 2".
    - **`PreInPost(2)` finishes.**

----------------------------------
Final Predicted Output for n = 2:
----------------------------------
Pre 2
Pre 1
In 1
Post 1
In 2
Pre 1
In 1
Post 1
Post 2
*/
