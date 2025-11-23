#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a; // temp = entered value of a 
    *a = *b; // a = entered value of b
    *b = temp; //*b = entered value of a (--> b = entered value of a
    return;
}
int main() {
    int a; 
    printf("enter a : ");
    scanf("%d", &a);
    int b; 
    printf("Enter b: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d", b);
    return 0;
}