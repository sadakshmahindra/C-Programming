#include <stdio.h>
int fact(int lastdigit) {
    int product = 1;
    for(int i = 1; i <= lastdigit; i++) {
        product = product * i;
    }
    return product;
}
int main() {
    int n; 
    printf("Enter the number: ");
    scanf("%d", &n);
    
    int original = n;
    int temp = original;
    int strong = 0;
    while(temp > 0) {
        int lastdigit = temp % 10;
        strong = strong + fact(lastdigit);
        temp = temp / 10;
    }

    if(original == strong) {
        printf("The given number is a strong number.");
    }else {
        printf("The given number is not a strong number.");
    }
    return 0;
}