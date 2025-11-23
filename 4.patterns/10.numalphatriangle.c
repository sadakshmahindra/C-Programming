#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Odd rows print numbers
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else { // Even rows print characters
            for (int j = 1; j <= i; j++) {
                printf("%c ", 'A' + j - 1);
            }
        }
        printf("\n");
    }
    return 0;
}