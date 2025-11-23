#include<stdio.h>

int main() {
    int x1, x2, x3, y1, y2, y3;
    printf("Enter first X-coordinate: ");
    scanf("%d", &x1);
    printf("Enter first Y-coordinate: ");
    scanf("%d", &y1);
    printf("Enter second X-coordinate: ");
    scanf("%d", &x2);
    printf("Enter second Y-coordinate: ");
    scanf("%d", &y2);
    printf("Enter third X-coordinate: ");
    scanf("%d", &x3);
    printf("Enter third Y-coordinate: ");
    scanf("%d", &y3);
    if((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1)) {
        printf("All the given points lie on a straight line.");
    }else {
        printf("All the points doesn't necessarily lie on a straight line.");
    }
    return 0;
}