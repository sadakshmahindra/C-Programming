#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int nsp = n - 1;
    for(int i = 1; i <= n; i++) {
        int a = i - 1;
        for(int j = 1; j <= nsp; j++) {
            printf(" ", j);
            nsp--;
        }
        for(int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        for(int l = 1; l <= i - 1; l++) {
            printf("%d", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}