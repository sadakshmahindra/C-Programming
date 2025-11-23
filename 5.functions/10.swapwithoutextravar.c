#include <stdio.h>
void swap(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d", b);
    return;
}
int main(){
    int a; 
    printf("Enter the first number : ");
    scanf("%d", &a);
    int b; 
    printf("Enter the second number: ");
    scanf("%d", &b);
    swap(a,b);
    return 0;
}