#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
// ternary operator(useless just for knowledge and semester knowledge and emergency)
// exp 1? exp 2 : exp 3
n % 2 == 0 ? printf("Even number") : printf("odd number");
    return 0;
}