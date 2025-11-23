#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);    
    printf("Enter the third number: ");
    scanf("%d", &c);
    if (a > b && a > c){
        printf("a is the greatest among all the three numbers.");
    }if (b > a && b > c) {
        printf("b is the greatest among all the three numbers.");
    }if (c > b && c > a) {
        printf("c is the greatest among all the three numbers.");
    }
    return 0;
}