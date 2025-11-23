#include <stdio.h>
#include <math.h> // FIX: Added required math library

int main() {
    int n;
    printf("Enter the number of terms: ");
    // FIX: Added '&' to scanf for it to work correctly
    scanf("%d", &n);

    // Loop from 1 to n to print n terms
    for(int i = 1; i <= n; i++) {
        // Calculate the i-th term using the formula 3^i
        // FIX: Correct pow() syntax and the formula logic
        printf("%d\n", (int)pow(3, i));
    }

    return 0;
}
