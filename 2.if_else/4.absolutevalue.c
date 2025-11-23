#include <stdio.h>

int main() {
    int x;
    printf("Enter the number here: ");
    scanf("%d", &x);
    if (x >= 0) {
        printf("The absolute value of '%d' is '%d'", x, x);
    }else {
        x = x * (-1);
        int y = x * (-1);
        printf("The absolute value of '%d' is '%d'", y, x);
    }
    return 0;
}