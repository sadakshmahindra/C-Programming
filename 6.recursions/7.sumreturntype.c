#include <stdio.h>
int sum(int n) {
    if(n == 1 || n == 0) { //base case
        return n;
    }
    int recAns = n + sum (n - 1);
    return recAns;
}
int main() {
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    int add = sum(n);
    printf("%d", add);
    return 0;
}