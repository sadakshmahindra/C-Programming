#include <stdio.h>

int main() {
    int r;
    printf("Enter the no of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    if (r <= 0 || c <= 0) {
        printf("Error: Number of rows and columns must be positive.\n");
        return 1; // Exit if dimensions are invalid
    }
    int arr[r][c];
    printf("Enter elements of matrix: ");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    int max = arr[0][0];
    int min = arr[0][0];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            } if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    printf("the maximum value in the matrix is: %d\n", max);
    printf("the minimum value in the matrix is: %d", min);
    return 0;
}