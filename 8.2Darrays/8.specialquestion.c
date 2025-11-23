#include <stdio.h>

int main() {
    int n;
    printf("Enter no of rows: ");
    scanf("%d", &n);
    int m; 
    printf("Enter no of columns: ");
    scanf("%d", &m);

    int x1; 
    printf("Enter the first X-cordinate: ");
    scanf("%d", &x1);   
    int x2; 
    printf("Enter the second X-cordinate: ");
    scanf("%d", &x2);  
    int y1; 
    printf("Enter the first Y-cordinate: ");
    scanf("%d", &y1);  
    int y2;
    printf("Enter the second Y-cordinate: ");
    scanf("%d", &y2);

    // Input validation
    if (x1 < 0 || x2 >= n || y1 < 0 || y2 >= m || x1 > x2 || y1 > y2) {
        printf("Error: Invalid coordinates provided.\n");
        printf("Ensure that 0 <= x1 <= x2 < rows and 0 <= y1 <= y2 < columns.\n");
        return 1; // Indicate an error
    }

    int arr[n][m];
    printf("Please enter values of the tailored matrix: \n");
    for(int i = x1; i <= x2; i++) {
        for(int j = y1; j <= y2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for(int i = x1; i <= x2; i++) {
        for(int j = y1; j <= y2; j++) {
            sum = sum + arr[i][j];
        }
    }
    printf("The value of sum of tailored matrix is: %d", sum);
    return 0;
}