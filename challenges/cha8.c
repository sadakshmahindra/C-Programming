#include <stdio.h>

int main() {
    int n;
    printf("Enter a palindrome number(eg: 121,1331): ");
    scanf("%d", &n);
    int original = n;
    int palindrome = 0;
    while(n > 0) {
        int lastdigit = n % 10;
        palindrome = palindrome * 10 + lastdigit;
        n = n / 10;
    }
    if(palindrome == original) {
        printf("%d is a palidrome of %d", original, palindrome);
    }else {
        printf("The input is not a palindrome.");
    }
    return 0;
}