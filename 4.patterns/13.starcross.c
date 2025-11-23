#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
        if(n % 2 != 0) {
            if(i == j || i + j == n + 1) {
                printf("*");
            }else {
                printf(" ");
            }
        }else {
            printf("Only possible for odd value.");
            break;
        }
        }
        printf("\n");
    }
    return 0;
}