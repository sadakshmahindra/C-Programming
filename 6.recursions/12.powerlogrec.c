#include <stdio.h>
int powerlog(int a, int b) {
    if(b == 0) {
        return 1;
    }
    if (b == 1) {
        return a;
    }
    int p = powerlog(a, b/2);
    if(b % 2 == 0){
    return p * p;
    } else {
        return p * p * a;
    }
}
int main(){
    int a; 
    printf("Enter base: ");
    scanf("%d", &a);
    int b; 
    printf("Enter exponent: ");
    scanf("%d", &b);
    int pow = powerlog(a, b);
    printf("%d raised to power %d is: %d", a, b, pow);
    return 0;
}