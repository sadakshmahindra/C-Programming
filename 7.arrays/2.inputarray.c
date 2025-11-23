#include <stdio.h>

int main() {
    int arr[4];
    for(int j = 0; j < 4; j++) {
        printf("Enter the element for index %d: ", j);
        scanf("%d", &arr[j]);
    }
    
    for(int i = 0; i <= 3; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}