#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) { //i++ can also be written as i = i + 1;
        printf("Hello world\n");
    }
    return 0;
}