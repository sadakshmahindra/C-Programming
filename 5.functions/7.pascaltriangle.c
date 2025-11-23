#include <stdio.h>
int fact(int x) {
    int fact = 1; 
    for(int i = 1; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r) {
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}

int main() {
    int n; 
    printf("Enter no of rows: ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++) {
        for(int s = 0; s <= n - i; s++) {
            printf(" ");
        }
        for(int j = 0; j <= i; j++) {
            int icj = combination(i , j);
            printf(" %d", icj);
        }
        printf("\n");
    }
    return 0;
}