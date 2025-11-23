#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter the no of rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter the no of columns of first matrix: ");
    scanf("%d", &c1);
    printf("Enter the no of rows of second matrix: ");
    scanf("%d", &r2);
    printf("Enter the no of columns of second matrix: ");
    scanf("%d", &c2);

    if (c1 != r2) {
        printf("Entered dimensions doesn't support matrix multiplication.\n");
        return 1;
    }

    int arr[r1][c1];
    int brr[r2][c2];
    int res[r1][c2];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    printf("\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
