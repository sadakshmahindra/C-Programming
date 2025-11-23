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
    printf("\n");
    for(int j = 0; j < r; j++) {
        if(j % 2 == 0){
            for(int i = 0; i < c; i++) {
                printf("%d ", arr[i][j]);
            }
        } else{
            for(int i = c - 1; i > -1; i--) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    return 0;
}