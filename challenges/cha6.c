#include <stdio.h>

int main() {
    int n; 
    printf("Enter the number: ");
    scanf("%d", &n);
    int num = n;
    int count = 0;
    if(n == 0) {
        count = 1;
    } else{
        while (n != 0) {
            n = n / 10;
            count++;

        }
    }
    printf("the total no of digits in %d is %d", num, count);
    return 0;
}