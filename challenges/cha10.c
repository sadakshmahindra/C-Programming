#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int originalnumber = n;
    int max = 0;
    while(n > 0) {
        int lastdigit = n % 10;
        if(max <= lastdigit) {
            max = lastdigit;
        }
        n = n / 10;
    }
    printf("The largest digit in %d is %d", originalnumber, max);
}