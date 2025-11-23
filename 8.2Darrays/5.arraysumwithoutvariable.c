#include  <stdio.h>

int main() {
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter the number of columns: ");
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
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            arr[i][j] +=  brr[i][j];
        }
    }
    printf("\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}