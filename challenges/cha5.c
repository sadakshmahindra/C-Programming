#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        int last_digit = n % 10;
        sum = sum + last_digit;
        n = n / 10;
    }
    printf("Enter the sum of digits : %d", sum);
    return 0;
}