#include <stdio.h>

int main() {
    int n;
    printf("Enter the given number here: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 3 == 0) {
        printf("The given number is divisible by both 3 and 5.");
    } else {
        printf("The given number isn't divisible by both 3 and 5");
    }
    return 0;
}