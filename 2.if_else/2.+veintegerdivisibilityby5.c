#include <stdio.h>

int main() {
    int x;
    printf("Enter the nunber here: ");
    scanf("%d", &x);
    if (x >= 0) {
        if (x % 5 == 0) {
            printf("The given number '%d' is divisible by 5", x);
        }else {
            printf("The given number '%d' is not divisible by 5", x);
        }
    }else {
        printf("The given number '%d' is invalid.\nPlease try again", x);
    }
    return 0;
}