#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a = 100;
    for(int i = 1; a > 0; i++) {
         printf("%d\n", a);
         a = a - 3;
         if(a < 0) {
        printf("This function is designed to end with positive entity.So no negative terms can be printed.");
    }
    }
    return 0;
}