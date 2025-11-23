#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the no of rows: ");
    scanf("%d", &r);
    printf("Enter the no of columns: ");
    scanf("%d", &c);

    int arr[r][c];
    int brr[r][c];

    printf("\nEnter elements of 1st matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &brr[i][j]);
        }
    }
    int result[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = arr[i][j] + brr[i][j];
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}