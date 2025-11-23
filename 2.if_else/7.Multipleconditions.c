#include <stdio.h>
int main() {
    int n;
    printf("Enter the number here: ");
    scanf("%d", &n);
    if (n > 5) {
        printf("the number is greater than 5");
    }else {
        printf("The number is less than 5");
    }
    return 0;
}