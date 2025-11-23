#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the first element: ");
    scanf("%d", &a);
    printf("Enter the second element: ");
    scanf("%d", &b);
    printf("Enter the third element: ");
    scanf("%d", &c);

    if(a > b && a > c) {
        printf("a is the largest.\n");
    }else if(b > a && b > c) {
        printf("b is the largest.\n");
    }else if(c > a && c > b) {
        printf("c is the largest.\n");
    }else if(a == b && b == c) {
        printf("a, b , c are equal");
    }

    return 0;
}