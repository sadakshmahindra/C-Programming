#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum1 = 0, sum2 = 0;
    while(n > 0) {
        int lastdigit = n % 10;
        if(lastdigit % 2 == 0) {
            sum1 = sum1 + lastdigit;
        }else{
            sum2 = sum2 + lastdigit;
        }
        n = n / 10;
    }
    printf("The sum of all even digits is: %d\n", sum1);
    printf("The sum of all odd digits is: %d", sum2);
    return 0;
}