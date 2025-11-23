#include <stdio.h>
int power(int lastdigit, int count) {
    int result = 1;
    for(int i = 1; i <= count; i++) {
        result = result * lastdigit;
    }
    return result;
}
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int original = n;
    int count = 0;
    if(n == 0) {
        count = 1;
    }while(n != 0) {
        n = n / 10;
        count++;
    }

    int temp = original;
    int armstrong = 0;
    while(temp > 0) {
        int lastdigit = temp % 10;
        int pow = power(lastdigit, count);
        armstrong = armstrong + pow;
        temp = temp / 10;
    }

    if(original == armstrong) {
        printf("%d is an armstrong number.", original);
    }else {
        printf("%d is not an armstrong number.", original);
    }

    return 0;
}