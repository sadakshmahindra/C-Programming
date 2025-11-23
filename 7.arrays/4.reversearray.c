#include <stdio.h>

int main() {
    int arr[5];
    for(int i = 0; i <= 4; i++) {
        printf("Enter the value for index no %d: ", i + 1); //use i + 1 to get the correct order only for inputs
        scanf("%d", &arr[i]);
    }
    for(int i = 4; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
    return 0;
}