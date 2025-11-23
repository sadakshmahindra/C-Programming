#include <stdio.h>

int main() {
    int n;
    printf("Entr the no of rows: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {
            char ch = (char)(k + 'A'- 1);
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}