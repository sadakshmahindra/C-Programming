#include <stdio.h>

int main() {
    int a,b;
    printf("enter the first number: "); 
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int r = a%b;
    printf("The remainder of %d and %d is: %d", a,b,r);
    return 0;
} 
//if a < b then the modulus operator gives out a in output or terminal