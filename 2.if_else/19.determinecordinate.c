#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the X - coordinate: ");
    scanf("%d", &x);
    printf("Enter the Y - coordinate: ");
    scanf("%d", &y);
    if(x != 0 && y == 0) {
        printf("The coordinate lies on x axis.");
    }else if(x == 0 && y != 0){
        printf("The coordinate lies on y axis.");
    }else if(x == 0 && y == 0){
        printf("The given point is origin.");
    }else {
        printf("The given point doesn't lies on any axis or origin.");
    }
    return 0;
}