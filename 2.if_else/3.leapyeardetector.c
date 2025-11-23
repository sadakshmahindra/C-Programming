#include <stdio.h>

int main() {
    int x;
    printf("Enter the year here: ");
    scanf("%d", &x);
    if (x >= 0) {
        if(x % 4 == 0) {
            printf("The given year '%d' is a leap year", x);
        }else {
            printf("The given year '%d' is not a leap year", x);
        }
    }else {
        printf("The entered year '%d' is not valid.\nPlease try again", x);
    }
    return 0;
}