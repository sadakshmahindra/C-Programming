#include <stdio.h>

int main() {
    int r;
    printf("Enter the no of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter the no of columns: ");
    scanf("%d", &c);

    int arr[r][c];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // spiral print
    printf("\nSpiral Print:\n");
    int min_row = 0;
    int max_row = r - 1;
    int min_col = 0;
    int max_col = c - 1;
    int tne = r * c;
    int count = 0;

    while (count < tne) {
        // 1. Print the minimum row (left to right)
        for (int j = min_col; j <= max_col && count < tne; j++) {
            printf("%d ", arr[min_row][j]);
            count++;
        }
        min_row++;

        // 2. Print the maximum column (top to bottom)
        for (int i = min_row; i <= max_row && count < tne; i++) {
            printf("%d ", arr[i][max_col]);
            count++;
        }
        max_col--;

        // 3. Print the maximum row (right to left)
        for (int j = max_col; j >= min_col && count < tne; j--) {
            printf("%d ", arr[max_row][j]);
            count++;
        }
        max_row--;

        // 4. Print the minimum column (bottom to top)
        for (int i = max_row; i >= min_row && count < tne; i--) {
            printf("%d ", arr[i][min_col]);
            count++;
        }
        min_col++;
    }

    printf("\n");
    return 0;
}