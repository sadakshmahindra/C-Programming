#include <stdio.h>

int main() {
    int a; 
    printf("Enter the first number : ");
    scanf("%d", &a);
    int b; 
    printf("Enter the second number: ");
    scanf("%d", &b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);
    return 0;
}