#include <stdio.h>

int main() {
    int a;
    printf("Enter the number here: ");
    scanf("%d", &a);
    a = a/2;
    printf("The halved value of the input is: %d\n", a);
    return 0;
}