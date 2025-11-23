#include <stdio.h>

int main() {
    int n; 
    printf("Enter the no of rows: ");
    scanf("%d", &n);
    int m;
    printf("Enter the no of  columns: ");
    scanf("%d", &m);

    int arr[n][m];
    // Prompt user to enter matrix elements
    printf("Enter the elements of matrix: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]); // Corrected scanf format
        }
    }

    // Optional: Print the entered matrix for verification
    printf("The entered matrix is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d\t", arr[i][j]); // Use tab for better spacing
        }
        printf("\n"); // Newline after each row
    } 
    int sumMAX = 0; // Variable to store the maximum row sum found
    // Loop through each row to calculate its sum
    for(int i = 0; i < n; i++) {
        int sum = 0; // Initialize sum for the current row
        // Loop through each element in the current row
        for(int j = 0; j < m; j++) {
            sum += arr[i][j]; // Add element to current row's sum
        }
        // After summing all elements in the current row, compare with sumMAX
        if(sum > sumMAX) {
            sumMAX = sum;
        }
    }
    printf("The maximum sum of a row is: %d\n", sumMAX);
    return 0;
}