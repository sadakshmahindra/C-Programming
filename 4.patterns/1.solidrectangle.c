#include <stdio.h> // Includes the standard input/output library.

int main() { // The main function where the program starts.
    int n, m; // Declares two integer variables, 'n' and 'm'.
    printf("Enter the number of reqired lines: "); // Asks the user for the number that will control the columns.
    scanf("%d", &n); // Reads the user's input into 'n'.
    printf("Enter the number if stars in each line: "); // Asks the user for the number that will control the rows.
    scanf("%d", &m); // Reads the user's input into 'm'.
    
    // The outer loop controls the number of rows (lines). It will run 'm' times.
    for(int j = 1; j <= m; j++){
        // The inner loop controls the number of columns (stars per line). It will run 'n' times.
        for (int i = 1; i <= n; i++){
            printf("*"); // Prints a single star without moving to the next line.
        }
        printf("\n"); // After the inner loop prints all the stars for a line, this moves the cursor to the next line.
    }
    return 0; // Indicates that the program finished successfully.
}
