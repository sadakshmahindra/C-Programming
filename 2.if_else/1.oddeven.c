#include <stdio.h>

int main() {
    int x;
    printf("Please enter the number here: ");
    scanf("%d", &x); 
    if (x % 2 == 0) {
        printf("The given number '%d' is an even number", x);
     } else{
            printf("The given number '%d' is an odd number", x);
        }
        /*if (x % 2 != 0) {
        printf("The given number '%d' is an odd number", x);
     } else{
            printf("The given number '%d' is an even number", x);
        }*/
    return 0;
}