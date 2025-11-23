#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int main() {
    int a; 
    printf("Enter first number: ");
    scanf("%d", &a);
    int b;
    printf("Enter the sescond number: ");
    scanf("%d", &b);
    int sum = add(a,b);
    printf("The sum of %d and %d is %d", a, b, sum);
    return 0;
}