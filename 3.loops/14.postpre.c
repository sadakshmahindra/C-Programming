#include <stdio.h>

int main() {
    int x = 5;
    printf("%d\n", x);
    printf("%d\n", x++);// x++ means use, then increment
    printf("%d\n", ++x);// ++x means increment, then use
    printf("%d\n", --x);// --x means devrement, then use
    printf("%d\n", x--); // x-- means use, then decrement

    return 0;
    
}