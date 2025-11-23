#include  <stdio.h>

int main() {
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("\nEnter elements of matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    printf("\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
    }
    printf("The sum of the given matrix is: %d ", sum);
    return 0;
}