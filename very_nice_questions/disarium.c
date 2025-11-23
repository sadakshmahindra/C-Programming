#include <stdio.h>
int series(int lastdigit, int digitno) {
    int product = 1; 
    for(int i = 1; i <= digitno; i++) {
        product = product * lastdigit;
    }
    return product;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;
    int count = 0;
    if(n == 0) {
        count = 1; 
    } while (n > 0) {
        n = n / 10;
        count++;
    }

    int temp = original;
    int digitno = count;
    int sum_of_series = 0;
    while(temp > 0) {
        int lastdigit = temp % 10;
        sum_of_series = sum_of_series + series(lastdigit, digitno);
        temp = temp / 10;
        digitno--;
    }

    if(sum_of_series == original) {
        printf("This is a Disarium number.\n");
    }else {
        printf("This is not a Disarium number.");
    }
    return 0;
}