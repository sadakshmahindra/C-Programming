#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter the first side: ");
    scanf("%d", &a);
    printf("Enter the second side: ");
    scanf("%d", &b);
    printf("Enter the third side: ");
    scanf("%d", &c);
    if ( a + b > c && b + c > a && a + c > b) {
        printf("These are the dimensions of a triangle.");
    } else {
        printf("These are not the dimensions of a triangle.");
    }
    return 0;
}