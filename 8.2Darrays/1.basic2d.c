#include <stdio.h>

int main() {
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c]; // r * c total elements
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;
    // 1 2
    // 3 4 
    return 0;
}