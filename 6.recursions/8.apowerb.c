#include <stdio.h>
int power(int a, int b) {
    if(b == 0) {
        return 1;
    }
    return a * power(a, b - 1);;
}
int main(){
    int a; 
    printf("Enter base: ");
    scanf("%d", &a);
    int b; 
    printf("Enter exponent: ");
    scanf("%d", &b);
    int pow = power(a, b);
    printf("%d raised to power %d is: %d", a, b, pow);
    return 0;
}